/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSView;

// Not exported
@interface SGTAccessiblitySuggestionMenuProxy : NSObject
{
    id parent;
    NSView *menu;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 menu:(id)arg2;

@end

