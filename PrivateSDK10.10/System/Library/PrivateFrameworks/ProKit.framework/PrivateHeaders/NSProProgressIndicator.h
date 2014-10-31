/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProgressIndicator.h"

@interface NSProProgressIndicator : NSProgressIndicator
{
    struct _PPIFlags _ppiFlags;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
- (void)displayLayer:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)removeSurface;
- (id)progressSpinnerFacet;
- (id)progressBarFillFacet;
- (id)progressBarBackgroundFacet;
- (double)_spinningAnimationSpeed;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (id)_resizedImage:(unsigned long long)arg1;
- (void)stopAnimation:(id)arg1;
- (void)animate:(id)arg1;
- (void)heartBeat:(CDStruct_fadd2e06 *)arg1;
- (unsigned long long)currentImageIndexForHeartbeatArgs:(CDStruct_fadd2e06 *)arg1;
- (void)_setupSurfaceAndStartSpinning:(BOOL)arg1;
- (BOOL)_isThreadedAnimationLooping;
- (void)drawRect:(struct CGRect)arg1;
- (void)resetHeartbeatBlock;
- (void)sizeToFit;
- (void)_animationIdler:(id)arg1;
- (id)roundDeterminateColor;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_reconfigureAnimationState:(BOOL)arg1;
- (void)setTemporarilyBlockHeartBeating:(BOOL)arg1;
- (void)_drawThemeProgressArea:(BOOL)arg1;
- (void)_drawThemeBackground;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (double)_currentThumbSize;
- (void)setControlSize:(unsigned long long)arg1;
- (unsigned long long)controlSize;
- (long long)_currentThemeSize;
- (int)_currentFillPart;
- (long long)_currentThemeState;
- (BOOL)_allowsCoreUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

