/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class BU_ButtonController, BU_DateFlatControl, BU_TMControl, BU_TMFloatParameterController, BU_TMTimeline, BU_TMToolbarPushButton, BU_TTimelineOverlay, CABackdropLayer, CALayer, CAMediaTimingFunction, NSButton, NSMutableArray;

// Not exported
@interface BU_TBackupView : NSView
{
    CABackdropLayer *fBackdropLayer;
    CALayer *fBaseLayer;
    CALayer *fBackgroundLayer;
    CALayer *fDesktopPictureLayer;
    CALayer *fDesktopTintLayer;
    unsigned long long fAnimating;
    _Bool fFinderIsClient;
    _Bool fBackgroundAnimation;
    NSMutableArray *fSnapshotLayers;
    NSMutableArray *fRestoreLayers;
    CALayer *fWindowLayer;
    CALayer *fRevealLayer;
    CALayer *fControlsLayer;
    CALayer *fHotSpotLayer;
    unsigned long long fSnapshotsToShow;
    unsigned long long fTopSnapshot;
    long long fRequestedSnapshot;
    long long fWarpPosition;
    struct vector<CGRect, std::__1::allocator<CGRect>> fScaledBounds;
    struct CGPoint fStartPosition;
    double fHorizon;
    _Bool fCollapsed;
    _Bool fFullBackupUI;
    _Bool fExiting;
    double fLastCompletion;
    _Bool fFadeWindowLayer;
    struct CGPoint fLiveWindowPosition;
    double fBackgroundAnimationStartY;
    double fBackgroundAnimationEndY;
    struct TBackupController *fController;
    CAMediaTimingFunction *fEaseInEaseOut;
    struct TFCGImage *fWindowHighlightImage;
    _Bool fRestorableLocation;
    BU_TMControl *fLastHitControl;
    BU_TMTimeline *fTimelineControl;
    BU_TTimelineOverlay *fTimelineOverlay;
    BU_TMToolbarPushButton *fRestoreAllButton;
    BU_ButtonController *fButtonController;
    NSButton *fCancelButton;
    NSButton *fRestoreButton;
    NSButton *fPreviousButton;
    NSButton *fNextButton;
    BU_DateFlatControl *fDateText;
    struct OpaqueEventHandlerRef *fEventMonitorHandler;
    BU_TMFloatParameterController *fStarsZOffset;
    struct CGRect _pixelBounds;
    struct TNSRef<BU_TBUStarfieldShadowLayer *> _shadowLayer;
    struct TNSRef<BU_DPRemoteDesktopPicture *> fRemoteDesktopPicture;
    struct TNSRef<NSArray *> fDesktopFilters;
}

+ (struct CGImage *)invalidSnapshotImageWithSize:(struct CGSize)arg1 imageScalingContext:(struct CGContext *)arg2 drawContext:(struct CGContext *)arg3 needsLoad:(_Bool)arg4;
+ (double)fadeBackAlphaForSnapshotIndex:(unsigned long long)arg1 numberShown:(unsigned long long)arg2;
+ (id)createBackupViewWithFrame:(struct CGRect)arg1 inWindow:(id)arg2;
+ (void)initInterpolators;
@property unsigned long long isAnimating; // @synthesize isAnimating=fAnimating;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setShadowInfo:(struct CGImage *)arg1 shadowImageBounds:(struct CGRect)arg2 contentImageBounds:(struct CGRect)arg3;
- (void)calculateLayerBounds:(unsigned long long)arg1 baseBounds:(struct CGRect)arg2 withSunRaised:(_Bool)arg3;
- (struct CGRect)calculateLayerBoundsAtNormalizedZ:(double)arg1 withBaseBounds:(struct CGRect)arg2 withTargetY:(double)arg3;
- (struct CGRect)projectedBoundsAtZPosition:(double)arg1 forCameraPosition:(struct CGPoint)arg2 withUnscaledBounds:(struct CGRect)arg3;
- (struct CGRect)layerBoundsAtPosition:(long long)arg1;
- (struct CGRect)topScreenLocalBounds;
- (struct CGRect)topBounds;
- (void)showRestoreAnimationStartingAt:(double)arg1 withDuration:(double)arg2;
- (void)showRestoreLayersNow;
- (void)setRestoreAnimationInfo:(id)arg1;
- (void)setController:(struct TBackupController *)arg1;
- (void)triggerSnapshotWarp:(unsigned long long)arg1 duration:(double)arg2 warpForward:(_Bool)arg3;
- (void)setSunAnimationStart:(unsigned long long)arg1;
- (void)triggerSunriseAnimationFromY:(double)arg1 toY:(double)arg2 duration:(double)arg3;
- (void)showHideRevealAnimationCompleted:(_Bool)arg1;
- (void)collapseOrExpand:(_Bool)arg1 startTime:(double)arg2;
- (void)updateProxyImage:(struct CGImage *)arg1 requestNewImages:(_Bool)arg2;
- (void)spacingCurveChanged;
- (void)prepareToHide:(_Bool)arg1 windowCenterPoint:(struct CGPoint)arg2;
- (void)stabilizeForExitWithNowImage:(struct CGImage *)arg1;
- (void)showRevealLayerNow;
- (void)showHideRevealAnimation:(_Bool)arg1;
- (void)prepareToReveal:(_Bool)arg1;
- (void)setRevealImages:(struct CGPoint)arg1 window:(struct CGImage *)arg2 reveal:(struct CGImage *)arg3;
- (void)promoteDemoteSnapshotAnimationComplete:(id)arg1 withNewTopSnapshot:(id)arg2;
- (void)revealOutAnimationComplete:(id)arg1;
- (void)revealInAnimationComplete:(id)arg1;
- (void)prepareToRevealInAnimationComplete:(id)arg1;
- (void)hideTopSnapshotComplete:(id)arg1;
- (void)showTopSnapshotComplete:(id)arg1;
- (void)snapshotsChanged:(_Bool)arg1 forceRefresh:(_Bool)arg2;
- (void)finishAllAnimations;
- (void)animationComplete;
- (id)newAnimationCompleteDelegate:(int)arg1 forKey:(id)arg2 withLayer:(id)arg3;
- (id)newAnimationCompleteDelegate:(int)arg1 forKey:(id)arg2;
- (double)calculateNextStartTime:(int)arg1;
- (double)calculateNextStartTime:(int)arg1 withDivisor:(double)arg2;
- (double)nextStartTime;
- (void)activateTopSnapshot;
- (void)hideTopSnapshotNow;
- (void)hideTopSnapshot;
- (void)showTopSnapshotNow;
- (void)flushFrameToDisplay;
- (void)showTopSnapshot;
- (id)layerForSnapshot:(struct TSnapshot *)arg1;
- (struct TBackupLayerList)layersForTarget:(struct TTimeMachineTarget *)arg1;
- (id)layerForUrl:(const struct TString *)arg1;
- (void)gotoTarget:(struct TTimeMachineTarget *)arg1;
- (void)gotoSnapshot:(unsigned long long)arg1;
- (void)promoteDemoteSnapshot:(id)arg1;
- (void)updateAnimationEnd:(unsigned long long)arg1;
- (id)animationParametersForLayer:(id)arg1 atIndex:(long long)arg2;
- (id)animationParametersForLayer:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (double)divisorFor:(unsigned long long)arg1;
- (double)calculateExposureForSnapshotIndex:(unsigned long long)arg1;
- (double)calculateInputIntensityForSnapshotIndex:(unsigned long long)arg1;
- (struct CGColor *)calculateShadingFilterColorForSnapshotIndex:(unsigned long long)arg1;
- (void)removeAllSnapshotLayers;
- (void)addLayer:(struct CGImage *)arg1 forTarget:(struct TTimeMachineTarget *)arg2;
- (void)setMaxLayerCount:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (void)invalidateSnapshotImageFor:(id)arg1;
- (void)requestSnapshotImageFor:(id)arg1;
- (void)validateTargetForURL:(const struct TString *)arg1 withRevisionID:(void *)arg2;
- (void)validateSnapshot:(struct TSnapshot *)arg1 forTargetURL:(const struct TString *)arg2 forTarget:(struct TFENode)arg3;
- (void)configureLayer:(id)arg1 forInvalidState:(_Bool)arg2;
- (double)backgroundOpacityForSnapshotIndex:(unsigned long long)arg1;
- (void)updateLayers:(struct CGImage *)arg1 forTarget:(struct TTimeMachineTarget *)arg2;
- (void)updateLayers:(const struct TBackupLayerList *)arg1 forImage:(struct CGImage *)arg2;
- (void)retargetLayer:(unsigned long long)arg1 forTarget:(struct TTimeMachineTarget *)arg2;
- (void)setIsFinderClient:(_Bool)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)initAnimationConstants;
- (_Bool)canShowBackgroundAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 window:(id)arg2;
- (id)desktopPictureLayerForDisplay:(int)arg1;
- (void)renewGState;
- (void)nextPressed:(id)arg1;
- (void)previousPressed:(id)arg1;
- (void)toggleShowChangesPressed:(id)arg1;
- (void)restoreAllPressed:(id)arg1;
- (void)restorePressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)updateButtonsEnableStateForTarget:(struct TTimeMachineTarget *)arg1;
- (void)updateButtonsEnableStateForSelection:(unsigned long long)arg1;
- (void)updateButtonsEnableStateForTargetIndex:(long long)arg1;
- (struct CGPoint)bigArrowsLocationForWindowBounds:(const struct CGPoint *)arg1;
- (void)positionButtonsForWindowBounds:(struct CGRect)arg1;
- (void)finishResizingWindow:(const struct CGPoint *)arg1;
- (void)startResizingWindow;
- (int)currentSnapshotIndex;
- (void)setTargets:(const struct TTimeMachineTargetList *)arg1;
- (void)selectTarget:(struct TTimeMachineTarget *)arg1;
- (void)shutDownEventMonitor;
- (void)setupEventMonitor;
- (void)viewDidMoveToWindow;
- (struct CGRect)caRendererBounds;
- (struct CGRect)pixelBounds;
- (struct CGRect)cgScaledViewBounds;
- (struct CGPoint)convertPointToControlsPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToViewPoint:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

