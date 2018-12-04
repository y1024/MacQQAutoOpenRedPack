//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAVSession.h"

@class NSMutableArray, NSString;

@interface DAVSession : NSObject <IAVSession>
{
    struct AV_ID _avID;
    int _sessionState;
    double _startTime;
    double _endTime;
    NSString *_qualityTips;
    int _relationType;
    BOOL _bRequestChat;
    BOOL _bVideoChat;
    unsigned long long _llEndReason;
    struct CScopePtr<CDAVBaseVideo> _pBaseVideo;
    int _videoChatState;
    NSMutableArray *_userList;
    BOOL _isMicOn;
    BOOL _isSpeakerOn;
    BOOL _isCamOn;
    BOOL _isScreenshareOn;
    BOOL _isMarkOn;
    BOOL _isMarkEnable;
    BOOL _isRecordMovieOn;
    BOOL _isFriendListShow;
}

@property(nonatomic) BOOL isFriendListShow; // @synthesize isFriendListShow=_isFriendListShow;
@property(nonatomic) BOOL isRecordMovieOn; // @synthesize isRecordMovieOn=_isRecordMovieOn;
@property(nonatomic) BOOL isMarkEnable; // @synthesize isMarkEnable=_isMarkEnable;
@property(nonatomic) BOOL isMarkOn; // @synthesize isMarkOn=_isMarkOn;
@property(nonatomic) BOOL isScreenshareOn; // @synthesize isScreenshareOn=_isScreenshareOn;
@property(nonatomic) BOOL isCamOn; // @synthesize isCamOn=_isCamOn;
@property(nonatomic) BOOL isSpeakerOn; // @synthesize isSpeakerOn=_isSpeakerOn;
@property(nonatomic) BOOL isMicOn; // @synthesize isMicOn=_isMicOn;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopInternalAndSendNotify;
- (int)currentTopBizType;
- (long long)screenShareUserCount;
- (BOOL)isShareMode;
- (BOOL)screenShareBySelf;
- (void)OnVideoData:(unsigned long long)arg1:(char *)arg2:(int)arg3:(int)arg4:(int)arg5;
- (void)handleEvent:(id)arg1;
- (void)NotifyPeerVideoState:(BOOL)arg1;
- (void)NotifySelfVideoState:(BOOL)arg1;
- (unsigned long long)getEndReason;
- (id)getQualityTips;
- (void)stopRecordMovieWithNoEnoughSpace;
- (void)startOrStopRecordMovie:(BOOL)arg1;
- (void)setHDMode:(BOOL)arg1;
- (void)requestViews:(id)arg1;
- (id)getUserList;
- (void)stopScreenshare;
- (void)startScreenshare;
- (void)stopVideo;
- (void)startVideo;
- (void)startVideoByInvite;
- (void)stopPlay;
- (void)startPlay;
- (BOOL)isReceivingScreenShareData;
- (void)setFriendListShow:(BOOL)arg1;
- (void)startOrStopMark:(BOOL)arg1;
- (void)setMarkEnable:(BOOL)arg1;
- (void)stopRecord;
- (void)startRecord;
- (unsigned int)getDynamicVolumn:(_Bool)arg1;
- (void)setSessionState:(int)arg1;
- (int)getSessionState;
- (void)stop;
- (_Bool)start:(unsigned int)arg1;
- (void)changeShareWindow:(unsigned int)arg1 toAddWindowIDArray:(id)arg2;
- (void)changeShareScreen:(unsigned int)arg1 exceptWindowIDArray:(id)arg2;
- (_Bool)startShareWindow:(unsigned int)arg1 windowID:(unsigned int)arg2 toAddWindowIDArray:(id)arg3;
- (_Bool)startShareScreen:(unsigned int)arg1 displayID:(unsigned int)arg2 exceptWindowIDArray:(id)arg3;
- (void)updateRoomInfo;
- (void)stopInternal;
- (double)getServiceEndTime;
- (double)getServiceStartTime;
- (unsigned long long)getSenderUin1;
- (unsigned long long)getSenderUin0;
- (unsigned int)getUserCnt;
- (int)getBizType;
- (unsigned long long)getInviteUin;
- (struct AV_ID)getID;
- (void)zeroSession;
- (void)activate;
- (void)dealloc;
- (id)initWithAVID:(struct AV_ID)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

