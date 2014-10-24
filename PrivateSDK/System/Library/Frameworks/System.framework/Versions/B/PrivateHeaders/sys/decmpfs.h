/*
 * Copyright (c) 2008 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
#ifndef _SYS_DECMPFS_H_
#define _SYS_DECMPFS_H_ 1

#include <sys/kernel_types.h>

#define MAX_DECMPFS_XATTR_SIZE 3802

/*
 NOTE:  decmpfs can only be used by thread-safe filesystems
 */

#define DECMPFS_MAGIC 0x636d7066 /* cmpf */

#define DECMPFS_XATTR_NAME "com.apple.decmpfs" /* extended attribute to use for decmpfs */

typedef struct __attribute__((packed)) {
    /* this structure represents the xattr on disk; the fields below are little-endian */
    uint32_t compression_magic;
    uint32_t compression_type;     /* see the enum below */
    uint64_t uncompressed_size;
    unsigned char attr_bytes[0];   /* the bytes of the attribute after the header */
} decmpfs_disk_header;

typedef struct __attribute__((packed)) {
    /* this structure represents the xattr in memory; the fields below are host-endian */
    uint32_t attr_size;
    uint32_t compression_magic;
    uint32_t compression_type;
    uint64_t uncompressed_size;
    unsigned char attr_bytes[0];   /* the bytes of the attribute after the header */
} decmpfs_header;

/* compression_type values */
enum {
    CMP_Type1       = 1, /* uncompressed data in xattr */
    
    /* additional types defined in AppleFSCompression project */
    
    CMP_MAX         = 255 /* Highest compression_type supported */
};

typedef struct {
    void *buf;
    user_ssize_t size;
} decmpfs_vector;


#endif /* _SYS_DECMPFS_H_ */
