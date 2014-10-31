#ifndef __SA_COMPARE_H__
#define __SA_COMPARE_H__

/*
 * sa_dst_compare(A,B) returns -1 if A is less desirable than B,
 * 0 if they are equally desirable, and 1 if A is more desirable.
 * qsort() expects the inverse, so we swap sp and sq.
 */
extern int sa_dst_compare(struct sockaddr *sq, struct sockaddr *sp, int value);

#endif