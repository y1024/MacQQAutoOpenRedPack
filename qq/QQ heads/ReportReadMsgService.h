//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ReportReadMsgService : NSObject
{
    NSMutableDictionary *_sessionsDict;
    int _curMinSeq;
    int _curMaxSeq;
    long long _curGroupCode;
    BOOL _isNeedReport;
    long long _nextReport;
    NSObject<OS_dispatch_queue> *_service_queue;
    id _dispatch_block;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)queryReadMsgSeq:(int)arg1 groupCode:(long long)arg2 atMembers:(id)arg3 nearByMembers:(id)arg4 completion:(id)arg5;
- (void)saveSessionsDict;
- (void)recordReportWithGroupCode:(id)arg1 minSeq:(long long)arg2 maxSeq:(long long)arg3 nextReport:(long long)arg4;
- (void)reportReadMsg;
- (void)delayReportWithSeq:(id)arg1;
- (void)asyncReportReadMsg:(id)arg1;
- (id)init;

@end

