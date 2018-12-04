//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MQScreenShareMarkMessageReceiver : NSObject
{
    NSMutableArray *_pushSeqs;
    NSMutableArray *_muReceiveNotifyMessageArray;
    NSMutableArray *_muReceiveUIChangeMessageArray;
    NSMutableArray *_muReceiveTrackMessageArray;
}

+ (id)sharedReceiver;
@property(retain, nonatomic) NSMutableArray *muReceiveTrackMessageArray; // @synthesize muReceiveTrackMessageArray=_muReceiveTrackMessageArray;
@property(retain, nonatomic) NSMutableArray *muReceiveUIChangeMessageArray; // @synthesize muReceiveUIChangeMessageArray=_muReceiveUIChangeMessageArray;
@property(retain, nonatomic) NSMutableArray *muReceiveNotifyMessageArray; // @synthesize muReceiveNotifyMessageArray=_muReceiveNotifyMessageArray;
- (void).cxx_destruct;
- (void)handleScreenShare0x2110x13:(const void *)arg1 dataLen:(int)arg2 uin:(id)arg3;
- (void)handleScreenShareOidb0x857:(const void *)arg1 dataLen:(unsigned long long)arg2 groupCode:(id)arg3;
- (void)handleScreenShareOidb0x858:(const void *)arg1 dataLen:(unsigned long long)arg2 discussGroupUin:(id)arg3;
- (void)removeCacheMessageModel:(id)arg1;
- (void)componentMessageComplete:(id)arg1;
- (void)componentSortedMessageArray:(id)arg1;
- (void)onReceiveComplete;
- (void)onReceiveTrackMessageModel:(id)arg1;
- (void)onReceiveNotifyMessageModel:(id)arg1;
- (void)onReceiveUIMessageModel:(id)arg1;
- (void)onReceiveMessageModel:(id)arg1;
- (void)_onlinePushHandler:(id)arg1;
- (void)didReceiveRawData:(id)arg1;
- (id)init;

@end
