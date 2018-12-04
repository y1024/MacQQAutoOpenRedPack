//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSDate, NSString, NScheduleMainViewController;

@interface NScheduleWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _isSimplestModel;
    long long _normalSaveWidth;
    long long _previousWidth;
    long long _previusHeight;
    BOOL _clickSwitchModeBtn;
    BOOL _isUserResizeOnce;
    BOOL _isStyleAnimating;
    BOOL _enterFullScreen;
    NSString *_scheduleId;
    NSDate *_date;
    BOOL _needShowCurrentDate;
    BOOL _isLargeMode;
    BOOL _isFirstClick;
    NScheduleMainViewController *_viewController;
    struct CGRect _windowInitRect;
}

+ (id)shareScheduleWindow;
@property(nonatomic) BOOL isFirstClick; // @synthesize isFirstClick=_isFirstClick;
@property(retain, nonatomic) NScheduleMainViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct CGRect windowInitRect; // @synthesize windowInitRect=_windowInitRect;
@property(nonatomic) BOOL enterFullScreen; // @synthesize enterFullScreen=_enterFullScreen;
@property(nonatomic) BOOL isStyleAnimating; // @synthesize isStyleAnimating=_isStyleAnimating;
@property(nonatomic) BOOL isUserResizeOnce; // @synthesize isUserResizeOnce=_isUserResizeOnce;
@property(nonatomic) BOOL clickSwitchModeBtn; // @synthesize clickSwitchModeBtn=_clickSwitchModeBtn;
@property(nonatomic) long long previusHeight; // @synthesize previusHeight=_previusHeight;
@property(nonatomic) long long previousWidth; // @synthesize previousWidth=_previousWidth;
@property(nonatomic) long long normalSaveWidth; // @synthesize normalSaveWidth=_normalSaveWidth;
@property(nonatomic) BOOL isSimplestModel; // @synthesize isSimplestModel=_isSimplestModel;
@property(nonatomic) BOOL isLargeMode; // @synthesize isLargeMode=_isLargeMode;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)createSchedule;
- (void)delayRefreshScheduleInfo;
- (void)refreshScheduleInfo;
- (void)delayOpenSchedule;
- (void)openScheduleWithScheduleId:(id)arg1 beginDate:(id)arg2 needShowCurrentDate:(BOOL)arg3;
- (void)windowDidLoad;
- (void)updateWindowFrameSetting;
- (void)setSavedWindowFrame:(struct CGRect)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)defaultLargeFrame;
- (struct CGRect)defaultFrame;
- (struct CGRect)savedWindowFrame;
- (void)delayAddRootView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

