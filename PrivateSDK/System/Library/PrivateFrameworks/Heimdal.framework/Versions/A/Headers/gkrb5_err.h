/* Generated from /Users/sam/Downloads/Heimdal-323.92.1/lib/gssapi/krb5/gkrb5_err.et */
/* $Id$ */

#ifndef __gkrb5_err_h__
#define __gkrb5_err_h__

struct et_list;

void initialize_gk5_error_table_r(struct et_list **);

void initialize_gk5_error_table(void);
#define init_gk5_err_tbl initialize_gk5_error_table

typedef enum gk5_error_number{
	GSS_KRB5_S_G_BAD_SERVICE_NAME = 35224064,
	GSS_KRB5_S_G_BAD_STRING_UID = 35224065,
	GSS_KRB5_S_G_NOUSER = 35224066,
	GSS_KRB5_S_G_VALIDATE_FAILED = 35224067,
	GSS_KRB5_S_G_BUFFER_ALLOC = 35224068,
	GSS_KRB5_S_G_BAD_MSG_CTX = 35224069,
	GSS_KRB5_S_G_WRONG_SIZE = 35224070,
	GSS_KRB5_S_G_BAD_USAGE = 35224071,
	GSS_KRB5_S_G_UNKNOWN_QOP = 35224072,
	GSS_KRB5_S_KG_CCACHE_NOMATCH = 35224192,
	GSS_KRB5_S_KG_KEYTAB_NOMATCH = 35224193,
	GSS_KRB5_S_KG_TGT_MISSING = 35224194,
	GSS_KRB5_S_KG_NO_SUBKEY = 35224195,
	GSS_KRB5_S_KG_CONTEXT_ESTABLISHED = 35224196,
	GSS_KRB5_S_KG_BAD_SIGN_TYPE = 35224197,
	GSS_KRB5_S_KG_BAD_LENGTH = 35224198,
	GSS_KRB5_S_KG_CTX_INCOMPLETE = 35224199,
	GSS_KRB5_S_KG_INPUT_TOO_LONG = 35224200
} gk5_error_number;

#define ERROR_TABLE_BASE_gk5 35224064

#define COM_ERR_BINDDOMAIN_gk5 "heim_com_err35224064"

#endif /* __gkrb5_err_h__ */
