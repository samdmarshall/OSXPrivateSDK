#ifndef _CORECRYPTO_CCASN1_H_
#define _CORECRYPTO_CCASN1_H_

typedef struct ccoid * ccoid_t;

#define CCASN1_EOL               0x00
#define CCASN1_BOOLEAN           0x01
#define CCASN1_INTEGER           0x02
#define CCASN1_BIT_STRING        0x03
#define CCASN1_OCTET_STRING      0x04
#define CCASN1_NULL              0x05
#define CCASN1_OBJECT_IDENTIFIER 0x06
#define CCASN1_OBJECT_DESCRIPTOR 0x07
                              // 0x08 is skipped
#define CCASN1_REAL              0x09
#define CCASN1_ENUMERATED        0x0a
#define CCASN1_EMBEDDED_PDV      0x0b
#define CCASN1_UTF8_STRING       0x0c
                              // 0x0d
#define CCASN1_SEQUENCE          0x10
#define CCASN1_SET               0x11
#define CCASN1_NUMERIC_STRING    0x12
#define CCASN1_PRINTABLE_STRING  0x13
#define CCASN1_T61_STRING        0x14
#define CCASN1_VIDEOTEX_STRING   0x15
#define CCASN1_IA5_STRING        0x16
#define CCASN1_UTC_TIME          0x17
#define CCASN1_GENERALIZED_TIME  0x18
#define CCASN1_GRAPHIC_STRING    0x19
#define CCASN1_VISIBLE_STRING    0x1a
#define CCASN1_GENERAL_STRING    0x1b
#define CCASN1_UNIVERSAL_STRING  0x1c
                              // 0x1d
#define CCASN1_BMP_STRING        0x1e
#define CCASN1_HIGH_TAG_NUMBER   0x1f

#define CCASN1_TAG_MASK          0xff
#define CCASN1_TAGNUM_MASK       0x1f
#define CCASN1_METHOD_MASK       0x20
#define CCASN1_PRIMITIVE         0x00
#define CCASN1_CONSTRUCTED       0x20

#define CCASN1_CLASS_MASK        0xc0
#define CCASN1_UNIVERSAL         0x00
#define CCASN1_APPLICATION       0x40
#define CCASN1_CONTEXT_SPECIFIC  0x80
#define CCASN1_PRIVATE           0xc0

#endif