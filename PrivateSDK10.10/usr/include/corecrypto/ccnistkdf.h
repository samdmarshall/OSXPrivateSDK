#ifndef __CC_NISTKDF_H__
#define __CC_NISTKDF_H__

#include <corecrypto/ccdigest.h>

extern int ccnistkdf_ctr_hmac(const struct ccdigest_info *di, size_t keyDerivationKeyLen, const void *keyDerivationKey, size_t labelLenm, const void *label, size_t contextLen, const void *context, size_t derivedKeyLen, void *derivedKey);

extern int ccnistkdf_ctr_hmac_fixed(const struct ccdigest_info *di, size_t keyDerivationKeyLen, const void *keyDerivationKey, size_t contextLen, const void *context, size_t derivedKeyLen, void *derivedKey);

#endif