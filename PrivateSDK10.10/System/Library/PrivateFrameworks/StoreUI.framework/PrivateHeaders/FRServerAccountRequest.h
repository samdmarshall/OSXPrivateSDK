/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreUI/FRServerRequest.h>

@class NSString;

@interface FRServerAccountRequest : FRServerRequest
{
    NSString *_accountName;
    float _balance;
}

@property float balance; // @synthesize balance=_balance;
@property __weak NSString *accountName; // @synthesize accountName=_accountName;
- (void).cxx_destruct;

@end

