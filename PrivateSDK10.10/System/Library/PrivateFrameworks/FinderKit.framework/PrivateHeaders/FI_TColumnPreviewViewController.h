/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TInfoWindowViewController.h>

@class FI_TColumnQLPreviewViewController;

// Not exported
@interface FI_TColumnPreviewViewController : FI_TInfoWindowViewController
{
    FI_TColumnQLPreviewViewController *_qlPreviewViewController;
}

- (void)targetNodesChanged;
- (void)targetNodesChanging;
- (void)setSubviewsHidden:(_Bool)arg1;
- (_Bool)expandedDefaultValue;
- (_Bool)expanded;
- (void)loadValueControllers;

@end

