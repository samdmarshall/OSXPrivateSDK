/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ProTableData : NSObject
{
    struct {
        unsigned int tracksMouse:1;
        unsigned int trackingRectsAreDirty:1;
        unsigned int autohideAlternatingRowBackgroundColors:1;
        unsigned int drawsRowSelectionHighlight:1;
    } _proFlags;
    struct __CFSet *_trackingRectTags;
    int _cellTrackingRow;
    int _cellTrackingColumn;
    long long _variant;
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

