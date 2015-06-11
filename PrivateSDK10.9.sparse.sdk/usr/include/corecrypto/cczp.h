#ifndef _CORECRYPTO_CC_ZP_H_
#define _CORECRYPTO_CC_ZP_H_

#include <corecrypto/cc.h>

// TODO: a better name
struct cczp_actual_t {
    cc_size n;
    int (* mod_prime)(struct cczp_actual_t *grp, cc_unit* r, const cc_unit* s);
    cc_unit data[0];
    // The data field is actually:
    //   cc_unit prime[n];
    //   cc_unit recip[n + 1];
};

// Transparent union is to make the mod_prime field work above. Find a better way!
typedef union {
    cc_unit *u;
    struct cczp_actual_t *zp;
} cczp_t __attribute__((transparent_union));

// FIXME: this isn't right, since we're ignoring the size. It will likely bite us
// later when we go overwrite memory that isn't ours.
#define cczp_decl_n(_size_, _name_)   \
	cczp_t _name_

#define CCZP_N(q)     (q).zp->n
#define CCZP_PRIME(q) (q).zp->data
#define CCZP_RECIP(q) ((q).zp->data + CCZP_N(q))

#define cczp_n(q)     (q).zp->n
#define cczp_prime(q) (q).zp->data
#define cczp_recip(q) ((q).zp->data + cczp_n(q))

/* 
Return types might not be correct, but they don't need to be. Commented-out
means I haven't yet bothered figuring out the signature.
*/

int cczp_init(cczp_t grp);

int cczp_add(cczp_t grp,  cc_unit* r, const cc_unit* s, const cc_unit* t);
int cczp_sub(cczp_t grp,  cc_unit* r, const cc_unit* s, const cc_unit* t);
int cczp_mul(cczp_t grp,  cc_unit* r, const cc_unit* s, const cc_unit* t);
int cczp_div(cczp_t grp,  cc_unit* r, const cc_unit* s, const cc_unit* t);
int cczp_div2(cczp_t grp, cc_unit* r, const cc_unit* s);

int cczp_sqr(cczp_t grp, cc_unit* r, const cc_unit* s);

//int cczp_powern;
int cczp_power(cczp_t grp, cc_unit* res, const cc_unit* base, const cc_unit* exponent);

int cczp_mod(cczp_t grp,  cc_unit* r, const cc_unit* s);
int cczp_modn(cczp_t grp, cc_unit* r, const cc_unit* s, const cc_unit* t);

int cczp_mod_inv(cczp_t grp, cc_unit* r, const cc_unit* s);
//int cczp_mod_inv_slow;
int cczp_mod_inv_slown(cczp_t grp, cc_unit* r, const cc_unit* s, const cc_unit* t);


int cczp_crt_power(cczp_t grp, cc_unit* r, const cc_unit* s, cczp_t grp1, const cc_unit* exp, const cc_unit* t);
//int cczp_rsa931_prime_from_components;
int cczp_find_next_prime(cczp_t grp, cc_size xn, const cc_unit* x);
int cczp_rabin_miller(cczp_t grp, int k);
//int cczp_random_prime;

#endif /* _CORECRYPTO_CC_ZP_H_ */
