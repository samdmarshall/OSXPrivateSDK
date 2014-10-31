/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedExchangeError, CalManagedExchangePrincipal, NSData, NSString;

@interface CalManagedPersistentOperation : CalManagedObject
{
}

+ (id)insertOperationWithData:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (long long)_nextSequenceNumber;

// Remaining properties
@property(retain) NSData *data; // @dynamic data;
@property(retain) CalManagedExchangeError *error; // @dynamic error;
@property(retain) CalManagedExchangePrincipal *principal; // @dynamic principal;
@property long long sequenceNumber; // @dynamic sequenceNumber;
@property(retain) NSString *sessionID; // @dynamic sessionID;

@end

