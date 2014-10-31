/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface PKField : NSObject <NSCoding>
{
    BOOL _textAlignmentSpecified;
    BOOL _useDateFormatter;
    BOOL _isRelative;
    BOOL _useNumberFormatter;
    int _type;
    NSString *_key;
    NSString *_label;
    NSString *_value;
    NSString *_attributedValue;
    unsigned long long _textAlignment;
    NSString *_changeMessage;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    NSNumber *_valueNumber;
    unsigned long long _numberStyle;
    NSString *_currencyCode;
}

+ (id)_hrefParsingRegex;
@property(retain) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property unsigned long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property BOOL useNumberFormatter; // @synthesize useNumberFormatter=_useNumberFormatter;
@property(retain) NSNumber *valueNumber; // @synthesize valueNumber=_valueNumber;
@property BOOL isRelative; // @synthesize isRelative=_isRelative;
@property unsigned long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property BOOL useDateFormatter; // @synthesize useDateFormatter=_useDateFormatter;
@property(retain) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;
@property unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property BOOL textAlignmentSpecified; // @synthesize textAlignmentSpecified=_textAlignmentSpecified;
@property int type; // @synthesize type=_type;
@property(copy) NSString *attributedValue; // @synthesize attributedValue=_attributedValue;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)attributedValueStringWithFont:(id)arg1 foregroundColor:(id)arg2;
- (id)_attributedStringByParsingLinksInString:(id)arg1 font:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

