//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "IEngineDispatchDelegate.h"
#import "QQRegisterProxyEventObserver.h"

@class NSString, QQDiscussgroupMsgHandler;

@interface DiscussgroupMsgChannel : QQBaseSingleton <QQRegisterProxyEventObserver, IEngineDispatchDelegate>
{
    QQDiscussgroupMsgHandler *_discussgroupMsgHandler;
}

@property(readonly) QQDiscussgroupMsgHandler *discussgroupMsgHandler; // @synthesize discussgroupMsgHandler=_discussgroupMsgHandler;
- (void).cxx_destruct;
- (void)didRecievedRoamMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedOfflineMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedOnlinePushMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedMsg:(CDStruct_a00ab4be)arg1;
- (id)parseRoamMsgs:(struct PbGetDiscussMsgResp *)arg1 identityUin:(long long)arg2;
- (void)notifyError:(id)arg1;
- (void)dealloc;
- (void)doInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
