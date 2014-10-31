/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class DDNonTerminal, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

// Not exported
@interface DDGrammar : NSObject <NSCoding>
{
    NSMutableArray *_nonTerminals;
    NSMutableSet *_allNames;
    int _tokenGen;
    DDNonTerminal *_start;
    NSArray *_allProductionsCache;
    long long _nextNonTerminalId;
    struct __CFDictionary *_terminalById;
    NSMutableDictionary *_nonTerminalByVariable;
    struct __DDProtoLexemeCollection *_plCollection;
}

- (void)setNonTerminalSymbol:(id)arg1 forVariable:(id)arg2;
- (id)nonTerminalSymbolForVariable:(id)arg1;
- (struct __DDProtoLexemeCollection *)plCollection;
- (id)start;
- (id)allProductions;
- (id)locationString;
- (id)grammarAsString;
- (void)feedWithTopLevelExpressions:(id)arg1 plCollection:(struct __DDProtoLexemeCollection *)arg2 manager:(id)arg3;
- (id)terminalSymbolWithLookupTokenId:(long long)arg1 name:(id)arg2;
- (id)terminalSymbolWithTokenId:(long long)arg1 name:(id)arg2;
- (id)buildNonTerminalSymbol;
- (id)buildNonTerminalSymbolWithName:(id)arg1;
- (id)freshNameWithBase:(id)arg1;
- (long long)nextNonTerminalIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

