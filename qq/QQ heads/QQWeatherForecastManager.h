//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface QQWeatherForecastManager : NSObject
{
    NSMutableDictionary *_forecasts;
    NSMutableDictionary *_lastUpdateTimes;
    NSMutableDictionary *_callbacks;
    long long _requestFieldNum;
    NSArray *_placeFields;
    BOOL isRequesting;
}

+ (unsigned long long)simpleWeatherTypeByCode:(long long)arg1;
+ (id)dateWithMonthAndDayString:(id)arg1 andBasicDate:(id)arg2;
+ (id)defaultManager;
- (void).cxx_destruct;
- (id)date:(id)arg1 ByAddingDays:(long long)arg2;
- (id)parseForecastInfoWithJSONDict:(id)arg1;
- (void)updateForecast:(id)arg1 areaName:(id)arg2;
- (void)requestDidEnd;
- (void)requestDidFailed:(id)arg1 requestTag:(id)arg2;
- (void)requestDidFinished:(id)arg1 requestTag:(id)arg2;
- (void)setCookie:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)requestWithAreaName:(id)arg1 completion:(id)arg2;
- (void)startWeatherRequest:(id)arg1;
- (void)requestWithAreaName:(id)arg1;
- (BOOL)canRequestForAreaName:(id)arg1;
- (void)loadForecastCache;
- (void)storeForecastCache;
- (void)storeForecast:(id)arg1;
- (id)forecastForAreaName:(id)arg1;
- (id)init;

@end

