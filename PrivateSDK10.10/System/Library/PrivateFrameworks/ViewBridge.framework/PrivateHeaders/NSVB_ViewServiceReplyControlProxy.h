/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UIViewServiceProxy_ReplyControl-Protocol.h"

@class NSLock, NSVB_ViewServiceReplyAwaitingTrampoline, NSVB_ViewServiceReplyControlTrampoline;

@interface NSVB_ViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl>
{
    id _target;
    NSVB_ViewServiceReplyControlTrampoline *_controlTrampoline;
    NSVB_ViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)arg1;
- (id)_deliveringRepliesAsynchronously;
- (id)_awaitingReply;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

