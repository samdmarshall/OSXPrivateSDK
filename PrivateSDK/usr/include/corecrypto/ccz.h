#ifndef __CC_Z_H__
#define __CC_Z_H__

#include <corecrypto/cc.h>

typedef struct ccz ccz;

struct ccz_class {
	void *ctx;
	void* (*ccz_alloc)(void *ctx, size_t size);
	void* (*ccz_realloc)(void *ctx, size_t oldsize, void *p, size_t newsize);
	void (*ccz_free)(void *ctx, size_t oldsize, void *p);
};

extern size_t ccz_size(struct ccz_class *z);

extern void ccz_init(struct ccz_class *z, ccz *ccz);
	
extern void ccz_zero(struct ccz_class *z);

extern void ccz_free(ccz *ccz);

extern void ccz_set(ccz *dst, ccz *src);

extern uint32_t ccz_trailing_zeros(ccz *z);

extern uint32_t ccz_bitlen(ccz *z);

extern uint32_t ccz_write_uint_size(ccz *z);

extern void ccz_read_uint(ccz *z, size_t len, void *s);

extern void ccz_write_uint(ccz *z, size_t len, void* to);

extern size_t ccz_write_radix_size(ccz *z, size_t rad);

extern void ccz_write_radix(ccz *z, size_t len, void* to, size_t rad);

extern int ccz_cmp(ccz *n1, ccz *n2);

extern int ccz_cmpi(ccz *z, uint32_t num);

extern void ccz_neg(ccz *z);

extern void ccz_seti(ccz *z, uint32_t num);

#endif