#ifndef __NETFS_PRIVATE_H__
#define __NETFS_PRIVATE_H__

#include <NetFS/NetFSUtilPrivate.h>

extern void netfs_log_message_tracer_auth_type(char *type);

extern void NetFSLogToMessageTracer(char *tmscheme, char *message, int error);


#endif