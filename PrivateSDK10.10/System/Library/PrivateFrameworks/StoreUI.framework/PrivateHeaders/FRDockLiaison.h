/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISURLOperationDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FRDockLiaison : NSObject <ISURLOperationDelegate>
{
    NSMutableDictionary *_iconPaths;
    NSMutableDictionary *_animationsOnHold;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)performPurchaseAnimationWithInfo:(id)arg1;
- (void)loadIconForProductWithInfo:(id)arg1;
- (void)loadIconForProductID:(id)arg1 fromURL:(id)arg2;
- (id)iconPathForProductID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

