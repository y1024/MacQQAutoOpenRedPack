//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSMutableArray, NSString, QQAirInfo, QQWeatherInfo;

@interface QQWeatherForecastInfo : NSObject <NSCoding>
{
    NSDate *_updateTime;
    long long _areaID;
    NSString *_areaName;
    NSString *_weatherDescription;
    QQWeatherInfo *_currentWeather;
    QQAirInfo *_currentAir;
    NSMutableArray *_hourForecasts;
    NSMutableArray *_dayForecasts;
}

@property(readonly, retain, nonatomic) NSMutableArray *dayForecasts; // @synthesize dayForecasts=_dayForecasts;
@property(readonly, retain, nonatomic) NSMutableArray *hourForecasts; // @synthesize hourForecasts=_hourForecasts;
@property(readonly, retain, nonatomic) QQAirInfo *currentAir; // @synthesize currentAir=_currentAir;
@property(readonly, retain, nonatomic) QQWeatherInfo *currentWeather; // @synthesize currentWeather=_currentWeather;
@property(retain, nonatomic) NSString *weatherDescription; // @synthesize weatherDescription=_weatherDescription;
@property(retain, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(nonatomic) long long areaID; // @synthesize areaID=_areaID;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
