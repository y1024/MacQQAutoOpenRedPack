//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface VideoViewInfoModel : NSObject
{
    NSMutableArray *_viewInfoArray;
}

- (void).cxx_destruct;
- (unsigned long long)getViewCountWithLocal:(BOOL)arg1;
- (id)viewInfoAtIndex:(unsigned long long)arg1;
- (id)viewInfowithUin:(unsigned long long)arg1 withType:(int)arg2;
- (unsigned long long)indexOfViewInfo:(unsigned long long)arg1 withType:(int)arg2;
- (void)setViewBigAtIndex:(unsigned long long)arg1;
- (void)removeRequestViewInfoAtIndex:(unsigned long long)arg1;
- (void)addRequestViewInfo:(unsigned long long)arg1 withType:(int)arg2 isLocalView:(BOOL)arg3 isNeedraw:(BOOL)arg4 withTerminalType:(int)arg5;
- (void)dealloc;
- (id)init;

@end

