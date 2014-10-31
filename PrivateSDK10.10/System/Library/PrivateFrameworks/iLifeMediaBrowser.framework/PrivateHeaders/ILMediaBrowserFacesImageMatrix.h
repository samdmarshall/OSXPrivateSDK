/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeMediaBrowser/ILMediaBrowserImageMatrix.h>

@interface ILMediaBrowserFacesImageMatrix : ILMediaBrowserImageMatrix
{
    long long cellUnderMouseRow;
    long long cellUnderMouseColumn;
}

- (void)mouseMoved:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)wantsFlagsChangedEventsForSkimming;
- (void)updateLayoutUsingMaxWidth:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfColumnsForCurrentBounds;

@end

