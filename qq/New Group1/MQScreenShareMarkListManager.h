//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQScreenShareSession, NSArray, NSMutableArray;

@interface MQScreenShareMarkListManager : NSObject
{
    MQScreenShareSession *_session;
    NSMutableArray *_muRegularMarkArray;
    double _lastAddedMarkTime;
}

+ (id)sharedInstance;
@property(nonatomic) double lastAddedMarkTime; // @synthesize lastAddedMarkTime=_lastAddedMarkTime;
@property(retain, nonatomic) NSMutableArray *muRegularMarkArray; // @synthesize muRegularMarkArray=_muRegularMarkArray;
@property(retain, nonatomic) MQScreenShareSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)filterRepeatMarkInfo:(id)arg1;
- (void)transformMarkInfo:(id)arg1;
- (void)clearMarkArray;
@property(readonly, nonatomic) NSArray *regularMarkArray;
- (void)clearAll;
- (void)receiverHandleTrackingChangeMarkInfo:(id)arg1;
- (void)receiverHandleNotifyMarkInfo:(id)arg1;
- (void)receiverHandleStopBySponsor:(id)arg1;
- (void)receiverHandleRunningStateBySponsor:(id)arg1;
- (void)stopWithSession:(id)arg1 completion:(id)arg2;
- (void)sponsorSendRunningStateWithCompletion:(id)arg1;
- (void)receiverHandleDeleteAllBySponsor:(id)arg1;
- (void)sponsorHandleDeleteAllByReceiver:(id)arg1;
- (void)sponsorHandleCancelSelectMarkInfo:(id)arg1;
- (void)sponsorHandleSelectMarkInfo:(id)arg1;
- (void)sponsorHandleReceiverUIDeleteMarkInfo:(id)arg1;
- (void)sponsorHandleReceiverUIChangeMarkInfo:(id)arg1;
- (void)sponsorHandleReceiverUIAddMarkInfo:(id)arg1;
- (void)sponsorHandleTrackingChangeMarkInfo:(id)arg1;
- (void)receiverDeleteAllMarkInfoByUIWithCompletion:(id)arg1;
- (void)receiverCancelSelectMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)receiverSelectMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)receiverDeleteMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)receiverModifyMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)receiverAddMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)sponsorDeleteAllMarkInfoByUIWithCompletion:(id)arg1;
- (void)sponsorCancelSelectMarkInfoByUI:(id)arg1 withCGImageRef:(struct CGImage *)arg2 completion:(id)arg3;
- (void)sponsorSelectMarkInfoByUI:(id)arg1 completion:(id)arg2;
- (void)sponsorDeleteMarkInfoByUI:(id)arg1 withCGImageRef:(struct CGImage *)arg2 completion:(id)arg3;
- (void)sponsorModifyMarkInfoByUI:(id)arg1 withCGImageRef:(struct CGImage *)arg2 completion:(id)arg3;
- (void)sponsorAddMarkInfoByUI:(id)arg1 withCGImageRef:(struct CGImage *)arg2 completion:(id)arg3;
- (id)markInfoArrayCreateByUin:(id)arg1 fromMarkArray:(id)arg2;
- (id)markInfoWithCreatorUin:(id)arg1 markID:(id)arg2;
- (void)onRegularMarkDisppearAfterTrackNotify:(id)arg1;
- (void)dealloc;
- (void)test;
- (id)init;

@end

