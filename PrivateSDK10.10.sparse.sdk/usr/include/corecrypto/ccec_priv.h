#ifndef __CC_EC_PRIV_H__
#define __CC_EC_PRIV_H__

#include <corecrypto/ccec.h>

extern size_t ccec_compact_export_size(bool val, void* pub_key);

extern void ccec_compact_export(bool val, uint8_t* bytes, void* pub_key);

//extern void ccec_ctx_init(ccec_const_cp_t ccec_cp, struct ccec_full_ctx_t *key);

#endif