/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface _Node : NSObject
{
    NSString *_identifier;
    id _representedObject;
    NSMutableArray *_children;
    NSMutableArray *_parents;
}

- (void)addParent:(id)arg1;
- (void)addChild:(id)arg1;
- (id)parents;
- (id)children;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 withRepresentedObject:(id)arg2;

@end

