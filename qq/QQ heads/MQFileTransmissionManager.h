//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MQFileTransmissionManager : NSObject
{
    NSMutableDictionary *_taskId2TaskInfo;
    NSMutableDictionary *_taskId2SpeedChecker;
    NSMutableDictionary *_taskId2DockProgressIndicator;
    NSMutableDictionary *_canceledTaskInfo;
    NSMutableSet *_resendFailDataReportFileSet;
    NSMutableArray *_allTransmissions;
}

+ (BOOL)canSendFolderUsingTransmissionType:(int)arg1;
+ (BOOL)canSendFolderToChatType:(int)arg1;
+ (id)sharedManager;
+ (id)taskInfoWithDataLineSessionID:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableSet *resendFailDataReportFileSet; // @synthesize resendFailDataReportFileSet=_resendFailDataReportFileSet;
- (void).cxx_destruct;
- (void)infoFileBoxOfFileTransferingCompleted:(id)arg1;
- (void)dataReportForResendBtnShow:(id)arg1;
- (void)handleLoginOK:(id)arg1;
- (void)addSendingCheckErrorTipsToAIO:(int)arg1 withPath:(id)arg2 toSession:(id)arg3;
- (id)getSendingCheckErrorTips:(int)arg1 withPath:(id)arg2 toSession:(id)arg3;
- (void)addServerErrorTipsToAIO:(id)arg1 toSession:(id)arg2;
- (id)taskInfoForMessageModel:(id)arg1;
- (id)taskInfoForTaskId:(id)arg1;
- (id)taskInfoForJobID:(unsigned long long)arg1 fileType:(int)arg2;
- (id)taskInfoForOfflineJobID:(unsigned long long)arg1;
- (void)forceAllTransmissionStop;
- (BOOL)hasUncompletedTasks;
- (id)getTaskList;
- (int)canSendFolder:(id)arg1 toSession:(id)arg2;
- (int)canSendFile:(id)arg1 toSession:(id)arg2 transmissionType:(int)arg3;
- (int)canForwardFile:(id)arg1 toSession:(struct _BHMessageSession)arg2 transmissionType:(int)arg3;
- (void)queryFileStrategy:(id)arg1 filePath:(id)arg2 block:(id)arg3;
- (void)convertTransferType:(id)arg1;
- (BOOL)refuse:(id)arg1;
- (BOOL)cancel:(id)arg1;
- (void)_saveBookmarkWithFilePath:(id)arg1;
- (void)resume:(id)arg1;
- (void)download:(id)arg1;
- (void)download:(id)arg1 directory:(id)arg2;
- (BOOL)startTask:(id)arg1;
- (void)sendDataLineFiles:(id)arg1 toDeviceUIN:(id)arg2;
- (int)resendFile:(id)arg1 withTransmissionType:(int)arg2;
- (void)showFileTransNotification:(id)arg1;
- (void)updateFileModel:(id)arg1 isProgerss:(BOOL)arg2;
- (void)sendFile:(id)arg1;
- (long long)getFileSize:(id)arg1;
- (int)forwardFile:(id)arg1 toBHMsgSession:(struct _BHMessageSession)arg2 transmissionType:(int)arg3;
- (int)forwardFile:(id)arg1 toSession:(id)arg2 transmissionType:(int)arg3;
- (int)forwardFile:(id)arg1 toSession:(id)arg2;
- (int)sendFile:(id)arg1 toSession:(id)arg2 transmissionType:(int)arg3 isQueryStrategy:(BOOL)arg4;
- (int)sendFile:(id)arg1 toSession:(id)arg2 transmissionType:(int)arg3;
- (int)sendFile:(id)arg1 toSession:(id)arg2 isQueryStrategy:(BOOL)arg3 block:(id)arg4;
- (void)fileTransmissionProgressUpdated:(float)arg1 taskInfo:(id)arg2;
- (void)fileTransmissionCompleted:(BOOL)arg1 error:(id)arg2 taskInfo:(id)arg3;
- (BOOL)isFile:(id)arg1 sendingToSession:(id)arg2;
- (void)dealloc;
- (void)didReceiveFileMsg:(id)arg1;
- (void)handleOnlineTaskChangeBeforeRecv:(id)arg1;
- (void)handleGroupFileDownload:(id)arg1;
- (id)init;
- (void)handleDataLineTaskCancel:(id)arg1;
- (void)handleDataLineTaskFail:(id)arg1;
- (void)handleDataLineTaskSuccess:(id)arg1;
- (void)handleDataLineTaskUpdateProgress:(id)arg1;
- (void)handleDataLineTaskNew:(id)arg1;
- (void)removeDataLineNotificationObservers;
- (void)addDataLineNotificationObservers;
- (id)workingTaskInfoForDataLineSessionID:(unsigned long long)arg1;
- (void)showOnlineFileTransNotification:(id)arg1;
- (void)postTaskDidProgressNotificationWithTaskInfo:(id)arg1;
- (void)postTaskDidCancelNotificationWithTaskInfo:(id)arg1;
- (void)postTaskDidCompleteNotificationWithTaskInfo:(id)arg1;
- (void)postTaskWillStartNotificationWithTaskInfo:(id)arg1;
- (void)postNewTaskNotificationWithTaskInfo:(id)arg1;
- (void)stopDockProgressForTaskInfo:(id)arg1;
- (void)updateDockProgressForTaskInfo:(id)arg1;
- (void)startDockProgressForTaskInfo:(id)arg1;

@end

