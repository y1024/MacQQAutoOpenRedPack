//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "EIMMenuControllerDelegate.h"
#import "MLCalendarViewDelegate.h"
#import "ScheduleSelectMemberViewDelegate.h"

@class BorderEditText, EIMButton, EIMMenuController, MLCalendarView, NSArray, NSButton, NSDate, NSLayoutConstraint, NSMutableArray, NSPopover, NSScrollView, NSString, NSTextField, NSView, ScheduleModel, TXColorView;

@interface TIMCalenderCreateViewController : NSViewController <EIMMenuControllerDelegate, ScheduleSelectMemberViewDelegate, MLCalendarViewDelegate>
{
    EIMMenuController *beginMenu;
    EIMMenuController *endMenu;
    EIMMenuController *tipMenu;
    EIMMenuController *repeatMenu;
    long long _currentSelectType;
    NSMutableArray *memberViewItems;
    NSMutableArray *members;
    NSLayoutConstraint *bottomLayout;
    NSLayoutConstraint *memberHeightLayout;
    ScheduleModel *_schedule;
    long long _repeatOption;
    NSArray *reminds;
    NSArray *times;
    NSArray *repeats;
    NSString *okButtonTitle;
    BOOL isSelectBeginDay;
    NSLayoutConstraint *addressTextFieldTopConstraint30;
    NSLayoutConstraint *addressTextFieldTopConstraint8;
    NSDate *currentDate;
    BOOL okButtonEnable;
    BOOL _isCreate;
    BOOL _isIndependent;
    TXColorView *_effectView;
    id _owner;
    NSTextField *_themeTitle;
    BorderEditText *_themeTextField;
    NSTextField *_beginTimeTitle;
    EIMButton *_beginDayButton;
    EIMButton *_beginTimeButton;
    NSTextField *_endTimeTitle;
    EIMButton *_endDayButton;
    EIMButton *_endTimeButton;
    NSTextField *_timeTipTextFeild;
    NSTextField *_addressTitle;
    BorderEditText *_addressTextField;
    NSTextField *_tipTitle;
    EIMButton *_tipButton;
    NSTextField *_repeatTitle;
    EIMButton *_repeatButton;
    NSTextField *_remarkTitle;
    BorderEditText *_remarkTextField;
    NSTextField *_memberTitle;
    NSView *_memberView;
    NSButton *_cancelButton;
    NSButton *_okButton;
    TXColorView *_documentView;
    NSScrollView *_scrollView;
    NSPopover *_calendarPopover;
    MLCalendarView *_calendarView;
}

@property(retain) MLCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(retain) NSPopover *calendarPopover; // @synthesize calendarPopover=_calendarPopover;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak TXColorView *documentView; // @synthesize documentView=_documentView;
@property(retain) NSButton *okButton; // @synthesize okButton=_okButton;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSView *memberView; // @synthesize memberView=_memberView;
@property(retain) NSTextField *memberTitle; // @synthesize memberTitle=_memberTitle;
@property(retain) BorderEditText *remarkTextField; // @synthesize remarkTextField=_remarkTextField;
@property(retain) NSTextField *remarkTitle; // @synthesize remarkTitle=_remarkTitle;
@property(retain) EIMButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(retain) NSTextField *repeatTitle; // @synthesize repeatTitle=_repeatTitle;
@property(retain) EIMButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain) NSTextField *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(retain) BorderEditText *addressTextField; // @synthesize addressTextField=_addressTextField;
@property(retain) NSTextField *addressTitle; // @synthesize addressTitle=_addressTitle;
@property(retain) NSTextField *timeTipTextFeild; // @synthesize timeTipTextFeild=_timeTipTextFeild;
@property(retain) EIMButton *endTimeButton; // @synthesize endTimeButton=_endTimeButton;
@property(retain) EIMButton *endDayButton; // @synthesize endDayButton=_endDayButton;
@property(retain) NSTextField *endTimeTitle; // @synthesize endTimeTitle=_endTimeTitle;
@property(retain) EIMButton *beginTimeButton; // @synthesize beginTimeButton=_beginTimeButton;
@property(retain) EIMButton *beginDayButton; // @synthesize beginDayButton=_beginDayButton;
@property(retain) NSTextField *beginTimeTitle; // @synthesize beginTimeTitle=_beginTimeTitle;
@property(retain) BorderEditText *themeTextField; // @synthesize themeTextField=_themeTextField;
@property(retain) NSTextField *themeTitle; // @synthesize themeTitle=_themeTitle;
@property __weak id owner; // @synthesize owner=_owner;
@property(nonatomic) BOOL isIndependent; // @synthesize isIndependent=_isIndependent;
@property(nonatomic) BOOL isCreate; // @synthesize isCreate=_isCreate;
@property(nonatomic) __weak TXColorView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;
- (void)deleteMemberWithUin:(unsigned long long)arg1;
- (void)selectMember;
- (void)didEndNewDiscussSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)checkIfNeedShowTips:(BOOL)arg1;
- (BOOL)isRemindTimeOverRemindType;
- (void)checkIfNeedAdjustRemindOption;
- (void)didSelectDate:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)findExistGroupInAllListWithSelectMembers:(id)arg1;
- (void)createOrModifySchedule:(BOOL)arg1;
- (void)createDiscussAndSchedule:(BOOL)arg1;
- (void)createOrModify;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)repeatSelect:(id)arg1;
- (void)tipSelect:(id)arg1;
- (void)endDaySelect:(id)arg1;
- (void)beginDaySelect:(id)arg1;
- (void)endTimeSelect:(id)arg1;
- (void)beginTimeSelect:(id)arg1;
- (void)eimMenu:(id)arg1 onSelectedItem:(id)arg2;
- (id)convertRepeatType2Title:(long long)arg1;
- (long long)convertRepeatString2Type:(id)arg1;
- (id)convertRemindType2Title:(long long)arg1;
- (double)convertRemindType2Interval:(long long)arg1;
- (double)convertRemindString2Interval:(id)arg1;
- (long long)convertRemindString2Type:(id)arg1;
- (void)updateStartTime;
- (void)setData:(id)arg1;
- (void)defaultTimeDate:(unsigned long long)arg1;
- (void)defaultEditDayDate:(id)arg1;
- (void)defaultDayDate:(id)arg1;
- (void)layoutMemberView;
- (void)updateOkButtonState;
- (void)textDidChange:(id)arg1;
- (id)viewByIdentifier:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

