/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionPlaceholder : ACSHAction
{
    int _placeholderActionType;
}

@property(readonly, nonatomic) int placeholderActionType; // @synthesize placeholderActionType=_placeholderActionType;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)perform;
- (void)setPlaceholderActionType:(int)arg1;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;

@end

