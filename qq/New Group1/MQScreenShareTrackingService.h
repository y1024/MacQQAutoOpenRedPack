//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MQScreenShareTrackingService : NSObject
{
    BOOL _pauseTrack;
    BOOL _isStart;
    NSMutableArray *_regularTrackerArray;
    NSObject<OS_dispatch_queue> *_captureImageQueue;
    NSObject<OS_dispatch_queue> *_regularProcessQueue;
    NSObject<OS_dispatch_source> *_gcdTimer;
    struct CGRect _lastCaptureFrame;
}

+ (id)sharedService;
@property(nonatomic) struct CGRect lastCaptureFrame; // @synthesize lastCaptureFrame=_lastCaptureFrame;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(nonatomic) BOOL isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *regularProcessQueue; // @synthesize regularProcessQueue=_regularProcessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureImageQueue; // @synthesize captureImageQueue=_captureImageQueue;
@property(retain, nonatomic) NSMutableArray *regularTrackerArray; // @synthesize regularTrackerArray=_regularTrackerArray;
@property(nonatomic) BOOL pauseTrack; // @synthesize pauseTrack=_pauseTrack;
- (void).cxx_destruct;
- (struct CGRect)rectOfWindowID:(unsigned int)arg1;
- (BOOL)isScreenOrWindowExist:(unsigned int)arg1 windowID:(unsigned int)arg2;
- (void)didCaptureNewImage:(struct CGImage *)arg1;
- (struct CGImage *)captureImageWithDisplayID:(unsigned int)arg1 windowID:(unsigned int)arg2 exceptWindowIDArray:(id)arg3;
- (void)stopCapture;
- (void)startCapture;
- (void)checkStartOrStopCapture;
- (void)clearTracker;
- (void)deleteAllRegularTracker;
- (void)handleAfterTrack;
- (void)trackRegularMarkInfoWithCGImageRef:(struct CGImage *)arg1;
- (BOOL)isTrackerExistWithMarkInfo:(id)arg1;
- (void)deleteTrackerByUI:(id)arg1;
- (void)addTrackerByUI:(id)arg1;
- (id)init;

@end

