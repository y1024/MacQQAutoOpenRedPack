//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AIOTopViewDelegate.h"
#import "MQPull2RefreshDelegate.h"
#import "TChatNoMoreTipViewModelDelegate.h"
#import "TChatReloadClearMsgDelegate.h"
#import "TChatTranslateTipDelegate.h"

@class MQSessionID, NSDate, NSMutableArray, NSString, NSTextBlock<MQMouseHoverProtocol>, QuickCreateScheduleWindowViewController, TChatClearScreenViewModel, TChatUnreadTipViewModel, TChatView;

@interface MQAIOTopViewController : NSViewController <AIOTopViewDelegate, MQPull2RefreshDelegate, TChatNoMoreTipViewModelDelegate, TChatReloadClearMsgDelegate, TChatTranslateTipDelegate>
{
    NSDate *mTempAudioPreMsgDate;
    double _oldHeight;
    MQSessionID *_sessionId;
    QuickCreateScheduleWindowViewController *createWindowViewController;
    id <MQAIOControllerDelegate> aioDelegate;
    TChatView *_chatView;
    unsigned long long _AIOType;
    NSTextBlock<MQMouseHoverProtocol> *_hoveredTextBlock;
    long long _lastReadedSeq;
    TChatUnreadTipViewModel *_unreadTipViewModel;
    TChatClearScreenViewModel *_clearScreenViewModel;
}

@property(retain) TChatClearScreenViewModel *clearScreenViewModel; // @synthesize clearScreenViewModel=_clearScreenViewModel;
@property(retain) TChatUnreadTipViewModel *unreadTipViewModel; // @synthesize unreadTipViewModel=_unreadTipViewModel;
@property long long lastReadedSeq; // @synthesize lastReadedSeq=_lastReadedSeq;
@property __weak NSTextBlock<MQMouseHoverProtocol> *hoveredTextBlock; // @synthesize hoveredTextBlock=_hoveredTextBlock;
@property unsigned long long AIOType; // @synthesize AIOType=_AIOType;
@property(nonatomic) __weak TChatView *chatView; // @synthesize chatView=_chatView;
@property __weak id <MQAIOControllerDelegate> aioDelegate; // @synthesize aioDelegate;
- (void).cxx_destruct;
- (void)reloadMsgCleared;
- (void)openTranslateSetting;
- (void)insertTranslateSettingTipsBreakLine:(unsigned int)arg1;
- (void)insertClearMsgBreakLine;
- (void)removeClearMsgBreakLine;
- (void)openMessageManager;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)onScheduleGuideClickedInRect:(struct CGRect)arg1 withViewModel:(id)arg2;
- (BOOL)removeMsgModel:(id)arg1;
- (id)hoveredBlock;
- (void)setHoveredBlock:(id)arg1;
- (void)spaceOpenImage;
- (void)refreshViewModel:(id)arg1;
- (BOOL)shouldShowNickName:(id)arg1;
- (BOOL)isAbleToShowLoadingTips;
- (id)getViewModelByMsgID:(id)arg1;
- (BOOL)isSimplestModel;
- (void)onTopTextOutputDebugInfo:(id)arg1;
- (void)didInitAttachmentFromDB:(id)arg1;
- (void)didCreateAttachment:(id)arg1 forTask:(id)arg2;
- (void)onTopTextViewKeyInput:(id)arg1;
- (void)sendFile:(id)arg1;
- (void)popUpGroupMenuForUin:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (void)scrollViewDidStop:(id)arg1;
- (void)scrollViewDidLiveScroll:(id)arg1;
- (void)scrollViewWillStartScroll:(id)arg1;
- (void)viewBoundDidChange;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScrollToBottom:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)inertUnreadBreakLine;
- (void)removeUnreadBreakLine;
@property(readonly, nonatomic) NSMutableArray *viewModelList;
- (void)appendTips:(id)arg1 time:(double)arg2 chatUIStyle:(int)arg3 background:(BOOL)arg4;
- (void)appendTipWithArgs:(id)arg1;
- (BOOL)shouldInsertTime:(id)arg1 with:(id)arg2;
- (BOOL)shouldInsertTime:(id)arg1 with:(id)arg2 forMsg:(id)arg3;
- (void)appendMessage:(id)arg1;
- (void)appendMessageArray:(id)arg1;
- (void)insertMessageArray2:(id)arg1;
- (void)insertMessageArray:(id)arg1;
- (id)sessionID;
- (void)dealloc;
- (id)initWithNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
