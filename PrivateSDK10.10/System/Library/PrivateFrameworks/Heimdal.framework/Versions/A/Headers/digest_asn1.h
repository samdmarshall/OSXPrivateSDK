/* Generated from /Users/sam/Projects/AOS-Downloader/projects/Heimdal-398.1.2/lib/asn1/digest.asn1 */
/* Do not edit */

#ifndef __digest_asn1_h__
#define __digest_asn1_h__

#include <stddef.h>
#include <time.h>

#ifndef __asn1_common_definitions__
#define __asn1_common_definitions__

#ifndef __HEIM_BASE_DATA__
#define __HEIM_BASE_DATA__ 1
struct heim_base_data {
    size_t length;
    void *data;
};
#endif

typedef struct heim_integer {
  size_t length;
  void *data;
  int negative;
} heim_integer;

typedef struct heim_base_data heim_octet_string;

typedef char *heim_general_string;

typedef char *heim_utf8_string;

typedef struct heim_base_data heim_printable_string;

typedef struct heim_base_data heim_ia5_string;

typedef struct heim_bmp_string {
  size_t length;
  uint16_t *data;
} heim_bmp_string;

typedef struct heim_universal_string {
  size_t length;
  uint32_t *data;
} heim_universal_string;

typedef char *heim_visible_string;

typedef struct heim_oid {
  size_t length;
  unsigned *components;
} heim_oid;

typedef struct heim_bit_string {
  size_t length;
  void *data;
} heim_bit_string;

typedef struct heim_base_data heim_any;
typedef struct heim_base_data heim_any_set;

#define ASN1_MALLOC_ENCODE(T, B, BL, S, L, R)                  \
  do {                                                         \
    (BL) = length_##T((S));                                    \
    (B) = malloc((BL));                                        \
    if((B) == NULL) {                                          \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      (R) = encode_##T(((unsigned char*)(B)) + (BL) - 1, (BL), \
                       (S), (L));                              \
      if((R) != 0) {                                           \
        free((B));                                             \
        (B) = NULL;                                            \
      }                                                        \
    }                                                          \
  } while (0)

#define ASN1_ENCODE_CFMutableData(_TYPE, _CFDATA, S, R)        \
  do {                                                         \
    size_t __length##_TYPE;			                  \
    size_t __size##_TYPE = length_##_TYPE((S));                \
    (_CFDATA) = CFDataCreateMutable(NULL, (__size##_TYPE));    \
    if((_CFDATA) == NULL) {                                    \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      CFDataSetLength((_CFDATA), (__size##_TYPE));             \
      (R) = encode_##_TYPE(((unsigned char*)(CFDataGetMutableBytePtr((_CFDATA)))) + (__size##_TYPE) - 1, (__size##_TYPE), \
                       (S), &(__length##_TYPE));               \
      if((R) != 0) {                                           \
        CFRelease((_CFDATA));                                  \
        (_CFDATA) = NULL;                                      \
      }                                                        \
      if((__size##_TYPE) != (__length##_TYPE)) {               \
        asn1_abort("internal asn1 error");                   \
      }                                                        \
    }                                                          \
  } while (0)

#ifdef _WIN32
#ifndef ASN1_LIB
#define ASN1EXP  __declspec(dllimport)
#else
#define ASN1EXP
#endif
#define ASN1CALL __stdcall
#else
#define ASN1EXP
#define ASN1CALL
#endif
struct units;

#endif

/*
NTLMInit ::= [APPLICATION 1] SEQUENCE {
  flags           [0] INTEGER (0..-1),
  hostname        [1]   UTF8String OPTIONAL,
  domain          [2]   UTF8String OPTIONAL,
}
*/

typedef struct NTLMInit {
  unsigned int flags;
  heim_utf8_string *hostname;
  heim_utf8_string *domain;
} NTLMInit;

ASN1EXP int    ASN1CALL decode_NTLMInit(const unsigned char *, size_t, NTLMInit *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMInit(unsigned char *, size_t, const NTLMInit *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMInit(const NTLMInit *);
ASN1EXP int    ASN1CALL copy_NTLMInit  (const NTLMInit *, NTLMInit *);
ASN1EXP void   ASN1CALL free_NTLMInit  (NTLMInit *);


/*
NTLMInitReply ::= SEQUENCE {
  ntlmNegFlags    [0] INTEGER (0..-1),
  opaque          [1] OCTET STRING,
  challenge       [2] OCTET STRING,
  targetinfo      [3] OCTET STRING,
}
*/

typedef struct NTLMInitReply {
  unsigned int ntlmNegFlags;
  heim_octet_string opaque;
  heim_octet_string challenge;
  heim_octet_string targetinfo;
} NTLMInitReply;

ASN1EXP int    ASN1CALL decode_NTLMInitReply(const unsigned char *, size_t, NTLMInitReply *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMInitReply(unsigned char *, size_t, const NTLMInitReply *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMInitReply(const NTLMInitReply *);
ASN1EXP int    ASN1CALL copy_NTLMInitReply  (const NTLMInitReply *, NTLMInitReply *);
ASN1EXP void   ASN1CALL free_NTLMInitReply  (NTLMInitReply *);


/*
NTLMRequest2 ::= [APPLICATION 2] SEQUENCE {
  loginUserName         [0]   UTF8String,
  loginDomainName       [1]   UTF8String,
  workstation           [2]   UTF8String,
  ntlmFlags             [3] INTEGER (0..-1),
  lmchallenge           [4] OCTET STRING,
  ntChallengeResponse   [5] OCTET STRING,
  lmChallengeResponse   [6] OCTET STRING,
  encryptedSessionKey   [7] OCTET STRING,
  t2targetname          [8]   UTF8String,
  acceptorUser          [9]   UTF8String,
  acceptorDomain        [10]   UTF8String,
}
*/

typedef struct NTLMRequest2 {
  heim_utf8_string loginUserName;
  heim_utf8_string loginDomainName;
  heim_utf8_string workstation;
  unsigned int ntlmFlags;
  heim_octet_string lmchallenge;
  heim_octet_string ntChallengeResponse;
  heim_octet_string lmChallengeResponse;
  heim_octet_string encryptedSessionKey;
  heim_utf8_string t2targetname;
  heim_utf8_string acceptorUser;
  heim_utf8_string acceptorDomain;
} NTLMRequest2;

ASN1EXP int    ASN1CALL decode_NTLMRequest2(const unsigned char *, size_t, NTLMRequest2 *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMRequest2(unsigned char *, size_t, const NTLMRequest2 *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMRequest2(const NTLMRequest2 *);
ASN1EXP int    ASN1CALL copy_NTLMRequest2  (const NTLMRequest2 *, NTLMRequest2 *);
ASN1EXP void   ASN1CALL free_NTLMRequest2  (NTLMRequest2 *);


/*
NTLMReply ::= SEQUENCE {
  success         [0] BOOLEAN,
  avflags         [1] INTEGER (0..-1),
  sessionkey      [2] OCTET STRING OPTIONAL,
  user            [3]   UTF8String,
  domain          [4]   UTF8String,
  uuid            [5] OCTET STRING OPTIONAL,
  targetinfo      [6] OCTET STRING,
  pac             [7] OCTET STRING OPTIONAL,
  ntlmFlags       [8] INTEGER (0..-1),
}
*/

typedef struct NTLMReply {
  int success;
  unsigned int avflags;
  heim_octet_string *sessionkey;
  heim_utf8_string user;
  heim_utf8_string domain;
  heim_octet_string *uuid;
  heim_octet_string targetinfo;
  heim_octet_string *pac;
  unsigned int ntlmFlags;
} NTLMReply;

ASN1EXP int    ASN1CALL decode_NTLMReply(const unsigned char *, size_t, NTLMReply *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMReply(unsigned char *, size_t, const NTLMReply *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMReply(const NTLMReply *);
ASN1EXP int    ASN1CALL copy_NTLMReply  (const NTLMReply *, NTLMReply *);
ASN1EXP void   ASN1CALL free_NTLMReply  (NTLMReply *);


#endif /* __digest_asn1_h__ */
