/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class AVCaptureDevice;

@interface CRCodeRedeemerView : NSView
{
}

+ (BOOL)isCRCodeRedeemerAvailable;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)showCodeRedeemStatus:(id)arg1 withColor:(struct CGColor *)arg2 forDuration:(double)arg3 style:(int)arg4;
- (void)stopSession;
- (void)startSession;
- (id)generateStringFromDate:(id)arg1;
- (void)gen:(struct vImage_Buffer)arg1;
- (void)startSessionWithImage:(struct vImage_Buffer)arg1;
- (void)captureImage;

// Remaining properties
@property(nonatomic) long long cameraMode; // @dynamic cameraMode;
@property(nonatomic) unsigned long long cameraModel; // @dynamic cameraModel;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(nonatomic) id <CRCodeRedeemerViewDebuggingDelegate> debuggingDelegate; // @dynamic debuggingDelegate;
@property(nonatomic) struct CGColor *defaultColor; // @dynamic defaultColor;
@property id <CRCodeRedeemerViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) long long exposureMode; // @dynamic exposureMode;
@property(nonatomic) long long focusMode; // @dynamic focusMode;
@property(retain, nonatomic) AVCaptureDevice *inputDevice; // @dynamic inputDevice;
@property(nonatomic) BOOL isActiveRedeemer; // @dynamic isActiveRedeemer;
@property(nonatomic) BOOL isBatchModeOnly; // @dynamic isBatchModeOnly;
@property(nonatomic) BOOL isCaptureModeOnly; // @dynamic isCaptureModeOnly;
@property(nonatomic) BOOL isContinuousCapture; // @dynamic isContinuousCapture;
@property(nonatomic) double sessionTimeout; // @dynamic sessionTimeout;
@property(nonatomic) long long torchMode; // @dynamic torchMode;
@property(nonatomic) long long whiteBalanceMode; // @dynamic whiteBalanceMode;

@end

