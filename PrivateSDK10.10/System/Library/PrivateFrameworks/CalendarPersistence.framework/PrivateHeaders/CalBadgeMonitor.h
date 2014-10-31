/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalPersistenceMonitor.h>

@class CalAccumulatingQueue, CalLimitingQueue;

@interface CalBadgeMonitor : CalPersistenceMonitor
{
    CalLimitingQueue *_updateRemindersBadgeQueue;
    CalAccumulatingQueue *_updateCalendarListBadgeCountQueue;
}

+ (id)badgeCountForReminders;
+ (id)badgeCountForCalendar;
+ (void)_postCalendarBadgeCountNeedsUpdateWithInserted:(BOOL)arg1 andDeleted:(BOOL)arg2;
+ (void)_postCalendarBadgeCountNeedsUpdate;
+ (void)scheduleNextRemindersBadgeUpdate;
+ (id)dateOfNextDueTimedReminder;
+ (id)todayComponents;
+ (id)nextOverdueTimeForAllDayReminders;
+ (id)currentOverdueDateForAllDayReminders;
+ (BOOL)isAfterAllDayOverdueTime;
+ (unsigned long long)numberOfOverDueRemindersAndMessages;
+ (void)reminderBecameOverdue;
+ (void)_agentUpdateCalendarListBadgeCounts:(id)arg1;
+ (void)agentUpdateCalendarListBadgeCountsForCalendars:(id)arg1;
+ (void)_agentUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate;
+ (void)agentUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate;
+ (void)_postReminderBadgeCountNeedsUpdate;
+ (void)postBadgeCountsNeedUpdate;
+ (id)sharedMonitor;
+ (void)initialize;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (void)_enqueueUpdateCalendarListBadgeCounts:(id)arg1;
- (void)_updateCalendarListBadgeCountsForCalendars:(id)arg1;
- (void)_enqueueUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate;
- (void)_updateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate;
- (BOOL)isInterestedInContext:(id)arg1;
- (id)init;

@end

