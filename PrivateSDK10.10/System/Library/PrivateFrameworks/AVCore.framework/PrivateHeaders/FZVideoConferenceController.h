/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "VideoConferenceMultiController.h"

#import "IMSystemMonitorListener-Protocol.h"

@class NSString, VCCamera, VCMicrophone, VCSpeaker;

@interface FZVideoConferenceController : VideoConferenceMultiController <IMSystemMonitorListener>
{
    int _initStatus;
    BOOL _everOpenedCamera;
    BOOL _openCameraRequired;
    BOOL _recacheSelectedCamera;
    VCCamera *_cachedSelectedCamera;
    int _localVideoClientCount;
    int _localAudioClientCount;
    int _audioReflectorClientCount;
    BOOL _restartPreviewAtWake;
    BOOL _openCameraAtWake;
}

+ (void)broadcastVCCapabilites;
+ (void)_disableSoftwareMicrophone:(id)arg1;
+ (void)_enableSoftwareMicrophone;
+ (void)_disableSoftwareCamera:(id)arg1;
+ (void)_enableSoftwareCamera;
+ (void)vcHardwareChangedBroadcastChanges:(id)arg1;
+ (void)systemDidWake;
+ (void)systemWillSleep;
+ (void)vcHardwareChanged:(id)arg1 duringLaunch:(BOOL)arg2;
+ (BOOL)_updateSoftwareInputForCameras:(id)arg1 mics:(id)arg2;
+ (void)vcMicrophoneChanged:(id)arg1;
+ (id)newcameraList;
+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)hasBeenInitialized;
+ (void)setVideoProcessor:(id)arg1;
+ (void)setAuxVideoController:(id)arg1;
+ (id)cachedMicrophoneList;
+ (void)_clearCachedMicrophoneList;
- (int)lightingProfile;
- (float)sharpness;
- (BOOL)setSharpness:(float)arg1;
- (float)focus;
- (BOOL)setFocus:(float)arg1;
- (float)contrast;
- (BOOL)setContrast:(float)arg1;
- (float)brightness;
- (BOOL)setBrightness:(float)arg1;
- (float)color;
- (BOOL)setColor:(float)arg1;
- (void)setCameraSettingsFromDefaults;
- (id)selectedCamera;
- (id)selectedMicrophone;
- (void)forceCameraRecache;
- (id)_defaultCameraFromList:(id)arg1;
- (void)_selectCamera;
- (BOOL)selectVCCamera:(id)arg1;
- (BOOL)selectVCCamera:(id)arg1 andUpdatePref:(BOOL)arg2;
- (BOOL)pauseVideoIfIrisClosed;
@property(readonly, nonatomic) BOOL getMicrophoneIrisState;
@property(readonly, nonatomic) BOOL getCameraIrisState;
@property(readonly, nonatomic) BOOL currentCameraIsWidescreen;
@property(readonly, nonatomic) BOOL currentCameraIsQ8;
- (id)realCameraInList:(id)arg1;
- (BOOL)closeCamera;
- (void)__MessagesCloseCamera;
- (int)cancelPreview;
- (void)__MessagesCancelPreview;
- (BOOL)openCamera;
- (BOOL)setUsingBluetoothHeadset:(BOOL)arg1;
@property(readonly, nonatomic) BOOL usingBluetoothHeadset;
@property(readonly, nonatomic) BOOL haveBluetoothHeadset;
@property(readonly, nonatomic) VCSpeaker *bluetoothHeadsetSpeaker;
@property(readonly, nonatomic) VCMicrophone *bluetoothHeadsetMic;
@property(readonly, nonatomic) BOOL haveBluetooth;
- (void)setSystemMute:(BOOL)arg1;
@property(readonly, nonatomic) NSString *soundOutputdeviceNamePref;
- (BOOL)selectSoundOutputDevice:(id)arg1;
- (void)_selectSoundOutputDevice;
- (id)_UIDFromMicrophone:(id)arg1;
- (id)_defaultMicrophoneFromList:(id)arg1;
- (BOOL)selectMicrophone:(id)arg1;
- (BOOL)setPreferredMic;
- (id)preferredMic:(id)arg1;
- (void)setWidescreenEnabled:(BOOL)arg1;
- (BOOL)stopReflector;
- (BOOL)startReflector;
- (void)restartPreviewIfNecessary;
- (void)removeLocalAudioClient;
- (void)addLocalAudioClient;
- (BOOL)removeLocalVideoClient;
- (BOOL)addLocalVideoClient;
- (void)_removedClient;
- (void)systemDidWake;
- (void)systemWillSleep;
- (unsigned long long)basicVCCapabilitiesCanAudio:(char *)arg1 canVideo:(char *)arg2;
- (unsigned long long)vcCapabilities;
- (void)cameraAvailable:(char *)arg1 MicrophoneAvailable:(char *)arg2;
- (void)_hardwareCapsNotification:(id)arg1;
- (void)_postPrefsChangedNotification:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (void)shutdownAV;
- (void)_doInitVCCDidFinish;
- (void)_initVCCDidFinishNotification:(id)arg1;
- (void)_initVCCOnThread:(id)arg1;
- (void)initVCC;
@property(readonly, nonatomic) BOOL isVCCReady;
- (void)setDelegate:(id)arg1;

@end

