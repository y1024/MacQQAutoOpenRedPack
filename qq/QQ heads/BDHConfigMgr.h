//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class BDHConfigDict, NSMutableDictionary, NSString;

@interface BDHConfigMgr : NSObject <NSXMLParserDelegate>
{
    BDHConfigDict *_configDict;
    BOOL _forceClearServerInfo;
    BOOL _alreadyLoadData;
    NSString *_xmlKey;
    int _xmlWeight;
    NSMutableDictionary *_xmlPropDict;
}

+ (id)sharedInstance;
- (void)updateBDHOptParam:(id)arg1;
- (void)updateBDHSegConfig:(id)arg1 fileType:(int)arg2;
- (void)updateBDHConfig:(id)arg1;
- (void)updateBDHSegConfigThread:(id)arg1;
- (void)updateBDHConfigThread:(id)arg1;
- (void)saveConfigThread;
- (void)updateSegmentConfigThread:(id)arg1 fileType:(id)arg2;
- (void)updateSegmentConfigThread:(id)arg1;
- (void)updateIpListThread:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)parseConfigInfo;
- (void)updateOptParam:(id)arg1;
- (void)updateSegWndCfg:(id)arg1;
- (void)updateIPSortWeightList:(id)arg1;
- (void)updateBDHDelta:(id)arg1;
- (void)updateTimeOrg:(int)arg1 timeOrg:(int)arg2;
- (void)updateTimeBase:(int)arg1 timeBase:(int)arg2;
- (void)updateIpDetectCfg:(id)arg1;
- (void)updateHeartBeatCfg:(id)arg1;
- (void)setForceClearServerInfo:(BOOL)arg1;
- (BOOL)forceClearServerInfo;
- (id)configDict;
- (BOOL)enableBuildConnection;
- (id)getIpList;
- (id)getHardCodeIpPortList;
- (id)getHardCodeIPs;
- (void)doRandom:(id)arg1;
- (id)getIPListKey;
- (void)loadConfig;
- (void)checkAllParam;
- (void)checkSegWndParam;
- (void)checkRetryParam;
- (void)checkIpDetectCfg;
- (void)checkHeartBeatCfg;
- (void)checkIpLearningParam;
- (void)checkMinMaxElapse;
- (void)checkDeltaTime;
- (void)check4gTimeConfig;
- (void)check3gTimeConfig;
- (void)check2gTimeConfig;
- (void)checkWifiTimeConfig;
- (void)check4gSegConfig;
- (void)check3gSegConfig;
- (void)check2gSegConfig;
- (void)checkWifiSegConfig;
- (id)configDictPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

