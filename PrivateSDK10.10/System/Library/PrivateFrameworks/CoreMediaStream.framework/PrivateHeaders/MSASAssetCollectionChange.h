/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MSASAssetCollectionChange : NSObject
{
    BOOL _wasDeleted;
    NSString *_GUID;
    NSString *_ctag;
}

@property(nonatomic) BOOL wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)description;

@end

