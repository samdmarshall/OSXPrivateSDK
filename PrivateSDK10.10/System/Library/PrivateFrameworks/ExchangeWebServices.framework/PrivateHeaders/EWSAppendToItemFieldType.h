/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSItemChangeDescriptionType.h>

@class EWSItemType;

@interface EWSAppendToItemFieldType : EWSItemChangeDescriptionType
{
    EWSItemType *_Item;
}

+ (id)definition;
@property(retain, nonatomic) EWSItemType *Item; // @synthesize Item=_Item;
- (void)dealloc;

@end

