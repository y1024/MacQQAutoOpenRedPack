//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SSOHandler : NSObject
{
    long long _appType;
}

+ (id)defaultHandler;
@property(nonatomic) long long appType; // @synthesize appType=_appType;
- (int)sendData:(id)arg1 withCmd:(id)arg2 completion:(id)arg3;
- (int)sendRawData:(id)arg1 withCmd:(id)arg2 completion:(id)arg3;
- (int)sendJCEPacket:(UniPacket_625f2f0c)arg1 withCmd:(id)arg2 completion:(id)arg3;
- (void)sendOIDBPacketWithOidbHead:(struct OIDBSSOPkg *)arg1 oidbBody:(struct MessageLite *)arg2 completion:(id)arg3;
- (void)sendOIDBPacketWithOidbHead:(struct OIDBSSOPkg *)arg1 body:(id)arg2 completion:(id)arg3;
- (void)sendJCEPacketWithCMD:(id)arg1 packet:(UniPacket_625f2f0c)arg2 completion:(id)arg3;
- (int)sendPBMessage:(struct MessageLite *)arg1 withOIDBHead:(struct OIDBSSOPkg *)arg2 completion:(id)arg3;
- (int)sendData:(id)arg1 withOIDBHead:(struct OIDBSSOPkg *)arg2 completion:(id)arg3;
- (int)sendMessage:(struct MessageLite *)arg1 withCmd:(id)arg2 completion:(id)arg3;

@end

