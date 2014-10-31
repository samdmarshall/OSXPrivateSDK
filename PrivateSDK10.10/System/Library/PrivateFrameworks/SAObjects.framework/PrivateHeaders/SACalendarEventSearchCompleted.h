/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand-Protocol.h"

@class NSArray, NSString;

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)eventSearchCompletedWithResults:(id)arg1;
+ (id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)eventSearchCompleted;
@property(copy, nonatomic) NSArray *results;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

