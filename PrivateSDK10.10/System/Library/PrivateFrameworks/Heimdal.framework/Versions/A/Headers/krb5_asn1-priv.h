int    ASN1CALL decode_MESSAGE_TYPE(const unsigned char *, size_t, MESSAGE_TYPE *, size_t *);
int    ASN1CALL encode_MESSAGE_TYPE(unsigned char *, size_t, const MESSAGE_TYPE *, size_t *);
size_t ASN1CALL length_MESSAGE_TYPE(const MESSAGE_TYPE *);
int    ASN1CALL copy_MESSAGE_TYPE  (const MESSAGE_TYPE *, MESSAGE_TYPE *);
void   ASN1CALL free_MESSAGE_TYPE  (MESSAGE_TYPE *);


int    ASN1CALL decode_krb5uint32(const unsigned char *, size_t, krb5uint32 *, size_t *);
int    ASN1CALL encode_krb5uint32(unsigned char *, size_t, const krb5uint32 *, size_t *);
size_t ASN1CALL length_krb5uint32(const krb5uint32 *);
int    ASN1CALL copy_krb5uint32  (const krb5uint32 *, krb5uint32 *);
void   ASN1CALL free_krb5uint32  (krb5uint32 *);


int    ASN1CALL decode_krb5int32(const unsigned char *, size_t, krb5int32 *, size_t *);
int    ASN1CALL encode_krb5int32(unsigned char *, size_t, const krb5int32 *, size_t *);
size_t ASN1CALL length_krb5int32(const krb5int32 *);
int    ASN1CALL copy_krb5int32  (const krb5int32 *, krb5int32 *);
void   ASN1CALL free_krb5int32  (krb5int32 *);


int    ASN1CALL decode_APOptions(const unsigned char *, size_t, APOptions *, size_t *);
int    ASN1CALL encode_APOptions(unsigned char *, size_t, const APOptions *, size_t *);
size_t ASN1CALL length_APOptions(const APOptions *);
int    ASN1CALL copy_APOptions  (const APOptions *, APOptions *);
void   ASN1CALL free_APOptions  (APOptions *);


int    ASN1CALL decode_KDC_REQ(const unsigned char *, size_t, KDC_REQ *, size_t *);
int    ASN1CALL encode_KDC_REQ(unsigned char *, size_t, const KDC_REQ *, size_t *);
size_t ASN1CALL length_KDC_REQ(const KDC_REQ *);
int    ASN1CALL copy_KDC_REQ  (const KDC_REQ *, KDC_REQ *);
void   ASN1CALL free_KDC_REQ  (KDC_REQ *);


int    ASN1CALL decode_SAMFlags(const unsigned char *, size_t, SAMFlags *, size_t *);
int    ASN1CALL encode_SAMFlags(unsigned char *, size_t, const SAMFlags *, size_t *);
size_t ASN1CALL length_SAMFlags(const SAMFlags *);
int    ASN1CALL copy_SAMFlags  (const SAMFlags *, SAMFlags *);
void   ASN1CALL free_SAMFlags  (SAMFlags *);


int    ASN1CALL decode_PA_SAM_CHALLENGE_2_BODY(const unsigned char *, size_t, PA_SAM_CHALLENGE_2_BODY *, size_t *);
int    ASN1CALL encode_PA_SAM_CHALLENGE_2_BODY(unsigned char *, size_t, const PA_SAM_CHALLENGE_2_BODY *, size_t *);
size_t ASN1CALL length_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *);
int    ASN1CALL copy_PA_SAM_CHALLENGE_2_BODY  (const PA_SAM_CHALLENGE_2_BODY *, PA_SAM_CHALLENGE_2_BODY *);
void   ASN1CALL free_PA_SAM_CHALLENGE_2_BODY  (PA_SAM_CHALLENGE_2_BODY *);


int    ASN1CALL decode_FastOptions(const unsigned char *, size_t, FastOptions *, size_t *);
int    ASN1CALL encode_FastOptions(unsigned char *, size_t, const FastOptions *, size_t *);
size_t ASN1CALL length_FastOptions(const FastOptions *);
int    ASN1CALL copy_FastOptions  (const FastOptions *, FastOptions *);
void   ASN1CALL free_FastOptions  (FastOptions *);


int    ASN1CALL decode_KrbFastArmoredReq(const unsigned char *, size_t, KrbFastArmoredReq *, size_t *);
int    ASN1CALL encode_KrbFastArmoredReq(unsigned char *, size_t, const KrbFastArmoredReq *, size_t *);
size_t ASN1CALL length_KrbFastArmoredReq(const KrbFastArmoredReq *);
int    ASN1CALL copy_KrbFastArmoredReq  (const KrbFastArmoredReq *, KrbFastArmoredReq *);
void   ASN1CALL free_KrbFastArmoredReq  (KrbFastArmoredReq *);


int    ASN1CALL decode_KrbFastArmoredRep(const unsigned char *, size_t, KrbFastArmoredRep *, size_t *);
int    ASN1CALL encode_KrbFastArmoredRep(unsigned char *, size_t, const KrbFastArmoredRep *, size_t *);
size_t ASN1CALL length_KrbFastArmoredRep(const KrbFastArmoredRep *);
int    ASN1CALL copy_KrbFastArmoredRep  (const KrbFastArmoredRep *, KrbFastArmoredRep *);
void   ASN1CALL free_KrbFastArmoredRep  (KrbFastArmoredRep *);


int    ASN1CALL decode_KDCFastFlags(const unsigned char *, size_t, KDCFastFlags *, size_t *);
int    ASN1CALL encode_KDCFastFlags(unsigned char *, size_t, const KDCFastFlags *, size_t *);
size_t ASN1CALL length_KDCFastFlags(const KDCFastFlags *);
int    ASN1CALL copy_KDCFastFlags  (const KDCFastFlags *, KDCFastFlags *);
void   ASN1CALL free_KDCFastFlags  (KDCFastFlags *);


int    ASN1CALL decode_KDCFastPAState(const unsigned char *, size_t, KDCFastPAState *, size_t *);
int    ASN1CALL encode_KDCFastPAState(unsigned char *, size_t, const KDCFastPAState *, size_t *);
size_t ASN1CALL length_KDCFastPAState(const KDCFastPAState *);
int    ASN1CALL copy_KDCFastPAState  (const KDCFastPAState *, KDCFastPAState *);
void   ASN1CALL free_KDCFastPAState  (KDCFastPAState *);


