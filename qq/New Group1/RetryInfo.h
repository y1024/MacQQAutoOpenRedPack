//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@interface RetryInfo : JceObjectV2
{
    unsigned char jcev2_p_0_r_Flag;
    unsigned short jcev2_p_1_r_RetryCount;
    long long jcev2_p_2_r_PkgId;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_PkgId, setter=setJce_PkgId:) long long jcev2_p_2_r_PkgId; // @synthesize jcev2_p_2_r_PkgId;
@property(nonatomic, getter=jce_RetryCount, setter=setJce_RetryCount:) unsigned short jcev2_p_1_r_RetryCount; // @synthesize jcev2_p_1_r_RetryCount;
@property(nonatomic, getter=jce_Flag, setter=setJce_Flag:) unsigned char jcev2_p_0_r_Flag; // @synthesize jcev2_p_0_r_Flag;
- (void)dealloc;
- (id)init;

@end
