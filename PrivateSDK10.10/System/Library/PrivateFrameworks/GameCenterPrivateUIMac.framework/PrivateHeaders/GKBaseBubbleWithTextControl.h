/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKBubbleControl.h>

@class NSArray;

@interface GKBaseBubbleWithTextControl : GKBubbleControl
{
    double _referenceZPosition;
    NSArray *_labels;
    id _updateRasterizationScaleToken;
}

@property(retain, nonatomic) id updateRasterizationScaleToken; // @synthesize updateRasterizationScaleToken=_updateRasterizationScaleToken;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;
- (void)viewDidMoveToSuperview;
- (void)layout;
- (void)updateLabelRasterizationScaleForLabels;
- (void)updateTextFieldsFor3DScaling;
- (id)_scaledTextStyle:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;

@end

