/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CalDAVScheduleChangesProperty, NSData, NSString;

@interface CalDAVResource : NSObject
{
    NSString *_filename;
    NSString *_etag;
    NSString *_scheduleTag;
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
}

+ (id)resourceWithCalDAVCalendarItemData:(id)arg1;
@property(retain) CalDAVScheduleChangesProperty *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
@property(retain) NSString *etag; // @synthesize etag=_etag;
@property(retain) NSString *filename; // @synthesize filename=_filename;
- (void)dealloc;

@end

