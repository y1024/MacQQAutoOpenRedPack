//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BDHTraceString, BDHUploadFile, BDHUploadMultiSegMgr, NSFileHandle, NSMutableDictionary, NSString;

@interface UploadReqPacket : NSObject
{
    BDHUploadFile *_fileInfo;
    BOOL _canceled;
    BDHUploadMultiSegMgr *_segmentMgr;
    BDHTraceString *_logTracer;
    id _request;
    NSFileHandle *_fileHandle;
    double _beginTime;
    double _uploadTime;
    double _endTime;
    int _htcost;
    int _cachecost;
    long long _flowSize;
    NSString *_svrIP;
    int _svrPort;
    long long _timecost;
    NSMutableDictionary *_sendInfoDict;
    double _rttTime;
    int _ipIndex;
    unsigned long long _minSendDataElapse;
    unsigned long long _maxSendDataElapse;
    unsigned long long _minRecvDataElapse;
    unsigned long long _maxRecvDataElapse;
    unsigned long long _minSendEchoElapse;
    unsigned long long _maxSendEchoElapse;
    unsigned long long _minRecvEchoElapse;
    unsigned long long _maxRecvEchoElapse;
    int _retryTime;
}

@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long maxRecvEchoElapse; // @synthesize maxRecvEchoElapse=_maxRecvEchoElapse;
@property(nonatomic) unsigned long long minRecvEchoElapse; // @synthesize minRecvEchoElapse=_minRecvEchoElapse;
@property(nonatomic) unsigned long long maxSendEchoElapse; // @synthesize maxSendEchoElapse=_maxSendEchoElapse;
@property(nonatomic) unsigned long long minSendEchoElapse; // @synthesize minSendEchoElapse=_minSendEchoElapse;
@property(nonatomic) unsigned long long maxRecvDataElapse; // @synthesize maxRecvDataElapse=_maxRecvDataElapse;
@property(nonatomic) unsigned long long minRecvDataElapse; // @synthesize minRecvDataElapse=_minRecvDataElapse;
@property(nonatomic) unsigned long long maxSendDataElapse; // @synthesize maxSendDataElapse=_maxSendDataElapse;
@property(nonatomic) unsigned long long minSendDataElapse; // @synthesize minSendDataElapse=_minSendDataElapse;
@property(nonatomic) int ipIndex; // @synthesize ipIndex=_ipIndex;
@property(nonatomic) double rttTime; // @synthesize rttTime=_rttTime;
@property(retain, nonatomic) NSMutableDictionary *sendInfoDict; // @synthesize sendInfoDict=_sendInfoDict;
@property(nonatomic) long long timecost; // @synthesize timecost=_timecost;
@property(nonatomic) int svrPort; // @synthesize svrPort=_svrPort;
@property(retain, nonatomic) NSString *svrIP; // @synthesize svrIP=_svrIP;
@property(nonatomic) long long flowSize; // @synthesize flowSize=_flowSize;
@property(nonatomic) int cachecost; // @synthesize cachecost=_cachecost;
@property(nonatomic) int htcost; // @synthesize htcost=_htcost;
@property(nonatomic) double uploadTime; // @synthesize uploadTime=_uploadTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) BDHTraceString *logTracer; // @synthesize logTracer=_logTracer;
@property(nonatomic) id request; // @synthesize request=_request;
@property(retain, nonatomic) BDHUploadMultiSegMgr *segmentMgr; // @synthesize segmentMgr=_segmentMgr;
@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) BDHUploadFile *fileInfo; // @synthesize fileInfo=_fileInfo;
- (id)printSendNum;
- (void)plusSendNum:(int)arg1;
- (void)updateSvrTimecost:(int)arg1 cachecost:(int)arg2;
- (id)getSegmentData:(long long)arg1 maxLength:(long long)arg2;
- (id)loadFileData:(long long)arg1 Len:(int)arg2;
- (BOOL)closeUpFile;
- (BOOL)openUpFile;
- (id)name;
- (void)calcMD5;
- (void)calcTimecost;
- (void)dealloc;
- (void)initSegmentMgr;
- (id)init;

@end

