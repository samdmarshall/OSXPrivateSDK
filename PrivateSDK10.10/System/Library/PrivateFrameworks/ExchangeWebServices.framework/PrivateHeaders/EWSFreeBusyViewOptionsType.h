/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSDuration;

@interface EWSFreeBusyViewOptionsType : NSObject
{
    EWSDuration *_TimeWindow;
    long long _MergedFreeBusyIntervalInMinutes;
    int _RequestedView;
}

+ (id)definition;
@property(nonatomic) int RequestedView; // @synthesize RequestedView=_RequestedView;
@property(nonatomic) long long MergedFreeBusyIntervalInMinutes; // @synthesize MergedFreeBusyIntervalInMinutes=_MergedFreeBusyIntervalInMinutes;
@property(retain, nonatomic) EWSDuration *TimeWindow; // @synthesize TimeWindow=_TimeWindow;
- (void)dealloc;

@end

