/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IMRemoteObject : NSObject
{
    id _internal;
}

+ (void)initialize;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)_registerIMRemoteObject:(id)arg1;
+ (id)_remoteObjects;
- (struct dispatch_queue_s *)_queue;
- (id)description;
- (void)invalidate;
- (void)setPortName:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
@property(nonatomic) int pid;
@property(readonly, nonatomic) struct _xpc_connection_s *connection;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)forwardXPCObject:(void *)arg1 messageContext:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)_systemShutdown:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
- (void)_portDidBecomeInvalid;
- (void)dealloc;
- (void)finalize;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)initWithConnection:(struct _xpc_connection_s *)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(struct _xpc_connection_s *)arg1 protocol:(id)arg2;
- (id)_initWithConnection:(struct _xpc_connection_s *)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4;

@end

