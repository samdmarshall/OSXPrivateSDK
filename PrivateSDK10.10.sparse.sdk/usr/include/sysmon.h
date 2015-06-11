#ifndef __SYSMON_H__
#define __SYSMON_H__

#include <xpc/xpc.h>

extern xpc_object_t sysmon_copy_process_info(void * thing);

struct sysmon_table {
	
};

typedef struct sysmon_table * sysmon_table_t;

struct sysmon_row {
	
};

typedef struct sysmon_row * sysmon_row_t;

struct sysmon_request {
	
};

typedef struct sysmon_request * sysmon_request_t;


#define SYSMON_REQUEST_TYPE_PROCESS 0x1

#define SYSMON_ATTR_PROC_PID 0x4
#define SYSMON_ATTR_PROC_FLAGS 0x1
#define SYSMON_ATTR_PROC_UID 0x6
#define SYSMON_ATTR_PROC_COMM 0xc
#define SYSMON_ATTR_PROC_ARGUMENTS 0x2c
#define SYSMON_ATTR_PROC_RUID 0x8
#define SYSMON_ATTR_PROC_RGID 0x9
#define SYSMON_ATTR_PROC_PPID 0x5
#define SYSMON_ATTR_PROC_PGID 0xf
#define SYSMON_ATTR_PROC_TDEV 0x11
#define SYSMON_ATTR_PROC_START 0x14

typedef void (^create_handler)(sysmon_table_t table);

extern sysmon_request_t sysmon_request_create(int value, create_handler handler);

extern void sysmon_request_add_attribute(sysmon_request_t request, int value);

extern void sysmon_request_execute(sysmon_request_t request);

extern void* sysmon_retain(void * request);

extern void sysmon_release(void * request);

extern int sysmon_table_get_count(sysmon_table_t table);

extern sysmon_row_t sysmon_table_get_row(sysmon_table_t table, int index);

extern xpc_object_t sysmon_row_get_value(sysmon_row_t row, int value);

#endif