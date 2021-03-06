//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQDataLineMsgData : NSObject
{
    int _dataType;
    int _shownType;
    NSMutableDictionary *_dataDict;
    unsigned int _groupID;
    unsigned int _groupSize;
    unsigned int _successCount;
}

@property(nonatomic) unsigned int groupSize; // @synthesize groupSize=_groupSize;
@property(nonatomic) unsigned int groupID; // @synthesize groupID=_groupID;
@property(retain) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) int shownType; // @synthesize shownType=_shownType;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (void)CancelAll;
@property(readonly, nonatomic, getter=getSuccessCount) unsigned int successCount; // @synthesize successCount=_successCount;
- (id)getSortArray;
- (void)setObjectBySessionID:(id)arg1 withSessionID:(id)arg2;
- (id)getObjectBySessionID:(id)arg1;
- (id)getObjectByIndex:(unsigned int)arg1;
- (float)getProgress;
- (int)getStatus;
- (BOOL)isPicMode;
- (BOOL)isSingleFileMode;
- (id)init;

@end

