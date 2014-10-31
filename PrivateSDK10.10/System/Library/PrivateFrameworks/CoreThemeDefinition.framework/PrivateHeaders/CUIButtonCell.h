/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class CUIThemeFacet;

@interface CUIButtonCell : NSButtonCell
{
    BOOL _hasMouse;
    CUIThemeFacet *_gradientFacet;
    CUIThemeFacet *_customBezelFacet;
    BOOL _changesBorderWhenMouseInside;
}

@property(readonly, nonatomic) BOOL hasMouse; // @synthesize hasMouse=_hasMouse;
@property(nonatomic) BOOL changesBorderWhenMouseInside; // @synthesize changesBorderWhenMouseInside=_changesBorderWhenMouseInside;
@property(retain, nonatomic) CUIThemeFacet *customBezelFacet; // @synthesize customBezelFacet=_customBezelFacet;
@property(retain, nonatomic) CUIThemeFacet *gradientBaseFacet; // @synthesize gradientBaseFacet=_gradientFacet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_buttonImageSource;
- (BOOL)_shouldDrawBezel;
- (id)_baseFacet;
- (void)dealloc;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (long long)currentThemeValueForContentsInView:(id)arg1;
- (long long)currentThemeValueForBackgroundInView:(id)arg1;
- (long long)currentThemeStateInView:(id)arg1;
- (BOOL)isViewActive:(id)arg1;
@property(retain, nonatomic) id <CUIThemeImageSource> themeImageSource;
- (id)initWithImageSource:(id)arg1;

@end

