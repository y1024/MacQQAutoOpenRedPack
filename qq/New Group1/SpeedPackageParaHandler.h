//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SpeedPackageParaHandler : NSObject
{
    struct QualityTest *_quality;
    NSMutableDictionary *_parasSend;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *parasSend; // @synthesize parasSend=_parasSend;
- (unsigned long long)handleParas:(id)arg1;
- (void)dealloc;
- (id)init;

@end

