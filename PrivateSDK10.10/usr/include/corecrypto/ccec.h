#ifndef __CCEC__
#define __CCEC__

#include <corecrypto/ccn.h>
#include <corecrypto/cc.h>

#define ccec_cp_n(q) q


#define ccec_full_ctx_decl(_size_, _name_) cc_ctx_decl(struct ccec_full_ctx_t *, _size_, _name_)
#define ccec_pub_ctx_decl (_size_, _name_) cc_ctx_decl(ccec_pub_ctx_t,  _size_, _name_)

//#define ccec_ctx_init(p, q)

//#define ccec_ctx_cp(q)     (q)
//#define ccec_ctx_k(q)      (q)
//#define ccec_ctx_n(q)      (q)
//#define ccec_ctx_x(q)      (q)
//#define ccec_ctx_size(q)   (q)
#define ccec_ctx_bitlen(q) (q)

//#define ccec_export_pub_size(q) (q)

struct ccoid_t {
	int oid;
};
typedef struct ccoid_t ccoid_t;

struct ccec_const_cp_t {
	void * zp;
};
typedef struct ccec_const_cp_t ccec_const_cp_t;

struct ccec_pub_ctx_t {
	void *pub;
	void *_pub;
	void *_full;
};
typedef struct ccec_pub_ctx_t ccec_pub_ctx_t;

struct ccec_full_ctx;
typedef struct ccec_full_ctx ccec_full_ctx;

struct ccec_full_ctx_t {
	void *hdr;
	ccec_full_ctx *_full;
	void *pub;
};
typedef struct ccec_full_ctx_t ccec_full_ctx_t;


extern cc_size ccec_ctx_n(ccec_pub_ctx_t pub);
extern ccec_const_cp_t ccec_ctx_cp(ccec_pub_ctx_t pub);
extern size_t ccec_pub_ctx_size(size_t pub);
extern size_t ccec_full_ctx_size(size_t full);

extern cc_unit * ccec_ctx_k(ccec_full_ctx_t fullkey);
extern void ccec_ctx_init(ccec_const_cp_t cp, ccec_full_ctx_t fullkey);
extern size_t ccec_ctx_size(ccec_pub_ctx_t pub);
extern uint8_t* ccec_ctx_x(ccec_pub_ctx_t ecPubkey);
extern uint8_t* ccec_ctx_y(ccec_pub_ctx_t ecPubkey);

extern size_t ccec_x963_import_pub_size(CFIndex length);
extern size_t ccec_x963_import_priv_size(CFIndex length);
void *ccec_x963_export;

extern int ccec_keysize_is_supported(size_t keysize);

extern int ccec_import_pub(ccec_const_cp_t cp, uint8_t* key, CFIndex keyLength, ccec_pub_ctx_t pubkey);

extern size_t ccec_export_pub_size(ccec_pub_ctx_t pubkey);
extern void ccec_export_pub(ccec_pub_ctx_t pubkey, UInt8 *ptr);

extern int ccec_der_import_priv(ccec_const_cp_t cp, CFIndex keyDataLength, const uint8_t *keyData, ccec_full_ctx_t fullkey);
extern int ccec_der_import_priv_keytype(CFIndex keyDataLength, const uint8_t *keyData, ccoid_t *oid, size_t *n);

extern ccec_const_cp_t ccec_curve_for_length_lookup(size_t n, ...);

extern int ccoid_equal(ccoid_t oid1, ccoid_t oid2);

extern int ccec_verify(ccec_pub_ctx_t pubkey, size_t signedDataLen, const uint8_t *signedData, size_t sigLen, const uint8_t *sig, bool *valid);
extern int ccec_generate_key(ccec_const_cp_t cp, struct ccrng_state *ccrng_seckey, ccec_full_ctx_t fullkey);
extern int ccec_sign(ccec_full_ctx_t fullkey, size_t dataToSignLen, const uint8_t *dataToSign, size_t *sigLen, uint8_t *sig, struct ccrng_state *ccrng_seckey);
int ccec_unwrap_key(ccec_full_ctx_t fullkey, struct ccrng_state *rng_seckey, const struct ccdigest_info *(*digest_lookup)(unsigned long oid_size, const void *oid), size_t cipherTextLen, const void *cipherText, size_t *plainTextLen, void *plainText);
int ccec_wrap_key(ccec_pub_ctx_t pubkey, const struct ccdigest_info *digestInfo, size_t plainTextLen, const uint8_t *plainText, size_t *cipherTextLen, uint8_t *cipherText);
void *ccec_wrap_key_size;
void ccec_compute_key(void *key1, void *key2, size_t *keyLenOut, cc_unit *keyOut);
void *ccec_get_fullkey_components;
void *ccec_get_pubkey_components;
void *ccec_make_priv;
void *ccec_make_pub;

extern ccec_const_cp_t ccec_get_cp(size_t keysize);

extern ccec_const_cp_t ccec_cp_192();
extern ccec_const_cp_t ccec_cp_256();
extern ccec_const_cp_t ccec_cp_224();
extern ccec_const_cp_t ccec_cp_384();
extern ccec_const_cp_t ccec_cp_521();


#endif