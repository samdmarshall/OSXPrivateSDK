#ifndef	_secagentreply_user_
#define	_secagentreply_user_

/* Module secagentreply */

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

#ifndef	secagentreply_MSG_COUNT
#define	secagentreply_MSG_COUNT	7
#endif	/* secagentreply_MSG_COUNT */

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


/* SimpleRoutine didCreate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_didCreate
(
	mach_port_t instanceReplyPort,
	mach_port_t instanceRequestPort
);

/* SimpleRoutine setResult */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_setResult
(
	mach_port_t instanceReplyPort,
	AuthorizationResult status,
	AuthorizationItemSetPtr hintsIn,
	mach_msg_type_number_t hintsInCnt,
	AuthorizationItemSetPtr hintsInBase,
	AuthorizationItemSetPtr contextIn,
	mach_msg_type_number_t contextInCnt,
	AuthorizationItemSetPtr contextInBase
);

/* SimpleRoutine requestInterrupt */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_requestInterrupt
(
	mach_port_t instanceReplyPort
);

/* SimpleRoutine didDeactivate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_didDeactivate
(
	mach_port_t instanceReplyPort
);

/* SimpleRoutine reportError */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_reportError
(
	mach_port_t instanceReplyPort,
	OSStatus status
);

/* SimpleRoutine didStartTx */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t sa_reply_client_didStartTx
(
	mach_port_t clientReplyPort,
	kern_return_t result
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

#ifndef __Request__secagentreply_subsystem__defined
#define __Request__secagentreply_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t instanceRequestPort;
		/* end of the kernel processed data */
	} __Request__didCreate_t;
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
		mach_msg_ool_descriptor_t hintsIn;
		mach_msg_ool_descriptor_t contextIn;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		AuthorizationResult status;
		mach_msg_type_number_t hintsInCnt;
		AuthorizationItemSetPtr hintsInBase;
		mach_msg_type_number_t contextInCnt;
		AuthorizationItemSetPtr contextInBase;
	} __Request__setResult_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__requestInterrupt_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__didDeactivate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		OSStatus status;
	} __Request__reportError_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t result;
	} __Request__didStartTx_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__secagentreply_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__sa_reply_client_secagentreply_subsystem__defined
#define __RequestUnion__sa_reply_client_secagentreply_subsystem__defined
union __RequestUnion__sa_reply_client_secagentreply_subsystem {
	__Request__didCreate_t Request_sa_reply_client_didCreate;
	__Request__setResult_t Request_sa_reply_client_setResult;
	__Request__requestInterrupt_t Request_sa_reply_client_requestInterrupt;
	__Request__didDeactivate_t Request_sa_reply_client_didDeactivate;
	__Request__reportError_t Request_sa_reply_client_reportError;
	__Request__didStartTx_t Request_sa_reply_client_didStartTx;
};
#endif /* !__RequestUnion__sa_reply_client_secagentreply_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__secagentreply_subsystem__defined
#define __Reply__secagentreply_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__didCreate_t;
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
	} __Reply__setResult_t;
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
	} __Reply__requestInterrupt_t;
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
	} __Reply__didDeactivate_t;
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
	} __Reply__reportError_t;
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
	} __Reply__didStartTx_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__secagentreply_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__sa_reply_client_secagentreply_subsystem__defined
#define __ReplyUnion__sa_reply_client_secagentreply_subsystem__defined
union __ReplyUnion__sa_reply_client_secagentreply_subsystem {
	__Reply__didCreate_t Reply_sa_reply_client_didCreate;
	__Reply__setResult_t Reply_sa_reply_client_setResult;
	__Reply__requestInterrupt_t Reply_sa_reply_client_requestInterrupt;
	__Reply__didDeactivate_t Reply_sa_reply_client_didDeactivate;
	__Reply__reportError_t Reply_sa_reply_client_reportError;
	__Reply__didStartTx_t Reply_sa_reply_client_didStartTx;
};
#endif /* !__RequestUnion__sa_reply_client_secagentreply_subsystem__defined */

#ifndef subsystem_to_name_map_secagentreply
#define subsystem_to_name_map_secagentreply \
    { "didCreate", 1200 },\
    { "setResult", 1201 },\
    { "requestInterrupt", 1202 },\
    { "didDeactivate", 1203 },\
    { "reportError", 1204 },\
    { "didStartTx", 1205 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _secagentreply_user_ */
