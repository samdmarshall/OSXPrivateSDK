#ifndef	_cshosting_user_
#define	_cshosting_user_

/* Module cshosting */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	cshosting_MSG_COUNT
#define	cshosting_MSG_COUNT	4
#endif	/* cshosting_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <securityd_client/ss_types.h>
#include <securityd_client/ucsp_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine findGuest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cshosting_client_findGuest
(
	mach_port_t sport,
	mach_port_t rport,
	OSStatus *rcode,
	SecGuestRef host,
	XMLBlob attributes,
	mach_msg_type_number_t attributesCnt,
	GuestChain *guest,
	mach_msg_type_number_t *guestCnt,
	mach_port_t *subhost
);

/* Routine guestStatus */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cshosting_client_guestStatus
(
	mach_port_t sport,
	mach_port_t rport,
	OSStatus *rcode,
	SecGuestRef guest,
	uint32 *status
);

/* Routine identifyGuest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cshosting_client_identifyGuest
(
	mach_port_t sport,
	mach_port_t rport,
	OSStatus *rcode,
	SecGuestRef guest,
	FilePathOut path,
	HashDataOut cdhash,
	uint32 *hashLength,
	XMLBlobOut *attributes,
	mach_msg_type_number_t *attributesCnt
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__cshosting_subsystem__defined
#define __Request__cshosting_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t attributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		SecGuestRef host;
		mach_msg_type_number_t attributesCnt;
	} __Request__findGuest_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		SecGuestRef guest;
	} __Request__guestStatus_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		SecGuestRef guest;
	} __Request__identifyGuest_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__cshosting_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__cshosting_client_cshosting_subsystem__defined
#define __RequestUnion__cshosting_client_cshosting_subsystem__defined
union __RequestUnion__cshosting_client_cshosting_subsystem {
	__Request__findGuest_t Request_cshosting_client_findGuest;
	__Request__guestStatus_t Request_cshosting_client_guestStatus;
	__Request__identifyGuest_t Request_cshosting_client_identifyGuest;
};
#endif /* !__RequestUnion__cshosting_client_cshosting_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__cshosting_subsystem__defined
#define __Reply__cshosting_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t guest;
		mach_msg_port_descriptor_t subhost;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		OSStatus rcode;
		mach_msg_type_number_t guestCnt;
	} __Reply__findGuest_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		OSStatus rcode;
		uint32 status;
	} __Reply__guestStatus_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t attributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		OSStatus rcode;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[1024];
		HashDataOut cdhash;
		uint32 hashLength;
		mach_msg_type_number_t attributesCnt;
	} __Reply__identifyGuest_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__cshosting_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__cshosting_client_cshosting_subsystem__defined
#define __ReplyUnion__cshosting_client_cshosting_subsystem__defined
union __ReplyUnion__cshosting_client_cshosting_subsystem {
	__Reply__findGuest_t Reply_cshosting_client_findGuest;
	__Reply__guestStatus_t Reply_cshosting_client_guestStatus;
	__Reply__identifyGuest_t Reply_cshosting_client_identifyGuest;
};
#endif /* !__RequestUnion__cshosting_client_cshosting_subsystem__defined */

#ifndef subsystem_to_name_map_cshosting
#define subsystem_to_name_map_cshosting \
    { "findGuest", 20000 },\
    { "guestStatus", 20001 },\
    { "identifyGuest", 20003 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _cshosting_user_ */
