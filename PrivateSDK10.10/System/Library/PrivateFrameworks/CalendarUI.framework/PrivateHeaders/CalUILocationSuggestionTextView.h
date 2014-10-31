/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/CalUILocationSuggestionView.h>

@class CalUILocationSuggestionIconView, CalUILocationSuggestionTextField;

@interface CalUILocationSuggestionTextView : CalUILocationSuggestionView
{
    CalUILocationSuggestionTextField *_subtextField;
    CalUILocationSuggestionIconView *_iconView;
}

@property(retain) CalUILocationSuggestionIconView *iconView; // @synthesize iconView=_iconView;
@property(retain) CalUILocationSuggestionTextField *subtextField; // @synthesize subtextField=_subtextField;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setIsSelected:(BOOL)arg1;
- (void)updateWithLocation:(id)arg1 subtextString:(id)arg2 icon:(id)arg3 progressIndicator:(id)arg4 frame:(struct CGRect)arg5;
- (id)init;

@end

