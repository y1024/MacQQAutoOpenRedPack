//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RqdThreadInfo : NSObject
{
    BOOL isCrashThread;
    int threadIndex;
    NSString *threadName;
    NSArray *threadStacks;
}

@property(nonatomic) BOOL isCrashThread; // @synthesize isCrashThread;
@property(retain, nonatomic) NSArray *threadStacks; // @synthesize threadStacks;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName;
@property(nonatomic) int threadIndex; // @synthesize threadIndex;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)getCurrThreadStackLines;
- (id)getCurrThreadUUID;
- (id)getAllShortNames;

@end
