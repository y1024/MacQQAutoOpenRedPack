//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FATargetInfo : NSObject
{
    int _toBusinessType;
    int _msgSessionType;
    NSString *_toUin;
    NSString *_tmpSessionDiscUin;
    NSString *_tmpSessionGroupCode;
    unsigned long long _groupIndex;
    unsigned long long _groupSize;
}

@property unsigned long long groupSize; // @synthesize groupSize=_groupSize;
@property unsigned long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(copy) NSString *tmpSessionGroupCode; // @synthesize tmpSessionGroupCode=_tmpSessionGroupCode;
@property(copy) NSString *tmpSessionDiscUin; // @synthesize tmpSessionDiscUin=_tmpSessionDiscUin;
@property(copy, nonatomic) NSString *toUin; // @synthesize toUin=_toUin;
@property(nonatomic) int msgSessionType; // @synthesize msgSessionType=_msgSessionType;
@property(nonatomic) int toBusinessType; // @synthesize toBusinessType=_toBusinessType;
- (void).cxx_destruct;

@end
