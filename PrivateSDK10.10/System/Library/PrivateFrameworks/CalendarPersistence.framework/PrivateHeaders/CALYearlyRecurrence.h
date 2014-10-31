/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CoreRecurrenceRule.h>

@interface CALYearlyRecurrence : CoreRecurrenceRule
{
}

- (void)appendICSStringToString:(id)arg1;
- (BOOL)isEqualToRule:(id)arg1 consideringStartDate:(id)arg2;
- (id)acceptableMoveToTimeRangeForDate:(id)arg1;
- (id)proposedRuleForMovingFrom:(id)arg1 to:(id)arg2 changes:(id)arg3;
- (BOOL)ruleMatchesDate:(id)arg1;
- (id)realOccurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(BOOL)arg3;
- (id)occurrencesOnYear:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)_fastPathDeltaComponentsWithCount:(unsigned long long)arg1;
- (unsigned long long)_recurrenceUnitsToJumpBetween:(id)arg1 rangeStart:(id)arg2 inCalendar:(id)arg3;
- (BOOL)fastPathEligible;
- (int)lastSpecifiedRulePartOrder;

@end

