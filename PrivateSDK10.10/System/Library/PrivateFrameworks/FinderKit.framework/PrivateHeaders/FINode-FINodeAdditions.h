/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FINode.h"

#import "IKImageBrowserDatasourceItemPrivate-Protocol.h"
#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL;

@interface FINode (FINodeAdditions) <QLPreviewItem, IKImageBrowserDatasourceItemPrivate>
- (id)copyImageRepresentation:(id *)arg1 options:(id)arg2;
- (id)IKImageRepresentationWithType:(id)arg1;
- (struct OpaqueIconRef *)createAlternativeIconRepresentationWithOptions:(id)arg1;
- (_Bool)isDimmed;
- (struct __CFDictionary *)quickLookThumbnailOptions;
- (id)imageLabel;
- (id)tagImageForCell:(id)arg1;
- (id)imageTitle;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)imageUIDForViewIdentifierPrefix:(id)arg1;
- (id)imageRepresentationTypeForViewIdentifierPrefix:(const struct TString *)arg1;
- (_Bool)isInIconView;
- (id)viewIdentifierPrefix;
- (struct CGImage *)createImageForMaximumSize:(struct CGSize)arg1 options:(struct __CFDictionary *)arg2;
- (id)previewItemLocalizedDescription;
- (id)previewItemDisplayName;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (struct TFENode)feNodeFollowingAliasChainAsyncWithTarget:(id)arg1 allowInteraction:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;
@end

