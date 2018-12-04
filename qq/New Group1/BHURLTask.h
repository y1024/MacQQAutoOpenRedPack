//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSString, NSURLSessionTask;

@interface BHURLTask : NSObject
{
    unsigned long long _taskID;
    NSURLSessionTask *_task;
    NSMutableArray *_urlList;
    NSString *_toFilePath;
    NSString *_tmpFilePath;
    NSError *_error;
    id _completionBlock;
    id _progressBlock;
}

@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(copy, nonatomic) NSString *toFilePath; // @synthesize toFilePath=_toFilePath;
@property(retain, nonatomic) NSMutableArray *urlList; // @synthesize urlList=_urlList;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)tid;
- (void)cancel;
- (id)initWithTaskID:(unsigned long long)arg1 compeltion:(id)arg2 progress:(id)arg3;

@end
