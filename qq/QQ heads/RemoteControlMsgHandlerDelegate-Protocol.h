//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol RemoteControlMsgHandlerDelegate <NSObject>
- (void)onReceiveRemoteControlMsg:(unsigned long long)arg1 cmd:(unsigned long long)arg2 content:(NSData *)arg3;
@end

