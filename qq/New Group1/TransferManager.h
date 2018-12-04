//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface TransferManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_taskCache;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (id)getTransferTaskWithTaskID:(unsigned long long)arg1;
- (void)cancelTransferTaskByTaskID:(unsigned long long)arg1;
- (void)cancelTransferTask:(id)arg1;
- (void)addTransferTask:(id)arg1 compeltion:(id)arg2 progress:(id)arg3;
- (void)onDidChangeAccount;
- (id)initWithConcurrentCount:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
