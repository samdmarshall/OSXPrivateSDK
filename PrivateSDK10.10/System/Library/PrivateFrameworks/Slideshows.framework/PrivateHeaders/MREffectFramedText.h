/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@class MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectFramedText : MREffect
{
    MRTextRenderer *mTextRenderer;
    MRCroppingSprite *mSprite;
    MRCroppingSprite *mTextSprite;
    MRImage *mTextImage;
    float *mVertices;
    float *mFrameTextureCoordinates;
    struct CGRect mTextRect;
    struct CGRect mInnerFrameRect;
    double mHalfWidth;
    double mYPosition;
    double mScrollY;
    double mNewScrollY;
    double mFrameTime;
    double mHitOffFrameTime;
    float mVelocity;
    BOOL mWasUpdatedSinceLastRendering;
    BOOL mLiveAttributesWereUpdatedSinceLastRendering;
    BOOL mHasTextRect;
    BOOL mStretchesHorizontally;
    BOOL mIsHit;
    BOOL mNewIsHit;
}

+ (void)initialize;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isOpaque;
- (BOOL)isNative3D;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setAttributes:(id)arg1;
- (void)_cleanup;
- (id)init;
- (void)_unload;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;

@end

