//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAVOutInfoFetcherBase, NSMutableArray;

@interface MQSSRenderManager : NSObject
{
    NSMutableArray *_renderAssistArray;
    MAVOutInfoFetcherBase *_outInfoObj;
}

- (id)mainRender;
- (id)subRenderArray;
- (long long)renderCount;
- (id)renderWithIndex:(long long)arg1;
- (long long)indexWithUin:(unsigned long long)arg1 isMain:(int)arg2;
- (BOOL)swapRender:(unsigned long long)arg1 isMain:(int)arg2;
- (id)renderForUin:(unsigned long long)arg1 isMain:(BOOL)arg2;
- (void)dispatchVideoDataToRender:(CDStruct_130e8c26 *)arg1;
- (id)removeRender:(unsigned long long)arg1 isMain:(int)arg2;
- (id)checkAndAddRander:(unsigned long long)arg1 isMain:(BOOL)arg2;
- (void)dealloc;
- (id)initWithOIF:(id)arg1;

@end
