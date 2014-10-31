/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

@interface NSDictionary (MCXExtensions)
+ (id)dictionaryWithPseudoXMLString:(id)arg1;
+ (id)dictionaryWithManagedPrefsFromDomain:(id)arg1 forUser:(id)arg2;
+ (id)dictionaryWithManagedPrefsFromDomain:(id)arg1;
+ (id)dictionaryWithPrefsFromDomain:(id)arg1 withHomePath:(id)arg2 withEthernetAddressPathExtension:(id)arg3;
+ (id)dictionaryWithPrefsFromDomain:(id)arg1 withHomePath:(id)arg2;
+ (id)dictionaryWithPrefsFromDomain:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (BOOL)writeManagedPrefsInDomain:(id)arg1 forUser:(id)arg2;
- (BOOL)writeManagedPrefsInDomain:(id)arg1;
- (BOOL)writePrefsInDomain:(id)arg1 withHomePath:(id)arg2 withEthernetAddressPathExtension:(id)arg3;
- (BOOL)writePrefsInDomain:(id)arg1 withHomePath:(id)arg2;
- (BOOL)writePrefsInDomain:(id)arg1;
- (BOOL)writeToFile:(id)arg1 withFormat:(unsigned long long)arg2 atomically:(BOOL)arg3;
- (id)objectForKey:(id)arg1 withClass:(Class)arg2;
@end

