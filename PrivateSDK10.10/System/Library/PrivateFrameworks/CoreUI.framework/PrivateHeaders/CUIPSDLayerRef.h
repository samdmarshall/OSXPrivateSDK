/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
{
}

- (id)colorFill;
- (id)layerEffects;
- (id)gradient;
- (id)fillSample;
- (id)maskFromSlice:(unsigned int)arg1;
- (id)patternFromSlice:(unsigned int)arg1 isZeroSizeImage:(char *)arg2;
- (id)patternFromSlice:(unsigned int)arg1;
- (id)imageFromSlice:(unsigned int)arg1 isEmptyImage:(char *)arg2;
- (id)imageFromSlice:(unsigned int)arg1;
- (id)imageIsZeroSizeImage:(char *)arg1;
- (id)image;
- (struct CGImage *)createCGImage;
- (void)dealloc;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;

@end

