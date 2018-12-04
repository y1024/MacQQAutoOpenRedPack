//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "IMsgReliableTransportationService.h"
#import "MessageSenderDelagate.h"
#import "QQAccountEventObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, RTSDataSource;

@interface QMsgReliableTransportationService : QQBaseSingleton <IMsgReliableTransportationService, MessageSenderDelagate, QQAccountEventObserver>
{
    NSMutableDictionary *mSendResultHandlerDic;
    NSString *mUin;
    RTSDataSource *mDataSource;
    NSMutableArray *mSenderQueue;
    NSString *_uin;
}

@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)handleMsgSender:(id)arg1 msgSeqId:(int)arg2 sendResult:(int)arg3;
- (void)onWillLogoutCurrentAccount;
- (void)onDidLoginAccount;
- (BOOL)isMsgSending:(id)arg1;
- (id)getAllPiecesOfOneLongMsg:(id)arg1;
- (void)markMultiMessageAllFailed:(id)arg1;
- (void)removeMultiMessagesFromSendQueue:(id)arg1;
- (BOOL)isMultiMessageSentOutCompletely:(id)arg1;
- (id)getSendingUserInfoBySeq:(int)arg1;
- (id)removeSendingMsgBySeq:(int)arg1;
- (int)sendMessage:(id)arg1 transportLicence:(id)arg2;
- (id)getLicence:(id)arg1;
- (void)unregisterSendResultHandler:(id)arg1;
- (id)registerSendResultHandler:(id)arg1;
- (BOOL)handleMSFData:(CDStruct_a00ab4be)arg1;
- (id)getSendingMsgCacheFileName;
- (BOOL)tryResendMsg:(id)arg1 bySender:(id)arg2 rtsErrorCode:(int *)arg3;
- (BOOL)isLicenceVaild:(id)arg1;
- (void)installSenders;
- (void)doInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
