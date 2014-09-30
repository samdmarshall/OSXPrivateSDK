#ifndef	_secagentrequest_user_
#define	_secagentrequest_user_

/* Module secagentrequest */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN VOUCHER CODE */

#ifndef KERNEL
#if defined(__has_include)
#if __has_include(<mach/mig_voucher_support.h>)
#ifndef USING_VOUCHERS
#define USING_VOUCHERS
#endif
#ifndef __VOUCHER_FORWARD_TYPE_DECLS__
#define __VOUCHER_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern boolean_t voucher_mach_msg_set(mach_msg_header_t *msg) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif // __VOUCHER_FORWARD_TYPE_DECLS__
#endif // __has_include(<mach/mach_voucher_types.h>)
#endif // __has_include
#endif // !KERNEL
	
/* END VOUCHER CODE */


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

#ifndef	secagentrequest_MSG_COUNT
#define	secagentrequest_MSG_COUNT	8
#endif	/* secagentrequest_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <security_agent_client/sa_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* SimpleRoutine create */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_create
(
	mach_port_t agentPort,
	mach_port_t instanceReplyPort,
	SessionId sessionId,
	AuthorizationString pluginId,
	AuthorizationString mechanismId
);

/* SimpleRoutine invoke */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_invoke
(
	mach_port_t instanceRequestPort,
	AuthorizationValueVectorPtr argumentsIn,
	mach_msg_type_number_t argumentsInCnt,
	AuthorizationValueVectorPtr argumentsInBase,
	AuthorizationItemSetPtr hintsIn,
	mach_msg_type_number_t hintsInCnt,
	AuthorizationItemSetPtr hintsInBase,
	AuthorizationItemSetPtr contextIn,
	mach_msg_type_number_t contextInCnt,
	AuthorizationItemSetPtr contextInBase
);

/* SimpleRoutine deactivate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_deactivate
(
	mach_port_t instanceRequestPort
);

/* SimpleRoutine destroy */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_destroy
(
	mach_port_t instanceRequestPort
);

/* SimpleRoutine terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_terminate
(
	mach_port_t agentPort
);

/* Routine txStart */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_txStart
(
	mach_port_t agentPort
);

/* SimpleRoutine txEnd */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_txEnd
(
	mach_port_t agentPort
);

/* SimpleRoutine contact */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_request_client_contact
(
	mach_port_t agentPort,
	mach_port_t clientPort,
	mach_port_t jobPort,
	mach_port_t processBootstrap,
	mach_port_t userPrefs
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

#ifndef __Request__secagentrequest_subsystem__defined
#define __Request__secagentrequest_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t instanceReplyPort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		SessionId sessionId;
		mach_msg_type_number_t pluginIdOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pluginIdCnt;
		char pluginId[1024];
		mach_msg_type_number_t mechanismIdOffset; /* MiG doesn't use it */
		mach_msg_type_number_t mechanismIdCnt;
		char mechanismId[1024];
	} __Request__create_t;
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
		mach_msg_ool_descriptor_t argumentsIn;
		mach_msg_ool_descriptor_t hintsIn;
		mach_msg_ool_descriptor_t contextIn;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t argumentsInCnt;
		AuthorizationValueVectorPtr argumentsInBase;
		mach_msg_type_number_t hintsInCnt;
		AuthorizationItemSetPtr hintsInBase;
		mach_msg_type_number_t contextInCnt;
		AuthorizationItemSetPtr contextInBase;
	} __Request__invoke_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__deactivate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__destroy_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__terminate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__txStart_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__txEnd_t;
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
		mach_msg_port_descriptor_t clientPort;
		mach_msg_port_descriptor_t jobPort;
		mach_msg_port_descriptor_t processBootstrap;
		mach_msg_port_descriptor_t userPrefs;
		/* end of the kernel processed data */
	} __Request__contact_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__secagentrequest_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__sa_request_client_secagentrequest_subsystem__defined
#define __RequestUnion__sa_request_client_secagentrequest_subsystem__defined
union __RequestUnion__sa_request_client_secagentrequest_subsystem {
	__Request__create_t Request_sa_request_client_create;
	__Request__invoke_t Request_sa_request_client_invoke;
	__Request__deactivate_t Request_sa_request_client_deactivate;
	__Request__destroy_t Request_sa_request_client_destroy;
	__Request__terminate_t Request_sa_request_client_terminate;
	__Request__txStart_t Request_sa_request_client_txStart;
	__Request__txEnd_t Request_sa_request_client_txEnd;
	__Request__contact_t Request_sa_request_client_contact;
};
#endif /* !__RequestUnion__sa_request_client_secagentrequest_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__secagentrequest_subsystem__defined
#define __Reply__secagentrequest_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__create_t;
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
	} __Reply__invoke_t;
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
	} __Reply__deactivate_t;
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
	} __Reply__destroy_t;
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
	} __Reply__terminate_t;
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
	} __Reply__txStart_t;
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
	} __Reply__txEnd_t;
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
	} __Reply__contact_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__secagentrequest_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__sa_request_client_secagentrequest_subsystem__defined
#define __ReplyUnion__sa_request_client_secagentrequest_subsystem__defined
union __ReplyUnion__sa_request_client_secagentrequest_subsystem {
	__Reply__create_t Reply_sa_request_client_create;
	__Reply__invoke_t Reply_sa_request_client_invoke;
	__Reply__deactivate_t Reply_sa_request_client_deactivate;
	__Reply__destroy_t Reply_sa_request_client_destroy;
	__Reply__terminate_t Reply_sa_request_client_terminate;
	__Reply__txStart_t Reply_sa_request_client_txStart;
	__Reply__txEnd_t Reply_sa_request_client_txEnd;
	__Reply__contact_t Reply_sa_request_client_contact;
};
#endif /* !__RequestUnion__sa_request_client_secagentrequest_subsystem__defined */

#ifndef subsystem_to_name_map_secagentrequest
#define subsystem_to_name_map_secagentrequest \
    { "create", 1100 },\
    { "invoke", 1101 },\
    { "deactivate", 1102 },\
    { "destroy", 1103 },\
    { "terminate", 1104 },\
    { "txStart", 1105 },\
    { "txEnd", 1106 },\
    { "contact", 1107 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _secagentrequest_user_ */
