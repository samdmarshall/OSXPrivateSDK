/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

// Not exported
@interface CUIMutableThemeRendition : CUIThemeRendition
{
    struct _renditionkeytoken *_renditionKey;
    struct CGImage *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (id)metrics;
- (id)sliceInformation;
- (struct CGImage *)unslicedImage;
- (const struct _renditionkeytoken *)key;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;

@end

