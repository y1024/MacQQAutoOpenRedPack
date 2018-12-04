//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSView, ScheduleModel;

@protocol TIMCalenderMonthViewControllerDelegate <NSObject>
- (void)modifySchedule:(ScheduleModel *)arg1 withDate:(NSDate *)arg2;
- (void)createWithDate:(NSDate *)arg1;
- (void)cancelSchedule:(ScheduleModel *)arg1;
- (void)deleteSchedule:(ScheduleModel *)arg1;
- (void)onDoubleClickDate:(NSDate *)arg1 schedule:(ScheduleModel *)arg2;
- (void)selectSchedule:(ScheduleModel *)arg1 baseView:(NSView *)arg2 date:(NSDate *)arg3;
- (void)monthChangedWithDate:(NSDate *)arg1;
@end

