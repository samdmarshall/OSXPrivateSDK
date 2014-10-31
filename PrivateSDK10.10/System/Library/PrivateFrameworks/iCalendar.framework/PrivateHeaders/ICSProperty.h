/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSWriting-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSCoding, ICSWriting>
{
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

- (id)description;
- (id)stringValue;
- (id)parameters;
- (BOOL)alwaysHasParametersToSerialize;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (id)allParameters;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)addParametersFromDictionary:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (id)value;
- (unsigned long long)type;
- (BOOL)isMultiValued;
- (void)dealloc;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (void)setValueAsProperty:(id)arg1 withRawValue:(const char *)arg2 options:(unsigned long long)arg3;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;
- (void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3;

@end

