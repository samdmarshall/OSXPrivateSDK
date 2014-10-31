/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSDraggingDestination-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "SafariDelegatingView-Protocol.h"
#import "ViewReuseManagerDelegate-Protocol.h"

@class GridCellView, NSDictionary, NSEvent, NSIndexSet, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, NSTimer, SeparatorView, ViewReuseManager;

// Not exported
@interface GridView : NSView <NSDraggingSource, NSDraggingDestination, ViewReuseManagerDelegate, SafariDelegatingView>
{
    ViewReuseManager *_viewReuseManager;
    NSMutableArray *_cellViews;
    NSLayoutConstraint *_titleVerticalConstraint;
    SeparatorView *_separator;
    NSLayoutConstraint *_separatorWidthConstraint;
    BOOL _needsReload;
    BOOL _needsLayoutOnAppear;
    BOOL _ignoreSetNeedsLayout;
    unsigned long long _numberOfColumns;
    struct CGSize _cellSize;
    struct CGSize _cellMargin;
    struct NSEdgeInsets _contentInsets;
    NSEvent *_initialMouseDownEvent;
    unsigned long long _selectedCellIndex;
    GridCellView *_selectedCell;
    unsigned long long _draggingSourceOperationMaskWithinApplication;
    unsigned long long _draggingSourceOperationMaskOutsideApplication;
    unsigned long long _lastDragOperation;
    BOOL _didAttemptDragging;
    unsigned long long _dropIndex;
    unsigned long long _draggedCellIndex;
    unsigned long long _replaceableIndex;
    NSIndexSet *_fixedCellIndexes;
    NSDictionary *_cellIndexesToDraggedCellIndexes;
    GridCellView *_removedCell;
    unsigned long long _removedCellIndex;
    GridCellView *_lastCellBeneathMouse;
    NSTimer *_cellHoverTimer;
    BOOL _shouldShowAccessoryViewImmediately;
    NSLayoutConstraint *_widthConstraint;
    NSView *_externalNextKeyView;
    unsigned long long _indexOfCellToMakeFirstResponderWhenReverseLooping;
    long long _deferCellUpdatesCounter;
    NSMutableArray *_deferredCellUpdates;
    BOOL _forceTitleVisible;
    int _presentationMode;
    float _widthConstraintPriority;
    float _heightConstraintPriority;
    id <SafariViewDelegate> _safariViewDelegate;
    id <GridViewDataSource> _dataSource;
    id <GridViewDelegate> _delegate;
    long long _gridViewDisplayMode;
    long long _gridViewLayoutMode;
    NSTextField *_titleView;
    unsigned long long _minimumNumberOfColumns;
    unsigned long long _maximumNumberOfColumns;
    unsigned long long _maximumNumberOfRows;
    double _minimumCellHeightToWidthRatio;
    double _maximumCellHeightToWidthRatio;
    double _maximumWidth;
    NSLayoutConstraint *_heightConstraint;
    struct CGSize _minimumCellMargin;
    struct CGSize _minimumCellSize;
}

+ (id)arrayByExchangingElementsInArray:(id)arg1 usingMap:(id)arg2;
+ (unsigned long long)removedIndexInIndexMap:(id)arg1 type:(unsigned long long *)arg2;
+ (unsigned long long)insertedIndexInIndexMap:(id)arg1 type:(unsigned long long *)arg2;
+ (void)_removeHoleInIndexMap:(id)arg1 betweenRangesOfOccupiedIndexes:(id)arg2;
+ (id)indexExchangesWithDraggedIndex:(unsigned long long)arg1 dropIndex:(unsigned long long)arg2 replaceableIndex:(unsigned long long)arg3 numberOfIndexes:(unsigned long long)arg4 maximumNumberOfIndexes:(unsigned long long)arg5 fixedIndexes:(id)arg6;
+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double maximumCellHeightToWidthRatio; // @synthesize maximumCellHeightToWidthRatio=_maximumCellHeightToWidthRatio;
@property(nonatomic) double minimumCellHeightToWidthRatio; // @synthesize minimumCellHeightToWidthRatio=_minimumCellHeightToWidthRatio;
@property(nonatomic) struct CGSize minimumCellSize; // @synthesize minimumCellSize=_minimumCellSize;
@property(nonatomic) struct CGSize minimumCellMargin; // @synthesize minimumCellMargin=_minimumCellMargin;
@property(nonatomic) unsigned long long maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property(nonatomic) unsigned long long maximumNumberOfColumns; // @synthesize maximumNumberOfColumns=_maximumNumberOfColumns;
@property(nonatomic) unsigned long long minimumNumberOfColumns; // @synthesize minimumNumberOfColumns=_minimumNumberOfColumns;
@property(nonatomic) float heightConstraintPriority; // @synthesize heightConstraintPriority=_heightConstraintPriority;
@property(nonatomic) float widthConstraintPriority; // @synthesize widthConstraintPriority=_widthConstraintPriority;
@property(nonatomic) BOOL forceTitleVisible; // @synthesize forceTitleVisible=_forceTitleVisible;
@property(readonly, nonatomic) NSTextField *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long gridViewLayoutMode; // @synthesize gridViewLayoutMode=_gridViewLayoutMode;
@property(nonatomic) long long gridViewDisplayMode; // @synthesize gridViewDisplayMode=_gridViewDisplayMode;
@property(nonatomic) __weak id <GridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) int presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) __weak id <SafariViewDelegate> safariViewDelegate; // @synthesize safariViewDelegate=_safariViewDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cellViewDidBecomeFirstResponder:(id)arg1;
- (void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2;
- (void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3;
- (void)_prepareCellView:(id)arg1 forIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfCellViewsAssumingAllRowsAreFilledInRect:(struct CGRect)arg1;
- (struct _NSRange)_cellRangeInRect:(struct CGRect)arg1;
- (void)_updateDrawnCellViews;
- (void)_updateDrawnCellViewsWithoutTriggeringLayout;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)_scrollViewDidScroll:(id)arg1;
- (void)_createViewReuseManagerIfNeeded;
- (Class)_cellViewClass;
- (void)_enumeratePreparedCellsUsingBlock:(id)arg1;
- (struct _NSRange)_visibleCellRange;
- (void)_handleMouseExitedCellView:(id)arg1;
- (void)_handleMouseEnteredCellView:(id)arg1;
- (void)_cellHoverTimerFired:(id)arg1;
- (void)_updateFinalDraggingFrameForDraggingInfo:(id)arg1 dropIndex:(unsigned long long)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_updateDragAndDropStateWithDraggingInfo:(id)arg1 newDragOperation:(unsigned long long)arg2 newDropIndex:(unsigned long long)arg3 shouldLayOut:(BOOL)arg4;
- (unsigned long long)_validateDragWithInfo:(id)arg1 dropIndex:(unsigned long long *)arg2;
- (void)_hideRemovedCellIfNeeded;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_reinsertDraggedCellIfNecessary;
- (void)_beginAnimationOfType:(long long)arg1 forCellWithView:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_draggingImageForCellAtIndex:(unsigned long long)arg1 withEvent:(id)arg2;
- (BOOL)_canDragCellAtIndex:(unsigned long long)arg1;
- (void)_startDraggingCellAtIndex:(unsigned long long)arg1 event:(id)arg2 pasteboardWriter:(id)arg3;
- (void)_performDragFromMouseDown:(id)arg1;
- (void)_revertDraggingChangesIfNeeded;
- (void)_applyCellReorderingAfterDraggingIsRemovingDraggedCell:(BOOL)arg1;
- (void)_updateCellIndexDuringDraggingForDropIndex;
- (void)_requestFixedCellIndexesIfNeeded;
- (unsigned long long)dropIndexForPoint:(struct CGPoint)arg1;
- (unsigned long long)_indexOfCellFromEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)menuForEvent:(id)arg1;
@property(nonatomic) BOOL drawsSeparator;
- (void)_createTitleViewIfNeeded;
@property(copy, nonatomic) NSString *title;
- (void)_updatePresentationModeAttributes;
- (void)_unregisterForScrollViewNotificationsIfNeeded;
- (void)_registerForScrollViewNotificationsIfNeeded;
- (void)_recalculateKeyLoop;
- (double)_calculatedMaximumGridViewHeight;
- (double)_calculatedMinimumGridViewWidth;
- (unsigned long long)_numberOfRowsForNumberOfCells:(unsigned long long)arg1 dividedAmongNumberOfColumns:(unsigned long long)arg2;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_numberOfCellsFromDataSource;
- (unsigned long long)_maximumValidDropIndex;
- (unsigned long long)_numberOfCells;
- (void)_getColumnIndex:(unsigned long long *)arg1 andRowIndex:(unsigned long long *)arg2 forCellIndex:(unsigned long long)arg3;
- (unsigned long long)_numberOfColumnsInWidth:(double)arg1 computedCellSize:(struct CGSize *)arg2;
- (double)_marginForCellWidth:(double)arg1;
- (struct CGSize)_cellSizeIncludingMargin;
- (void)_setUpHeightConstraintIfNeeded;
- (void)_setUpWidthConstraintIfNeeded;
- (void)_setUpViewSizes;
- (BOOL)_usingTopSitesSnapshotsLayoutPath;
- (struct CGRect)_availableBounds;
- (void)_layOutSubviewsAnimated:(BOOL)arg1;
- (void)_updateGridViewWidths;
- (void)layout;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)updateConstraints;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)viewForCellAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfCellView:(id)arg1;
- (unsigned long long)_indexOfCellAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForCellAtIndex:(unsigned long long)arg1;
- (void)activateCellView:(id)arg1;
- (id)makeGridCellView;
- (void)_commitDeferredCellUpdates;
- (void)_deferCellUpdate:(id)arg1;
- (void)_beginDeferringCellUpdates;
- (BOOL)_shouldDeferCellUpdates;
- (void)moveCellAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)reloadCellAtIndex:(unsigned long long)arg1;
- (void)removeCellAtIndex:(unsigned long long)arg1;
- (void)insertCellAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 ifWithinApplication:(BOOL)arg2;
- (unsigned long long)draggingSourceOperationMaskIfWithinApplication:(BOOL)arg1;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)_commonGridViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

