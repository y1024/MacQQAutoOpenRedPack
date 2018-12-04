//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface QQChatHistoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dbQueue;
    int _maxMsgID;
    int _sessType;
    long long _uin;
}

+ (id)mergeMessageIdPair:(int)arg1 msgArray:(id)arg2 additionalMsg:(id)arg3;
@property(nonatomic) int sessType; // @synthesize sessType=_sessType;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)loadMessagesInMessageIDs:(id)arg1 completion:(id)arg2;
- (void)loadTimeLineByFilter:(unsigned long long)arg1 completion:(id)arg2;
- (id)retrieveSessionWithTimeLine:(id)arg1;
- (void)prepare;
- (id)initWithUin:(long long)arg1 sessType:(int)arg2;
- (id)messagesInMessageIDs:(id)arg1;
- (id)messageIDsByDayWithFilterType:(unsigned long long)arg1;
- (int)loadMaxMsgID;

@end

