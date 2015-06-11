#ifndef __CONNINFO_H__
#define __CONNINFO_H__

#include <System/sys/socket.h>


typedef struct conninfo {
	connid_t	ci_cid;		/* connection ID */
	__uint32_t	ci_flags;		/* see flags below */
	__uint32_t	ci_ifindex;		/* (last) outbound interface */
	__int32_t	ci_error;		/* most recent error */
	struct sockaddr	*ci_src;		/* source address */
	socklen_t	ci_src_len;		/* source address len */
	struct sockaddr *ci_dst;		/* destination address */
	socklen_t	ci_dst_len;		/* destination address len */
	__uint32_t	ci_aux_type;		/* aux data type (CIAUX) */
	void		*ci_aux_data;		/* aux data */
	__uint32_t	ci_aux_len;		/* aux data len */
} conninfo_t;

extern int copyconninfo(int s, connid_t id, conninfo_t **info);

extern void freeconninfo(conninfo_t *cfo);

extern void freeassocids(associd_t *aid);

extern void freeconnids(connid_t *cid);

extern int copyassocids(int s, associd_t **aid, uint32_t *aid_cnt);

extern int copyconnids(int s, int type, connid_t **cid, uint32_t *cid_cnt);
#endif