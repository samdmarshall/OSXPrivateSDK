/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppContainer/ASBContainerAction.h>

@class NSString;

@interface ASBContainerActionCopyContents : ASBContainerAction
{
    NSString *_sourceSpec;
    NSString *_destSpec;
}

- (BOOL)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;

@end

