/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSNumber, NSString, SACalendar, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable>
{
}

+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showtime;
@property(retain, nonatomic) SACalendar *showtime;
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;
@property(copy, nonatomic) NSNumber *regularTicketQuantity;
@property(nonatomic) BOOL isImax;
@property(nonatomic) BOOL is3d;
@property(copy, nonatomic) NSNumber *childTicketQuantity;
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

