/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, SPCExpressionEnvironment, SPCRelationshipMap;

@interface SPCPalette : SPCObject <NSCoding>
{
    SPCPalette *_superpalette;
    SPCExpressionEnvironment *_expressionEnvironment;
    NSMutableArray *_subpalettes;
    NSMutableArray *_elements;
    NSMutableDictionary *_variablesByIdentifier;
    NSMutableArray *_effects;
    SPCRelationshipMap *_styleRelationshipMap;
    NSMutableArray *_stylesStorage;
    NSArray *_stylesCache;
    NSMutableArray *_tmpDecodedObjectForEnvironment;
}

@property(retain, nonatomic) NSMutableArray *tmpDecodedObjectForEnvironment; // @synthesize tmpDecodedObjectForEnvironment=_tmpDecodedObjectForEnvironment;
@property(retain) NSArray *stylesCache; // @synthesize stylesCache=_stylesCache;
@property(retain) NSMutableArray *stylesStorage; // @synthesize stylesStorage=_stylesStorage;
@property(retain, nonatomic) SPCRelationshipMap *styleRelationshipMap; // @synthesize styleRelationshipMap=_styleRelationshipMap;
@property(retain, nonatomic) NSMutableArray *effects; // @synthesize effects=_effects;
@property(retain, nonatomic) NSMutableDictionary *variablesByIdentifier; // @synthesize variablesByIdentifier=_variablesByIdentifier;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSMutableArray *subpalettes; // @synthesize subpalettes=_subpalettes;
@property(retain, nonatomic) SPCExpressionEnvironment *expressionEnvironment; // @synthesize expressionEnvironment=_expressionEnvironment;
@property(nonatomic) SPCPalette *superpalette; // @synthesize superpalette=_superpalette;
- (void)addPlaceholderStyles;
- (id)addStyleWithDefaultProperties;
- (id)objectIdentifiersReferencingStyle:(id)arg1;
- (void)layerStateStorage:(id)arg1 willStopReferencingStyle:(id)arg2;
- (void)layerStateStorage:(id)arg1 willStartReferencingStyle:(id)arg2;
- (void)removeStyle:(id)arg1;
- (void)addStyle:(id)arg1;
- (void)insertStyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)styleForIdentifier:(id)arg1;
@property(readonly) NSArray *styles;
- (id)addElementWithDefaultProperties;
@property(readonly, nonatomic) NSArray *assets;
- (void)removeVariable:(id)arg1;
- (void)addVariable:(id)arg1;
- (id)variableForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allVariableIdentifiers;
@property(readonly, nonatomic) NSArray *allVariables;
- (void)removeObjectFromElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2;
- (void)addElement:(id)arg1;
- (void)willMoveToSuperpalette:(id)arg1;
- (void)removeSubpalette:(id)arg1;
- (void)addSubpalette:(id)arg1;
- (id)logicalPathToEnvironment;
- (id)defaultLogicalPathCollectionName;
- (void)setEnvironment:(id)arg1;
- (void)removeObjectFromEnvironment:(id)arg1;
- (void)addObjectToEnvironment:(id)arg1;
- (void)dealloc;
- (void)initializeStorage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

