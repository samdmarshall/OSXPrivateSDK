/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreWiFi/CoreWiFiIE.h>

@interface CoreWiFiDWDSIE : CoreWiFiIE
{
    BOOL isDwdsMaster;
    BOOL isDwdsRelay;
    BOOL isDwdsRemote;
    BOOL isAMPDUNotSupportedOverDWDS;
    BOOL isAMPDUWorkaroundOverDWDS;
    BOOL isAMPDUFullSupportOverDWDS;
    BOOL isClosedNetworkOverDWDS;
}

@property(nonatomic) BOOL isClosedNetworkOverDWDS; // @synthesize isClosedNetworkOverDWDS;
@property(nonatomic) BOOL isAMPDUFullSupportOverDWDS; // @synthesize isAMPDUFullSupportOverDWDS;
@property(nonatomic) BOOL isAMPDUWorkaroundOverDWDS; // @synthesize isAMPDUWorkaroundOverDWDS;
@property(nonatomic) BOOL isAMPDUNotSupportedOverDWDS; // @synthesize isAMPDUNotSupportedOverDWDS;
@property(nonatomic) BOOL isDwdsRemote; // @synthesize isDwdsRemote;
@property(nonatomic) BOOL isDwdsRelay; // @synthesize isDwdsRelay;
@property(nonatomic) BOOL isDwdsMaster; // @synthesize isDwdsMaster;
- (BOOL)parseIE:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIE:(id)arg1;
- (id)init;

@end

