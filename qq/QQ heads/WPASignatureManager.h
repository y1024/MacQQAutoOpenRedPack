//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WPASignatureManager : NSObject
{
    NSString *_uin;
    NSString *_filePath;
    NSMutableArray *_sigArray;
    NSMutableDictionary *_requestArray;
    NSMutableDictionary *_sigTDic;
    NSMutableDictionary *_serviceTypeDic;
    NSString *_crmFilePath;
    NSMutableArray *_crmSigArray;
}

+ (void)RemoveInstance;
+ (id)GetInstance;
@property(retain, nonatomic) NSMutableArray *crmSigArray; // @synthesize crmSigArray=_crmSigArray;
@property(retain, nonatomic) NSString *crmFilePath; // @synthesize crmFilePath=_crmFilePath;
@property(retain, nonatomic) NSMutableDictionary *serviceTypeDic; // @synthesize serviceTypeDic=_serviceTypeDic;
@property(retain, nonatomic) NSMutableDictionary *sigTDic; // @synthesize sigTDic=_sigTDic;
@property(retain, nonatomic) NSMutableDictionary *requestArray; // @synthesize requestArray=_requestArray;
@property(retain, nonatomic) NSMutableArray *sigArray; // @synthesize sigArray=_sigArray;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)DeleteCRMWPASig:(long long)arg1;
- (void)GetCRMWPAMessageDigByUin:(long long)arg1 sig:(id)arg2 service:(int *)arg3;
- (void)SaveCRMWPAMsgSigAndServiceType:(id)arg1 SigBuf:(id)arg2 ServiceType:(id)arg3;
- (id)GetUinWithSeq:(int)arg1;
- (void)SaveSigArray;
- (void)SaveWPAMsgSigAndServiceType:(id)arg1 SigBuf:(id)arg2 ServiceType:(id)arg3;
- (void)DeleteWPASig:(long long)arg1;
- (BOOL)FindUinInWPAArray:(long long)arg1;
- (void)GetWPAMessageDigByUin:(long long)arg1 sig:(id)arg2 service:(int *)arg3;
- (void)CleanData;
- (void)InitDataForWPASigDataAcess;
- (void)onAccountChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

