//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSFConnectProtocol.h"

@class LoginAsyncSocket, NSMutableArray, NSMutableData, NSMutableURLRequest, NSObject<OS_dispatch_queue>, NSString;

@interface SocketNetworkAdapter : NSObject <MSFConnectProtocol>
{
    LoginAsyncSocket *asyncSocket;
    NSObject<OS_dispatch_queue> *loginQueue;
    id <SocketNetworkAdapterProtocol> adapterDelegate;
    NSMutableURLRequest *urlRequest;
    NSMutableData *rspData;
    NSMutableArray *rspReadArray;
    long long sendTag;
}

- (void)msfconnection:(id)arg1 didFailWithError:(id)arg2 param:(id)arg3;
- (void)msfconnection:(id)arg1 didReceiveData:(id)arg2 param:(id)arg3;
- (void)msfconnection:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 param:(id)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 param:(id)arg3 tag:(long long)arg4;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)isConnected;
- (void)disconnect;
- (void)setSocketDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

