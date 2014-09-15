#ifndef __CCRSA_PRIV_H__
#define __CCRSA_PRIV_H__

extern void ccrsa_oaep_encode(const struct ccdigest_info *ccsha1_di, struct ccrng_state *rng, size_t buffer_size, cc_unit *buffer, CFIndex data_length, const UInt8 *data_ptr);

extern int ccrsa_oaep_decode(const struct ccdigest_info *ccsha1_di, size_t *text_length, UInt8 *text_buffer, size_t length, cc_unit *buffer);

#endif