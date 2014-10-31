/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOMapServiceTicket-Protocol.h"

@class GEOMapRegion, GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

// Not exported
@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket>
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    BOOL _canceled;
}

@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // @synthesize resultBoundingRegion=_resultBoundingRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(void)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(void)arg2;
- (void)_processRequest:(id)arg1 withHandler:(id)arg2 refinedHandler:(void)arg3 networkActivity:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

