/* Generated from /Users/sam/Downloads/Heimdal-323.92.1/lib/gssapi/spnego/spnego.asn1 */
/* Do not edit */

#ifndef __spnego_asn1_h__
#define __spnego_asn1_h__

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
MechType ::= OBJECT IDENTIFIER
*/

typedef heim_oid MechType;

ASN1EXP int    ASN1CALL decode_MechType(const unsigned char *, size_t, MechType *, size_t *);
ASN1EXP int    ASN1CALL encode_MechType(unsigned char *, size_t, const MechType *, size_t *);
ASN1EXP size_t ASN1CALL length_MechType(const MechType *);
ASN1EXP int    ASN1CALL copy_MechType  (const MechType *, MechType *);
ASN1EXP void   ASN1CALL free_MechType  (MechType *);


/*
MechTypeList ::= SEQUENCE OF MechType
*/

typedef struct MechTypeList {
  unsigned int len;
  MechType *val;
} MechTypeList;

ASN1EXP int   ASN1CALL add_MechTypeList  (MechTypeList *, const MechType *);
ASN1EXP int   ASN1CALL remove_MechTypeList  (MechTypeList *, unsigned int);
ASN1EXP int    ASN1CALL decode_MechTypeList(const unsigned char *, size_t, MechTypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_MechTypeList(unsigned char *, size_t, const MechTypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_MechTypeList(const MechTypeList *);
ASN1EXP int    ASN1CALL copy_MechTypeList  (const MechTypeList *, MechTypeList *);
ASN1EXP void   ASN1CALL free_MechTypeList  (MechTypeList *);


/*
ContextFlags ::= BIT STRING {
  delegFlag(0),
  mutualFlag(1),
  replayFlag(2),
  sequenceFlag(3),
  anonFlag(4),
  confFlag(5),
  integFlag(6)
}
*/

typedef struct ContextFlags {
  unsigned int delegFlag:1;
  unsigned int mutualFlag:1;
  unsigned int replayFlag:1;
  unsigned int sequenceFlag:1;
  unsigned int anonFlag:1;
  unsigned int confFlag:1;
  unsigned int integFlag:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} ContextFlags;


unsigned ContextFlags2int(ContextFlags);
ContextFlags int2ContextFlags(unsigned);
extern const struct units *asn1_ContextFlags_table_units;
#define asn1_ContextFlags_units() (asn1_ContextFlags_table_units)
ASN1EXP int    ASN1CALL decode_ContextFlags(const unsigned char *, size_t, ContextFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_ContextFlags(unsigned char *, size_t, const ContextFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_ContextFlags(const ContextFlags *);
ASN1EXP int    ASN1CALL copy_ContextFlags  (const ContextFlags *, ContextFlags *);
ASN1EXP void   ASN1CALL free_ContextFlags  (ContextFlags *);


/*
NegHints ::= SEQUENCE {
  hintName        [0] GeneralString OPTIONAL,
  hintAddress     [1] OCTET STRING OPTIONAL,
}
*/

typedef struct NegHints {
  heim_general_string *hintName;
  heim_octet_string *hintAddress;
} NegHints;

ASN1EXP int    ASN1CALL decode_NegHints(const unsigned char *, size_t, NegHints *, size_t *);
ASN1EXP int    ASN1CALL encode_NegHints(unsigned char *, size_t, const NegHints *, size_t *);
ASN1EXP size_t ASN1CALL length_NegHints(const NegHints *);
ASN1EXP int    ASN1CALL copy_NegHints  (const NegHints *, NegHints *);
ASN1EXP void   ASN1CALL free_NegHints  (NegHints *);


/*
NegTokenInitWin ::= SEQUENCE {
  mechTypes       [0] MechTypeList,
  reqFlags        [1] ContextFlags OPTIONAL,
  mechToken       [2] OCTET STRING OPTIONAL,
  negHints        [3] NegHints OPTIONAL,
}
*/

typedef struct NegTokenInitWin {
  MechTypeList mechTypes;
  ContextFlags *reqFlags;
  heim_octet_string *mechToken;
  NegHints *negHints;
} NegTokenInitWin;

ASN1EXP int    ASN1CALL decode_NegTokenInitWin(const unsigned char *, size_t, NegTokenInitWin *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenInitWin(unsigned char *, size_t, const NegTokenInitWin *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenInitWin(const NegTokenInitWin *);
ASN1EXP int    ASN1CALL copy_NegTokenInitWin  (const NegTokenInitWin *, NegTokenInitWin *);
ASN1EXP void   ASN1CALL free_NegTokenInitWin  (NegTokenInitWin *);


/*
NegTokenInit ::= SEQUENCE {
  mechTypes       [0] MechTypeList,
  reqFlags        [1] ContextFlags OPTIONAL,
  mechToken       [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

typedef struct NegTokenInit {
  MechTypeList mechTypes;
  ContextFlags *reqFlags;
  heim_octet_string *mechToken;
  heim_octet_string *mechListMIC;
} NegTokenInit;

ASN1EXP int    ASN1CALL decode_NegTokenInit(const unsigned char *, size_t, NegTokenInit *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenInit(unsigned char *, size_t, const NegTokenInit *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenInit(const NegTokenInit *);
ASN1EXP int    ASN1CALL copy_NegTokenInit  (const NegTokenInit *, NegTokenInit *);
ASN1EXP void   ASN1CALL free_NegTokenInit  (NegTokenInit *);


/*
NegResultEnum ::= INTEGER {
  accept_completed(0),
  accept_incomplete(1),
  reject(2),
  request_mic(3)
}
*/

typedef enum NegResultEnum {
  accept_completed = 0,
  accept_incomplete = 1,
  reject = 2,
  request_mic = 3
} NegResultEnum;

ASN1EXP int    ASN1CALL decode_NegResultEnum(const unsigned char *, size_t, NegResultEnum *, size_t *);
ASN1EXP int    ASN1CALL encode_NegResultEnum(unsigned char *, size_t, const NegResultEnum *, size_t *);
ASN1EXP size_t ASN1CALL length_NegResultEnum(const NegResultEnum *);
ASN1EXP int    ASN1CALL copy_NegResultEnum  (const NegResultEnum *, NegResultEnum *);
ASN1EXP void   ASN1CALL free_NegResultEnum  (NegResultEnum *);


/*
NegTokenResp ::= SEQUENCE {
  negResult       [0] NegResultEnum OPTIONAL,
  supportedMech   [1] MechType OPTIONAL,
  responseToken   [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

typedef struct NegTokenResp {
  NegResultEnum *negResult;
  MechType *supportedMech;
  heim_octet_string *responseToken;
  heim_octet_string *mechListMIC;
} NegTokenResp;

ASN1EXP int    ASN1CALL decode_NegTokenResp(const unsigned char *, size_t, NegTokenResp *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenResp(unsigned char *, size_t, const NegTokenResp *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenResp(const NegTokenResp *);
ASN1EXP int    ASN1CALL copy_NegTokenResp  (const NegTokenResp *, NegTokenResp *);
ASN1EXP void   ASN1CALL free_NegTokenResp  (NegTokenResp *);


/*
NegotiationToken ::= CHOICE {
  negTokenInit    [0] NegTokenInit,
  negTokenResp    [1] NegTokenResp,
}
*/

typedef struct NegotiationToken {
  enum NegotiationToken_enum {
invalid_choice_NegotiationToken = 0,
    choice_NegotiationToken_negTokenInit = 1,
    choice_NegotiationToken_negTokenResp
  } element;
  union {
    NegTokenInit negTokenInit;
    NegTokenResp negTokenResp;
  } u;
} NegotiationToken;

ASN1EXP int    ASN1CALL decode_NegotiationToken(const unsigned char *, size_t, NegotiationToken *, size_t *);
ASN1EXP int    ASN1CALL encode_NegotiationToken(unsigned char *, size_t, const NegotiationToken *, size_t *);
ASN1EXP size_t ASN1CALL length_NegotiationToken(const NegotiationToken *);
ASN1EXP int    ASN1CALL copy_NegotiationToken  (const NegotiationToken *, NegotiationToken *);
ASN1EXP void   ASN1CALL free_NegotiationToken  (NegotiationToken *);


/*
NegotiationTokenWin ::= CHOICE {
  negTokenInit    [0] NegTokenInitWin,
}
*/

typedef struct NegotiationTokenWin {
  enum NegotiationTokenWin_enum {
invalid_choice_NegotiationTokenWin = 0,
    choice_NegotiationTokenWin_negTokenInit = 1
  } element;
  union {
    NegTokenInitWin negTokenInit;
  } u;
} NegotiationTokenWin;

ASN1EXP int    ASN1CALL decode_NegotiationTokenWin(const unsigned char *, size_t, NegotiationTokenWin *, size_t *);
ASN1EXP int    ASN1CALL encode_NegotiationTokenWin(unsigned char *, size_t, const NegotiationTokenWin *, size_t *);
ASN1EXP size_t ASN1CALL length_NegotiationTokenWin(const NegotiationTokenWin *);
ASN1EXP int    ASN1CALL copy_NegotiationTokenWin  (const NegotiationTokenWin *, NegotiationTokenWin *);
ASN1EXP void   ASN1CALL free_NegotiationTokenWin  (NegotiationTokenWin *);


#endif /* __spnego_asn1_h__ */
