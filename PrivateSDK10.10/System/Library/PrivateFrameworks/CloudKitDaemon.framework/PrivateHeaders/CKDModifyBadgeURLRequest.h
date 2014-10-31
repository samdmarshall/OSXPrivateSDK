/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

// Not exported
@interface CKDModifyBadgeURLRequest : CKDURLRequest
{
    unsigned long long _badgeValue;
}

@property(readonly, nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithBadgeValue:(unsigned long long)arg1;

@end

