/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FRScrollPerformanceViewController, NSObject<OS_dispatch_source>, NSString;

@interface FRScrollPerformanceTest : NSObject
{
    long long m_scrollFrame;
    long long m_scrollDirection;
    long long m_currentScrollPosition;
    long long m_scrollingSpeed;
    NSString *m_description;
    long long m_loadWatchdogTimer;
    long long m_shouldCancelTimerSoon;
    NSObject<OS_dispatch_source> *m_timer;
    NSObject<OS_dispatch_source> *m_marker_timer;
    unsigned long long m_marker_frame;
    BOOL m_stop_measuring_fps;
    double startTime;
    double endTime;
    FRScrollPerformanceViewController *viewController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stopTest;
- (void)startTestWithAutomaticScrolling:(BOOL)arg1;
- (void)scrollWithMaxScroll:(double)arg1;
- (void)stopMeasuringFPS;
- (void)startMeasuringFPS;
- (void)fakeEndMomentumScrollingEvent;
- (void)fakeVerticalScrollingEventWithAmount:(long long)arg1;
- (void)fakeMomentumScrollingEvent;

@end

