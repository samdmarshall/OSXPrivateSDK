/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HelpSDMIndex, HelpTokenizer, NSCharacterSet, NSDictionary, NSMutableDictionary, NSString;

@interface HelpSDMIndexBuilder : NSObject
{
    HelpSDMIndex *index;
    NSMutableDictionary *preservedTokenCounts;
    NSString *currentLanguage;
    NSCharacterSet *whitespaceCharacterSet;
    HelpTokenizer *tokenizer;
    NSDictionary *keywordExceptions;
}

@property(readonly) HelpSDMIndex *index; // @synthesize index;
- (id)tokenCountOfHelpArticle:(id)arg1;
- (id)_tokenIndexingPowerTable;
- (void)_calcAndSetMultigramThresholds;
- (void)pruneNGramTokensUsingKnownPhrases:(id)arg1;
- (id)tokenCountFromHelpArticleProperties:(id)arg1;
- (BOOL)addHelpArticleWithProperties:(id)arg1 withSubPath:(id)arg2;
- (BOOL)addHelpArticleAtURL:(id)arg1 withSubPath:(id)arg2;
- (void)startNewIndex;
- (id)versionedSDMIndexData;
- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)arg1 language:(id)arg2;

@end

