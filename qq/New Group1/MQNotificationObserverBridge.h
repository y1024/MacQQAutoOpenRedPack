//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQNotificationObserverBridge : NSObject
{
    id _realObserver;
    SEL _realSelector;
    BOOL _waitDone;
}

+ (id)observerBridgeWithObserver:(id)arg1 selector:(SEL)arg2 waitDone:(BOOL)arg3;
- (void).cxx_destruct;
- (void)doNotification:(id)arg1;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 waitDone:(BOOL)arg3;

@end

