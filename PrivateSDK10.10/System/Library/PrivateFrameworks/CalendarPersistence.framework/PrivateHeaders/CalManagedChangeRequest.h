/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedObject.h>

#import "ETagObject-Protocol.h"

@class CalManagedCalDAVError, NSDate, NSNumber, NSSet, NSString;

@interface CalManagedChangeRequest : CalManagedObject <ETagObject>
{
}

+ (id)insertChangeRequestWithType:(int)arg1 calendarItem:(id)arg2 sourceUID:(id)arg3 inManagedObjectContext:(id)arg4;
+ (void)setSequenceNumberForObject:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (BOOL)_checkAndBreakCycles:(id)arg1;
- (void)checkDependenciesAndBreakCycles;
- (void)addDependentChangeRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain) NSSet *dependencies; // @dynamic dependencies;
@property(retain) NSSet *dependents; // @dynamic dependents;
@property(readonly, copy) NSString *description;
@property(retain) NSString *eTag; // @dynamic eTag;
@property(retain) CalManagedCalDAVError *error; // @dynamic error;
@property(retain) NSDate *firstMaterialized; // @dynamic firstMaterialized;
@property(readonly) unsigned long long hash;
@property(retain) NSString *localUID; // @dynamic localUID;
@property(retain) NSNumber *materializedCount; // @dynamic materializedCount;
@property(retain) NSString *scheduleTag; // @dynamic scheduleTag;
@property long long sequenceNumber; // @dynamic sequenceNumber;
@property(retain) NSString *serverFilename; // @dynamic serverFilename;
@property(retain) NSString *sharedUID; // @dynamic sharedUID;
@property(retain) NSString *sourceUID; // @dynamic sourceUID;
@property(readonly) Class superclass;
@property int type; // @dynamic type;

@end

