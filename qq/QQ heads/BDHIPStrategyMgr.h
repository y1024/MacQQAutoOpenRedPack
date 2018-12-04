//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BDHIPListMgr, NSString;

@interface BDHIPStrategyMgr : NSObject
{
    long long _state;
    int _currentAPN;
    NSString *_bssid;
    BDHIPListMgr *_tcpListMgr;
    BDHIPListMgr *_httpListMgr;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(nonatomic) int currentAPN; // @synthesize currentAPN=_currentAPN;
@property(retain, nonatomic) BDHIPListMgr *httpListMgr; // @synthesize httpListMgr=_httpListMgr;
@property(retain, nonatomic) BDHIPListMgr *tcpListMgr; // @synthesize tcpListMgr=_tcpListMgr;
- (void)notifyAPNChange:(int)arg1;
- (void)updateAPNInfo;
- (void)reset;
- (void)update:(id)arg1 result:(long long)arg2;
- (void)update:(id)arg1 result:(long long)arg2 serverIP:(id)arg3;
- (id)getCandidateIPs:(int)arg1;
- (void)loadDevIP:(int)arg1;
- (void)load;
- (id)loadProxyIPArray;
- (void)reload;
- (void)dealloc;
- (id)init;

@end

