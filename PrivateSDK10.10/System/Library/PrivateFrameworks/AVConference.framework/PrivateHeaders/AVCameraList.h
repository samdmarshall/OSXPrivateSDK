/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<AVCameraListDelegate>;

@interface AVCameraList : NSObject
{
    NSObject<AVCameraListDelegate> *delegate;
}

+ (id)avCameraList;
@property NSObject<AVCameraListDelegate> *delegate; // @synthesize delegate;
- (id)cameraList;
- (void)refreshListeners;
- (void)removeListeners;
- (void)registerListeners;
- (void)dealloc;

@end

