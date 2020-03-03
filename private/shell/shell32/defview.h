#ifndef _DEFVIEW_H
#define _DEFVIEW_H


// Private window messages
#define WM_DSV_FSNOTIFY                 (WM_USER+0xA0)
#define WM_DSV_DESTROYSTATIC            (WM_USER+0xA1)
#define WM_DSV_BACKGROUNDENUMDONE       (WM_USER+0xA2)
#define WM_DSV_UPDATEICON               (WM_USER+0xA3)
#define WM_DSV_SHOWDRAGIMAGE            (WM_USER+0xA4)
#define WM_DSV_MENUTERM                 (WM_USER+0xA5)
#define WM_DSV_DISABLEACTIVEDESKTOP     (WM_USER+0xA6)
#define WM_DSV_REARRANGELISTVIEW        (WM_USER+0xA7)
#define WM_DSV_SENDSELECTIONCHANGED     (WM_USER+0xA8)
#define WM_DSV_UPDATECOLDATA            (WM_USER+0xA9)
#define WM_DSV_DESKTOPCONTEXTMENU       (WM_USER+0xAA)
#define WM_DSV_UPDATEOVERLAY            (WM_USER+0xAB)
#define WM_DSV_DESKHTML_CHANGES         (WM_USER+0xAC)
#define WM_DSV_FILELISTENUMDONE         (WM_USER+0xAD)
    

#define MAX_EXT_VIEWS                   (SFVIDM_VIEW_EXTLAST - SFVIDM_VIEW_EXTFIRST + 1)



///// help string ids

#define SFVIDS_MH_FIRST                 (IDS_MH_SFVIDM_FIRST - SFVIDM_FIRST)

#define SFVIDS_MH_FILE_LINK             (SFVIDS_MH_FIRST + SFVIDM_FILE_LINK)
#define SFVIDS_MH_FILE_DELETE           (SFVIDS_MH_FIRST + SFVIDM_FILE_DELETE)
#define SFVIDS_MH_FILE_RENAME           (SFVIDS_MH_FIRST + SFVIDM_FILE_RENAME)
#define SFVIDS_MH_FILE_PROPERTIES       (SFVIDS_MH_FIRST + SFVIDM_FILE_PROPERTIES)

#define SFVIDS_MH_EDIT_UNDO             (SFVIDS_MH_FIRST + SFVIDM_EDIT_UNDO)
#define SFVIDS_MH_EDIT_CUT              (SFVIDS_MH_FIRST + SFVIDM_EDIT_CUT)
#define SFVIDS_MH_EDIT_COPY             (SFVIDS_MH_FIRST + SFVIDM_EDIT_COPY)
#define SFVIDS_MH_EDIT_PASTE            (SFVIDS_MH_FIRST + SFVIDM_EDIT_PASTE)
#define SFVIDS_MH_EDIT_PASTELINK        (SFVIDS_MH_FIRST + SFVIDM_EDIT_PASTELINK)
#define SFVIDS_MH_EDIT_PASTESPECIAL     (SFVIDS_MH_FIRST + SFVIDM_EDIT_PASTESPECIAL)
#define SFVIDS_MH_EDIT_COPYTO           (SFVIDS_MH_FIRST + SFVIDM_EDIT_COPYTO)
#define SFVIDS_MH_EDIT_MOVETO           (SFVIDS_MH_FIRST + SFVIDM_EDIT_MOVETO)

#define SFVIDS_MH_MENU_SELECT           (SFVIDS_MH_FIRST + SFVIDM_MENU_SELECT)
#define SFVIDS_MH_SELECT_ALL            (SFVIDS_MH_FIRST + SFVIDM_SELECT_ALL)
#define SFVIDS_MH_SELECT_INVERT         (SFVIDS_MH_FIRST + SFVIDM_SELECT_INVERT)

#define SFVIDS_MH_MENU_VIEW             (SFVIDS_MH_FIRST + SFVIDM_MENU_VIEW)
#define SFVIDS_MH_VIEW_ICON             (SFVIDS_MH_FIRST + SFVIDM_VIEW_ICON)
#define SFVIDS_MH_VIEW_SMALLICON        (SFVIDS_MH_FIRST + SFVIDM_VIEW_SMALLICON)
#define SFVIDS_MH_VIEW_LIST             (SFVIDS_MH_FIRST + SFVIDM_VIEW_LIST)
#define SFVIDS_MH_VIEW_DETAILS          (SFVIDS_MH_FIRST + SFVIDM_VIEW_DETAILS)
#define SFVIDS_MH_VIEW_PAGE             (SFVIDS_MH_FIRST + SFVIDM_VIEW_PAGE)
#define SFVIDS_MH_VIEW_OPTIONS          (SFVIDS_MH_FIRST + SFVIDM_VIEW_OPTIONS)
#define SFVIDS_MH_VIEW_CUSTOMWIZARD     (SFVIDS_MH_FIRST + SFVIDM_VIEW_CUSTOMWIZARD)
#define SFVIDS_MH_VIEW_COLUMNSETTINGS   (SFVIDS_MH_FIRST + SFVIDM_VIEW_COLSETTINGS)

#define SFVIDS_MH_MENU_ARRANGE          (SFVIDS_MH_FIRST + SFVIDM_MENU_ARRANGE)
#define SFVIDS_MH_ARRANGE_AUTO          (SFVIDS_MH_FIRST + SFVIDM_ARRANGE_AUTO)
#define SFVIDS_MH_ARRANGE_GRID          (SFVIDS_MH_FIRST + SFVIDM_ARRANGE_GRID)

#define SFVIDS_MH_TOOL_CONNECT          (SFVIDS_MH_FIRST + SFVIDM_TOOL_CONNECT)
#define SFVIDS_MH_TOOL_DISCONNECT       (SFVIDS_MH_FIRST + SFVIDM_TOOL_DISCONNECT)

#define SFVIDS_MH_HELP_TOPIC            (SFVIDS_MH_FIRST + SFVIDM_HELP_TOPIC)


//tool tips
#define IDS_TT_VIEW_ICON                (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_ICON)
#define IDS_TT_VIEW_SMALLICON           (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_SMALLICON)
#define IDS_TT_VIEW_LIST                (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_LIST)
#define IDS_TT_VIEW_DETAILS             (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_DETAILS)
#define IDS_TT_VIEW_PAGE                (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_PAGE)
#define IDS_TT_VIEW_VIEWMENU            (IDS_TT_SFVIDM_FIRST + SFVIDM_VIEW_VIEWMENU)

#define IDS_TT_TOOL_CONNECT             (IDS_TT_SFVIDM_FIRST + SFVIDM_TOOL_CONNECT)
#define IDS_TT_TOOL_DISCONNECT          (IDS_TT_SFVIDM_FIRST + SFVIDM_TOOL_DISCONNECT)

#define IDS_TT_EDIT_CUT                 (IDS_TT_SFVIDM_FIRST + SFVIDM_EDIT_CUT)
#define IDS_TT_EDIT_COPY                (IDS_TT_SFVIDM_FIRST + SFVIDM_EDIT_COPY)
#define IDS_TT_EDIT_PASTE               (IDS_TT_SFVIDM_FIRST + SFVIDM_EDIT_PASTE)
#define IDS_TT_EDIT_UNDO                (IDS_TT_SFVIDM_FIRST + SFVIDM_EDIT_UNDO)
#define IDS_TT_FILE_DELETE              (IDS_TT_SFVIDM_FIRST + SFVIDM_FILE_DELETE)
#define IDS_TT_FILE_PROPERTIES          (IDS_TT_SFVIDM_FIRST + SFVIDM_FILE_PROPERTIES)


//
// IDs for non-default drag & drop menu
//
#define DDIDM_COPY              1
#define DDIDM_MOVE              2
#define DDIDM_LINK              3
#define DDIDM_SCRAP_COPY        4
#define DDIDM_SCRAP_MOVE        5
#define DDIDM_DOCLINK           6
#define DDIDM_CONTENTS_COPY     7
#define DDIDM_CONTENTS_MOVE     8
#define DDIDM_SYNCCOPY          9
#define DDIDM_SYNCCOPYTYPE      10
#define DDIDM_CONTENTS_LINK     11
#define DDIDM_CONTENTS_DESKCOMP 12
#define DDIDM_CONTENTS_DESKIMG  13
#define DDIDM_OBJECT_COPY       14
#define DDIDM_OBJECT_MOVE       15
#define DDIDM_CONTENTS_DESKURL  16
#define DDIDM_EXTFIRST          0x1000
#define DDIDM_EXTLAST           0x7fff

#define DIEC_BACKGROUNDCONTEXT   1
#define DIEC_SELECTIONCONTEXT    2

STDAPI_(HWND) DV_HwndMain2HwndView(HWND hwmdMain);

#endif // _DEFVIEW_H
