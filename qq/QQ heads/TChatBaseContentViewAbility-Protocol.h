//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSessionID, TChatBaseViewModel, TChatCellBuilderOption, TChatImage;

@protocol TChatBaseContentViewAbility <NSObject>

@optional
@property(readonly, nonatomic) TChatImage *dragImage;
@property(nonatomic) long long aioWidth;
@property(nonatomic) BOOL drawSelectedRange;
- (void)requestReloadDate;
- (void)update:(TChatBaseViewModel *)arg1 sessionID:(MQSessionID *)arg2 option:(TChatCellBuilderOption *)arg3;
- (void)update:(TChatBaseViewModel *)arg1 sessionID:(MQSessionID *)arg2;
- (void)update:(TChatBaseViewModel *)arg1;
@end
