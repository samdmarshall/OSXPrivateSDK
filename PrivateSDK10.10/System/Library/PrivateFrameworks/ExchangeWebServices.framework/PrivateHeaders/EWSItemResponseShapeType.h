/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface EWSItemResponseShapeType : NSObject
{
    int _BaseShape;
    BOOL _IncludeMimeContent;
    int _BodyType;
    NSArray *_AdditionalProperties;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *AdditionalProperties; // @synthesize AdditionalProperties=_AdditionalProperties;
@property(nonatomic) int BodyType; // @synthesize BodyType=_BodyType;
@property(nonatomic) BOOL IncludeMimeContent; // @synthesize IncludeMimeContent=_IncludeMimeContent;
@property(nonatomic) int BaseShape; // @synthesize BaseShape=_BaseShape;
- (id)description;
- (void)dealloc;

@end

