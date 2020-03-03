//      TITLE("Interval and Profile Clock Interrupts")
//++
//
// Copyright (c) 1990  Microsoft Corporation
//
// Module Name:
//
//    xxclock.s
//
// Abstract:
//
//    This module implements the code necessary to field and process the
//    interval and profile clock interrupts.
//
// Author:
//
//    David N. Cutler (davec) 27-Mar-1990
//
// Environment:
//
//    Kernel mode only.
//
// Revision History:
//
//--

#include "ksmips.h"

//
// Define external variables that can be addressed using GP.
//

        .extern KeMaximumIncrement      4
        .extern KeTickCount             3 * 4
        .extern KeTimeAdjustment        4
        .extern KiAdjustDpcThreshold    4
        .extern KiIdealDpcRate          4
        .extern KiMaximumDpcQueueDepth  4
        .extern KiProfileListHead       2 * 4
        .extern KiProfileLock           4
        .extern KiTickOffset            4

        SBTTL("Update System Time")
//++
//
// VOID
// KeUpdateSystemTime (
//    IN PKTRAP_FRAME TrapFrame,
//    IN ULONG TimeIncrement
//    )
//
// Routine Description:
//
//    This routine is entered as the result of an interrupt generated by the
//    interval timer. Its function is to update the system time and check to
//    determine if a timer has expired.
//
//    N.B. This routine is executed on a single processor in a multiprocess
//       system. The remainder of the processors only execute the quantum end
//       and runtime update code.
//
// Arguments:
//
//    TrapFrame (a0) - Supplies a pointer to a trap frame.
//
//    TimeIncrement (a1) - Supplies the time increment in 100ns units.
//
// Return Value:
//
//    None.
//
//--

        LEAF_ENTRY(KeUpdateSystemTime)

//
// Update the interrupt time.
//

        ld      t8,KiPcr2 + Pc2InterruptTime // get interrupt time
        daddu   t8,t8,a1                // add time increment value
        sd      t8,KiPcr2 + Pc2InterruptTime // store interrupt time

//
// Update tick offset and check for "system clock" tick.
//

        lw      a2,KiTickOffset         // get tick offset value
        sub     a2,a2,a1                // subtract time increment
        ld      v0,KeTickCount          // get low and high 1 tick count
        la      t0,KiTimerTableListHead // get base address of timer table
        sw      a2,KiTickOffset         // store tick offset value
        bgtz    a2,10f                  // if gtz, tick not completed
        lw      a3,KeMaximumIncrement   // get maximum increment value

//
// Update system time.
//

        lw      t1,KeTimeAdjustment     // get time adjustment value
        ld      t2,KiPcr2 + Pc2SystemTime // get low and high 1 system time
        daddu   t2,t2,t1                // add time increment value
        sd      t2,KiPcr2 + Pc2SystemTime // store low nad high 1 system time

//
// Update the tick count.
//
// N.B. The tick count is updated in a very strict manner so that an
//      interlock does not have to be used in an MP system. This is
//      required for backward compatibility with old drivers and file
//      systems.
//

        daddu   t2,v0,1                 // increment tick count
        dsrl    t3,t2,32                // get high half of tick count
        sw      t2,KiPcr2 + Pc2TickCountLow(zero) // store low tick count

        .set    noreorder
        .set    noat
        sw      t3,KeTickCount + 8      // store high 2 tick count
        sd      t2,KeTickCount          // store low and high 1 tick count
        .set    at
        .set    reorder

//
// Compute next tick offset value.
//

        addu    a3,a3,a2                // add maximum increment to residue
        sw      a3,KiTickOffset         // store tick offset value

//
// Check to determine if a timer has expired at the current hand value.
//

        and     t1,v0,TIMER_TABLE_SIZE - 1  // reduce to table table index
        sll     t2,t1,3                 // compute timer table listhead address
        addu    t2,t2,t0                //
        lw      t3,LsFlink(t2)          // get address of first timer in list
        beq     t2,t3,5f                // if eq, no timer active

//
// Get the expiration time from the timer object.
//
// N.B. The offset to the timer list entry must be subtracted out of the
//      displacement calculation.
//

        ld      t4,TiDueTime - TiTimerListEntry(t3) // get timer due time
        sltu    t9,t8,t4                // check if timer is due
        beq     zero,t9,20f             // if eq, timer has expired

//
// Check to determine if a timer has expired at the next hand value.
//

5:      addu    v0,v0,1                 // advance hand value to next entry
10:     and     t1,v0,TIMER_TABLE_SIZE - 1  // reduce to table table index
        sll     t2,t1,3                 // compute timer table listhead address
        addu    t2,t2,t0                //
        lw      t3,LsFlink(t2)          // get address of first timer in list
        beq     t2,t3,40f               // if eq, no timer active

//
// Get the expiration time from the timer object.
//
// N.B. The offset to the timer list entry must be subtracted out of the
//      displacement calculation.
//

        ld      t4,TiDueTime - TiTimerListEntry(t3) // get timer due time
        sltu    t9,t8,t4                // check if timer is due
        bne     zero,t9,40f             // if ne, timer has not expired

//
// Put timer expiration DPC in the system DPC list and initiate a dispatch
// interrupt on the current processor.
//

20:     la      t0,KiTimerExpireDpc     // get expiration DPC address
        lw      a1,KiPcr + PcPrcb(zero) // get address of PRCB

        DISABLE_INTERRUPTS(t2)          // disable interrupts

        addu    t3,a1,PbDpcListHead     // compute DPC listhead address
        addu    v1,a1,PbDpcLock         // compute DPC lock address

#if !defined(NT_UP)

30:     ll      t4,0(v1)                // get current lock value
        move    t5,t3                   // set lock ownership value
        bne     zero,t4,30b             // if ne, spin lock owned
        sc      t5,0(v1)                // set spin lock owned
        beq     zero,t5,30b             // if eq, store conditional failed

#endif

        lw      t4,DpLock(t0)           // get DPC inserted state
        bne     zero,t4,35f             // if ne, DPC entry already inserted
        lw      t4,LsBlink(t3)          // get address of last entry in list
        sw      v1,DpLock(t0)           // set DPC inserted state
        sw      v0,DpSystemArgument1(t0) // set timer table hand value
        addu    t0,t0,DpDpcListEntry    // compute address of DPC list entry
        sw      t0,LsBlink(t3)          // set address of new last entry
        sw      t0,LsFlink(t4)          // set next link in old last entry
        sw      t3,LsFlink(t0)          // set address of next entry
        sw      t4,LsBlink(t0)          // set address of previous entry
        lw      t5,PbDpcQueueDepth(a1)  // increment DPC queue depth
        addu    t5,t5,1                 //
        sw      t5,PbDpcQueueDepth(a1)  //

        .set    noreorder
        .set    noat
        mfc0    t3,cause                // get exception cause register
        or      t3,t3,DISPATCH_INTERRUPT // merge dispatch interrut request
        mtc0    t3,cause                // set exception cause register
        .set    at
        .set    reorder

35:                                     //

#if !defined(NT_UP)

        sw      zero,0(v1)              // set spin lock not owned

#endif

        ENABLE_INTERRUPTS(t2)           // enable interrupts

40:     blez    a2,50f                  // if lez, full tick
        j       ra                      // return
50:     j       KeUpdateRunTime

        .end    KeUpdateSystemTime

        SBTTL("Update Thread and Process Runtime")
//++
//
// VOID
// KeUpdateRunTime (
//    IN PKTRAP_FRAME TrapFrame
//    )
//
// Routine Description:
//
//    This routine is entered as the result of an interrupt generated by the
//    interval timer. Its function is to update the runtime of the current
//    thread, update the runtime of the current thread's process, and decrement
//    the current thread's quantum.
//
//    N.B. This routine is executed on all processors in a multiprocess system.
//
// Arguments:
//
//    TrapFrame (a0) - Supplies a pointer to a trap frame.
//
// Return Value:
//
//    None.
//
//--

        LEAF_ENTRY(KeUpdateRunTime)

        lw      t0,KiPcr + PcCurrentThread(zero) // get current thread address
        lw      t2,ThApcState + AsProcess(t0) // get address of current process
        lw      t3,TrPsr(a0)            // get saved processor status
        lw      t5,KiPcr + PcPrcb(zero) // get current processor block address
        lw      t7,PbDpcRoutineActive(t5) // get DPC active flag
        and     t4,t3,0x1 << PSR_PMODE  // isolate previous processor mode
        bne     zero,t4,30f             // if ne, previous mode was user

//
// If a DPC is active, then increment the time spent executing DPC routines.
// Otherwise, if the old IRQL is greater than DPC level, then increment the
// time spent executing interrupt services routines. Otherwise, increment
// the time spent in kernel mode for the current thread.
//

        lbu     t6,TrOldIrql(a0)        // get previous IRQL
        subu    t6,t6,DISPATCH_LEVEL    // compare IRQL with DPC level
        bltz    t6,20f                  // if ltz, increment thread kernel time
        addu    t8,t5,PbInterruptTime   // compute interrupt time address
        bgtz    t6,10f                  // if gtz, increment interrupt time
        addu    t8,t5,PbDpcTime         // compute DPC time address
        beq     zero,t7,20f             // if eq, increment thread kernel time

//
// Update the time spend in DPC/interrupt processing.
//

10:     lw      t6,0(t8)                // get processor time
        addu    t6,t6,1                 // increment processor time
        sw      t6,0(t8)                // store processor time
        addu    t9,t5,PbKernelTime      // compute processor kernel time address
        b       50f                     //

//
// Update the time spent in kernel mode for the current thread.
//

20:     lw      t6,ThKernelTime(t0)     // get kernel time
        addu    t6,t6,1                 // increment kernel time
        sw      t6,ThKernelTime(t0)     // store kernel time
        addu    t2,t2,PrKernelTime      // compute process kernel time address
        addu    t9,t5,PbKernelTime      // compute processor kernel time address
        b       40f                     //

//
// Update the time spent in user mode for the current thread.
//

30:     lw      t6,ThUserTime(t0)       // get user time
        addu    t6,t6,1                 // increment user time
        sw      t6,ThUserTime(t0)       // store user time
        addu    t2,t2,PrUserTime        // compute process user time address
        addu    t9,t5,PbUserTime        // compute processor user time address

//
// Update the time spent in kernel/user mode for the current thread's process.
//
// N.B. The update of the process time must be synchronized across processors.
//

40:     ll      t6,0(t2)                // get process time
        addu    t6,t6,1                 // increment process time
        sc      t6,0(t2)                // store process time
        beq     zero,t6,40b             // if eq, store conditional failed

//
// Update the time spent in kernel/user mode for the current processor.
//

50:     lw      t6,0(t9)                // get processor time
        addu    t6,t6,1                 // increment processor time
        sw      t6,0(t9)                // store processor time

//
// Update the DPC request rate which is computed as the average between
// the previous rate and the current rate.
//

        lw      a0,PbDpcCount(t5)       // get current DPC count
        lw      a1,PbDpcLastCount(t5)   // get last DPC count
        lw      a2,PbDpcRequestRate(t5) // get last DPC request rate
        lw      a3,PbDpcQueueDepth(t5)  // get current DPC queue depth
        sw      a0,PbDpcLastCount(t5)   // set last DPC count
        subu    a0,a0,a1                // compute count during interval
        addu    a0,a0,a2                // compute sum of current and last
        srl     a0,a0,1                 // average current and last
        sw      a0,PbDpcRequestRate(t5) // set new DPC request rate

//
// If the current DPC queue depth is not zero, a DPC routine is not active,
// and a DPC interrupt has not been requested, then request a dispatch
// interrupt, decrement the maximum DPC queue depth, and reset the threshold
// counter if appropriate.
//

        lw      v0,PbDpcInterruptRequested(t5) // get DPC interrupt requested
        beq     zero,a3,60f             // if eq, DPC queue is empty
        or      v0,v0,t7                // merge DPC interrupt requested and active
        bne     zero,v0,60f             // if ne, DPC active or interrupt requested

        DISABLE_INTERRUPTS(a1)          // disable interrupt

        .set    noreorder
        .set    noat
        mfc0    a2,cause                // get exception cause register
        lw      v0,PbMaximumDpcQueueDepth(t5) // get maximum queue depth
        lw      v1,KiIdealDpcRate       // get ideal DPC rate
        or      a2,a2,DISPATCH_INTERRUPT // merge dispatch interrut request
        mtc0    a2,cause                // set exception cause register
        .set    at
        .set    reorder

        ENABLE_INTERRUPTS(a1)           // enable interrupts

        sltu    a0,a0,v1                // test if current rate less than ideal
        lw      a1,KiAdjustDpcThreshold // reset initial threshold counter
        sw      a1,PbAdjustDpcThreshold(t5) //
        beq     zero,a0,KiDecrementQuantum // if eq, rate greater or equal ideal
        subu    v0,v0,1                 // decrement maximum DPC queue depth
        beq     zero,v0,KiDecrementQuantum // if eq, current value is one
        sw      v0,PbMaximumDpcQueueDepth(t5) // set new maximum DPC queue depth
        b       KiDecrementQuantum      //

//
// The DPC queue is empty or a DPC routine is active or a DPC interrupt
// has been requested. Count down the adjustment threshold and if the
// count reaches zero, then increment the maximum DPC queue depth, but
// no above the initial value and reset the adjustment threshold value.
//

60:     lw      a0,PbAdjustDpcThreshold(t5) // get adjustment threshold counter
        lw      a1,PbMaximumDpcQueueDepth(t5) // get current maximum queue depth
        lw      a2,KiMaximumDpcQueueDepth // get initial maximum queue depth
        subu    a0,a0,1                 // decrement adjustment threshold counter
        sw      a0,PbAdjustDpcThreshold(t5) //
        bne     zero,a0,KiDecrementQuantum // if ne, adjustment counter not zero
        lw      a0,KiAdjustDpcThreshold //set new DPC threshold counter
        sw      a0,PbAdjustDpcThreshold(t5) //
        beq     a1,a2,KiDecrementQuantum // if eq, currently at maximum depth
        addu    a1,a1,1                 // increment current maximum queue depth
        sw      a1,PbMaximumDpcQueueDepth(t5) // set new maximum DPC queue depth

//
// Decrement current thread quantum and check to determine if a quantum end
// has occurred.
//

        ALTERNATE_ENTRY(KiDecrementQuantum)

        lb      t6,ThQuantum(t0)        // get current thread quantum
        sub     t6,t6,CLOCK_QUANTUM_DECREMENT // decrement current quantum
        sb      t6,ThQuantum(t0)        // store thread quantum
        bgtz    t6,60f                  // if gtz, quantum remaining

//
// Set quantum end flag and initiate a dispatch interrupt on the current
// processor.
//

        lw      t1,PbIdleThread(t5)     // get address of idle
        beq     t0,t1,60f               // if eq, idle thread
        sw      sp,KiPcr + PcQuantumEnd(zero) // set quantum end indicator

        DISABLE_INTERRUPTS(t0)          // disable interrupts

        .set    noreorder
        .set    noat
        mfc0    t1,cause                // get exception cause register
        or      t1,t1,DISPATCH_INTERRUPT // merge dispatch interrupt request
        mtc0    t1,cause                // set exception cause register
        nop                             // 1 cycle hazzard
        .set    at
        .set    reorder

        ENABLE_INTERRUPTS(t0)           // enable interrupts

60:     j       ra                      // return

        .end    KeUpdateRunTime


        SBTTL("Process Profile Interrupt")
//++
//
// VOID
// KeProfileInterruptWithSource (
//    IN PKTRAP_FRAME TrapFrame,
//    IN KPROFILE_SOURCE ProfileSource
//    )
//
// VOID
// KeProfileInterrupt (
//    IN PKTRAP_FRAME TrapFrame
//    )
//
// Routine Description:
//
//    This routine is entered as the result of an interrupt generated by the
//    profile timer. Its function is to update the profile information for
//    the currently active profile objects.
//
//    N.B. This routine is executed on all processors in a multiprocess system.
//
// Arguments:
//
//    TrapFrame (a0) - Supplies a pointer to a trap frame.
//
//    ProfileSource (a1) - Supplies the source of the profile interrupt
//              KeProfileInterrupt is an alternate entry for backwards
//              compatibility that sets the source to zero (ProfileTime)
//
// Return Value:
//
//    None.
//
//--

        .struct 0
        .space  4 * 4                   // argument save area
        .space  3 * 4                   //
PfRa:   .space  4                       // return address
ProfileFrameLength:                     // profile frame length

        NESTED_ENTRY(KeProfileInterrupt, ProfileFrameLength, zero)

        move    a1, zero                // set profile source to ProfileTime

        ALTERNATE_ENTRY(KeProfileInterruptWithSource)

        subu    sp,sp,ProfileFrameLength // allocate stack frame
        sw      ra,PfRa(sp)             // save return address

        PROLOGUE_END

#if !defined(NT_UP)

10:     ll      t0,KiProfileLock        // get current lock value
        move    t1,s0                   // set ownership value
        bne     zero,t0,10b             // if ne, spin lock owned
        sc      t1,KiProfileLock        // set spin lock owned
        beq     zero,t1,10b             // if eq, store conditional failed

#endif

        lw      a2,KiPcr + PcCurrentThread(zero) // get current thread address
        lw      a2,ThApcState + AsProcess(a2) // get address of current process
        addu    a2,a2,PrProfileListHead  // compute profile listhead address
        jal     KiProcessProfileList     // process the process profile list
        la      a2,KiProfileListHead     // get profile listhead address
        jal     KiProcessProfileList     // process the system profile list

#if !defined(NT_UP)

        sw      zero,KiProfileLock      // set spin lock not owned

#endif

        lw      ra,PfRa(sp)             // restore return address
        addu    sp,sp,ProfileFrameLength // deallocate stack frame
        j       ra                      // return

        .end    KeProfileInterrupt

        SBTTL("Process Profile List")
//++
//
// VOID
// KiProcessProfileList (
//    IN PKTRAP_FRAME TrapFrame,
//    IN KPROFILE_SOURCE Source,
//    IN PLIST_ENTRY ListHead
//    )
//
// Routine Description:
//
//    This routine is called to process a profile list.
//
// Arguments:
//
//    TrapFrame (a0) - Supplies a pointer to a trap frame.
//
//    Source (a1) - Supplies profile source to match
//
//    ListHead (a2) - Supplies a pointer to a profile list.
//
// Return Value:
//
//    None.
//
//--

        LEAF_ENTRY(KiProcessProfileList)

        lw      t8,LsFlink(a2)          // get address of next entry
        li      a3,0xfffffffc           // set bucket mask value
        beq     a2,t8,30f               // if eq, end of list
        lw      t0,TrFir(a0)            // get interrupt PC address
        lw      t6,KiPcr + PcSetMember(zero) // get current processor member

//
// Scan profile list and increment profile buckets as appropriate.
//

10:     lw      t1,PfRangeBase - PfProfileListEntry(t8) // get base of range
        lw      t2,PfRangeLimit - PfProfileListEntry(t8) // get limit of range
        lhu     t3,PfSource - PfProfileListEntry(t8) // get source
        lhu     t4,PfAffinity - PfProfileListEntry(t8) // get affinity
        bne     t3,a1,20f               // if ne, source mismatch
        sltu    v0,t0,t1                // check against range base
        sltu    v1,t0,t2                // check against range limit
        and     t5,t6,t4                // check against processor
        bne     zero,v0,20f             // if ne, less that range base
        beq     zero,v1,20f             // if eq, not less that range limit
        beq     zero,t5,20f             // if eq, affinity mismatch
        subu    t1,t0,t1                // compute offset in range
        lw      t2,PfBucketShift - PfProfileListEntry(t8) // get shift count
        lw      v0,PfBuffer - PfProfileListEntry(t8) // get profile buffer address
        srl     v1,t1,t2                // compute bucket offset
        and     v1,v1,a3                // clear low order offset bits
        addu    v1,v1,v0                // compute bucket address
        lw      v0,0(v1)                // increment profile bucket
        addu    v0,v0,1                 //
        sw      v0,0(v1)                //
20:     lw      t8,LsFlink(t8)          // get address of next entry
        bne     a2,t8,10b               // if ne, more entries in profile list
30:     j       ra                      // return

        .end    KiProcessProfileList
