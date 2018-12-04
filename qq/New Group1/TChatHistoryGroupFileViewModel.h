//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatHistoryFileViewModel.h"

@class MQFileViewModel, QQGroupFileInfo, QQGroupFileTransferTask;

@interface TChatHistoryGroupFileViewModel : TChatHistoryFileViewModel
{
    QQGroupFileTransferTask *_task;
    QQGroupFileInfo *_fileInfo;
    MQFileViewModel *_fileViewModel;
}

- (void).cxx_destruct;
- (id)msgViewModel;
- (BOOL)showSaveTo;
- (BOOL)isImageFile;
- (void)handleProgressChanged:(id)arg1;
- (void)handleStatusChanged:(id)arg1;
- (void)showInFinderAction;
- (void)resumeTransferTaskAction;
- (void)pauseTransferTaskAction;
- (void)removeTransferTaskAction;
- (void)downloadAction;
- (void)onSaveToPath:(id)arg1;
- (void)doubleClickAction;
- (id)filePath;
- (void)updateStateText;
- (void)commonInitWithMessageModel:(id)arg1;
- (id)initWithMessageModel:(id)arg1;
- (void)dealloc;

@end

