//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface RedPackService : QQBaseSingleton
{
}

- (id)buildRecvOrder:(const struct RecvOrder *)arg1;
- (id)buildSendOrder:(const struct SendOrder *)arg1;
- (void)onGrabCallback:(id)arg1 callback:(id)arg2;
- (struct GrabRequest *)buildBusiDataBusiDic:(id)arg1;
- (void)grabRedpackBusiDic:(id)arg1 callBack:(id)arg2;
- (id)buildRecvOrder:(const struct RecvOrder *)arg1;
- (id)buildSendOrder:(const struct SendOrder *)arg1;
- (void)onDetailsCallback:(id)arg1 callback:(id)arg2;
- (struct DetailRequest *)buildDetailBusiDataBusiDic:(id)arg1;
- (void)detailRedpackBusiDic:(id)arg1 callBack:(id)arg2;
- (struct QpayFcgiLocalMacInfo *)buildLocalMacInfo;
- (struct QpayFcgiCommReq *)buildCommonData;
- (id)generateSignature:(id)arg1;
- (id)generateAesIV:(id)arg1;
- (id)generateAesKey:(id)arg1;
- (id)generateRandom;
- (id)AesCbcEncryptTest:(id)arg1 withKey:(id)arg2 Vi:(id)arg3;
- (id)AesCbcEncrypt:(id)arg1 withKey:(id)arg2 Vi:(id)arg3;
- (id)AesCbcDecrypt:(id)arg1 withKey:(id)arg2 Vi:(id)arg3;
- (BOOL)VerifyResponseSignature:(id)arg1 retCode:(int)arg2 retMsg:(id)arg3 respond:(id)arg4;
- (void)printBytes:(id)arg1;
- (void)doSendRequest:(struct QpayFcgiRequest *)arg1 busiDic:(id)arg2 busiType:(int)arg3 completionHandler:(id)arg4;

@end
