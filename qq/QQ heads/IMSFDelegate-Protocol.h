//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSFRegisterQQDelegate.h"
#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol IMSFDelegate <NSObject, IMSFRegisterQQDelegate>
- (void)OnMSFMsg:(NSDictionary *)arg1;
- (void)OnMSFIllegalGrayApp:(NSDictionary *)arg1;
- (void)onMSFIllegalApp:(NSDictionary *)arg1;
- (void)OnMSFSocketFlow:(NSArray *)arg1;
- (void)OnMSFPacketState:(NSDictionary *)arg1;
- (void)OnMSFApnState:(NSDictionary *)arg1;
- (void)OnMSFNetworkState:(NSDictionary *)arg1;
- (void)OnMSFSSOErrorStateResult:(NSDictionary *)arg1;
- (void)OnMSFRecvDataFromBackend:(NSDictionary *)arg1;
@end

