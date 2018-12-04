//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSString;

@protocol IAVSession <NSObject>
- (int)currentTopBizType;
- (long long)screenShareUserCount;
- (BOOL)isShareMode;
- (BOOL)screenShareBySelf;
- (unsigned int)getRoomID;
- (unsigned long long)getEndReason;
- (NSString *)getQualityTips;
- (void)setFriendListShow:(BOOL)arg1;
- (BOOL)isFriendListShow;
- (BOOL)isReceivingScreenShareData;
- (void)stopRecordMovieWithNoEnoughSpace;
- (void)startOrStopRecordMovie:(BOOL)arg1;
- (BOOL)isRecordMovieOn;
- (void)startOrStopMark:(BOOL)arg1;
- (void)setMarkEnable:(BOOL)arg1;
- (BOOL)isMarkEnable;
- (BOOL)isMarkOn;
- (void)setHDMode:(BOOL)arg1;
- (BOOL)isScreenshareOn;
- (void)stopScreenshare;
- (void)startScreenshare;
- (BOOL)isCamOn;
- (void)stopVideo;
- (void)startVideoByInvite;
- (void)startVideo;
- (BOOL)isSpeakerOn;
- (void)stopPlay;
- (void)startPlay;
- (BOOL)isMicOn;
- (void)stopRecord;
- (void)startRecord;
- (unsigned int)getDynamicVolumn:(_Bool)arg1;
- (void)requestViews:(NSArray *)arg1;
- (NSMutableArray *)getUserList;
- (int)getSessionState;
- (void)stopForSwitch;
- (void)stop;
- (void)changeShareWindow:(unsigned int)arg1 toAddWindowIDArray:(NSArray *)arg2;
- (void)changeShareScreen:(unsigned int)arg1 exceptWindowIDArray:(NSArray *)arg2;
- (_Bool)startShareWindow:(unsigned int)arg1 windowID:(unsigned int)arg2 toAddWindowIDArray:(NSArray *)arg3;
- (_Bool)startShareScreen:(unsigned int)arg1 displayID:(unsigned int)arg2 exceptWindowIDArray:(NSArray *)arg3;
- (_Bool)start:(unsigned int)arg1;
- (double)getServiceEndTime;
- (double)getServiceStartTime;
- (void)syncOtherTerminalOpt:(unsigned int)arg1;
- (void)setPMDInfo:(unsigned int)arg1 shareType:(unsigned int)arg2 roomID:(unsigned int)arg3 userCnt:(unsigned int)arg4 senderUin0:(unsigned long long)arg5 senderUin1:(unsigned long long)arg6;
- (void)setOffInvite;
- (void)setOnInviteWithSenderInfo:(unsigned int)arg1:(unsigned int)arg2:(int)arg3:(unsigned long long)arg4:(NSData *)arg5:(unsigned int)arg6:(unsigned int)arg7:(unsigned int)arg8;
- (void)setOnInvite:(unsigned int)arg1 shareType:(unsigned int)arg2 roomID:(unsigned int)arg3 senderUin:(unsigned long long)arg4 buf:(char *)arg5 len:(unsigned char)arg6;
- (unsigned long long)getSenderUin1;
- (unsigned long long)getSenderUin0;
- (unsigned int)getUserCnt;
- (int)getBizType;
- (unsigned long long)getInviteUin;
- (void)updateRoomInfo;
- (struct AV_ID)getID;
- (void)zeroSession;
- (void)activate;
- (id)initWithAVID:(struct AV_ID)arg1;
@end

