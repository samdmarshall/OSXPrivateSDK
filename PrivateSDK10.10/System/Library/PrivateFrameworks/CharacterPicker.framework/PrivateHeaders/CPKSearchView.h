/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSSearchField;

// Not exported
@interface CPKSearchView : NSView
{
    NSSearchField *_searchField;
    id <CPKSearchViewDelegate> _searchDelegate;
    long long _maxFoundCount;
    BOOL _shown;
}

@property(nonatomic, getter=isShown) BOOL shown; // @synthesize shown=_shown;
@property long long maxFoundCount; // @synthesize maxFoundCount=_maxFoundCount;
@property(readonly) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property id <CPKSearchViewDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)searchDone:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

