/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSCFRunLoopSemaphore, NSViewServiceBridge, NSViewServiceMarshal;

@interface NSViewService : NSViewController
{
    NSViewServiceMarshal *_marshal;
    unsigned int _invalid:1;
    unsigned int _trustRemoteKeyEvents:1;
    unsigned int _makesExplicitResizeRequests:1;
    NSCFRunLoopSemaphore *_completionSemaphore;
}

+ (id)serviceBundle;
+ (void)deferBlockOntoMainThread:(id)arg1;
+ (struct __CFString *)privateRunLoopMode;
+ (id)serviceViewControllerForWindow:(id)arg1;
@property NSViewServiceMarshal *marshal; // @synthesize marshal=_marshal;
- (void)remoteWindowReceivedEventType:(unsigned long long)arg1;
- (void)setAccessoryViewSize:(struct CGSize)arg1 withReply:(id)arg2;
- (void)forgetAccessoryView;
- (void)setTrustRemoteKeyEvents:(BOOL)arg1;
- (BOOL)trustRemoteKeyEvents;
- (void)setView:(id)arg1;
@property(readonly) BOOL valid;
@property(readonly) BOOL invalid;
- (void)invalidate;
- (void)_invalidateRendezvousWindowControllers;
- (void)childWindowDidInvalidate:(id)arg1 dueToError:(id)arg2;
- (id)nibBundle;
- (id)nibName;
- (void)advanceToRunPhase;
- (void)retreatToConfigPhase;
- (unsigned long long)awakeFromRemoteView;
@property(readonly) NSViewServiceBridge *bridge;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)allowAction:(SEL)arg1 forTarget:(id)arg2;
- (id)remoteViewControllerProxyWithErrorHandler:(id)arg1;
- (id)remoteViewControllerProxy;
- (id)exportedObject;
- (id)exportedInterface;
- (id)remoteViewControllerInterface;
@property(readonly) unsigned char inclusiveLayerBackOverride;
@property(readonly) struct CGSize sizeHint;
- (void)suspendInFavorOfService:(id)arg1 serviceSubclassName:(id)arg2 initialBridge:(id)arg3 completion:(id)arg4;
- (void)whileMouseIsDisassociatedFromMouseCursorPosition:(id)arg1;
- (void)associateMouseAndMouseCursorPosition:(BOOL)arg1 completion:(id)arg2;
- (id)requestResize:(struct CGSize)arg1 animation:(id)arg2 completion:(void)arg3;
- (id)_requestResize:(struct CGSize)arg1 animation:(id)arg2 completion:(void)arg3;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transactions:(id)arg2;
- (void)adjustLayout:(id)arg1 animation:(void)arg2 completion:(id)arg3;
- (void)_waitOnAnyCompletionSemaphore;
- (void)_animate:(id)arg1 complete:(void)arg2 error:(id)arg3;
- (void)defaultResizeBehavior;
@property(readonly) struct CGSize remoteViewSize;
- (void)_complete:(id)arg1 error:(void)arg2;
@property(readonly) BOOL makesExplicitResizeRequests;
@property(readonly) BOOL allowsImplicitResizeRequests;
@property(readonly) BOOL allowsWindowFrameOriginChanges;
- (unsigned long long)filterStyleMask:(unsigned long long)arg1;
- (unsigned long long)acceptableStyleMask;

@end

