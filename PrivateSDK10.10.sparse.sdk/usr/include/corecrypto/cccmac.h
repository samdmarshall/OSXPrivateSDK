#ifndef __CC_CMAC_H__
#define __CC_CMAC_H__

typedef struct cccmac_ctx_t {
	void *b;
} cccmac_ctx_t;

extern void cccmac(const struct ccmode_cbc *ccaes_cbc_encrypt_mode, const void *key, size_t dataLength, const uint8_t *data, void *macOut);
extern size_t cccmac_ctx_size(const struct ccmode_cbc *cbc);
extern void cccmac_init(const struct ccmode_cbc *cbc, cccmac_ctx_t ctxptr, const void *key);
extern void cccmac_block_update(const struct ccmode_cbc *cbc, cccmac_ctx_t ctxptr, size_t dataSize, const void *data);
extern void cccmac_final(const struct ccmode_cbc *cbc, cccmac_ctx_t ctxptr, size_t pos, uint8_t buf[16], void *macOut);

#endif