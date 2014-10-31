/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

// Not exported
@interface EDResources : NSObject
{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)tableStyles;
- (id)differentialStyles;
- (id)fills;
- (id)border;
- (id)borders;
- (id)links;
- (id)names;
- (id)themes;
- (id)colors;
- (id)styles;
- (id)alignmentInfos;
- (id)fonts;
- (id)contentFormats;
- (id)strings;
- (void)dealloc;
- (id)initWithStringOptimization:(_Bool)arg1;
- (void)setThemes:(id)arg1;
- (void)setColors:(id)arg1;

@end

