//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemotingInstance.h"

@class RemotingAuthenticatorHost;

@interface RemotingInstanceHost : RemotingInstance
{
    RemotingAuthenticatorHost *_authHost;
}

- (void).cxx_destruct;
- (void)sendRefuse;
- (void)sendAccept;
- (void)sendInvite;
- (BOOL)didReceiveRemoteControlMsg:(unsigned long long)arg1 cmd:(unsigned long long)arg2 content:(id)arg3;

@end

