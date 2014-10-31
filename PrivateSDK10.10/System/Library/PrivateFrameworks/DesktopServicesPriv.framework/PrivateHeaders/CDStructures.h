/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class FITNode, NSMetadataQuery;

#pragma mark Named Structures

struct AuthorizationOpaqueRef;

struct TChildrenList;

struct TConditionVariable {
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field1;
};

struct TCountedPtr<TFSInfo> {
    struct TFSInfo *_field1;
};

struct TCountedPtr<TFSVolumeInfo> {
    struct TFSVolumeInfo *_field1;
};

struct TCountedPtr<TOperationLock> {
    struct TOperationLock *_field1;
};

struct TDSHelperContext {
    void **_field1;
    struct TDSMutex _field2;
    struct TConditionVariable _field3;
    _Bool _field4;
    unsigned int _field5;
    struct TRef<_xpc_connection_s *, TRetainReleasePolicy<xpc_connection_t>> _field6;
    unsigned char _field7[16];
    struct AuthorizationOpaqueRef *_field8;
    struct TRef<void *, TRetainReleasePolicy<xpc_object_t>> _field9;
    struct TNSRef<TDSHelperConnectionHandler *> _field10;
};

struct TDSMutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } fMutex;
    _Bool fRecursive;
    struct _opaque_pthread_t *fOwnerThread;
    int fLockCount;
};

struct TFSInfo;

struct TFSVolumeInfo;

struct TNSRef<FITNode *> {
    FITNode *fRef;
};

struct TNSRef<NSMetadataQuery *> {
    NSMetadataQuery *fRef;
};

struct TNSRef<TDSHelperConnectionHandler *> {
    id _field1;
};

struct TNode {
    int _field1;
    struct TNode *_field2;
    struct TCountedPtr<TFSVolumeInfo> _field3;
    struct TCountedPtr<TFSInfo> _field4;
    struct TChildrenList *_field5;
    struct TNodePtr _field6;
    void *_field7;
    struct TNotifierList *_field8;
    struct TCountedPtr<TOperationLock> _field9;
    unsigned char _field10;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct TNodePtr {
    struct TNode *_field1;
};

struct TNotifierList;

struct TOperationLock;

struct TRef<_xpc_connection_s *, TRetainReleasePolicy<xpc_connection_t>> {
    struct _xpc_connection_s *_field1;
};

struct TRef<void *, TRetainReleasePolicy<xpc_object_t>> {
    void *_field1;
};

