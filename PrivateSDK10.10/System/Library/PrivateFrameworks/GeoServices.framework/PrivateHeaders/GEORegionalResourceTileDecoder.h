/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOTileDecoder-Protocol.h"

@class NSString;

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>
{
}

- (id)decodeTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (BOOL)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

