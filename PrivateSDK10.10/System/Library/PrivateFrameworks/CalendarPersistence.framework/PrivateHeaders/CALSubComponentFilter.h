/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CALFilter.h>

@class NSArray;

@interface CALSubComponentFilter : CALFilter
{
    NSArray *_classes;
    int _mode;
}

+ (id)filterSubComponentsWithClasses:(id)arg1 withMode:(int)arg2;
- (void)applyTo:(id)arg1;
- (void)dealloc;
- (id)initWithSubComponentsWithClasses:(id)arg1 withMode:(int)arg2;

@end

