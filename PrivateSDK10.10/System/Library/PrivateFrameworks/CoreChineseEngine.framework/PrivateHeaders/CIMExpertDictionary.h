/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CIMExpertDictionary : NSObject
{
    NSString *_inputModeIdentifier;
    NSString *_defaultsKey;
    BOOL _enabled;
}

+ (id)dictionaryWithDefaultsKey:(id)arg1 enabled:(BOOL)arg2 inputModeIdentifier:(id)arg3;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
@property(copy, nonatomic) NSString *inputModeIdentifier; // @synthesize inputModeIdentifier=_inputModeIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithDefaultsKey:(id)arg1 enabled:(BOOL)arg2 inputModeIdentifier:(id)arg3;

@end

