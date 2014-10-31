/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MUIWKViewController, NSMutableSet, NSPort;

@interface MUIJavaScriptController : NSObject
{
    NSMutableSet *_pendingJavaScriptRequests;
    MUIWKViewController *_controller;
    NSPort *_javaScriptPort;
}

@property(retain, nonatomic) NSPort *javaScriptPort; // @synthesize javaScriptPort=_javaScriptPort;
@property(nonatomic) __weak MUIWKViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)evaluateJavaScriptSynchronously:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithController:(id)arg1;

@end

