/*
 * Copyright (c) 2006 Apple Computer, Inc. All rights reserved.
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

#ifndef	_FSLOG_H_
#define _FSLOG_H_

#include <sys/syslog.h>
#include <sys/mount.h>
#include <machine/limits.h>


/* Keys used by FSLog */
#define FSLOG_KEY_FACILITY	"Facility"	/* Facility generating messages */
#define FSLOG_KEY_LEVEL		"Level"		/* Priority level */
#define FSLOG_KEY_MSG_ID	"FSLogMsgID"	/* Message ID */
#define FSLOG_KEY_MSG_ORDER	"FSLogMsgOrder"	/* Message Order */
#define FSLOG_KEY_READ_UID	"ReadUID"	/* Allow read access to this UID only */

/* Values for message order (FSLOG_KEY_MSG_ORDER) */
#define FSLOG_VAL_ORDER_FIRST	"First"		
#define FSLOG_VAL_ORDER_MIDDLE	"Middle"
#define FSLOG_VAL_ORDER_LAST 	"Last"

/* Keys for IO/FS logging using FSLog */
#define	FSLOG_KEY_ERR_TYPE	"ErrType"	/* Type of problem (IO, FS Corruption) */
#define	FSLOG_KEY_ERRNO		"ErrNo"		/* Error number (Integer) */
#define	FSLOG_KEY_IOTYPE	"IOType"	/* Type of IO (Read/Write) */
#define	FSLOG_KEY_PHYS_BLKNUM	"PBlkNum"	/* Physical block number */
#define	FSLOG_KEY_LOG_BLKNUM	"LBlkNum"	/* Logical block number */
#define	FSLOG_KEY_DEVNODE	"DevNode"	/* Device node (f_mntfromname) */
#define	FSLOG_KEY_PATH		"Path"		/* File system path */
#define	FSLOG_KEY_MNTPT		"MountPt"	/* Mount point */

/* Values used by FSLog */
#define FSLOG_VAL_FACILITY	"com.apple.system.fs" /* Facility generating messages */
#define FSLOG_VAL_LEVEL		LOG_ERR		/* Priority level */
#define FSLOG_VAL_READ_UID	0		/* Allow read access to root only */

/* Values for type of error (FSLOG_KEY_ERR_TYPE) */
#define	FSLOG_VAL_ERR_TYPE_IO	"IO"		/* IO error */
#define	FSLOG_VAL_ERR_TYPE_FS	"FS"		/* FS error */

/* Values for type of operation (FSLOG_KEY_IOTYPE) */
#define	FSLOG_VAL_IOTYPE_READ	"Read"
#define	FSLOG_VAL_IOTYPE_WRITE	"Write"

#endif /* !_FSLOG_H_ */
