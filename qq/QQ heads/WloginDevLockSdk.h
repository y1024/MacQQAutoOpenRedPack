//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WloginDevLockSdk : NSObject
{
}

- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (void)distributeDevLockFail:(int)arg1 withError:(id)arg2;
- (BOOL)getQueryStatusDetail:(unsigned int *)arg1 andDetailInfo:(id)arg2;
- (void)returnDevLockFail:(int)arg1 withErrorMsg:(id)arg2;
- (void)returnDevLockFail:(int)arg1 withErrorInfo:(id)arg2;
- (int)setMsgType:(unsigned short)arg1 andGetMsg:(unsigned short)arg2 andCheckSms:(unsigned short)arg3;
- (int)openDevLockDirectly:(id)arg1;
- (int)checkDevLockSmsSig:(id)arg1 andSmsSig:(id)arg2;
- (int)checkDevLockSms:(id)arg1 andCode:(id)arg2;
- (int)askDevLockSms:(id)arg1;
- (int)closeDevLock:(id)arg1;
- (int)queryDevLockStatus:(id)arg1;
- (void)setProtoCommValue:(id)arg1;
- (void)resetDevLockProcess;
- (void)dealloc;
- (id)initWithDevLockSdk:(id)arg1 andAppId:(unsigned int)arg2 andSmsAppId:(unsigned int)arg3 andDelegate:(id)arg4;
- (id)initWithDevLockSdk:(id)arg1 andAppId:(unsigned int)arg2 andSubAppId:(unsigned int)arg3 andSmsAppId:(unsigned int)arg4 andDelegate:(id)arg5;

@end

