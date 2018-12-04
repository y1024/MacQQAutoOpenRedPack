//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileTransferOperation.h"

#import "NSURLSessionDataDelegate.h"
#import "QQGroupFileOIDBRespondDelegate.h"

@class NSFileHandle, NSMutableData, NSString, NSURLSession, NSURLSessionTask, QQGroupFileDownloadTask, QQGroupFileOIDBRequest;

@interface QQGroupFileDownloadOperation : QQGroupFileTransferOperation <QQGroupFileOIDBRespondDelegate, NSURLSessionDataDelegate>
{
    NSMutableData *_cacheData;
    QQGroupFileOIDBRequest *_downloadRequest;
    QQGroupFileDownloadTask *_downloadTask;
    NSURLSession *_urlSession;
    NSURLSessionTask *_urlTask;
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSURLSessionTask *urlTask; // @synthesize urlTask=_urlTask;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) QQGroupFileDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) QQGroupFileOIDBRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishOperation;
- (void)writeFileData:(id)arg1;
- (BOOL)checkFile;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)start;
- (id)initWithDownloadTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

