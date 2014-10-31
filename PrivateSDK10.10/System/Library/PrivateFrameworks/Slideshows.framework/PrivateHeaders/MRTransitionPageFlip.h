/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRTransition.h>

@class MRMesh;

@interface MRTransitionPageFlip : MRTransition
{
    MRMesh *_mesh;
    CDStruct_265c7ca9 *_meshVertices;
    double _x0;
    double _y0;
    double _x;
    double _y;
    double _rollOrientationAim;
    double _rollOrientation;
    double _progressInternal;
    double _progressAim;
    BOOL _isManuallyTransitioning;
    BOOL _isFinishing;
    BOOL _isCanceling;
}

- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)unload;
- (void)cleanup;

@end

