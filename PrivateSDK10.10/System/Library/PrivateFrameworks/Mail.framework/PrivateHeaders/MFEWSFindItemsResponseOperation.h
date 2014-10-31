/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSResponseOperation.h>

@class NSArray, NSDictionary;

@interface MFEWSFindItemsResponseOperation : MFEWSResponseOperation
{
    NSArray *_EWSFolderIds;
    NSDictionary *_rootFoldersByEWSFolderId;
}

@property(copy, nonatomic) NSDictionary *rootFoldersByEWSFolderId; // @synthesize rootFoldersByEWSFolderId=_rootFoldersByEWSFolderId;
@property(copy, nonatomic) NSArray *EWSFolderIds; // @synthesize EWSFolderIds=_EWSFolderIds;
- (void).cxx_destruct;
- (id)rootFolderForEWSFolderId:(id)arg1;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;

@end

