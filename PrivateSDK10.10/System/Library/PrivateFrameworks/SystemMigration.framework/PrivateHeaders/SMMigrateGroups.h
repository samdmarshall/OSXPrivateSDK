/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMMigrationEngineStep.h>

@interface SMMigrateGroups : SMMigrationEngineStep
{
}

- (id)postProcess;
- (BOOL)_migrateGroups;
- (BOOL)_createGroup:(id)arg1 inDB:(id)arg2;
- (BOOL)_deleteGroup:(id)arg1 inDB:(id)arg2;

@end

