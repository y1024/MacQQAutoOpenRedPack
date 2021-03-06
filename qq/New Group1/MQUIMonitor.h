//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "MacBlueDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface MQUIMonitor : QQBaseSingleton <MacBlueDelegate>
{
    struct __CVDisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *semaphore;
    int phase;
    NSMutableArray *_cpuRecords;
    NSMutableArray *_memoryRecords;
    NSMutableArray *_fpsRecords;
    BOOL _hasMonitorBegin;
    double _monitorDuration;
    NSString *_currentStage;
}

+ (void)stopMonitorStage:(id)arg1;
+ (void)startMonitorStage:(id)arg1;
+ (void)stopMonitor;
+ (void)startMonitor;
+ (void)setUin:(id)arg1;
+ (void)loadConfig;
+ (double)getCPUUseRate;
+ (double)getMemoryUse;
@property(retain) NSString *currentStage; // @synthesize currentStage=_currentStage;
@property BOOL hasMonitorBegin; // @synthesize hasMonitorBegin=_hasMonitorBegin;
@property double monitorDuration; // @synthesize monitorDuration=_monitorDuration;
- (void).cxx_destruct;
- (void)signalMonitor:(int)arg1;
- (void)startMonitorThread;
- (void)endAndOutputRecordPerformance;
- (void)startRecordPerformance;
- (void)randerTick:(const CDStruct_e50ab651 *)arg1;
- (void)stopDisplayLink;
- (void)prepareDisplayLink;
- (id)parseStackDataFromBlue:(id)arg1;
- (void)didEncounterStucks:(double)arg1 stage:(id)arg2 stack:(id)arg3;
- (id)init;
- (double)averageOfArray:(id)arg1;
- (double)standardDeviationOfArray:(id)arg1;
- (double)varianceOfArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

