//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQWidgetAuthDelegate.h"
#import "MQWidgetDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class NSDate, NSMutableDictionary, NSString;

@interface MQWidgetManager : NSObject <NSUserNotificationCenterDelegate, MQWidgetDelegate, MQWidgetAuthDelegate>
{
    id <MQWidgetInterface> _widget;
    NSDate *_stockPushDate;
    NSMutableDictionary *_widgetCache;
    unsigned long long _widgetMode;
}

+ (id)shareInstance;
@property(readonly, nonatomic) unsigned long long widgetMode; // @synthesize widgetMode=_widgetMode;
- (void).cxx_destruct;
- (void)auth:(id)arg1 url:(id)arg2 block:(id)arg3;
- (void)didActivateByWidgetNotification:(id)arg1;
- (id)QQOnlineStatusChangeNotificationName;
- (id)requestCachePath;
- (void)auth:(id)arg1 block:(id)arg2;
- (void)showNotification:(id)arg1 subTitle:(id)arg2 informativeText:(id)arg3 actionButtonTitle:(id)arg4 actionUserInfo:(id)arg5 otherButtonTitle:(id)arg6 displayDuration:(double)arg7 type:(id)arg8;
- (void)postBadgeNotify:(id)arg1;
- (void)setWidgetBadge:(unsigned long long)arg1 badgeNumber:(long long)arg2;
- (void)showBadgeRedDot:(id)arg1;
- (int)sendDataToSSO:(id)arg1 withCmd:(id)arg2 completion:(id)arg3;
- (void)showBadgeNew:(id)arg1;
- (void)showBadgeNumber:(id)arg1 number:(unsigned long long)arg2;
- (unsigned long long)typeForWidget:(id)arg1;
- (BOOL)isShowBadge:(unsigned long long)arg1;
- (BOOL)isShowNotification:(unsigned long long)arg1;
- (void)requestQuit;
- (void)clickWidget:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (struct CGSize)widgetSize;
- (void)cleanUp;
- (id)widgetByType:(unsigned long long)arg1;
- (void)addWidget:(id)arg1;
- (id)cachePath;
- (void)loadConfig;
- (BOOL)isOnline;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
