//
// CLSIDs of shell object classes. They don't have to be in a public header
// unless we decided to let ISVs to create shell objects directly by calling
// OleCreateInstance with one of class IDs.
//
// NOTE: those that are commented out are ready to be used again...
//

DEFINE_GUID(CLSID_NetworkRoot,          0x953d732d, 0xab45, 0x11d2, 0x84, 0xe0, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);// {953D732D-AB45-11d2-84E0-00C04FA31A86}

DEFINE_GUID(GUID_SystemPidlChange,      0x210A4BA0, 0x3AEA, 0x1069, 0xA2,0xD9,0x08,0x00,0x2B,0x30,0x30,0x9D);//210A4BA0-3AEA-1069-A2D9-08002B30309D

// DEFINE_GUID(CLSID_,                  0x21444760, 0x3AEA, 0x1069, 0xA2,0xDA,0x08,0x00,0x2B,0x30,0x30,0x9D);//21444760-3AEA-1069-A2DA-08002B30309D
DEFINE_GUID(CLSID_ShellCopyHook,        0x217FC9C0, 0x3AEA, 0x1069, 0xA2,0xDB,0x08,0x00,0x2B,0x30,0x30,0x9D);//217FC9C0-3AEA-1069-A2DB-08002B30309D
DEFINE_GUID(CLSID_ShellFileDefExt,      0x21B22460, 0x3AEA, 0x1069, 0xA2,0xDC,0x08,0x00,0x2B,0x30,0x30,0x9D);//21B22460-3AEA-1069-A2DC-08002B30309D
DEFINE_GUID(CLSID_ShellDrvDefExt,       0x5F5295E0, 0x429F, 0x1069, 0xA2,0xE2,0x08,0x00,0x2B,0x30,0x30,0x9D);//5F5295E0-429F-1069-A2E2-08002B30309D
DEFINE_GUID(CLSID_ShellNetDefExt,       0x86422020, 0x42A0, 0x1069, 0xA2,0xE5,0x08,0x00,0x2B,0x30,0x30,0x9D);//86422020-42A0-1069-A2E5-08002B30309D
DEFINE_GUID(CLSID_CCommonShellExtInit,  0xA2AD3100, 0x3B84, 0x1069, 0xA2,0xDF,0x08,0x00,0x2B,0x30,0x30,0x9D);//A2AD3100-3B84-1069-A2DF-08002B30309D
DEFINE_GUID(CLSID_Briefcase,            0x85BBD920, 0x42A0, 0x1069, 0xA2,0xE4,0x08,0x00,0x2B,0x30,0x30,0x9D);//85BBD920-42A0-1069-A2E4-08002B30309D
DEFINE_GUID(CLSID_BriefcaseFolder,      0x86747AC0, 0x42A0, 0x1069, 0xA2,0xE6,0x08,0x00,0x2B,0x30,0x30,0x9D);//86747AC0-42A0-1069-A2E6-08002B30309D
DEFINE_GUID(CLSID_Clouds,               0x869DADA0, 0x42A0, 0x1069, 0xA2,0xE7,0x08,0x00,0x2B,0x30,0x30,0x9D);//869DADA0-42A0-1069-A2E7-08002B30309D   // secret credits object
DEFINE_GUID(CLSID_ExeDropTarget,        0x86C86720, 0x42A0, 0x1069, 0xA2,0xE8,0x08,0x00,0x2B,0x30,0x30,0x9D);//86C86720-42A0-1069-A2E8-08002B30309D
DEFINE_GUID(CLSID_PifProperties,        0x86F19A00, 0x42A0, 0x1069, 0xA2,0xE9,0x08,0x00,0x2B,0x30,0x30,0x9D);//86F19A00-42A0-1069-A2E9-08002B30309D   // pifprops


DEFINE_GUID(CLSID_Remote,               0x992CFFA0, 0xF557, 0x101A, 0x88,0xEC,0x00,0xDD,0x01,0x0C,0xCC,0x48);
DEFINE_GUID(CLSID_ShellFindExt,         0x61E218E0, 0x65D3, 0x101B, 0x9F,0x08,0x06,0x1C,0xEA,0xC3,0xD5,0x0D);//61E218E0-65D3-101B-9F08-061CEAC3D50D
// {169A0691-8DF9-11d1-A1C4-00C04FD75D13}
DEFINE_GUID(CLSID_ShellSearchExt,       0x169a0691, 0x8df9, 0x11d1, 0xa1, 0xc4, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);
// {07798131-AF23-11d1-9111-00A0C98BA67D}
DEFINE_GUID(CLSID_WebSearchExt,         0x7798131, 0xaf23, 0x11d1, 0x91, 0x11, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

DEFINE_GUID(CLSID_CFonts,               0xBD84B380, 0x8CA2, 0x1069, 0xAB,0x1D,0x08,0x00,0x09,0x48,0xF5,0x34);//bd84b380-8ca2-1069-ab1d-08000948f534
DEFINE_GUID(CLSID_CmdFileIcon,          0x57651662, 0xCE3E, 0x11D0, 0x8D,0x77,0x00,0xC0,0x4F,0xC9,0x9D,0x61);//57651662-CE3E-11D0-8D77-00C04FC99D61

DEFINE_GUID(CLSID_CDocObjectFolder,     0xE7E4BC40, 0xE76A, 0x11CE, 0xA9,0xBB,0x00,0xAA,0x00,0x4A,0xE8,0x37);//E7E4BC40-E76A-11CE-A9BB-00AA004AE837

DEFINE_GUID(CLSID_CSiteMapEmbedding,    0x438C0EA0, 0x5731, 0x11CF, 0x9A,0xF8,0x00,0x20,0xAF,0x73,0xAD,0x51);
DEFINE_GUID(CLSID_CSiteMapNode,         0xA61D5780, 0xBA29, 0x11CF, 0x95,0x2E,0x00,0xC0,0x4F,0xD7,0x05,0xB4);// A61D5780-BA29-11CF-952E-00C04FD705B4

DEFINE_GUID(IID_IDefViewBrowser,        0x9692C5C0, 0x7C21, 0x11CF, 0x95, 0x34, 0x00, 0x00, 0xC0, 0x5B, 0xAE, 0x0B);

DEFINE_GUID(CLSID_CShellHlinkFrame,     0x2C5A8FC0, 0x8401, 0x11CF, 0xA1, 0x2B, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);// 2C5A8FC0-8401-11CF-A12B-00AA004AE837
DEFINE_GUID(CLSID_CShellFrameAuto,      0x20C46560, 0x8491, 0x11CF, 0x96, 0x0C, 0x00, 0x80, 0xC7, 0xF4, 0xEE, 0x85);// 20C46560-8491-11CF-960C-0080C7F4EE85

DEFINE_GUID(CLSID_CStubBindStatusCallback, 
                                        0x2B4F54B1, 0x3D6D, 0x11d0, 0x82, 0x58, 0x00, 0xC0, 0x4F, 0xD5, 0xAE, 0x38);// 2B4F54B1-3D6D-11d0-8258-00C04FD5AE38

// This is a hack to allow the explorer to use more of the same implemention of the
// frame automation from SHDocvw (what was used for IExplorer

DEFINE_GUID(IID_IExpDispSupport,        0x0D7D1D00, 0x6FC0, 0x11D0, 0xA9, 0x74, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);//0D7D1D00-6FC0-11D0-A974-00C04FD705A2
DEFINE_GUID(IID_IExpDispSupportOC,      0x0D7D1D01, 0x6FC0, 0x11D0, 0xA9, 0x74, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);//0D7D1D01-6FC0-11D0-A974-00C04FD705A2

// {E770AD23-7346-11d1-8AEE-00C04FC9E26E}
DEFINE_GUID(IID_IWebViewOCWinMan, 0xe770ad23, 0x7346, 0x11d1, 0x8a, 0xee, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// {BB90CD8B-4F08-11d0-B497-00C04FD90119}
DEFINE_GUID(IID_IShellHTMLWindowSupport,0xbb90cd8bL, 0x4f08, 0x11d0, 0xb4, 0x97, 0x00, 0xc0, 0x4f, 0xd9, 0x01, 0x19);

/// IAddressList
// {D7E67AA1-AA76-11d0-8282-00AA005B4383}
DEFINE_GUID(IID_IAddressList,           0xd7e67aa1, 0xaa76, 0x11d0, 0x82, 0x82, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

#if 0
// The old IMRU interface used by IE4.  This interface was not accessible
// to outside components, so I'm #if'ing it out completely, but I left it
// in the header so at least we'll recognize it if we see it again.
// {D095EB91-A7B2-11d0-8274-00AA005B4383}
DEFINE_GUID(IID_IMRU_IE4,               0xd095eb91, 0xa7b2, 0x11d0, 0x82, 0x74, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);
#endif

// {1011fa30-69da-11d2-8599-006097df8c11}
DEFINE_GUID(IID_IMRU,                   0x1011fa30, 0x69da, 0x11d2, 0x85, 0x99, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

/// IBandProxy
// {208CE801-754B-11d0-80CA-00AA005B4383}
DEFINE_GUID(IID_IBandProxy,             0x208ce801, 0x754b, 0x11d0, 0x80, 0xca, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);
DEFINE_GUID(SID_IBandProxy,             0x80243ac1, 0x569, 0x11d1, 0xa7, 0xae, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

/// INSCTree
// {43A8F463-4222-11d2-B641-006097DF5BD4}
DEFINE_GUID(CLSID_NSCTree,              0x43a8f463, 0x4222, 0x11d2, 0xb6, 0x41, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);
DEFINE_GUID(IID_INSCTree,               0x43a8f463, 0x4222, 0x11d2, 0xb6, 0x41, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// { 0x4434FF80L, 0xEF4C, 0x11CE, { 0xAE, 0x65, 0x08, 0x00, 0x2B, 0x2E, 0x12, 0x62 } };
DEFINE_GUID(IID_CDefView,               0x4434FF80, 0xEF4C, 0x11CE, 0xAE, 0x65, 0x08, 0x00, 0x2B, 0x2E, 0x12, 0x62 );


// This is Semi-gross, but if the IShellFolder can be agregated, there are times we need to get
// back to the real inner class.  So we create an internal GUID which we use to QueryInterface for
// which hopefully the outer object will allow through...
// ABCB3A00-1B2B-11CF-A49F-444553540000
DEFINE_GUID(IID_INeedRealCFSFolder,     0xABCB3A00, 0x1B2B, 0x11CF, 0xA4, 0x9F, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

// New MSIE FTP UI from msieftp.dll
DEFINE_GUID(CLSID_FtpFolder,            0x63da6ec0, 0x2e98, 0x11cf, 0x8d,0x82,0x44,0x45,0x53,0x54,0,0);


//
// this interface is used by DefView when it wants to run a script in one
// of its extended views.  the actual script triggers currently live in shdisp
//
// 4706B500-09EF-11D0-99CB-00C04FD64497
DEFINE_GUID(IID_IDefViewScript,         0x4706B500L, 0x09EF, 0x11D0, 0x99, 0xCB, 0x00, 0xC0, 0x4F, 0xD6, 0x44, 0x97);


DEFINE_GUID(IID_IObjectCache,           0xEA5F2D60L, 0xE008, 0x11CF, 0x99, 0xCB, 0x00, 0xC0, 0x4F, 0xD6, 0x44, 0x97);   // ;internal

DEFINE_GUID(SID_SDesktopExtMenu,        0x6F272F90L, 0x2380, 0x11D0, 0x89, 0xB9, 0x00, 0xA0, 0xC9, 0x0A, 0x90, 0xAC);

// 20C46561-8491-11CF-960C-0080C7F4EE85 
// this is who should navigate instead
DEFINE_GUID(SID_SProxyBrowser,          0x20C46561L, 0x8491, 0x11CF, 0x96, 0x0C, 0x00, 0x80, 0xC7, 0xF4, 0xEE, 0x85);

//***   SID_STopFrameBrowser -- like SID_STopLevelBrowser, but blocked by BrowserBand
// currently used to make BrowserBand get its own global history, but could
// be more generally useful than that, hence the more generic name.
// {A9227C3C-7F8E-11d0-8CB0-00A0C92DBFE8}
DEFINE_GUID(SID_STopFrameBrowser,       0xa9227c3c, 0x7f8e, 0x11d0, 0x8c, 0xb0, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);

DEFINE_GUID(SID_PendingBindStatusCallback, 0xfe390c68, 0xe2bc, 0x11d0, 0x88, 0x8c, 0x0, 0xc0, 0x4f, 0xc2, 0xc8, 0x36);

// this is used in shdocvw's CConnectionPoint implementation
// to let CShellOcx type OCs get advised of Advise/Unadvise
// calls to the connection point. CShellFolderViewOC uses it.
//
DEFINE_GUID(IID_IConnectionPointCB,     0xAAAC9640L, 0x1252, 0x11D0, 0x89, 0xA9, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);
DEFINE_GUID(IID_IDelegateDropTargetCB,  0xbefd347e, 0xc7ec, 0x11d0, 0xb9, 0x3b, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);


// this defines the deskbar and also id's for each of the toolbands that we implement
//ECD4FC4C-521C-11D0-B792-00A0C90312E1
DEFINE_GUID(CLSID_DeskBar,              0xECD4FC4CL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_RebarBandSite,        0xECD4FC4DL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_BandSiteMenu,         0xECD4FC4EL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_MenuDeskBar,          0xECD4FC4FL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// {40B96610-B522-11d1-B3B4-00AA006EFDE7}
DEFINE_GUID(CLSID_MenuToolbarBase,      0x40b96610, 0xb522, 0x11d1, 0xb3, 0xb4, 0x0, 0xaa, 0x0, 0x6e, 0xfd, 0xe7);

// {D1E7AFEA-6A2E-11d0-8C78-00C04FD918B4}
DEFINE_GUID(IID_IBandSiteHelper,        0xd1e7afea, 0x6a2e, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);
DEFINE_GUID(IID_IMenuPopup,             0xd1e7afeb, 0x6a2e, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);
#define SID_SMenuPopup IID_IMenuPopup

DEFINE_GUID(SID_SMenuBandTop,           0x9493a810, 0xec38, 0x11d0, 0xbc, 0x46, 0x0, 0xaa, 0x0, 0x6c, 0xe2, 0xf5);
DEFINE_GUID(SID_SMenuBandBottom,        0x743ca664, 0xdeb, 0x11d1, 0x98, 0x25, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);
DEFINE_GUID(SID_SMenuBandChild,         0xed9cc020, 0x8b9, 0x11d1, 0x98, 0x23, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);
DEFINE_GUID(SID_SMenuBandParent,         0x8c278eec, 0x3eab, 0x11d1, 0x8c, 0xb0, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
// {165EBAF4-6D51-11d2-83AD-00C04FD918D0}
DEFINE_GUID(SID_SMenuBandBottomSelected, 0x165ebaf4, 0x6d51, 0x11d2, 0x83, 0xad, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

// NOTE!  Different from the IID_ITranslateShellChangeNotify in IE4x and IE5.0
// {B4DF2675-BA23-11d2-B5EE-006097C686F6}
DEFINE_GUID(IID_ITranslateShellChangeNotify, 0xb4df2675, 0xba23, 0x11d2, 0xb5, 0xee, 0x0, 0x60, 0x97, 0xc6, 0x86, 0xf6);

DEFINE_GUID(SID_ITopViewHost,           0xd1e7afec, 0x6a2e, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);

// {3CCF8A41-5C85-11d0-9796-00AA00B90ADF}
DEFINE_GUID(CLSID_DeskBarApp,           0x3ccf8a41, 0x5c85, 0x11d0, 0x97, 0x96, 0x0, 0xaa, 0x0, 0xb9, 0xa, 0xdf);

// {9581015C-D08E-11d0-8D36-00A0C92DBFE8}
DEFINE_GUID(CLSID_BrowserBar,           0x9581015c, 0xd08e, 0x11d0, 0x8d, 0x36, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);

// The IShellFolder band pointing to c:\band
// D82BE2B0-5764-11D0-A96E-00C04FD705A2
DEFINE_GUID(CLSID_ISFBand,              0xD82BE2B0L, 0x5764, 0x11D0, 0xA9, 0x6E, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

// explorer band
// {EFA24E64-B078-11d0-89E4-00C04FC9E26E}
DEFINE_GUID(CLSID_ExplorerBand,         0xefa24e64, 0xb078, 0x11d0, 0x89, 0xe4, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// The thumbnail view extension
// {8BEBB290-52D0-11d0-B7F4-00C04FD706EC}
DEFINE_GUID(CLSID_ThumbnailViewExt,     0x8bebb290, 0x52d0, 0x11d0, 0xb7, 0xf4, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// The Favorites Shell extension
// for 1A9BA3A0-143A-11CF-8350-444553540000
DEFINE_GUID(CLSID_FavoritesFolder,      0x1A9BA3A0, 0x143A, 0x11CF, 0x83, 0x50, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00 );

// the Task band (for the tray).
// n.b. while we have a CLSID, we can't actually CoCreateInst it
// we fake it in tray's IBandSiteHelper implementation.
// {68284FAA-6A48-11d0-8C78-00C04FD918B4}
DEFINE_GUID(CLSID_TaskBand,             0x68284faa, 0x6a48, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);

// URL Shell Execute Hook for IE4
// {AEB6717E-7E19-11d0-97EE-00C04FD91972}
DEFINE_GUID(CLSID_URLExecHook,          0xaeb6717e, 0x7e19, 0x11d0, 0x97, 0xee, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

// MIME-enabled File Types Hook for browser-only installs
DEFINE_GUID(CLSID_MIMEFileTypesHook,    0xFBF23B41L, 0xE3F0, 0x101B, 0x84, 0x88, 0x00, 0xAA, 0x00, 0x3E, 0x56, 0xF8);

// Cache Shell Folder
DEFINE_GUID(CLSID_CacheFolder,          0x7BD29E00L, 0x76C1, 0x11CF, 0x9D, 0xD0, 0x00, 0xA0, 0xC9, 0x03, 0x49, 0x33);

// History Shell Folder
DEFINE_GUID(CLSID_HistFolder,           0xFF393560L, 0xC2A7, 0x11CF, 0xBF, 0xF4, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

//  Cache Shellfolder Item private interface
DEFINE_GUID (IID_IHistCache,            0xF7FE8CA0L, 0xEC5A, 0x11CF, 0xBF, 0xF4, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
DEFINE_GUID (IID_IHist,                 0x06faeb04L, 0x191c, 0x11d3, 0x95, 0x73, 0x00, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
DEFINE_GUID (IID_ICache,                0x06faeb05L, 0x191c, 0x11d3, 0x95, 0x73, 0x00, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
// {C7A30296-907E-11d2-B02F-00C04FA35D89}
DEFINE_GUID(IID_IUrlHistoryPriv,        0xc7a30296, 0x907e, 0x11d2, 0xb0, 0x2f, 0x0, 0xc0, 0x4f, 0xa3, 0x5d, 0x89);


DEFINE_GUID(IID_IDocNavigate,           0x131A6950L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

// navigate band UI from pidl
DEFINE_GUID(IID_IBandNavigate,          0x3697c30b, 0xcd88, 0x11d0, 0x8a, 0x3e, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

DEFINE_GUID(CLSID_ChannelOC,            0x131A6951L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);
DEFINE_GUID(CLSID_OrderListExport,      0xf3368374, 0xcf19, 0x11d0, 0xb9, 0x3d, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);
DEFINE_GUID(IID_IOrderList,             0x8bfcb27d, 0xcf1a, 0x11d0, 0xb9, 0x3d, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);

DEFINE_GUID(IID_IEFrameAuto,            0x131A6953L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

//Command Group ID for MenuDeskBar
// {5C9F0A12-959E-11d0-A3A4-00A0C9082636}
DEFINE_GUID(CGID_MENUDESKBAR,0x5c9f0a12, 0x959e, 0x11d0, 0xa3, 0xa4, 0x0, 0xa0, 0xc9, 0x8, 0x26, 0x36);
//3531F060-22B3-11D0-969E-00AA00B60104
// used when communicating with the Internet Toolbar. 
DEFINE_GUID(CGID_ShellBrowser, 0x3531F060L, 0x22B3, 0x11D0, 0x96, 0x9E, 0x00, 0xAA, 0x00, 0xB6, 0x01, 0x04 );

// {FFB4B000-9FAB-11d0-A3A4-00C04FD706EC}
DEFINE_GUID(VID_DefaultCustomWebView, 0xffb4b000, 0x9fab, 0x11d0, 0xa3, 0xa4, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

//0F12079C-C193-11D0-8D49-00C04FC99D61
DEFINE_GUID(CGID_Theater, 0x0F12079CL, 0xC193, 0x11D0, 0x8D, 0x49, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

//FB4A79C0-C808-11D0-8D57-00C04FC99D61
DEFINE_GUID(CGID_MenuISF, 0xFB4A79C0L, 0xC808, 0x11D0, 0x8D, 0x57, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

// {AFD971E0-C870-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(IID_IPrivateOleObject, 0xafd971e0, 0xc870, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {89820200-ECBD-11cf-8B85-00AA005B4383}
DEFINE_GUID(COMPID_IE4, 0x89820200, 0xecbd, 0x11cf, 0x8B, 0x85, 0x00, 0xAA, 0x00, 0x5B, 0x43, 0x83 );

//ffdc1a80-d527-11d0-a32c-34af06c10000
DEFINE_GUID (CLSID_WinListShellProc, 0xffdc1a80, 0xd527, 0x11d0, 0xa3, 0x2c, 0x34, 0xaf, 0x06, 0xc1, 0x00, 0x00);

// {67EA19A0-CCEF-11d0-8024-00C04FD75D13}
DEFINE_GUID(CLSID_CDFCopyHook, 0x67ea19a0, 0xccef, 0x11d0, 0x80, 0x24, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

// {AF4F6510-F982-11d0-8595-00AA004CD6D8}
DEFINE_GUID(CLSID_CRegTreeOptions, 0xaf4f6510, 0xf982, 0x11d0, 0x85, 0x95, 0x0, 0xaa, 0x0, 0x4c, 0xd6, 0xd8);

// {AF4F6511-F982-11d0-8595-00AA004CD6D8}
DEFINE_GUID(IID_IRegTreeOptions, 0xaf4f6511, 0xf982, 0x11d0, 0x85, 0x95, 0x0, 0xaa, 0x0, 0x4c, 0xd6, 0xd8);

// Internet Cache Cleaner
// {9B0EFD60-F7B0-11D0-BAEF-00C04FC308C9}
DEFINE_GUID(CLSID_InternetCacheCleaner,     0x9b0efd60, 0xf7b0, 0x11d0, 0xba, 0xef, 0x0, 0xc0, 0x4f, 0xc3, 0x08, 0xc9);

// {8E6E6079-0CB7-11d2-8F10-0000F87ABD16}
DEFINE_GUID(CLSID_OfflinePagesCacheCleaner, 0x8e6e6079, 0xcb7, 0x11d2, 0x8f, 0x10, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// {4622AD10-FF23-11d0-8D34-00A0C90F2719}
DEFINE_GUID(IID_ITrayPriv,0x4622ad10, 0xff23, 0x11d0, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {4622AD11-FF23-11d0-8D34-00A0C90F2719}
DEFINE_GUID(CLSID_StartMenu,0x4622ad11, 0xff23, 0x11d0, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);
#define CLSID_StartMenuBar CLSID_StartMenu 

// {4622AD16-FF23-11d0-8D34-00A0C90F2719}
DEFINE_GUID(IID_IInitializeObject,0x4622ad16, 0xff23, 0x11d0, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {596A9A94-013E-11d1-8D34-00A0C90F2719}
DEFINE_GUID(IID_IBanneredBar,0x596a9a94, 0x13e, 0x11d1, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// Interface used to keep channel cache in sync.
DEFINE_GUID(IID_IChannelMgrPriv, 0xc9ace0f0, 0xac1, 0x11d1, 0x8f, 0x45, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x3f);
DEFINE_GUID(IID_IChannelMgrPriv2, 0xc9ace0f1, 0xac1, 0x11d1, 0x8f, 0x45, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x3f);

// {733AC4CB-F1A4-11d0-B951-00A0C90312E1}
DEFINE_GUID(CLSID_CWebViewMimeFilter, 0x733ac4cb, 0xf1a4, 0x11d0, 0xb9, 0x51, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);

// Disk cleaner for the recycle bin
/* 5ef4af3a-f726-11d0-b8a2-00c04fc309a4 */
DEFINE_GUID(CLSID_RecycleBinCleaner,  0x5ef4af3a, 0xf726, 0x11d0, 0xb8, 0xa2, 0x00, 0xc0, 0x4f, 0xc3, 0x09, 0xa4 );

// {1820FED0-473E-11D0-A96C-00C04FD705A2}
// WARNING: CLSID_CDefViewOC is also stored in shell\shdocvw\selfreg.inx and shell\ext\shwizard\finisha.cpp
//          and D:\nt\private\shell\ext\html\construc\*.htt
DEFINE_GUID(CLSID_CDefViewOC, 0x1820FED0, 0x473E, 0x11D0, 0xA9, 0x6C, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

// {B1E437E0-047A-11D1-B833-00C04FC9B31F}
DEFINE_GUID(IID_IDwnCodePage, 0xb1e437e0, 0x047a, 0x11d1, 0xb8, 0x33, 0x0, 0xc0, 0x4f, 0xc9, 0xb3, 0x1f);

//Pidl Filtering for Menu Bands.
// {B16C55D1-0534-11d1-8D3F-00A0C90F2719}
DEFINE_GUID(CGID_FilterObject,0xb16c55d1, 0x534, 0x11d1, 0x8d, 0x3f, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {B16C55D3-0534-11d1-8D3F-00A0C90F2719}
DEFINE_GUID(SID_SHostProxyFilter,0xb16c55d3, 0x534, 0x11d1, 0x8d, 0x3f, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {2D3DDFC0-09E1-11d1-BC59-00AA006CE2F5}
DEFINE_GUID(CGID_MenuBandHandler, 0x2d3ddfc0, 0x9e1, 0x11d1, 0xbc, 0x59, 0x0, 0xaa, 0x0, 0x6c, 0xe2, 0xf5);
// {7376D660-C583-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(CLSID_ImgCtxThumbnailExtractor, 0x7376d660, 0xc583, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {1430A130-103F-11d1-8D45-00A0C90F2719}
DEFINE_GUID(SID_SBandHandler, 0x1430a130, 0x103f, 0x11d1, 0x8d, 0x45, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {21090CB1-103F-11d1-8D45-00A0C90F2719}
DEFINE_GUID(CGID_BandHandler, 0x21090cb1, 0x103f, 0x11d1, 0x8d, 0x45, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {2E420C00-1361-11d1-8D49-00A0C90F2719}
DEFINE_GUID(CGID_Persist, 0x2e420c00, 0x1361, 0x11d1, 0x8d, 0x49, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {DDB008FE-048D-11d1-B9CD-00C04FC2C1D2}
DEFINE_GUID(CLSID_StartMenuTask,    0xddb008fe, 0x48d, 0x11d1, 0xb9, 0xcd, 0x0, 0xc0, 0x4f, 0xc2, 0xc1, 0xd2);

// {E7D3DB4E-199C-11d1-9828-00C04FD91972}
DEFINE_GUID(CLSID_DesktopTask,      0xe7d3db4e, 0x199c, 0x11d1, 0x98, 0x28, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

// {80D4A420-3167-11d2-BE3C-3078302C2030}
DEFINE_GUID(IID_IShellFolderTask,   0x80d4a420, 0x3167, 0x11d2, 0xbe, 0x3c, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// {80D4A41F-3167-11d2-BE3C-3078302C2030}
DEFINE_GUID(IID_IStartMenuTask,     0x80d4a41f, 0x3167, 0x11d2, 0xbe, 0x3c, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// {5EA35BC9-19B1-11d1-9828-00C04FD91972}
DEFINE_GUID(IID_IShellHotKey,       0x5ea35bc9, 0x19b1, 0x11d1, 0x98, 0x28, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

// {8C7461EF-2B13-11d2-BE35-3078302C2030}
DEFINE_GUID(CLSID_ComCatCacheTask,  0x8c7461ef, 0x2b13, 0x11d2, 0xbe, 0x35, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// {E56829C9-2D59-11d2-BE38-3078302C2030}
DEFINE_GUID(CLSID_ComCatConditionalCacheTask, 0xe56829c9, 0x2d59, 0x11d2, 0xbe, 0x38, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// {83799FE0-1F5A-11d1-95C7-00609797EA4F}
DEFINE_GUID(CLSID_DocFileInfoTip,   0x83799fe0, 0x1f5a, 0x11d1, 0x95, 0xc7, 0x0, 0x60, 0x97, 0x97, 0xea, 0x4f);

// {5c191fec-2d33-11d1-bd7e-0000f8753a75}
DEFINE_GUID(CGID_MenuBandItem,      0x5c191fec, 0x2d33, 0x11d1, 0xbd, 0x7e, 0x0, 0x00, 0xf8, 0x75, 0x3a, 0x75);

// {0563BC42-4418-11d1-8CB4-00C04FD918D0}
DEFINE_GUID(CGID_MenuBandRestriction, 0x563bc42, 0x4418, 0x11d1, 0x8c, 0xb4, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
#define SID_SMenuBandRestriction CGID_MenuBandRestriction

// {A6C17EB4-2D65-11d2-838F-00C04FD918D0}
DEFINE_GUID(SID_MenuShellFolder,   0xa6c17eb4, 0x2d65, 0x11d2, 0x83, 0x8f, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

// {B49C1CD0-5256-11d1-8CBB-00C04FD918D0}
DEFINE_GUID(NSID_Menu,             0xb49c1cd0, 0x5256, 0x11d1, 0x8c, 0xbb, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

// {CE422100-6CE1-11d1-838D-0000F80461CF}
DEFINE_GUID(CLSID_ShellMallocSpy,   0xce422100, 0x6ce1, 0x11d1, 0x83, 0x8d, 0x0, 0x0, 0xf8, 0x4, 0x61, 0xcf);

// {CE422101-6CE1-11d1-838D-0000F80461CF}
DEFINE_GUID(IID_IShellMallocSpy,    0xce422101, 0x6ce1, 0x11d1, 0x83, 0x8d, 0x0, 0x0, 0xf8, 0x4, 0x61, 0xcf);

// Defview background task IDs
// {956B35B8-6DCB-11d1-AD2F-00C04FB687DA}
DEFINE_GUID(TOID_DVIconExtract,    0x956b35b8, 0x6dcb, 0x11d1, 0xad, 0x2f, 0x0, 0xc0, 0x4f, 0xb6, 0x87, 0xda);

// {76119F10-B9E3-11D1-A7F4-006008059382}
DEFINE_GUID(TOID_DVIconOverlay, 0x76119F10L, 0xB9E3, 0x11D1, 0xA7, 0xF4, 0x00, 0x60, 0x08, 0x05, 0x93, 0x82);

// {956B35B9-6DCB-11d1-AD2F-00C04FB687DA}
DEFINE_GUID(TOID_DVBackgroundEnum, 0x956b35b9, 0x6dcb, 0x11d1, 0xad, 0x2f, 0x0, 0xc0, 0x4f, 0xb6, 0x87, 0xda);

// Start Menu.Settings.Folder Options property sheet extension
// {6D5313C0-8C62-11D1-B2CD-006097DF8C11}
DEFINE_GUID(CLSID_ShellFldSetExt,       0x6D5313C0, 0x8C62, 0x11D1, 0xB2,0xCD,0x00,0x60,0x97,0xDF,0x8C,0x11);

// Also used by SHCreateGlobalCounter to count changes to global folder settings
#define GUID_FolderSettingsChange       CLSID_ShellFldSetExt

// Offline Files property sheet extension.  Implemented in cscui.dll.
// {10CFC467-4392-11d2-8DB4-00C04FA31A66}
DEFINE_GUID(CLSID_OfflineFilesOptions, 0x10cfc467, 0x4392, 0x11d2, 0x8d, 0xb4, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x66);

//AF604EFE-8897-11D1-B944-00A0C90312E1
DEFINE_GUID(CLSID_CCommonBrowser, 0xAF604EFEL, 0x8897, 0x11D1, 0xB9, 0x44, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// Currently not used -- will be used when dbapp moves to shell32
// 4AF4A5FC-912A-11D1-B945-00A0C90312E1
DEFINE_GUID(CLSID_CDockingBarPropertyBag, 0x4AF4A5FCL, 0x912A, 0x11D1, 0xB9, 0x45, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// 4AF4A5FA-912A-11D1-B945-00A0C90312E1
DEFINE_GUID(IID_IDockingBarPropertyBagInit, 0x4AF4A5FAL, 0x912A, 0x11D1, 0xB9, 0x45, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// 438755C2-A8BA-11D1-B96B-00A0C90312E1
DEFINE_GUID(CLSID_BrowseuiPreloader, 0x438755C2L, 0xA8BA, 0x11D1, 0xB9, 0x6B, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// {169A0694-8DF9-11d1-A1C4-00C04FD75D13}
DEFINE_GUID(IID_ISearchProvider,   0x169a0694, 0x8df9, 0x11d1, 0xa1, 0xc4, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

// {94FD6891-92CD-11d1-A1C6-00C04FD75D13}
DEFINE_GUID(SRCID_SWebSearch,      0x94fd6891, 0x92cd, 0x11d1, 0xa1, 0xc6, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

#define SRCID_SFileSearch          CLSID_ShellSearchExt

// {996E1EB1-B524-11d1-9120-00A0C98BA67D}
DEFINE_GUID(SRCID_SFindComputer,   0x996e1eb1, 0xb524, 0x11d1, 0x91, 0x20, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

// {D515F311-B78B-11d1-9123-00A0C98BA67D}
DEFINE_GUID(SRCID_SFindPrinter,    0xd515f311, 0xb78b, 0x11d1, 0x91, 0x23, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

//1E79697E-9CC5-11D1-A83F-00C04FC99D61
DEFINE_GUID(CLSID_CommonButtons, 0x1E79697EL, 0x9CC5, 0x11D1, 0xA8, 0x3F, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

//A48F1A32-A340-11D1-BC6B-00A0C90312E1
DEFINE_GUID(GUID_Restrictions, 0xA48F1A32L, 0xA340, 0x11D1, 0xBC, 0x6B, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// 96a23e16-a1bc-11d1-b084-00c04fc33aa5
DEFINE_GUID(IID_ILVRange,          0x96a23e16L, 0xa1bc, 0x11d1, 0xb0, 0x84, 0x00, 0xc0, 0x4f, 0xc3, 0x3a, 0xa5);

// CLSID whose sole purpose is to let us locate BROWSEUI, wherever it happens to be installed
// ef8ad2d0-ae36-11d1-b2d2-006097df8c11
DEFINE_GUID(CLSID_BROWSEUI,        0xef8ad2d0L, 0xae36, 0x11d1, 0xb2, 0xd2, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

// ef8ad2d1-ae36-11d1-b2d2-006097df8c11
DEFINE_GUID(CLSID_GlobalFolderSettings, 0xef8ad2d1L, 0xae36, 0x11d1, 0xb2, 0xd2, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

// ef8ad2d3-ae36-11d1-b2d2-006097df8c11
DEFINE_GUID(IID_IGlobalFolderSettings, 0xef8ad2d3L, 0xae36, 0x11d1, 0xb2, 0xd2, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

// 830abff0-afd9-11d1-b9f1-00a0c98bc547
DEFINE_GUID(IID_ISearchItems,      0x830abff0L, 0xafd9, 0x11d1, 0xb9, 0xf1, 0x00, 0xa0, 0xc9, 0x8b, 0xc5, 0x47);

// {59CA3D02-446B-11d2-85DE-00C04FA35C89}
DEFINE_GUID(IID_ISearchBandTBHelper, 0x59ca3d02, 0x446b, 0x11d2, 0x85, 0xde, 0x0, 0xc0, 0x4f, 0xa3, 0x5c, 0x89);

// {09799AFB-AD67-11d1-ABCD-00C04FC30936}
DEFINE_GUID(CLSID_OpenWithMenu, 0x9799afb, 0xad67, 0x11d1, 0xab, 0xcd, 0x0, 0xc0, 0x4f, 0xc3, 0x9, 0x36);

// {5B8DCBF0-B096-11d1-9217-00403393B8F0}
DEFINE_GUID(IID_IDocFindControllerNotify, 0x5b8dcbf0, 0xb096, 0x11d1, 0x92, 0x17, 0x0, 0x40, 0x33, 0x93, 0xb8, 0xf0);

// {7febaf7c-18cf-11d2-993f-00a0c91f3880}
DEFINE_GUID(CLSID_DefViewPersistHistory, 0x7febaf7c, 0x18cf, 0x11d2, 0x99, 0x3f, 0x00, 0xa0, 0xc9, 0x1f, 0x38, 0x80);

// {bab33640-1280-11d2-aa30-00a0c91eedba}
DEFINE_GUID(CLSID_DocFindPersistHistory, 0xbab33640, 0x1280, 0x11d2, 0xaa, 0x30, 0x00, 0xa0, 0xc9, 0x1e, 0xed, 0xba);

// {DD313E04-FEFF-11d1-8ECD-0000F87A470C}
DEFINE_GUID(CLSID_UserAssist, 0xdd313e04, 0xfeff, 0x11d1, 0x8e, 0xcd, 0x0, 0x0, 0xf8, 0x7a, 0x47, 0xc);

// {DD313E05-FEFF-11d1-8ECD-0000F87A470C}
DEFINE_GUID(IID_IUserAssist, 0xdd313e05, 0xfeff, 0x11d1, 0x8e, 0xcd, 0x0, 0x0, 0xf8, 0x7a, 0x47, 0xc);

// {1ABCFC13-2340-11d2-B601-006097DF5BD4}
DEFINE_GUID(CLSID_FtpInstaller, 0x1abcfc13, 0x2340, 0x11d2, 0xb6, 0x1, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);
DEFINE_GUID(IID_IFtpInstaller, 0x1abcfc13, 0x2340, 0x11d2, 0xb6, 0x1, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// {5CFCC662-1767-11d2-A222-0000F81FEDEE}
DEFINE_GUID(IID_IFolderShortcutConvert, 0x5cfcc662, 0x1767, 0x11d2, 0xa2, 0x22, 0x0, 0x0, 0xf8, 0x1f, 0xed, 0xee);

// {E0DD6CAB-2D10-11d2-8F1A-0000F87ABD16}
DEFINE_GUID(CLSID_ToolbarExtBand, 0xe0dd6cab, 0x2d10, 0x11d2, 0x8f, 0x1a, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// {37e856d7-3dfd-11d2-bf8b-00c04fb93661}
DEFINE_GUID(IID_IEnumUrlSearch,   0x37e856d7, 0x3dfd, 0x11d2, 0xbf, 0x8b, 0x0, 0xc0, 0x4f, 0xb9, 0x36, 0x61);

// {23d9b0f1-40fc-11d2-bf8c-00c04fb93661}
DEFINE_GUID(IID_IFolderSearches, 0x23d9b0f1, 0x40fc, 0x11d2, 0xbf, 0x8c, 0x0, 0xc0, 0x4f, 0xb9, 0x36, 0x61);

// {1FBA04EE-3024-11d2-8F1F-0000F87ABD16}
DEFINE_GUID(CLSID_ToolbarExtExec, 0x1fba04ee, 0x3024, 0x11d2, 0x8f, 0x1f, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// {32bb8320-b41b-11cf-a6bb-0080c7b2d682}
DEFINE_GUID(IID_IBrowserExtension, 0x32bb8320, 0xb41b, 0x11cf, 0xa6, 0xbb, 0x0, 0x80, 0xc7, 0xb2, 0xd6, 0x82);

// {3CD141F4-3C6A-11d2-BCAA-00C04FD929DB}
DEFINE_GUID(IID_IAutoCompleteDropDown, 0x3cd141f4, 0x3c6a, 0x11d2, 0xbc, 0xaa, 0x0, 0xc0, 0x4f, 0xd9, 0x29, 0xdb);

// {48123bc4-99d9-11d1-a6b3-00c04fd91555}
DEFINE_GUID(CLSID_XMLViewerDocObj, 0x48123bc4, 0x99d9, 0x11d1, 0xa6, 0xb3, 0x0, 0xc0, 0x4f, 0xd9, 0x15, 0x55);

// {C0C66348-C440-11d2-9F03-006097C686F6}
DEFINE_GUID(CLSID_FolderShortcutToShortcut, 0xc0c66348, 0xc440, 0x11d2, 0x9f, 0x3, 0x0, 0x60, 0x97, 0xc6, 0x86, 0xf6);

// {C8B35474-C440-11d2-9F03-006097C686F6}
DEFINE_GUID(CLSID_ShortcutToFolderShortcut, 0xc8b35474, 0xc440, 0x11d2, 0x9f, 0x3, 0x0, 0x60, 0x97, 0xc6, 0x86, 0xf6);

// {BDEADF00-C265-11d0-BCED-00A0C90AB50F}	IID_WebFolders
DEFINE_GUID(CLSID_WebFolders, 0xBDEADF00, 0xC265, 0x11d0, 0xbc, 0xed, 0x0, 0xa0, 0xc9, 0xa, 0xb5, 0x0f);

// map old names to nice names
#define CLSID_CControls         CLSID_ControlPanel
#define CLSID_ShellBitBucket    CLSID_RecycleBin
#define CLSID_ShellDrives       CLSID_MyComputer
#define CLSID_CPrinters         CLSID_Printers
#define CLSID_ShellNetwork      CLSID_NetworkPlaces
#define CLSID_ShellInetRoot     CLSID_Internet

#define CLSID_ShellNetworkDomain    CLSID_NetworkDomain
#define CLSID_ShellNetworkServer    CLSID_NetworkServer
#define CLSID_ShellNetworkShare     CLSID_NetworkShare
