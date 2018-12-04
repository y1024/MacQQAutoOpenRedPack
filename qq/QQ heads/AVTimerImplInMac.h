//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface AVTimerImplInMac : NSObject
{
    unsigned long long _timerCount;
    NSTimer *_timer;
    NSMutableArray *_timerIdArr;
    struct CScopePtr<IAVTimerCallBack> _pCallBack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeTimerId:(int)arg1;
- (void)addTimerId:(int)arg1 withinterval:(int)arg2;
- (void)onTimer:(id)arg1;
- (void)setCamCallBack:(struct IAVTimerCallBack *)arg1;
- (void)stopAllTiming;
- (void)stopTiming:(int)arg1;
- (void)startTiming:(int)arg1 withInterval:(int)arg2;
- (void)dealloc;
- (id)init;

@end

