/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFWirelessSettingsControllerDelegate-Protocol.h"

@class NSString;

// Not exported
@interface FI_TAirDropWirelessSettingsController : NSObject <SFWirelessSettingsControllerDelegate>
{
    struct TNSRef<SFWirelessSettingsController *> _settingsController;
    _Bool _isBluetoothEnabled;
    _Bool _isWifiEnabled;
    _Bool _deviceSupportsWAPI;
}

+ (id)controller;
@property(readonly) _Bool deviceSupportsWAPI; // @synthesize deviceSupportsWAPI=_deviceSupportsWAPI;
@property(nonatomic, getter=isWifiEnabled) _Bool wifiEnabled; // @synthesize wifiEnabled=_isWifiEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)updateState;
- (void)_setBluetoothEnabled:(_Bool)arg1 withKVONotification:(_Bool)arg2;
@property(nonatomic, getter=isBluetoothEnabled) _Bool bluetoothEnabled; // @synthesize bluetoothEnabled=_isBluetoothEnabled;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

