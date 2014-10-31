/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFQuoteParser, NSMutableSet, NSOperationQueue;

@interface MFSnippetCalculator : NSObject
{
    NSMutableSet *_messagesToCalculate;
    BOOL _isCalculating;
    id <MFSnippetCalculatorDelegate> _delegate;
    MFQuoteParser *_quoteParser;
    NSOperationQueue *_calculationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
@property(readonly, nonatomic) MFQuoteParser *quoteParser; // @synthesize quoteParser=_quoteParser;
@property __weak id <MFSnippetCalculatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_snippetFromAttachments:(id)arg1;
- (id)_snippetForMessage:(id)arg1;
- (void)_performSnippetCalculation;
- (void)_queueCalculationIfNecessary;
- (void)calculateSnippetsForMessages:(id)arg1;
- (void)immediatelyCalculateSnippetForMessage:(id)arg1;
- (id)init;

@end

