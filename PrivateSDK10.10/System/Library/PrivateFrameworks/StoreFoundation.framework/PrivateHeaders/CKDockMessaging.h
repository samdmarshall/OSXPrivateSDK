/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_xpc_object>;

@interface CKDockMessaging : NSObject
{
    NSObject<OS_xpc_object> *_xpcDockConnection;
    NSMutableDictionary *_cachedIconPaths;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)loadIconForProductWithInfo:(id)arg1 storeClient:(id)arg2;
- (void)loadIconForProductID:(id)arg1 fromURL:(id)arg2 storeClient:(id)arg3;
- (id)cachedIconPathForProductID:(id)arg1;
- (void)sendMessageForDownload:(id)arg1 status:(id)arg2;
- (void)sendDockMessage:(int)arg1;
- (void)sendInitialMessageForDownload:(id)arg1;
- (void)sendInitialMessageForProductID:(id)arg1 title:(id)arg2 bundleID:(id)arg3 action:(int)arg4 flyOrigin:(struct CGRect)arg5 imagePath:(id)arg6;
- (id)xpcObjectForDownload:(id)arg1 status:(id)arg2;
- (id)xpcProgressObjectWithType:(int)arg1 productID:(const char *)arg2 title:(const char *)arg3 bundleID:(const char *)arg4 imagePath:(const char *)arg5 status:(int)arg6 progress:(double)arg7 installPath:(const char *)arg8 downloadedBytes:(double)arg9 totalBytes:(double)arg10;
- (id)_xpcDockConnection;
- (id)_xpcDispatchQueue;
- (id)init;

@end

