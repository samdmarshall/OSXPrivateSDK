/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVCreate : ISS_DAVRequest
{
}

+ (id)dmCreateRequestWithSession:(id)arg1 file:(id)arg2 props:(id)arg3 URI:(id)arg4;
+ (id)dmCreateRequestWithSession:(id)arg1 data:(id)arg2 props:(id)arg3 URI:(id)arg4;
- (void)finalizeOperation;
- (void)addPropHeaders:(id)arg1;
- (id)dmCreateWithSession:(id)arg1 data:(id)arg2 props:(id)arg3 URI:(id)arg4;

@end

