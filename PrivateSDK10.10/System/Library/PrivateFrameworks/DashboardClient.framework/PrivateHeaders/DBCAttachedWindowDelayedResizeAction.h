/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DashboardClient/DBCAttachedWindowDelayedAction.h>

@class NSWindow;

@interface DBCAttachedWindowDelayedResizeAction : DBCAttachedWindowDelayedAction
{
    struct CGRect _frame;
    NSWindow *_window;
}

+ (id)DelayedResizeActionWithWindow:(id)arg1 frame:(struct CGRect)arg2;
- (void)performAction:(unsigned int)arg1;
- (id)initWithWindow:(id)arg1 frame:(struct CGRect)arg2;

@end

