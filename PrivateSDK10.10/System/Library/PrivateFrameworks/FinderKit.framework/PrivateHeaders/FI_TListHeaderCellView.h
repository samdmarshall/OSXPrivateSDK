/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

// Not exported
@interface FI_TListHeaderCellView : NSTableCellView
{
    struct TNSRef<FI_TImageView *> _tagImageView;
    struct TNSRef<FI_TUpdateLayerView *> _rightSeparatorView;
    struct TNSRef<FI_TUpdateLayerView *> _leftSeparatorView;
    double _rightTextMargin;
    double _leftTextMargin;
    _Bool _isSortAscending;
    _Bool _isDragging;
    _Bool _isPressed;
    _Bool _isNextCellViewPressed;
    _Bool _isInFloatingHeader;
    struct TKeyValueObserver _textFieldStringValueObserver;
}

@property(nonatomic, getter=isInFloatingHeader) _Bool inFloatingHeader; // @synthesize inFloatingHeader=_isInFloatingHeader;
@property(nonatomic, getter=isNextCellViewPressed) _Bool nextCellViewPressed; // @synthesize nextCellViewPressed=_isNextCellViewPressed;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_isPressed;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_isDragging;
@property(nonatomic, getter=isSortAscending) _Bool sortAscending; // @synthesize sortAscending=_isSortAscending;
@property(nonatomic) double leftTextMargin; // @synthesize leftTextMargin=_leftTextMargin;
@property(nonatomic) double rightTextMargin; // @synthesize rightTextMargin=_rightTextMargin;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layout;
- (void)updateLayer;
- (_Bool)hitTestInSeparator:(const struct CGPoint *)arg1;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @dynamic separatorHidden;
@property(nonatomic, getter=isSortTriangleHidden) _Bool sortTriangleHidden; // @dynamic sortTriangleHidden;
- (id)sortTriangleView;
- (void)setTagImage:(id)arg1;
- (void)cloneFrom:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

