/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMMigrationEngineStep.h>

@class NSArray;

@interface SMMigrateUserAccountsStep : SMMigrationEngineStep
{
    NSArray *_usersToDelete;
}

@property(retain) NSArray *usersToDelete; // @synthesize usersToDelete=_usersToDelete;
- (void).cxx_destruct;
- (id)fdeUsersToAdd;
- (id)process;
- (id)preProcess;
- (id)description;
- (id)initWithEngine:(id)arg1;

@end

