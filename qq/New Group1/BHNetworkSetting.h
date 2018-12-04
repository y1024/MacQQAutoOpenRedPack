//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "NSStreamDelegate.h"

@class NSString;

@interface BHNetworkSetting : QQBaseSingleton <NSStreamDelegate>
{
    long long _proxy;
    NSString *_host;
    long long _port;
    NSString *_userName;
    NSString *_password;
}

+ (void)getStreamsToHostNamedBDH:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)getStreamsToHostNamedHTTP:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
- (void)getStreamsToHostNamedMSF:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)__runTest:(id)arg1;
- (void)testSSOTCPConnectionWithProxy:(long long)arg1 host:(id)arg2 port:(long long)arg3 userName:(id)arg4 password:(id)arg5 completion:(id)arg6;
- (void)testSSOTCPConnectionWithCompletion:(id)arg1;
- (void)enableCURL;
- (void)setSOCKSProxyWithHost:(id)arg1 port:(long long)arg2 userName:(id)arg3 password:(id)arg4;
- (void)setHTTPProxyWithHost:(id)arg1 port:(long long)arg2 userName:(id)arg3 password:(id)arg4;
- (void)setNoProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

