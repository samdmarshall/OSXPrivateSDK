/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface CrashReporterMessage : NSObject
{
    NSString *_title;
    NSString *_body;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)messageChanged;
+ (id)allMessagesAsString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (void)setCrashLogSignatureString:(id)arg1;

@end

