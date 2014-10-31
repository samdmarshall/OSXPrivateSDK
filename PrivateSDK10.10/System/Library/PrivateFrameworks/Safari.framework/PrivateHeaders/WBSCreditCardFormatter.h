/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFormatter.h"

// Not exported
@interface WBSCreditCardFormatter : NSFormatter
{
    BOOL _showLastFourDigits;
    BOOL _showCreditCardNumber;
    BOOL _allowsUnknownCardTypes;
}

@property(nonatomic) BOOL allowsUnknownCardTypes; // @synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes;
@property(nonatomic) BOOL showCreditCardNumber; // @synthesize showCreditCardNumber=_showCreditCardNumber;
@property(nonatomic) BOOL showLastFourDigits; // @synthesize showLastFourDigits=_showLastFourDigits;
- (struct _NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(struct _NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3;
- (struct _NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(struct _NSRange)arg2;
- (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(BOOL)arg2;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end

