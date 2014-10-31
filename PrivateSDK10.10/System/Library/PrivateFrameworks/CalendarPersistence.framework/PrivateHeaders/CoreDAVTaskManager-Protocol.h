/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSRunLoop;

@protocol CoreDAVTaskManager <NSObject>
@property(retain, nonatomic) NSRunLoop *workRunLoop;
- (void)shutdown;
- (void)coreDAVTaskDidFinish:(id)arg1;
- (void)coreDAVTaskEndModal:(id)arg1;
- (void)coreDAVTaskRequestModal:(id)arg1;
- (void)submitIndependentCoreDAVTask:(id)arg1;
- (void)submitQueuedCoreDAVTask:(id)arg1;
@end

