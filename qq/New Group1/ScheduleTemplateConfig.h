//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSImage, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TChatCacheImage;

@interface ScheduleTemplateConfig : NSObject
{
    NSMutableArray *_hotEvents;
    NSMutableArray *_hotSchedules;
    NSMutableDictionary *_holidays;
    NSTimer *timer;
    NSDictionary *_scheduleBanner;
    NSImage *_scheduleBannerImage;
    TChatCacheImage *_scheduleBannerGifImage;
    NSString *_lastImageMd5;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *lastImageMd5; // @synthesize lastImageMd5=_lastImageMd5;
@property(retain, nonatomic) TChatCacheImage *scheduleBannerGifImage; // @synthesize scheduleBannerGifImage=_scheduleBannerGifImage;
@property(retain, nonatomic) NSImage *scheduleBannerImage; // @synthesize scheduleBannerImage=_scheduleBannerImage;
- (void).cxx_destruct;
- (id)holidays;
- (id)hotSchedules;
- (id)hotEvnets;
- (void)getScheduleBannerImageWithBlock:(id)arg1;
- (void)loadScheduleBanner;
- (void)loadHolidays;
- (void)loadHotEvents;
- (void)loadHotSchedules;
- (void)loadCDNConfig;
- (void)dealloc;
- (id)init;

@end

