/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImage.h"

@interface NSImage (GKAdditions_UIKit)
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(int)arg3;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)imageWithData:(id)arg1;
- (struct CGRect)_gkContentStretchInPixels;
- (void)_gkDrawAtPoint:(struct CGPoint)arg1;
- (id)_gkStretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (id)_gkResizableImageWithCapInsets:(struct NSEdgeInsets)arg1;
@property(readonly) int imageOrientation;
- (id)imageWithRenderingMode:(long long)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(int)arg3;
@property(readonly) struct CGImage *CGImage;
@property(readonly) double scale;
@end

