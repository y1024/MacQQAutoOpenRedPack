//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSTimer;

@interface MSFPacketStatistics : NSObject
{
    double _pStatisticalValue;
    double _pStatisticalRTTm;
    double _pStatisticalRTTs;
    double _pStatisticalRTTD;
    double _pStatisticalRTO;
    NSTimer *_pCheckTimer;
    NSMutableArray *_pPacketInfoArray;
    int _pState;
    long long keyTime;
    long long _pBlockPacketNumber;
    long long _pBlockPacketCMDNumber;
    double _pConnectRTT;
    long long _pConnectTime;
    long long _pPingTime;
    long long _pBadNetworkStartTime;
    long long _pReportBlockPacketNumber;
    long long _pReportBlockPacketCMDNumber;
    long long _pReportConnectTime;
    long long _pReportPingTime;
    long long _pReportRTTs;
    BOOL _pIsBadNetwork;
    struct {
        int thresholdForConnect;
        int RTTUpBound;
        int RTTLowBound;
        int RTTUpBoundFactor;
        int RTTLowBoundFactor;
        int thresholdForBlockPacketTime;
        int thresholdForBlockPacketNumber;
        int thresholdForPacketCMDNumber;
        int thresholdForPacketClear;
    } _pConfig;
    NSObject<OS_dispatch_queue> *_queue;
    struct map<std::basic_string<char>, long long, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, long long>>> _ssidRTTMap;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _pBssidToSsidMap;
    basic_string_075b6133 _pSsidNameStr;
    basic_string_075b6133 _pBssidNameStr;
    BOOL _pIsWifi;
    struct set<std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::basic_string<char>>> _pWhiteList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)parseWhiteList:(basic_string_075b6133)arg1;
- (void)setWhiteList:(basic_string_075b6133)arg1;
- (_Bool)commndCanBeCount:(basic_string_075b6133)arg1;
- (void)config:(id)arg1;
- (void)saveSsidRTTDataFromFile;
- (void)loadSsidRTTDataFromFile;
- (void)updateRTTWhithRTT:(long long)arg1;
- (long long)getRTT;
- (void)resetStatis;
- (void)calculateForDisconnect;
- (void)calculateForPacket;
- (void)calculateForFinishPing;
- (void)calculateForBeginPing;
- (void)calculateForFinishConnect;
- (void)calculateForBeginConnect;
- (void)didTimeout;
- (void)stopTimer;
- (void)startTimer;
- (BOOL)determinationBadNetworkByRTT;
- (BOOL)checkBadNetwork;
- (BOOL)isBadNetwork;
- (void)disconnect;
- (void)recvPacket:(id)arg1 sequence:(int)arg2 size:(int)arg3;
- (void)sendPacket:(id)arg1 sequence:(int)arg2 size:(int)arg3;
- (void)finishPing;
- (void)startPing;
- (void)finishConnect;
- (void)startConnect;
- (void)dealloc;
- (id)init;

@end

