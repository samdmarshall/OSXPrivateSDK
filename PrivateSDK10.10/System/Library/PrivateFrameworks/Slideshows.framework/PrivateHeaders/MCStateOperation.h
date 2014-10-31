/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCAction.h>

@class NSString;

@interface MCStateOperation : MCAction
{
    NSString *_stateKey;
}

+ (id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2;
@property(copy) NSString *stateKey; // @synthesize stateKey=_stateKey;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
@property(nonatomic) BOOL recordsTime;
@property(nonatomic) BOOL alwaysNotifies;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

