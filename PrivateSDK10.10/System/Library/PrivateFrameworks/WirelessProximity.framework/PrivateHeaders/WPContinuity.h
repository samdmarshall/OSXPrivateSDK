/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate-Protocol.h"

@class NSString, XPCClient;

@interface WPContinuity : NSObject <XPCClientDelegate>
{
    long long _state;
    long long _btBandwidthState;
    id <WPContinuityDelegate> _delegate;
    XPCClient *_connection;
}

@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <WPContinuityDelegate> delegate; // @synthesize delegate=_delegate;
@property long long btBandwidthState; // @synthesize btBandwidthState=_btBandwidthState;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionDied;
- (void)updateBluetoothBandwidthState:(long long)arg1;
- (void)updateState:(long long)arg1;
- (void)messageArrived:(id)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)disconnectFromPeer:(id)arg1;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)connectToPeer:(id)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

