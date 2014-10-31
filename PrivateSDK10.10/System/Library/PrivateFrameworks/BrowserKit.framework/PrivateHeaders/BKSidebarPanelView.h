/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class BKSidebarClipView, BKSidebarContainerView, BKSidebarScrollView, NSProButton, NSProTextField, NSProThemeImageView, NSString;

// Not exported
@interface BKSidebarPanelView : NSView
{
    BKSidebarScrollView *_scrollView;
    NSProThemeImageView *_insetShadowView;
    NSProThemeImageView *_headerView;
    NSProTextField *_title;
    NSProButton *_showHideToggle;
    NSString *_identifier;
    double _minHeight;
    BOOL _insetAppearance;
}

@property double minHeight; // @synthesize minHeight=_minHeight;
@property(readonly) NSProButton *showHideToggle; // @synthesize showHideToggle=_showHideToggle;
@property(readonly) BOOL insetAppearance; // @synthesize insetAppearance=_insetAppearance;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 identifier:(id)arg2 title:(id)arg3 insetAppearance:(BOOL)arg4 showHideToggle:(BOOL)arg5;
@property(readonly) struct CGRect dragAffordanceRect;
@property(readonly) BKSidebarClipView *contentView;
@property(readonly) BKSidebarContainerView *documentView;
@property(readonly) struct CGSize optimalContentSize;

@end

