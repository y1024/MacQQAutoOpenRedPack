//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface BHHistorySearchModel : NSObject
{
    BOOL _searchEnd;
    int _sessType;
    unsigned int _maxMsgId;
    unsigned int _msgCount;
    unsigned int _offset;
    unsigned int _searchCount;
    long long _uin;
    NSString *_keyWord;
    NSDate *_fromDate;
    id _onDeleteMessage;
    id _onCleanMessage;
    id _onSearchPartiallEnd;
    NSMutableArray *_dbMsgModelArray;
    NSMutableArray *__UIMsgCache;
}

@property(retain, nonatomic) NSMutableArray *_UIMsgCache; // @synthesize _UIMsgCache=__UIMsgCache;
@property(retain, nonatomic) NSMutableArray *dbMsgModelArray; // @synthesize dbMsgModelArray=_dbMsgModelArray;
@property(nonatomic) unsigned int searchCount; // @synthesize searchCount=_searchCount;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned int maxMsgId; // @synthesize maxMsgId=_maxMsgId;
@property(copy, nonatomic) id onSearchPartiallEnd; // @synthesize onSearchPartiallEnd=_onSearchPartiallEnd;
@property(copy, nonatomic) id onCleanMessage; // @synthesize onCleanMessage=_onCleanMessage;
@property(copy, nonatomic) id onDeleteMessage; // @synthesize onDeleteMessage=_onDeleteMessage;
@property(readonly, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(readonly, nonatomic) BOOL searchEnd; // @synthesize searchEnd=_searchEnd;
@property(readonly, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(readonly, nonatomic) int sessType; // @synthesize sessType=_sessType;
@property(readonly, nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)initDBInfo:(id)arg1 tableName:(id)arg2;
- (void)searchNext;
- (id)filterMessageArray:(id)arg1;
@property(readonly, nonatomic) NSArray *msgArray;
- (void)onDeleteMessageArray:(id)arg1;
- (void)onCleanMessageWithUin;
- (void)onDeleteMessageNotify:(id)arg1;
- (const char *)identityStr;
- (void)dealloc;
- (id)initWithUin:(long long)arg1 sessType:(int)arg2 keyWord:(id)arg3 fromDate:(id)arg4;

@end

