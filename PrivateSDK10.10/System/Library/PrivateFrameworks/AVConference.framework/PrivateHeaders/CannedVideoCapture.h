/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VideoCaptureProtocol-Protocol.h"

// Not exported
@interface CannedVideoCapture : NSObject <VideoCaptureProtocol>
{
    struct CannedVideoCapturePrivate *_pimpl;
    id <CannedVideoFrameFeeder> _frameFeeder;
}

+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withWidth:(int)arg2 height:(int)arg3;
+ (int)cannedVideoTypeForPath:(id)arg1;
@property(retain, nonatomic) id <CannedVideoFrameFeeder> frameFeeder; // @synthesize frameFeeder=_frameFeeder;
@property(readonly, nonatomic) struct CannedVideoCapturePrivate *pimpl; // @synthesize pimpl=_pimpl;
- (void)stopThreads;
- (int)startThreads;
- (int)stop:(_Bool)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (BOOL)isPreviewRunning;
- (int)getCameraType:(int *)arg1;
- (int)setCameraType:(int)arg1;
- (int)getCamera:(unsigned int *)arg1;
- (int)setCamera:(unsigned int)arg1;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)dealloc;
- (id)initWithOptions:(void *)arg1 callback:(void *)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 camera:(unsigned int)arg6 folder:(id)arg7 withError:(int *)arg8;

@end

