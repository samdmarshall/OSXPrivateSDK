/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/XSDefinition.h>

@class NSMapTable;

@interface XSChoiceDefinition : XSDefinition
{
    NSMapTable *_elements;
}

- (id)elements;
- (id)elementForValue:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setName:(id)arg1 namespaceURI:(id)arg2 forType:(Class)arg3;

@end

