/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TTableViewItem.h>

@class NSColor, NSImage, NSString;

// Not exported
@interface FI_TTaggingSuggestionsTableViewItem : FI_TTableViewItem
{
    long long _labelColor;
    _Bool _userVisible;
    _Bool _pinned;
    long long _sidebarIndex;
    _Bool _isShowAll;
    _Bool _isCreateTag;
    _Bool _needsCustomSelect;
    _Bool _isMoveTag;
    NSString *_tagName;
}

+ (id)itemForMoveTag:(const struct TString *)arg1;
+ (id)itemForCreateNewTag:(const struct TString *)arg1;
+ (id)showAllItem;
+ (id)itemForTag:(id)arg1 needsCustomSelect:(_Bool)arg2;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, nonatomic) _Bool needsCustomSelect; // @synthesize needsCustomSelect=_needsCustomSelect;
@property(readonly, nonatomic) _Bool isMoveTag; // @synthesize isMoveTag=_isMoveTag;
@property(readonly, nonatomic) _Bool isCreateTag; // @synthesize isCreateTag=_isCreateTag;
@property(readonly, nonatomic) _Bool isShowAll; // @synthesize isShowAll=_isShowAll;
@property(readonly, nonatomic) long long sidebarIndex; // @synthesize sidebarIndex=_sidebarIndex;
@property(readonly, nonatomic) _Bool pinned; // @synthesize pinned=_pinned;
@property(readonly, nonatomic) _Bool userVisible; // @synthesize userVisible=_userVisible;
@property(readonly, nonatomic) long long labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) _Bool isTag; // @dynamic isTag;
@property(retain, nonatomic) NSColor *textColor; // @dynamic textColor;
- (void)setColorNumber:(id)arg1;
- (id)colorNumber;
@property(retain, nonatomic) NSString *name; // @dynamic name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTag:(id)arg1 needsCustomSelect:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSImage *image; // @dynamic image;

@end

