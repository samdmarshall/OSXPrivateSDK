/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface GEOETAProvider : NSObject
{
}

- (void)cancelRequest;
- (void)startSimpleETARequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)updateRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_96e0509c *)arg2 willSendRequest:(id)arg3 finished:(void)arg4 error:(id)arg5;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;

@end

