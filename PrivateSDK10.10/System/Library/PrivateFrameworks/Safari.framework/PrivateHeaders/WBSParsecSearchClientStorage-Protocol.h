/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURLCache;

@protocol WBSParsecSearchClientStorage <NSObject>
@property(readonly, nonatomic) NSURLCache *bagURLCache;
@property(retain, nonatomic) NSDate *userGUIDExpirationDate;
@property(copy, nonatomic) NSString *userGUID;
@end

