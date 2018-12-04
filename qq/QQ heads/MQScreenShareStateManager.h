//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQScreenShareSession, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MQScreenShareStateManager : NSObject
{
    BOOL _isSupportMark;
    BOOL _isStart;
    unsigned long long _shareState;
    MQScreenShareSession *_screenShareSession;
    NSObject<OS_dispatch_source> *_gcdTimer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct AV_ID _avID;
}

+ (id)sharedManager;
@property(nonatomic) struct AV_ID avID; // @synthesize avID=_avID;
@property(nonatomic) BOOL isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(nonatomic) BOOL isSupportMark; // @synthesize isSupportMark=_isSupportMark;
@property(retain, nonatomic) MQScreenShareSession *screenShareSession; // @synthesize screenShareSession=_screenShareSession;
@property(nonatomic) unsigned long long shareState; // @synthesize shareState=_shareState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopSendRunningStateWithTimer;
- (void)startSendRunningStateWithTimer;
- (void)onReceiveRunningStateFromSponsor:(BOOL)arg1;
- (void)sessionWillEnd:(id)arg1;
- (void)resetCurrentMarkEnableState;
- (void)sessionDidStart;
- (void)sessionWillStart:(id)arg1 beforeSession:(id)arg2;
- (void)onScreenShareStateChanged:(unsigned long long)arg1 sessionUin:(unsigned long long)arg2 sessionType:(long long)arg3 startOrEnd:(BOOL)arg4;
- (id)init;

@end

