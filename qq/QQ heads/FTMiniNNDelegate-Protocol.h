//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@protocol FTMiniNNDelegate <NSObject>
- (void)miniNN:(id <FTMiniNN>)arg1 requestAuthWithAppID:(NSString *)arg2 replyBlock:(void (^)(NSString *, NSString *, NSString *, NSString *))arg3;

@optional
- (void)miniNN:(id <FTMiniNN>)arg1 launchFailWithError:(NSError *)arg2;
- (void)miniNNRequestQuitApp:(id <FTMiniNN>)arg1;
- (void)miniNN:(id <FTMiniNN>)arg1 requestShowNotificationTitle:(NSString *)arg2 subtitle:(NSString *)arg3 informativeText:(NSString *)arg4 actionButtonTitle:(NSString *)arg5 actionUserInfo:(NSDictionary *)arg6 otherButtonTitle:(NSString *)arg7 displayDuration:(double)arg8;
- (void)miniNN:(id <FTMiniNN>)arg1 requestUpdateBadgeNumber:(long long)arg2;
@end

