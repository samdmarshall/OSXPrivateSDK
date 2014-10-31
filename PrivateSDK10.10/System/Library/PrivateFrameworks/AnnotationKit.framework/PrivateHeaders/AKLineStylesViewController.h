/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class AKController, NSMutableArray, NSStackView;

@interface AKLineStylesViewController : NSViewController
{
    AKController *_controller;
    id _actionBlock;
    NSStackView *_stackView;
    NSMutableArray *_viewItems;
}

@property(retain) NSMutableArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(copy) id actionBlock; // @synthesize actionBlock=_actionBlock;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_lineStyleToolTipForTag:(long long)arg1;
- (id)_generateLineImageForTag:(long long)arg1;
- (id)_imageForTag:(long long)arg1;
- (id)_separatorView;
- (id)_lineStyleItemForTag:(long long)arg1;
- (void)_setupLineStyles;
- (void)_selectOption:(id)arg1;
- (BOOL)validateUserInterfaceItems;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithController:(id)arg1;

@end

