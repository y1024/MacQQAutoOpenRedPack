//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface HeartBeatMgr : NSObject
{
    NSTimer *_timer;
    NSTimer *_reqTimer;
    int tmIntervel;
    BOOL isWaitRsp;
    int maxTimeoutCnt;
    id delegate;
}

@property(nonatomic) int maxTimeoutCnt; // @synthesize maxTimeoutCnt;
@property(nonatomic) BOOL isWaitRsp; // @synthesize isWaitRsp;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)stop;
- (int)getTimerIntervel;
- (void)stopReqTimer;
- (void)startReqTimer;
- (void)stopTimer;
- (void)startTimer:(int)arg1;
- (void)dealloc;
- (id)init;

@end

