/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "GEOURLSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, NSString;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    int _mapType;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    int _transportType;
    int _userTrackingMode;
    BOOL _enableTraffic;
    struct {
        unsigned int mapType:1;
        unsigned int transportType:1;
        unsigned int userTrackingMode:1;
        unsigned int enableTraffic:1;
    } _has;
}

@property(retain, nonatomic) GEOURLRouteHandle *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(nonatomic) int userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(retain, nonatomic) NSString *referralIdentifier; // @synthesize referralIdentifier=_referralIdentifier;
@property(retain, nonatomic) GEOURLCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) GEOURLCenterSpan *centerSpan; // @synthesize centerSpan=_centerSpan;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) BOOL enableTraffic; // @synthesize enableTraffic=_enableTraffic;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasRouteHandle;
@property(nonatomic) BOOL hasUserTrackingMode;
@property(readonly, nonatomic) BOOL hasReferralIdentifier;
@property(readonly, nonatomic) BOOL hasCamera;
@property(readonly, nonatomic) BOOL hasCenterSpan;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasMapType;
@property(nonatomic) BOOL hasEnableTraffic;
- (void)dealloc;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

