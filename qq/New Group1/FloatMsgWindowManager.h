//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface FloatMsgWindowManager : NSObject
{
    int mWindowPositionType;
    BOOL mIsPositionSettingChange;
    BOOL hasAppInFullSreenMode;
    BOOL isScreenSaverStarted;
    struct OpaqueEventHandlerRef *eventHandler_;
    long long mMaxWindowCount;
    NSMutableArray *mWindowControllers;
    NSMutableDictionary *mSingleChatMsgIndexDictionary;
    NSMutableDictionary *mGroupChatMsgIndexDictionary;
}

+ (id)sharedManager;
@property(readonly, nonatomic) BOOL isScreenSaverStarted; // @synthesize isScreenSaverStarted;
@property(nonatomic) BOOL hasAppInFullSreenMode; // @synthesize hasAppInFullSreenMode;
- (void).cxx_destruct;
- (struct CGPoint)windowSpaceOriginWithIndex:(unsigned long long)arg1;
- (struct CGPoint)getWindowOriginWithSpaceOrigin:(struct CGPoint)arg1 windowRect:(struct CGRect)arg2;
- (BOOL)isNoFloatWindowInScreen;
- (unsigned long long)getEmptySpaceIndex;
- (void)screensaverStop:(id)arg1;
- (void)screensaverStarted:(id)arg1;
- (void)onPositionSettingChange:(id)arg1;
- (void)closeAllTempFloatWindow;
- (void)closeChatMsgWindow:(unsigned long long)arg1 chatType:(int)arg2;
- (void)windowDidClose:(unsigned long long)arg1 uin:(unsigned long long)arg2;
- (id)showMsgWithInfoText:(id)arg1 withUin:(unsigned long long)arg2 chatType:(int)arg3 withObject:(id)arg4 isShowTogether:(BOOL)arg5;
- (void)showScheduleNotification:(id)arg1;
- (id)showShakeMsgWithInfoText:(id)arg1 withUin:(unsigned long long)arg2 chatType:(int)arg3;
- (id)findShakeWindowControllerByUin:(unsigned long long)arg1;
- (void)showChatMsgWithMsgItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

