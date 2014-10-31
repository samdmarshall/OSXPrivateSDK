/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCObject.h>

#import "MCAnimationPathSupport-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface MCFilter : MCObject <MCAnimationPathSupport>
{
    NSMutableDictionary *mAttributes;
    NSMutableSet *mAnimationPaths;
    unsigned long long mIndex;
    NSString *mFilterID;
}

@property(copy) NSString *filterID; // @synthesize filterID=mFilterID;
@property(nonatomic) unsigned long long index; // @synthesize index=mIndex;
- (void)_copySelfToSnapshot:(id)arg1;
@property(copy) NSDictionary *attributes;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)addAnimationPath:(id)arg1;
- (id)animationPathForKey:(id)arg1;
@property(readonly) unsigned long long countOfAnimationPaths;
@property(readonly) NSSet *animationPaths;
- (void)addAnimationPathsToXMLElement:(id)arg1;
- (id)imprintsForAnimationPaths;
- (void)demolishAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)arg1;

@end

