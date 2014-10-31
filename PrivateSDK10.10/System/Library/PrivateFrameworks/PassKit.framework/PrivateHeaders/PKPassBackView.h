/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/PKPassView.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSScrollView, NSString, NSTableColumn, NSTableView, PKButton;

@interface PKPassBackView : PKPassView <NSTableViewDataSource, NSTableViewDelegate>
{
    NSScrollView *_backFieldsScrollView;
    NSTableView *_backFieldsTableView;
    NSTableColumn *_backFieldsTableColumn;
    PKButton *_backDoneButton;
}

@property(readonly) PKButton *backDoneButton; // @synthesize backDoneButton=_backDoneButton;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPass:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBackFieldBackgroundNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawGloss;
- (void)drawBackgroundAndClip:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)backFieldBackgroundRect;
- (void)dealloc;
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

