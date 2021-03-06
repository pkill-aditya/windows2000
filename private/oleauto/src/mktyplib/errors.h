//	error constants -- WARNING -- must be kept in order!
//	table in INTLSTR.H depends on this order!

typedef enum {
	ERR_NONE = 0,

// lexer/parser errors with file/line #/column info
	PERR_UNTERMINATED_COMMENT,
	PERR_UNEXP_EOF,
	PERR_READ_ERROR,
	PERR_UNDEF_INTER,
	PERR_UNKNOWN_TYPE,
	PERR_DUP_DEF,
	PERR_DUP_UUID,
	PERR_DUP_ID,
	PERR_INV_COMBO,
	PERR_ID_REQ,
	PERR_UUID_REQ,
	PERR_IN_OUT_REQ,
	PERR_DLLNAME_REQ,
	PERR_ENTRY_REQ,
	PERR_ODL_REQ,
	PERR_IMPLIB_NOTFIRST,
	PERR_VOID_INV,
	PERR_NUMBER_OV,
	PERR_INV_ATTR_COMBO,
	PERR_INV_ATTR,
	PERR_INV_NUMBER,
	PERR_INV_STRING,
	PERR_INV_UUID,
	PERR_INV_IDENTIFIER,
	PERR_INV_CONSTANT,
	PERR_INV_ID,
	PERR_INV_LCID_USE,
	PERR_INV_RETVAL_USE,
	PERR_INV_VARARG_USE,
	PERR_UNSUPP_KEYWORD,
	PERR_EXPECTED,
	PERR_EXP_EOF,
	PERR_EXP_IDENTIFIER,
	PERR_EXP_KEYWORD,
	PERR_EXP_ATTRIBUTE,
	PERR_EXP_OPERATOR,
	PERR_UNSUPPORTED_OP,
	PERR_INV_EXPRESSION,
	PERR_EXP_NUMBER,
	PERR_EXP_STRING,
	PERR_EXP_INTER,
	PERR_TWO_DISPINTER,
	PERR_INV_CALLCONV,
	PERR_INV_ARRAY_DECL,
	PERR_NO_IDISPATCH,
	PERR_NO_IUNKNOWN,
	PERR_TYPEDEF_ATTR,
	PERR_INV_PROPPUT,
	PERR_INV_PROPFUNC,
        PERR_INV_LCID,
        PERR_INV_SOURCE_ATTR,
        PERR_INV_OUT_PARAM,
        PERR_INV_DUAL_BASE,
        PERR_INV_OA_BASE,
        PERR_INV_OA_TYPE,
        PERR_INV_OA_FUNC_TYPE,

        PERR_INV_REFERENCE,
	PWARN_INV_IDISPATCHTYPE,

	OERR_NO_DEF,
	#define	TYPELIBERR(name,string)  OERR_ ## name
	#include "typelib.err"		// TYPELIB.DLL error constants
	#undef	TYPELIBERR
	OERR_TYPEINFO,

// general type library generation errors (no file/line#/column# info)
	ERR_OM,
	ERR_CANT_OPEN_INPUTFILE,
#if FV_CPP
	ERR_CPP,
#endif	//FV_CPP
	ERR_CANT_OPEN_HFILE,
	ERR_WRITING_HFILE,

        WARN_STRANGE_ALIGNMENT,

        GENERAL_ERR_LAST,		// the last general error/warning

	PERR_FIRST = PERR_UNTERMINATED_COMMENT,
        PWARN_FIRST = PWARN_INV_IDISPATCHTYPE,
	OERR_FIRST = OERR_NO_DEF,
	ERR_FIRST = ERR_OM,
	WARN_FIRST = WARN_STRANGE_ALIGNMENT,
} ERR;

#ifdef	__cplusplus
extern "C" {
#endif

extern VOID FAR ParseError(ERR err);
extern VOID FAR ParseErrorTokLast(ERR err);
extern VOID FAR ItemError(CHAR * szFormat, LPSTR lpszItem, ERR err);

#ifdef	__cplusplus
}
#endif
