/****************************************************************************
 *
 *   avicap.h
 * 
 *   Main include file.
 *
 *   Microsoft Video for Windows Sample Capture Class
 *
 *   Copyright (c) 1992 - 1994 Microsoft Corporation.  All Rights Reserved.
 *
 *    You have a royalty-free right to use, modify, reproduce and 
 *    distribute the Sample Files (and/or any modified version) in 
 *    any way you find useful, provided that you agree that 
 *    Microsoft has no warranty obligations or liability for any 
 *    Sample Application Files which are modified. 
 *
 ***************************************************************************/

#ifndef _INC_AVICAP
#define _INC_AVICAP

#ifndef VFWAPI
#ifdef WIN32
    #define VFWAPI  _stdcall
    #define VFWAPIV _stdcall
#else
    #define VFWAPI  FAR PASCAL
    #define VFWAPIV FAR CDECL
#endif
#endif
      
#ifdef __cplusplus
#define AVICapSM ::SendMessage  /* SendMessage in C++*/
#else
#define AVICapSM SendMessage    /* SendMessage in C */
#endif  /* __cplusplus */

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

#ifndef RC_INVOKED
#pragma pack(1)         /* Assume byte packing throughout */
#endif  /* RC_INVOKED */

#ifndef RC_INVOKED

// ------------------------------------------------------------------
//  Window Messages  WM_CAP... which can be sent to an AVICAP window
// ------------------------------------------------------------------

// Defines start of the message range
#define WM_CAP_START                    WM_USER

#define WM_CAP_GET_CAPSTREAMPTR         (WM_CAP_START+  1)

#define WM_CAP_SET_CALLBACK_ERROR       (WM_CAP_START+  2)
#define WM_CAP_SET_CALLBACK_STATUS      (WM_CAP_START+  3)
#define WM_CAP_SET_CALLBACK_YIELD       (WM_CAP_START+  4)
#define WM_CAP_SET_CALLBACK_FRAME       (WM_CAP_START+  5)
#define WM_CAP_SET_CALLBACK_VIDEOSTREAM (WM_CAP_START+  6)
#define WM_CAP_SET_CALLBACK_WAVESTREAM  (WM_CAP_START+  7)
#define WM_CAP_GET_USER_DATA            (WM_CAP_START+  8)
#define WM_CAP_SET_USER_DATA            (WM_CAP_START+  9)
    
#define WM_CAP_DRIVER_CONNECT           (WM_CAP_START+  10)
#define WM_CAP_DRIVER_DISCONNECT        (WM_CAP_START+  11)
#define WM_CAP_DRIVER_GET_NAME          (WM_CAP_START+  12) 
#define WM_CAP_DRIVER_GET_VERSION       (WM_CAP_START+  13) 
#define WM_CAP_DRIVER_GET_CAPS          (WM_CAP_START+  14) 

#define WM_CAP_FILE_SET_CAPTURE_FILE    (WM_CAP_START+  20)
#define WM_CAP_FILE_GET_CAPTURE_FILE    (WM_CAP_START+  21)
#define WM_CAP_FILE_ALLOCATE            (WM_CAP_START+  22)
#define WM_CAP_FILE_SAVEAS              (WM_CAP_START+  23)
#define WM_CAP_FILE_SET_INFOCHUNK       (WM_CAP_START+  24)
#define WM_CAP_FILE_SAVEDIB             (WM_CAP_START+  25)

#define WM_CAP_EDIT_COPY                (WM_CAP_START+  30)

#define WM_CAP_SET_AUDIOFORMAT          (WM_CAP_START+  35) 
#define WM_CAP_GET_AUDIOFORMAT          (WM_CAP_START+  36)

#define WM_CAP_DLG_VIDEOFORMAT          (WM_CAP_START+  41)
#define WM_CAP_DLG_VIDEOSOURCE          (WM_CAP_START+  42)
#define WM_CAP_DLG_VIDEODISPLAY         (WM_CAP_START+  43)
#define WM_CAP_GET_VIDEOFORMAT          (WM_CAP_START+  44)
#define WM_CAP_SET_VIDEOFORMAT          (WM_CAP_START+  45)
#define WM_CAP_DLG_VIDEOCOMPRESSION     (WM_CAP_START+  46)

#define WM_CAP_SET_PREVIEW              (WM_CAP_START+  50)
#define WM_CAP_SET_OVERLAY              (WM_CAP_START+  51)
#define WM_CAP_SET_PREVIEWRATE          (WM_CAP_START+  52)
#define WM_CAP_SET_SCALE                (WM_CAP_START+  53)
#define WM_CAP_GET_STATUS               (WM_CAP_START+  54)
#define WM_CAP_SET_SCROLL               (WM_CAP_START+  55)

#define WM_CAP_GRAB_FRAME               (WM_CAP_START+  60)
#define WM_CAP_GRAB_FRAME_NOSTOP        (WM_CAP_START+  61)

#define WM_CAP_SEQUENCE                 (WM_CAP_START+  62)
#define WM_CAP_SEQUENCE_NOFILE          (WM_CAP_START+  63)
#define WM_CAP_SET_SEQUENCE_SETUP       (WM_CAP_START+  64)
#define WM_CAP_GET_SEQUENCE_SETUP       (WM_CAP_START+  65)
#define WM_CAP_SET_MCI_DEVICE           (WM_CAP_START+  66)
#define WM_CAP_GET_MCI_DEVICE           (WM_CAP_START+  67)
#define WM_CAP_STOP                     (WM_CAP_START+  68)
#define WM_CAP_ABORT                    (WM_CAP_START+  69)

#define WM_CAP_SINGLE_FRAME_OPEN        (WM_CAP_START+  70) 
#define WM_CAP_SINGLE_FRAME_CLOSE       (WM_CAP_START+  71) 
#define WM_CAP_SINGLE_FRAME             (WM_CAP_START+  72) 

#define WM_CAP_PAL_OPEN                 (WM_CAP_START+  80) 
#define WM_CAP_PAL_SAVE                 (WM_CAP_START+  81) 
#define WM_CAP_PAL_PASTE                (WM_CAP_START+  82)
#define WM_CAP_PAL_AUTOCREATE           (WM_CAP_START+  83)
#define WM_CAP_PAL_MANUALCREATE         (WM_CAP_START+  84)

// Following added post VFW 1.1
#define WM_CAP_SET_CALLBACK_CAPCONTROL  (WM_CAP_START+  85)

// Defines end of the message range
#define WM_CAP_END                      WM_CAP_SET_CALLBACK_CAPCONTROL
                                        
// ------------------------------------------------------------------
//  Message crackers for above
// ------------------------------------------------------------------

#define capSetCallbackOnError(hwnd, fpProc)        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_ERROR, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnStatus(hwnd, fpProc)       ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_STATUS, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnYield(hwnd, fpProc)        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_YIELD, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnFrame(hwnd, fpProc)        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_FRAME, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnVideoStream(hwnd, fpProc)  ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_VIDEOSTREAM, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnWaveStream(hwnd, fpProc)   ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_WAVESTREAM, 0, (LPARAM)(LPVOID)(fpProc)))
#define capSetCallbackOnCapControl(hwnd, fpProc)   ((BOOL)AVICapSM(hwnd, WM_CAP_SET_CALLBACK_CAPCONTROL, 0, (LPARAM)(LPVOID)(fpProc)))

#define capSetUserData(hwnd, lUser)                ((BOOL)AVICapSM(hwnd, WM_CAP_SET_USER_DATA, 0, (LPARAM)lUser))
#define capGetUserData(hwnd)                       (AVICapSM(hwnd, WM_CAP_GET_USER_DATA, 0, 0))

#define capDriverConnect(hwnd, i)                  ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_CONNECT, (WPARAM)(i), 0L))
#define capDriverDisconnect(hwnd)                  ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_DISCONNECT, (WPARAM)0, 0L))
#define capDriverGetName(hwnd, szName, wSize)      ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_GET_NAME, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capDriverGetVersion(hwnd, szVer, wSize)    ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_GET_VERSION, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPSTR)(szVer)))
#define capDriverGetCaps(hwnd, s, wSize)           ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_GET_CAPS, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPCAPDRIVERCAPS)(s)))

#define capFileSetCaptureFile(hwnd, szName)        ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SET_CAPTURE_FILE, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capFileGetCaptureFile(hwnd, szName, wSize) ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_GET_CAPTURE_FILE, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capFileAlloc(hwnd, dwSize)                 ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_ALLOCATE, 0, (LPARAM)(DWORD)(dwSize)))
#define capFileSaveAs(hwnd, szName)                ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SAVEAS, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capFileSetInfoChunk(hwnd, lpInfoChunk)     ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SET_INFOCHUNK, (WPARAM)0, (LPARAM)(LPCAPINFOCHUNK)(lpInfoChunk)))
#define capFileSaveDIB(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SAVEDIB, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))

#define capEditCopy(hwnd)                          ((BOOL)AVICapSM(hwnd, WM_CAP_EDIT_COPY, 0, 0L))

#define capSetAudioFormat(hwnd, s, wSize)          ((BOOL)AVICapSM(hwnd, WM_CAP_SET_AUDIOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPWAVEFORMATEX)(s)))
#define capGetAudioFormat(hwnd, s, wSize)          ((DWORD)AVICapSM(hwnd, WM_CAP_GET_AUDIOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPWAVEFORMATEX)(s)))
#define capGetAudioFormatSize(hwnd)                ((DWORD)AVICapSM(hwnd, WM_CAP_GET_AUDIOFORMAT, (WPARAM)0, (LPARAM) NULL))

#define capDlgVideoFormat(hwnd)                    ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOFORMAT, 0, 0L))
#define capDlgVideoSource(hwnd)                    ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOSOURCE, 0, 0L))
#define capDlgVideoDisplay(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEODISPLAY, 0, 0L))
#define capDlgVideoCompression(hwnd)               ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOCOMPRESSION, 0, 0L))

#define capGetVideoFormat(hwnd, s, wSize)          ((DWORD)AVICapSM(hwnd, WM_CAP_GET_VIDEOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(s)))
#define capGetVideoFormatSize(hwnd)                ((DWORD)AVICapSM(hwnd, WM_CAP_GET_VIDEOFORMAT, 0, NULL))
#define capSetVideoFormat(hwnd, s, wSize)          ((BOOL)AVICapSM(hwnd, WM_CAP_SET_VIDEOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(s)))

#define capPreview(hwnd, f)                        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_PREVIEW, (WPARAM)(BOOL)(f), 0L))
#define capPreviewRate(hwnd, wMS)                  ((BOOL)AVICapSM(hwnd, WM_CAP_SET_PREVIEWRATE, (WPARAM)(wMS), 0))
#define capOverlay(hwnd, f)                        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_OVERLAY, (WPARAM)(BOOL)(f), 0L))
#define capPreviewScale(hwnd, f)                   ((BOOL)AVICapSM(hwnd, WM_CAP_SET_SCALE, (WPARAM)(BOOL)f, 0L))
#define capGetStatus(hwnd, s, wSize)               ((BOOL)AVICapSM(hwnd, WM_CAP_GET_STATUS, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPCAPSTATUS)(s)))
#define capSetScrollPos(hwnd, lpP)                 ((BOOL)AVICapSM(hwnd, WM_CAP_SET_SCROLL, (WPARAM)0, (LPARAM)(LPPOINT)(lpP)))

#define capGrabFrame(hwnd)                         ((BOOL)AVICapSM(hwnd, WM_CAP_GRAB_FRAME, (WPARAM)0, (LPARAM)0L))
#define capGrabFrameNoStop(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_GRAB_FRAME_NOSTOP, (WPARAM)0, (LPARAM)0L))

#define capCaptureSequence(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_SEQUENCE, (WPARAM)0, (LPARAM)0L))
#define capCaptureSequenceNoFile(hwnd)             ((BOOL)AVICapSM(hwnd, WM_CAP_SEQUENCE_NOFILE, (WPARAM)0, (LPARAM)0L))
#define capCaptureStop(hwnd)                       ((BOOL)AVICapSM(hwnd, WM_CAP_STOP, (WPARAM)0, (LPARAM)0L))
#define capCaptureAbort(hwnd)                      ((BOOL)AVICapSM(hwnd, WM_CAP_ABORT, (WPARAM)0, (LPARAM)0L))

#define capCaptureSingleFrameOpen(hwnd)            ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME_OPEN, (WPARAM)0, (LPARAM)0L))
#define capCaptureSingleFrameClose(hwnd)           ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME_CLOSE, (WPARAM)0, (LPARAM)0L))
#define capCaptureSingleFrame(hwnd)                ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME, (WPARAM)0, (LPARAM)0L))

#define capCaptureGetSetup(hwnd, s, wSize)         ((BOOL)AVICapSM(hwnd, WM_CAP_GET_SEQUENCE_SETUP, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPCAPTUREPARMS)(s)))
#define capCaptureSetSetup(hwnd, s, wSize)         ((BOOL)AVICapSM(hwnd, WM_CAP_SET_SEQUENCE_SETUP, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPCAPTUREPARMS)(s)))

#define capSetMCIDeviceName(hwnd, szName)          ((BOOL)AVICapSM(hwnd, WM_CAP_SET_MCI_DEVICE, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capGetMCIDeviceName(hwnd, szName, wSize)   ((BOOL)AVICapSM(hwnd, WM_CAP_GET_MCI_DEVICE, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPSTR)(szName)))

#define capPaletteOpen(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_OPEN, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capPaletteSave(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_SAVE, 0, (LPARAM)(LPVOID)(LPSTR)(szName)))
#define capPalettePaste(hwnd)                      ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_PASTE, (WPARAM) 0, (LPARAM)0L))
#define capPaletteAuto(hwnd, iFrames, iColors)     ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_AUTOCREATE, (WPARAM)(iFrames), (LPARAM)(DWORD)(iColors)))
#define capPaletteManual(hwnd, fGrab, iColors)     ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_MANUALCREATE, (WPARAM)(fGrab), (LPARAM)(DWORD)(iColors)))

// ------------------------------------------------------------------
//  Structures 
// ------------------------------------------------------------------

typedef struct tagCapDriverCaps {
    WORD        wDeviceIndex;               // Driver index in system.ini
    BOOL        fHasOverlay;                // Can device overlay?
    BOOL        fHasDlgVideoSource;         // Has Video source dlg?
    BOOL        fHasDlgVideoFormat;         // Has Format dlg?
    BOOL        fHasDlgVideoDisplay;        // Has External out dlg?
    BOOL        fCaptureInitialized;        // Driver ready to capture?
    BOOL        fDriverSuppliesPalettes;    // Can driver make palettes?
    HVIDEO      hVideoIn;                   // Driver In channel
    HVIDEO      hVideoOut;                  // Driver Out channel
    HVIDEO      hVideoExtIn;                // Driver Ext In channel
    HVIDEO      hVideoExtOut;               // Driver Ext Out channel
} CAPDRIVERCAPS, *PCAPDRIVERCAPS, FAR *LPCAPDRIVERCAPS;

typedef struct tagCapStatus {
    UINT        uiImageWidth;               // Width of the image
    UINT        uiImageHeight;              // Height of the image
    BOOL        fLiveWindow;                // Now Previewing video?
    BOOL        fOverlayWindow;             // Now Overlaying video?
    BOOL        fScale;                     // Scale image to client?
    POINT       ptScroll;                   // Scroll position
    BOOL        fUsingDefaultPalette;       // Using default driver palette?
    BOOL        fAudioHardware;             // Audio hardware present?
    BOOL        fCapFileExists;             // Does capture file exist?
    DWORD       dwCurrentVideoFrame;        // # of video frames cap'td
    DWORD       dwCurrentVideoFramesDropped;// # of video frames dropped
    DWORD       dwCurrentWaveSamples;       // # of wave samples cap'td
    DWORD       dwCurrentTimeElapsedMS;     // Elapsed capture duration
    HPALETTE    hPalCurrent;                // Current palette in use
    BOOL        fCapturingNow;              // Capture in progress?
    DWORD       dwReturn;                   // Error value after any operation
    WORD        wNumVideoAllocated;         // Actual number of video buffers
    WORD        wNumAudioAllocated;         // Actual number of audio buffers
} CAPSTATUS, *PCAPSTATUS, FAR *LPCAPSTATUS;

                                            // Default values in parenthesis
typedef struct tagCaptureParms {
    DWORD       dwRequestMicroSecPerFrame;  // Requested capture rate
    BOOL        fMakeUserHitOKToCapture;    // Show "Hit OK to cap" dlg?
    WORD        wPercentDropForError;       // Give error msg if > (10%)
    BOOL        fYield;                     // Capture via background task?
    DWORD       dwIndexSize;                // Max index size in frames (32K)
    WORD        wChunkGranularity;          // Junk chunk granularity (2K)
    BOOL        fUsingDOSMemory;            // Use DOS buffers?
    WORD        wNumVideoRequested;         // # video buffers, If 0, autocalc
    BOOL        fCaptureAudio;              // Capture audio?
    WORD        wNumAudioRequested;         // # audio buffers, If 0, autocalc
    WORD        vKeyAbort;                  // Virtual key causing abort
    BOOL        fAbortLeftMouse;            // Abort on left mouse?
    BOOL        fAbortRightMouse;           // Abort on right mouse?
    BOOL        fLimitEnabled;              // Use wTimeLimit?
    WORD        wTimeLimit;                 // Seconds to capture
    BOOL        fMCIControl;                // Use MCI video source?
    BOOL        fStepMCIDevice;             // Step MCI device?
    DWORD       dwMCIStartTime;             // Time to start in MS
    DWORD       dwMCIStopTime;              // Time to stop in MS
    BOOL        fStepCaptureAt2x;           // Perform spatial averaging 2x
    WORD        wStepCaptureAverageFrames;  // Temporal average n Frames
    DWORD       dwAudioBufferSize;          // Size of audio bufs (0 = default)
    BOOL        fDisableWriteCache;         // Attempt to disable write cache
} CAPTUREPARMS, *PCAPTUREPARMS, FAR *LPCAPTUREPARMS;

typedef struct tagCapInfoChunk {
    FOURCC      fccInfoID;                  // Chunk ID, "ICOP" for copyright
    LPVOID      lpData;                     // pointer to data
    LONG        cbData;                     // size of lpData
} CAPINFOCHUNK, *PCAPINFOCHUNK, FAR *LPCAPINFOCHUNK;


// ------------------------------------------------------------------
//  Callback Definitions
// ------------------------------------------------------------------

typedef LRESULT (CALLBACK* CAPYIELDCALLBACK)  (HWND hWnd);
typedef LRESULT (CALLBACK* CAPSTATUSCALLBACK) (HWND hWnd, int nID, LPCSTR lpsz);
typedef LRESULT (CALLBACK* CAPERRORCALLBACK)  (HWND hWnd, int nID, LPCSTR lpsz);
typedef LRESULT (CALLBACK* CAPVIDEOCALLBACK)  (HWND hWnd, LPVIDEOHDR lpVHdr);
typedef LRESULT (CALLBACK* CAPWAVECALLBACK)   (HWND hWnd, LPWAVEHDR lpWHdr);
typedef LRESULT (CALLBACK* CAPCONTROLCALLBACK)(HWND hWnd, int nState);

// ------------------------------------------------------------------
//  CapControlCallback states
// ------------------------------------------------------------------
#define CONTROLCALLBACK_PREROLL         1 /* Waiting to start capture */
#define CONTROLCALLBACK_CAPTURING       2 /* Now capturing */

// ------------------------------------------------------------------
//  The only exported functions from AVICAP.DLL
// ------------------------------------------------------------------

HWND VFWAPI capCreateCaptureWindow (
        LPCSTR lpszWindowName, 
        DWORD dwStyle,
        int x, int y, int nWidth, int nHeight,
        HWND hwndParent, int nID);

BOOL VFWAPI capGetDriverDescription (WORD wDriverIndex,
        LPSTR lpszName, int cbName,
        LPSTR lpszVer, int cbVer);

#endif  /* RC_INVOKED */

// ------------------------------------------------------------------
// New Information chunk IDs
// ------------------------------------------------------------------
#define infotypeDIGITIZATION_TIME  mmioFOURCC ('I','D','I','T')
#define infotypeSMPTE_TIME         mmioFOURCC ('I','S','M','P')

// ------------------------------------------------------------------
// String IDs from status and error callbacks
// ------------------------------------------------------------------

#define IDS_CAP_BEGIN               300  /* "Capture Start" */
#define IDS_CAP_END                 301  /* "Capture End" */

#define IDS_CAP_INFO                401  /* "%s" */
#define IDS_CAP_OUTOFMEM            402  /* "Out of memory" */
#define IDS_CAP_FILEEXISTS          403  /* "File '%s' exists -- overwrite it?" */
#define IDS_CAP_ERRORPALOPEN        404  /* "Error opening palette '%s'" */
#define IDS_CAP_ERRORPALSAVE        405  /* "Error saving palette '%s'" */
#define IDS_CAP_ERRORDIBSAVE        406  /* "Error saving frame '%s'" */
#define IDS_CAP_DEFAVIEXT           407  /* "avi" */
#define IDS_CAP_DEFPALEXT           408  /* "pal" */
#define IDS_CAP_CANTOPEN            409  /* "Cannot open '%s'" */
#define IDS_CAP_SEQ_MSGSTART        410  /* "Select OK to start capture\nof video sequence\nto %s." */
#define IDS_CAP_SEQ_MSGSTOP         411  /* "Hit ESCAPE or click to end capture" */
                
#define IDS_CAP_VIDEDITERR          412  /* "An error occurred while trying to run VidEdit." */
#define IDS_CAP_READONLYFILE        413  /* "The file '%s' is a read-only file." */
#define IDS_CAP_WRITEERROR          414  /* "Unable to write to file '%s'.\nDisk may be full." */
#define IDS_CAP_NODISKSPACE         415  /* "There is no space to create a capture file on the specified device." */
#define IDS_CAP_SETFILESIZE         416  /* "Set File Size" */
#define IDS_CAP_SAVEASPERCENT       417  /* "SaveAs: %2ld%%  Hit Escape to abort." */
                
#define IDS_CAP_DRIVER_ERROR        418  /* Driver specific error message */

#define IDS_CAP_WAVE_OPEN_ERROR     419  /* "Error: Cannot open the wave input device.\nCheck sample size, frequency, and channels." */
#define IDS_CAP_WAVE_ALLOC_ERROR    420  /* "Error: Out of memory for wave buffers." */
#define IDS_CAP_WAVE_PREPARE_ERROR  421  /* "Error: Cannot prepare wave buffers." */
#define IDS_CAP_WAVE_ADD_ERROR      422  /* "Error: Cannot add wave buffers." */
#define IDS_CAP_WAVE_SIZE_ERROR     423  /* "Error: Bad wave size." */
                
#define IDS_CAP_VIDEO_OPEN_ERROR    424  /* "Error: Cannot open the video input device." */
#define IDS_CAP_VIDEO_ALLOC_ERROR   425  /* "Error: Out of memory for video buffers." */
#define IDS_CAP_VIDEO_PREPARE_ERROR 426  /* "Error: Cannot prepare video buffers." */
#define IDS_CAP_VIDEO_ADD_ERROR     427  /* "Error: Cannot add video buffers." */
#define IDS_CAP_VIDEO_SIZE_ERROR    428  /* "Error: Bad video size." */
                
#define IDS_CAP_FILE_OPEN_ERROR     429  /* "Error: Cannot open capture file." */
#define IDS_CAP_FILE_WRITE_ERROR    430  /* "Error: Cannot write to capture file.  Disk may be full." */
#define IDS_CAP_RECORDING_ERROR     431  /* "Error: Cannot write to capture file.  Data rate too high or disk full." */
#define IDS_CAP_RECORDING_ERROR2    432  /* "Error while recording" */
#define IDS_CAP_AVI_INIT_ERROR      433  /* "Error: Unable to initialize for capture." */
#define IDS_CAP_NO_FRAME_CAP_ERROR  434  /* "Warning: No frames captured.\nConfirm that vertical sync interrupts\nare configured and enabled." */
#define IDS_CAP_NO_PALETTE_WARN     435  /* "Warning: Using default palette." */
#define IDS_CAP_MCI_CONTROL_ERROR   436  /* "Error: Unable to access MCI device." */
#define IDS_CAP_MCI_CANT_STEP_ERROR 437  /* "Error: Unable to step MCI device." */
#define IDS_CAP_NO_AUDIO_CAP_ERROR  438  /* "Error: No audio data captured.\nCheck audio card settings." */
#define IDS_CAP_AVI_DRAWDIB_ERROR   439  /* "Error: Unable to draw this data format." */
#define IDS_CAP_COMPRESSOR_ERROR    440  /* "Error: Unable to initialize compressor." */
#define IDS_CAP_AUDIO_DROP_ERROR    441  /* "Error: Audio data was lost during capture, reduce capture rate." */
                
/* status string IDs */
#define IDS_CAP_STAT_LIVE_MODE      500  /* "Live window" */
#define IDS_CAP_STAT_OVERLAY_MODE   501  /* "Overlay window" */
#define IDS_CAP_STAT_CAP_INIT       502  /* "Setting up for capture - Please wait" */
#define IDS_CAP_STAT_CAP_FINI       503  /* "Finished capture, now writing frame %ld" */
#define IDS_CAP_STAT_PALETTE_BUILD  504  /* "Building palette map" */
#define IDS_CAP_STAT_OPTPAL_BUILD   505  /* "Computing optimal palette" */
#define IDS_CAP_STAT_I_FRAMES       506  /* "%d frames" */
#define IDS_CAP_STAT_L_FRAMES       507  /* "%ld frames" */
#define IDS_CAP_STAT_CAP_L_FRAMES   508  /* "Captured %ld frames" */
#define IDS_CAP_STAT_CAP_AUDIO      509  /* "Capturing audio" */
#define IDS_CAP_STAT_VIDEOCURRENT   510  /* "Captured %ld frames (%ld dropped) %d.%03d sec." */
#define IDS_CAP_STAT_VIDEOAUDIO     511  /* "Captured %d.%03d sec.  %ld frames (%ld dropped) (%d.%03d fps).  %ld audio bytes (%d,%03d sps)" */
#define IDS_CAP_STAT_VIDEOONLY      512  /* "Captured %d.%03d sec.  %ld frames (%ld dropped) (%d.%03d fps)" */
#define IDS_CAP_STAT_FRAMESDROPPED  513  /* "Dropped %ld of %ld frames (%d.%02d%%) during capture." */
#ifndef RC_INVOKED
#pragma pack()          /* Revert to default packing */
#endif  /* RC_INVOKED */

#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif    /* __cplusplus */

#endif /* INC_AVICAP */



