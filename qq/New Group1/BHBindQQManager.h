//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSArray;

@interface BHBindQQManager : QQBaseSingleton
{
}

- (void)cleanMessageList;
- (void)refreshMessageList;
- (void)logoutSlaveUin:(BOOL)arg1;
- (void)markMessageReaded;
- (void)initOnAppStart:(id)arg1;
- (void)unbindAccountCompletion:(id)arg1;
- (void)bindAccount:(unsigned long long)arg1 completion:(id)arg2;
- (void)getBindAccount:(id)arg1;
@property(readonly) unsigned long long slaveUin;
@property(readonly, copy) NSArray *msgList;
- (void)_pushHandlerWith0x210_0x31:(id)arg1;
- (void)test;

@end

