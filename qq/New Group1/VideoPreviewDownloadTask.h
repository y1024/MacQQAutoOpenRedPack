//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonTransferTask.h"

@class FAModel;

@interface VideoPreviewDownloadTask : CommonTransferTask
{
    FAModel *_faModel;
}

- (void).cxx_destruct;
- (id)GetPreviewPath;
- (void)_doPreprocess:(id)arg1;
- (void)onDoTransfer;
- (void)onDoPreprocess;
- (id)initWithFaModel:(id)arg1;

@end

