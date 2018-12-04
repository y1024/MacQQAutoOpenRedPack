//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHHttpStreamDelegate.h"

@class BDHHttpStream, BDHWritePacket, NSError, NSMutableData, NSString;

@interface BDHHttpWrapper : NSObject <BDHHttpStreamDelegate>
{
    BOOL _sendSuccess;
    int _iLenToRead;
    int _connectTime;
    BDHHttpStream *_httpStream;
    BDHWritePacket *_packet;
    NSString *_urlString;
    NSMutableData *_recvData;
    unsigned long long _expectDataLen;
    long long _recvStep;
    double _tRecvBegin;
    NSError *_error;
    id _delegate;
}

@property(nonatomic) int connectTime; // @synthesize connectTime=_connectTime;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL sendSuccess; // @synthesize sendSuccess=_sendSuccess;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double tRecvBegin; // @synthesize tRecvBegin=_tRecvBegin;
@property(nonatomic) int iLenToRead; // @synthesize iLenToRead=_iLenToRead;
@property(nonatomic) long long recvStep; // @synthesize recvStep=_recvStep;
@property(nonatomic) unsigned long long expectDataLen; // @synthesize expectDataLen=_expectDataLen;
@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) BDHWritePacket *packet; // @synthesize packet=_packet;
@property(retain, nonatomic) BDHHttpStream *httpStream; // @synthesize httpStream=_httpStream;
- (void)connectiondidConnected:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectiondidReceiveResponse:(id)arg1;
- (void)notifyHttpError:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithIP:(id)arg1 port:(long long)arg2 timeout:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
