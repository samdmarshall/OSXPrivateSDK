/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VKAnchor : NSObject
{
    shared_ptr_6f3fd3aa _anchor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) id <VKAnchorDelegate> delegate;
- (long long)worldIndexWithContext:(id)arg1;
@property(readonly, nonatomic) struct VKPoint worldPoint;
@property(readonly, nonatomic) struct VKPoint mercatorPoint;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)setMercatorPoint:(struct VKPoint)arg1;
- (void)worldPointDidChange;
@property(readonly, nonatomic) BOOL followsTerrain;
@property(readonly, nonatomic) BOOL isGeocentric;
@property(readonly, nonatomic) BOOL isMercator;
- (id)initWithAnchor:(shared_ptr_6f3fd3aa)arg1;

@end

