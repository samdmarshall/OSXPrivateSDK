/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CalManagedCalendar;

@interface LocalCalendarDetails : NSObject
{
    CalManagedCalendar *_localCalendar;
    BOOL _targetsVTODO;
}

@property BOOL targetsVTODO; // @synthesize targetsVTODO=_targetsVTODO;
@property(retain) CalManagedCalendar *localCalendar; // @synthesize localCalendar=_localCalendar;
- (void)dealloc;

@end

