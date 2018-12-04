//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRCodeCmd.h"

@class NSData, NSMutableDictionary, NSString;

@interface QRCodeCmd_0x31 : QRCodeCmd
{
    NSString *reserved;
    unsigned int dwAppid;
    unsigned long long ddwUin;
    unsigned char cLoginSigType;
    NSData *loginSig;
    unsigned short wTlvNum;
    NSMutableDictionary *reqTlvList;
    NSMutableDictionary *rspTlvList;
    NSData *qrSig;
    NSData *qrPicData;
    unsigned int dwExpireTime;
    unsigned short wQueryTime;
    NSString *errMsg;
}

@property(readonly) NSMutableDictionary *rspTlvList; // @synthesize rspTlvList;
@property(readonly) NSMutableDictionary *reqTlvList; // @synthesize reqTlvList;
@property unsigned short wQueryTime; // @synthesize wQueryTime;
@property unsigned int dwExpireTime; // @synthesize dwExpireTime;
@property(retain) NSData *qrPicData; // @synthesize qrPicData;
@property(retain) NSData *qrSig; // @synthesize qrSig;
@property(copy) NSString *errMsg; // @synthesize errMsg;
@property unsigned short wTlvNum; // @synthesize wTlvNum;
@property(retain) NSData *loginSig; // @synthesize loginSig;
@property unsigned char cLoginSigType; // @synthesize cLoginSigType;
@property unsigned long long ddwUin; // @synthesize ddwUin;
@property unsigned int dwAppid; // @synthesize dwAppid;
@property(copy) NSString *reserved; // @synthesize reserved;
- (void)addReqTlv:(unsigned short)arg1 andTlv:(id)arg2;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

