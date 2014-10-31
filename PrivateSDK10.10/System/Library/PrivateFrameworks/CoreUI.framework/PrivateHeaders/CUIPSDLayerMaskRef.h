/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (struct CGImage *)createCGImageMask;
- (struct CGPath *)newBezierPathAtScale:(double)arg1;
- (struct CGPath *)newBezierPath;
- (struct CGRect)bounds;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isEnabled;
- (BOOL)isLinked;
- (id)layerRef;
- (void)dealloc;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;

@end

