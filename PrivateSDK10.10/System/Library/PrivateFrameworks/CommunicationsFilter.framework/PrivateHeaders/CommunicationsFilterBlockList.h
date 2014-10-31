/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CommunicationsFilterBlockListCache, NSMutableArray;

@interface CommunicationsFilterBlockList : NSObject
{
    struct _xpc_connection_s *_connection;
    int _retries;
    struct dispatch_queue_s *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)_sendXPCRequest:(void *)arg1 completionBlock:(id)arg2;
- (id)_sendSynchronousXPCRequest:(void *)arg1;
- (BOOL)isItemInList:(id)arg1;
- (id)copyAllItems;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)dealloc;
- (id)init;

@end

