//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSFHttpStateDelegate.h"

@class NSString;

@interface MSFHttpConnAdapter : NSObject <MSFHttpStateDelegate>
{
    void *pOwner;
}

- (void)onHttpRecv:(void *)arg1 data:(const char *)arg2 len:(unsigned int)arg3;
- (void)onHttpConnect:(void *)arg1 withState:(int)arg2 andExParam:(void *)arg3;
- (void)dealloc;
- (id)initWithOwner:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

