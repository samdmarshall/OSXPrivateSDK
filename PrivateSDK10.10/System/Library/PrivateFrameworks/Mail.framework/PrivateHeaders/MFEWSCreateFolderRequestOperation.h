/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MFEWSCreateFolderRequestOperation : MFEWSRequestOperation <NSCoding>
{
    int _mailboxType;
    NSString *_parentEWSFolderIdString;
    NSString *_offlineCreatedEWSFolderIdString;
    NSString *_folderName;
}

+ (Class)classForResponse;
@property(readonly, nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(readonly, copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(copy) NSString *offlineCreatedEWSFolderIdString; // @synthesize offlineCreatedEWSFolderIdString=_offlineCreatedEWSFolderIdString;
@property(readonly, copy, nonatomic) NSString *parentEWSFolderIdString; // @synthesize parentEWSFolderIdString=_parentEWSFolderIdString;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupOfflineResponse;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (id)copyWithUpdatedNameCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)_ewsCreateFolderRequestOperationCommonInitWithParentFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentEWSFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3 gateway:(id)arg4;

@end

