//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FileImportUtils : NSObject
{
}

+ (BOOL)isOfficeFile:(id)arg1 needKeyword:(BOOL)arg2;
+ (id)defaultOpenPanel;
+ (id)generateBody:(id)arg1;
+ (id)getPostRequest:(id)arg1;
+ (void)importRemoteFile:(id)arg1 completionBlock:(id)arg2 progressBlock:(id)arg3;
+ (void)importLocalFile:(id)arg1 withType:(int)arg2 completionBlock:(id)arg3 progressBlock:(id)arg4;

@end

