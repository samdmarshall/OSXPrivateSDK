/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionMovePanel : ACSHAction
{
    int _moveToPosition;
}

@property(nonatomic) int moveToPosition; // @synthesize moveToPosition=_moveToPosition;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;

@end

