/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHPanelElementView.h>

@class ACSHPanelButton, ACSHTextField, CATextLayer, NSColor, NSImage, NSString, NSView;

@interface ACSHPanelButtonView : ACSHPanelElementView
{
    ACSHPanelButton *_button;
    ACSHTextField *_primaryTextView;
    NSView *_shadowViews;
    ACSHTextField *_shiftTextView;
    ACSHTextField *_optionTextView;
    NSView *_textImageView;
    NSView *_background;
    NSView *_imageView;
    NSImage *_displayImage;
    BOOL _hasExtraRect;
    struct CGSize _extraRectRatio;
    CATextLayer *_textLayer;
    NSString *_currentBackgroundResourceName;
    struct CGRect _currentBackgroundRect;
    double _currentBackgroundScaleFactor;
    struct CGRect _currentBackgroundExtraRect;
    BOOL _pressed;
    BOOL _editing;
    BOOL _toggleOn;
    BOOL _locked;
    int _textDisplayPosition;
    NSColor *_displayColor;
}

+ (void)initialize;
@property(nonatomic) int textDisplayPosition; // @synthesize textDisplayPosition=_textDisplayPosition;
@property(retain, nonatomic) NSColor *displayColor; // @synthesize displayColor=_displayColor;
@property(retain, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) BOOL toggleOn; // @synthesize toggleOn=_toggleOn;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) BOOL depressed; // @synthesize depressed=_pressed;
@property(readonly, nonatomic) ACSHPanelButton *button; // @synthesize button=_button;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)_accessibilityDescription;
- (id)_accessibilityTitle;
- (void)dealloc;
- (void)resetLook;
- (void)clearImageCache;
- (id)description;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)viewWillDraw;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (id)snapshotFromRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)inputMethodWasUpdated;
- (void)panelHighlightElementsForMouseButtonState:(unsigned long long)arg1;
- (void)panelHighlightElementsForModifiers:(unsigned long long)arg1 lockedModifiers:(unsigned long long)arg2;
- (void)_updateDisplayTextPosition;
- (void)_updateDisplayColor;
- (void)_updateDisplayImage;
- (void)_updateButtonBackground;
- (id)_validateDisplayText:(id)arg1;
- (struct CGSize)displayTextSize;
- (void)_updateDisplayText;
- (id)_textFontForText:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)supportsResizeHandleDrawing;
- (void)viewDidMoveToWindow;
- (void)setPanelElement:(id)arg1 animated:(BOOL)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)setImage:(id)arg1 name:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)initView;
- (struct CGRect)resizeHandleRect;
- (struct CGRect)_buttonBackgroundFrame;
- (struct CGRect)_textFrame;
- (struct CGRect)_imageFrame;
- (BOOL)_hasCustomTextFrame;
- (BOOL)_shouldShowTextLabel;
- (double)_scaleFactorToDrawAt;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGImage *)_copyImageForResource:(id)arg1;
- (struct CGImage *)_copyImageForResource:(id)arg1 rect:(struct CGRect)arg2 extraRect:(struct CGRect)arg3;

@end

