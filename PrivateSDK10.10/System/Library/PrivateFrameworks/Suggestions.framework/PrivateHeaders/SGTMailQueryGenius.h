/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Suggestions/SGTQueryGenius.h>

@class ABAddressBook, NSArray, NSMutableDictionary, NSString;

@interface SGTMailQueryGenius : SGTQueryGenius
{
    ABAddressBook *ab;
    NSMutableDictionary *imageCache;
    NSMutableDictionary *uniqueIDToLoader;
    BOOL contentSearchEnabled;
    NSString *contentSearchDisabledExplanation;
    NSArray *mailboxList;
    NSArray *mailFlagColors;
    NSArray *mailPriorities;
    NSArray *mailAccountPaths;
}

+ (id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2;
+ (BOOL)attributesRepresentsAPerson:(id)arg1;
+ (id)peopleAttributes;
+ (id)_attributeToScope;
+ (id)subjectCategoryWhenContentIsDisabled;
+ (id)subjectCategory;
+ (id)peopleCategoryForRecipients;
+ (id)peopleCategory;
+ (id)didYouMeanCategory;
@property(copy) NSString *contentSearchDisabledExplanation; // @synthesize contentSearchDisabledExplanation;
@property(getter=isContentSearchEnabled) BOOL contentSearchEnabled; // @synthesize contentSearchEnabled;
- (id)suggestionForUnknownPersonWithName:(id)arg1 address:(id)arg2;
- (id)suggestionForPerson:(id)arg1;
- (id)suggestionForSubject:(id)arg1;
- (void)suggesterBecomesIdle:(id)arg1;
- (id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3;
- (id)suggester:(id)arg1 filterSuggestion:(id)arg2 fromItem:(id)arg3 forInput:(id)arg4;
- (id)suggester:(id)arg1 additionalSuggestionsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartProcessingResultsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartSearchingSuggestionsForInput:(id)arg2;
- (id)rawQueryStringFromInputString:(id)arg1;
- (id)overridenAttributes;
- (void)_registerSuggester:(id)arg1;
- (void)postProcessSuggestions:(id)arg1 inCategory:(id)arg2;
- (id)mailboxRepresentedObjectsForSuggestion:(id)arg1;
- (id)mailPriorityRepresentedObjectForSuggestion:(id)arg1;
- (id)mailFlagColorRepresentedObjectForSuggestion:(id)arg1;
@property(copy) NSArray *mailPriorities;
@property(copy) NSArray *mailFlagColors;
@property(copy) NSArray *mailboxList;
@property(copy) NSArray *mailAccountPaths;
- (id)filterQueryStringForSuggestions:(id)arg1;
- (id)suggestionFromPropertyList:(id)arg1;
- (id)representedObjectFromPropertyList:(id)arg1;
- (id)propertyListForRepresentedObject:(id)arg1;
- (id)scopeMenuForSuggestion:(id)arg1;
- (id)displayNameForScope:(long long)arg1;
- (id)imageForSuggestion:(id)arg1;
- (id)_shorterDisplayNameForSuggestion:(id)arg1;
- (id)_shorterNameWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 fullName:(id)arg5;
- (id)_initialForName:(id)arg1;
- (id)allAttributeNamesForSuggestion:(id)arg1;
- (BOOL)attributeName:(id)arg1 isValidForScope:(long long)arg2;
- (long long)scopeForAttributeName:(id)arg1;
- (id)scopesForAttributeNames:(id)arg1;
- (id)_personForSuggestion:(id)arg1;
- (void)_scheduleCacheClear;
- (void)_clearImageCache;
- (long long)_fallbackScope;
- (id)identifier;
- (BOOL)offerDidYouMeanSuggestion;
- (void)dealloc;
- (id)init;

@end

