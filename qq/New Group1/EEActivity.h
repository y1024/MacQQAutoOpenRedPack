//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface EEActivity : NSObject
{
    BOOL _hasCalculationSceneRandomSalt;
    NSArray *_engineVersion;
    unsigned long long _entry;
    NSDate *_beginTime;
    NSDate *_endTime;
    NSString *_iconLarge;
    NSString *_iconSmall;
    NSString *_tips;
    NSArray *_eEggs;
    long long _allEmotionCount;
}

@property(nonatomic) BOOL hasCalculationSceneRandomSalt; // @synthesize hasCalculationSceneRandomSalt=_hasCalculationSceneRandomSalt;
@property(nonatomic) long long allEmotionCount; // @synthesize allEmotionCount=_allEmotionCount;
@property(retain, nonatomic) NSArray *eEggs; // @synthesize eEggs=_eEggs;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *iconSmall; // @synthesize iconSmall=_iconSmall;
@property(copy, nonatomic) NSString *iconLarge; // @synthesize iconLarge=_iconLarge;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned long long entry; // @synthesize entry=_entry;
@property(nonatomic) NSArray *engineVersion; // @synthesize engineVersion=_engineVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

