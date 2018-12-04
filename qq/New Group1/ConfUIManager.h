//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQSSFriendListWindowControllerDelegate.h"

@class ConfCalcMainWndLogic, ConfMainWindowController, MAVOutInfoFetcherBase, MQSSFriendListWindowController, MQSSRenderManager, MQSSWindowshareWindowController, NSDate, NSMutableArray, NSString, NSTimer, ScreenshareWindowController;

@interface ConfUIManager : NSObject <MQSSFriendListWindowControllerDelegate>
{
    ConfMainWindowController *mainWindow;
    ScreenshareWindowController *mainScreenWindow;
    MQSSWindowshareWindowController *_windowShareWC;
    MQSSFriendListWindowController *_friendListWindow;
    MQSSRenderManager *_renderManager;
    MAVOutInfoFetcherBase *_outInfoFetcher;
    struct AV_ID _avID;
    int nUIType;
    BOOL _bInComplicateUI;
    ConfCalcMainWndLogic *_calcMainWndLogic;
    NSTimer *_timer;
    BOOL _isBeInvite;
    BOOL _isBeUsing;
    BOOL _isUserJoin;
    NSTimer *_useTimer;
    NSDate *_startTime;
    NSMutableArray *_videoOpenUserList;
    NSMutableArray *_videoClickUserList;
    NSDate *_screenShareTime;
}

- (id).cxx_construct;
- (void)userDataReportWithUIEvent:(long long)arg1 isOpenDic:(id)arg2;
- (void)reportScreenShareTime;
- (void)handleScreenOrWindowDisapearNotify;
- (void)onRecordStartWithView:(id)arg1;
- (void)onRecordStop:(unsigned long long)arg1;
- (void)handleRecordEndByNoEnoughSpaceNotify;
- (void)handleRecordStartOrEndNotify:(id)arg1;
- (void)setStatusBarState;
- (unsigned long long)filterOtherUserForFriendListWindowController:(id)arg1;
- (void)friendListWindowController:(id)arg1 renderClicked:(unsigned long long)arg2 isMain:(BOOL)arg3 renderContainer:(id)arg4;
- (void)adjustFriendListRenderList;
- (void)showFriendListWindow;
- (void)hideFriendListWindow;
- (void)handleFriendListWindowOpenOrClose:(id)arg1;
- (void)createFriendListWindow;
- (void)handleMarkNotify:(id)arg1;
- (void)handleMainWindowNotification:(id)arg1;
- (void)userTimerCallBack:(id)arg1;
- (void)destroyTimer;
- (void)onTimer:(id)arg1;
- (void)handleUITypeChange:(int)arg1 prevType:(int)arg2;
- (void)setWndPosByType:(int)arg1 prevType:(int)arg2;
- (void)quitHRMettingAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)quitHRMettingAlert:(id)arg1;
- (void)quitHRMettingImmediate:(unsigned long long)arg1;
- (void)onUIEvent_Async:(id)arg1;
- (void)onUIEvent:(id)arg1;
- (void)onUIEvent:(id)arg1 secondArg:(id)arg2;
- (void)destroyWindow;
- (void)updateToolbarForMainWindow;
- (void)showAnyConfUI:(int)arg1;
- (void)setToolbarBtnState:(int)arg1 state:(BOOL)arg2 enable:(BOOL)arg3;
- (void)onReceiveQQMessage:(int)arg1;
- (void)onUserSpeakStateChange:(unsigned long long)arg1:(_Bool)arg2;
- (void)onUserListChange:(id)arg1;
- (void)onUserVideoStateChange:(unsigned long long)arg1:(_Bool)arg2:(_Bool)arg3:(_Bool)arg4;
- (void)onVideoData:(CDStruct_130e8c26 *)arg1;
- (void)onLogicEvent:(int)arg1 setInfoDic:(id)arg2;
- (void)updateSessionHead;
- (void)setUITextInfoTrunc:(BOOL)arg1 withFmt:(id)arg2 withName:(id)arg3;
- (void)setUITextInfo:(BOOL)arg1 setText:(id)arg2;
- (void)showWindowShareUI:(BOOL)arg1;
- (void)showScreenshareUI:(BOOL)arg1;
- (void)showMainWindow:(BOOL)arg1;
- (BOOL)showUI:(int)arg1;
- (id)getUserCountInfoFmt;
- (void)handleNotifyError:(id)arg1;
- (void)handleTopBizUpdate:(id)arg1;
- (void)handleVideoData:(id)arg1;
- (void)handleBringToTop:(id)arg1;
- (void)handleUserSpeakUpdate:(id)arg1;
- (void)handleUserVideoUpdate:(id)arg1;
- (void)handleUserUpdate:(id)arg1;
- (void)handleUserLeave:(id)arg1;
- (void)handleUserJoin:(id)arg1;
- (void)handleSelfUpdate:(id)arg1;
- (void)handleModeChange:(id)arg1;
- (void)handleRunStateChange:(id)arg1;
- (void)dealloc;
- (struct AV_ID)getAVID;
- (void)reset;
- (id)initWithAVID:(struct AV_ID)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

