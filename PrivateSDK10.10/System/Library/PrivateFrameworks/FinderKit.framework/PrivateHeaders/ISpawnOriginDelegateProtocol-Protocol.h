/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TValidatorClientProtocol-Protocol.h"

@protocol ISpawnOriginDelegateProtocol <TValidatorClientProtocol>
- (id)window;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;

@optional
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
@end

