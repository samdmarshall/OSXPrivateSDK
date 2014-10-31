#ifndef __CC_HKDF_H__
#define __CC_HKDF_H__

#include <corecrypto/ccdigest.h>

extern int cchkdf(const struct ccdigest_info *di, size_t keyDerivationKeyLen, const void *keyDerivationKey, size_t saltLen, const void *salt, size_t contextLen, const void *context, size_t derivedKeyLen, void *derivedKey);

#endif