/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class CalDAVCalendarSource, NSManagedObjectID;

@interface CalDAVScanDropBoxQueueableOperation : CalDAVQueueableOperation
{
    CalDAVCalendarSource *_source;
    NSManagedObjectID *_eventID;
}

- (void)performOperation;
- (void)handleResultsOfDropBoxURLLookup:(id)arg1;
- (id)_updateDropboxBaseURLIfURLOnDifferentHost:(id)arg1;
- (void)scanDropBoxOnAlternateServer:(id)arg1;
- (void)_dieWithError:(id)arg1;
- (void)updateAttachmentsWithResponses:(id)arg1 freeBytes:(id)arg2;
- (BOOL)shouldIgnoreErrorForEvent:(id)arg1;
- (BOOL)removeUnreferencedAttachmentsWithContents:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_cachedETagForFilename:(id)arg1 sharedUID:(id)arg2;
- (void)dealloc;
- (id)initWithEvent:(id)arg1;

@end

