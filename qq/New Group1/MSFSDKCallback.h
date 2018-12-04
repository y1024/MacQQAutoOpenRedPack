//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MsfSDKCallbackProtocol.h"

@class NSString;

@interface MSFSDKCallback : NSObject <MsfSDKCallbackProtocol>
{
    id <IMSFDelegate> _msfDelegate;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)onMSFRegQQOpResult:(id)arg1;
- (void)onMSFServerTimeUpdated:(id)arg1;
- (void)onMSFNetworkSocketHandle:(id)arg1;
- (void)onMSFSSOReturn:(id)arg1;
- (void)onMSFSocketFlow:(id)arg1;
- (void)onReceiveFromMSF:(id)arg1;
- (void)onMSFPacketState:(id)arg1;
- (void)onMSFApnState:(id)arg1;
- (void)checkTestSsoIp:(id)arg1:(id)arg2;
- (void)onMSFNetworkState:(id)arg1;
- (void)onMSFNotGrayUser:(id)arg1;
- (void)onMSFIllegalApp:(id)arg1;
- (void)setMSFDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

