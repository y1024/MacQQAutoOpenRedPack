//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface SqliteRepairHelper : QQBaseSingleton
{
}

- (void)tryRepairDb;
- (void)renameBadDb:(id)arg1 errorCode:(int)arg2;
- (id)excuteSql:(id)arg1 sql:(id)arg2;
- (id)getDatabaseInfo:(id)arg1;
- (int)checkDatabaseIsPerfect:(id)arg1 dbInfoSubId:(int)arg2;
- (void)reportDBInfo:(int)arg1 eventValue:(int)arg2 eventDescription:(id)arg3;

@end

