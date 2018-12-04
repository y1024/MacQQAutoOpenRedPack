//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSThread, NSTimer;

@interface BDHUploadManager : NSObject
{
    NSTimer *_checkTimer;
    NSThread *_uploadThread;
    NSOperationQueue *_uploadQueue;
    double _actTime;
    NSMutableDictionary *_progressDict;
}

+ (long long)getTaskID;
+ (id)instance;
- (id)uploadThread;
- (void)finishUploadThread;
- (float)progressForTask:(long long)arg1;
- (void)clearAllUploadFiles;
- (void)clearAllUploadFilesThread;
- (void)cancelUpload:(long long)arg1;
- (long long)startUpload:(id)arg1;
- (BOOL)startUploadBatch:(id)arg1 fileType:(int)arg2;
- (void)preBuildConnection;
- (void)dealloc;
- (id)init;
- (void)updateRequestTimer;
- (void)checkWaitingRequest;
- (void)notifySessionNoAvailabe;
- (void)notifySessionFail:(id)arg1;
- (void)notifySessionSuccss:(id)arg1;
- (int)getRequestNum;
- (void)checkBuildConnection;
- (void)preBuildConnectionThread;
- (void)clearSessionThread;
- (void)notifyBDHCancel:(id)arg1;
- (void)notifyBDHProgress:(id)arg1;
- (void)notifyBDHFail:(id)arg1;
- (void)notifyBDHSucess:(id)arg1;
- (void)notifyBDHBeginUpload:(id)arg1;
- (void)notifyBDHRequestStart:(id)arg1;
- (void)notifyBDHRequestCancel:(id)arg1;
- (void)notifyBDHRequestFinish:(id)arg1;
- (void)checkTimerStatus;
- (void)stopCheckTimer;
- (void)startCheckTimer;
- (void)checkState;
- (void)applicationEventListen;
- (void)removeApplicationEventListen;
- (void)applicationWillEnterForeground;
- (void)applicationWillEnterBackground;
- (void)runRequests;

@end

