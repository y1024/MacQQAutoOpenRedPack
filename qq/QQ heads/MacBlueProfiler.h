//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MacBlueProfiler : NSObject
{
}

+ (void)reportToAPM:(id)arg1 extra:(id)arg2;
+ (id)zipData:(id)arg1;
+ (id)rdmuuid;
+ (id)getExtra:(double)arg1 stage:(id)arg2;
+ (id)deviceDictionary;
+ (void)updateCurrentStage:(id)arg1;
+ (id)handleReportData:(double)arg1 stack:(id)arg2 stage:(id)arg3;
+ (void)openSystemStackTrace;
+ (void)enableDeadLockMonitor;
+ (void)stopStuckMonitor;
+ (void)beginStuckMonitor:(double)arg1;
+ (void)setPID:(id)arg1;
+ (void)setAppversion:(id)arg1;
+ (void)setUin:(id)arg1;
+ (void)setBlueDelegate:(id)arg1;
+ (void)registerLogCallback:(CDUnknownFunctionPointerType)arg1;

@end

