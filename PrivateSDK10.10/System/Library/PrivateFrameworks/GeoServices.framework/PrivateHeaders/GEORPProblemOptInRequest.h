/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying>
{
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    BOOL _didOptIn;
    struct {
        unsigned int didOptIn:1;
    } _has;
}

@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(nonatomic) BOOL didOptIn; // @synthesize didOptIn=_didOptIn;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUserEmail;
@property(readonly, nonatomic) BOOL hasDevicePushToken;
@property(readonly, nonatomic) BOOL hasUserCredentials;
@property(nonatomic) BOOL hasDidOptIn;
@property(readonly, nonatomic) BOOL hasProblemId;
- (void)dealloc;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;

@end

