#ifndef __GSSD_MACHSERVER_H__
#define __GSSD_MACHSERVER_H__

#include <mach/mach.h>

extern boolean_t gssd_mach_server(mach_msg_header_t *, mach_msg_header_t *);

#endif