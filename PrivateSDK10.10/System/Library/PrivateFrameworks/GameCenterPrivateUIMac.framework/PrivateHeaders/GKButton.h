/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class GKTextStyle;

@interface GKButton : UIButton
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
}

+ (void)initialize;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
- (void)setAttributedTitle:(id)arg1;
- (void)applyTextStyle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

