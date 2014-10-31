/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface MFEWSDeleteItemsRequestOperation : MFEWSRequestOperation <NSCoding>
{
    NSArray *_EWSItemIds;
    NSString *_folderIdString;
}

+ (Class)classForResponse;
@property(readonly, copy, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
@property(readonly, copy, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
- (void).cxx_destruct;
- (void)setupOfflineResponse;
- (id)prepareRequest;
- (id)activityString;
- (void)_ewsDeleteItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 folderIdString:(id)arg2;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEWSItemIds:(id)arg1 folderIdString:(id)arg2 gateway:(id)arg3;

@end

