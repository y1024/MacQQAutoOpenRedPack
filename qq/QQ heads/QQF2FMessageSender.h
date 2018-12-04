//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

#import "IC2CTypeMsgRemoveDuplicateRelateMarkGenerator.h"

@class NSString;

@interface QQF2FMessageSender : QQPbMsgSenderBase <IC2CTypeMsgRemoveDuplicateRelateMarkGenerator>
{
    int _lastRandom;
    short _lastDivSeq;
}

+ (id)getInstance;
- (void)GenRemoveDuplicateRelateMark:(struct _C2C_DUPLICATE_RELATEMARK *)arg1 GenInputParam:(struct _C2C_DUPLICATE_RELATEMARK_GEN_INPUT_PARAM *)arg2;
- (struct PbSendMsgReq *)notifyInputUin:(unsigned long long)arg1 ime:(int)arg2;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (id)init;
- (struct RoutingHead *)GenRoutingHeadToUin:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

