/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SidebarTableCellView.h>

@class NSImage, NSImageView, NSString, NSTextField, SharedLinksProfileImageButton;

// Not exported
@interface SharedLinksTableCellView : SidebarTableCellView
{
    SharedLinksProfileImageButton *_profileImageButton;
    NSImageView *_socialServiceIconImageView;
    NSTextField *_displayNameTextField;
    NSTextField *_postTextField;
    NSTextField *_retweetedByTextField;
    BOOL _displayNameTextFieldNeedsResize;
    BOOL _retweetedByTextFieldNeedsResize;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)hasVariableHeight;
- (void).cxx_destruct;
- (double)_textTrailingMargin;
- (double)_textLeadingMargin;
- (struct CGRect)_postTextFieldFrame;
- (struct CGRect)_displayNameTextFieldFrame;
- (struct CGRect)_socialServiceIconImageViewFrame;
- (struct CGRect)_profileImageButtonFrame;
- (void)_notifyTableViewThatOurHeightMayHaveChanged;
- (struct CGRect)_retweetedByTextFieldFrame;
- (id)_makeLabelTextField;
- (id)_sharedLinksItem;
- (void)_setUpBindings;
- (void)_setUpSubviews;
- (void)profileImageButtonClicked:(id)arg1;
@property(readonly, nonatomic) NSImage *itemSocialServiceImage;
@property(readonly, nonatomic) NSImage *itemProfileImage;
@property(readonly, nonatomic) NSString *itemRetweetedByText;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (double)calculatedHeightOfRow;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

