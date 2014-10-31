/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface SFCompanionAdvertiser : NSObject
{
    BOOL _supportsStreams;
    id <SFCompanionAdvertiserDelegate> _delegate;
    NSString *_serviceType;
}

@property(readonly, copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property BOOL supportsStreams; // @synthesize supportsStreams=_supportsStreams;
@property id <SFCompanionAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;
- (void)start;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(id)arg2;
@property(readonly) NSData *serviceEndpointData;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

@end

