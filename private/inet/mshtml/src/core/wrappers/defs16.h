/* WIN16 DEFINITIONS NEEDED TO GET WRAPPERS OF COMMDLG FUNCTIONS TO WORK. */

/*  NOTE: THESE DEFINITIONS MAY NEED TO CHANGE WHEN WE HAVE THE NEEDED UNICODE
    DEFINITIONS ENABLED. */

#include <print.h>

typedef LPCHOOSECOLOR LPCHOOSECOLORW;
typedef LPCHOOSECOLOR LPCHOOSECOLORA;

typedef LPCHOOSEFONT LPCHOOSEFONTW;
typedef LPCHOOSEFONT LPCHOOSEFONTA;

typedef LPOPENFILENAME LPOPENFILENAMEW;
typedef LPOPENFILENAME LPOPENFILENAMEA;

typedef LPPRINTDLG LPPRINTDLGW;
typedef LPPRINTDLG LPPRINTDLGA;

typedef DEVMODE DEVMODEW;


/*
typedef LPPAGESETUPDLG LPPAGESETUPDLGW;
typedef LPPAGESETUPDLG LPPAGESETUPDLGA;
*/
