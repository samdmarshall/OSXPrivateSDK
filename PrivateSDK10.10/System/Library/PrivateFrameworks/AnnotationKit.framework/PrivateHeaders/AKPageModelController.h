/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AKCropAnnotation, NSArray, NSMutableOrderedSet, NSMutableSet, NSSet;

@interface AKPageModelController : NSObject
{
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
    id _representedObject;
    AKCropAnnotation *_cropAnnotation;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain) AKCropAnnotation *cropAnnotation; // @synthesize cropAnnotation=_cropAnnotation;
@property __weak id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)restoreSelectionStateForUndo:(id)arg1;
- (id)selectionStateForUndo;
- (id)initWithArchivableRepresentation:(id)arg1;
- (id)archivableRepresentation;
- (BOOL)hasMaskBorderAnnotation;
- (void)removeCropToolAnnotation;
- (void)addCropToolAnnotation;
- (void)sendSelectedAnnotationsToBack;
- (void)sendSelectedAnnotationsBackward;
- (void)bringSelectedAnnotationsToFront;
- (void)bringSelectedAnnotationsForward;
- (void)selectAllAnnotations;
- (void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectAnnotation:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)containsAnnotation:(id)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)intersectSelectedAnnotations:(id)arg1;
- (void)removeSelectedAnnotations:(id)arg1;
- (void)removeSelectedAnnotationsObject:(id)arg1;
- (void)addSelectedAnnotations:(id)arg1;
- (void)addSelectedAnnotationsObject:(id)arg1;
@property(readonly) NSSet *selectedAnnotations;
- (void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *annotations;
- (id)init;

@end

