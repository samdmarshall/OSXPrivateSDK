/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CalDelegateFoldersPermissions : NSObject
{
    int _calendarPermission;
    int _taskPermission;
}

@property(nonatomic) int taskPermission; // @synthesize taskPermission=_taskPermission;
@property(nonatomic) int calendarPermission; // @synthesize calendarPermission=_calendarPermission;
- (id)initWithCalendarPermission:(int)arg1 taskPermission:(int)arg2;

@end

