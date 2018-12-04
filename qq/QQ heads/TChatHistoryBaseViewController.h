//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "TChatCalendarMsgDateServiceDelegate.h"
#import "TChatHisViewDataSourceDelegate.h"
#import "TChatHisViewDelegate.h"

@class BHMessageModel, MQSessionID, NSArray, NSImageView, NSString, NSTextField, NSView, TChatHistoryMsgModelWrapper, TChatScrollView;

@interface TChatHistoryBaseViewController : NSViewController <TChatHisViewDataSourceDelegate, TChatHisViewDelegate, TChatCalendarMsgDateServiceDelegate>
{
    MQSessionID *_sessionId;
    BOOL _isEditing;
    BOOL _isDeleteRefresh;
    TChatScrollView *_scrollView;
    unsigned long long _filter;
    id <TChatHistorySelectedItemChangedDelegate> _selectedItemChangedDelegate;
    id <TChatHistoryBaseViewControllerDataSourceDelegate> _dataSourceDelegate;
    TChatHistoryMsgModelWrapper *_viewModel;
    BHMessageModel *_tagModel;
    NSArray *_currentMsgArray;
    NSView *_containerView;
    NSImageView *_imageView;
    NSTextField *_textField;
}

@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *currentMsgArray; // @synthesize currentMsgArray=_currentMsgArray;
@property(retain, nonatomic) BHMessageModel *tagModel; // @synthesize tagModel=_tagModel;
@property(retain, nonatomic) TChatHistoryMsgModelWrapper *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) BOOL isDeleteRefresh; // @synthesize isDeleteRefresh=_isDeleteRefresh;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <TChatHistoryBaseViewControllerDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(nonatomic) __weak id <TChatHistorySelectedItemChangedDelegate> selectedItemChangedDelegate; // @synthesize selectedItemChangedDelegate=_selectedItemChangedDelegate;
@property(readonly, nonatomic) unsigned long long filter; // @synthesize filter=_filter;
@property(nonatomic) __weak TChatScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)getMessageDayListFromDate:(id)arg1 toDate:(id)arg2 complete:(id)arg3;
- (void)onRefresh:(id)arg1;
- (void)onLoadMore:(id)arg1;
- (void)setNoDataImage:(id)arg1;
- (void)setNoDataTipMessage:(id)arg1;
- (void)display;
- (id)currentDate;
- (void)cleanAllItems;
- (void)onCleanAllItems;
- (void)deleteSelectedItems:(id)arg1;
- (void)refreshUIDown:(id)arg1;
- (void)refreshUIUp:(id)arg1;
- (void)refreshUI:(id)arg1;
- (void)reloadMsgAfterRoaming:(id)arg1 completion:(id)arg2;
- (void)refreshContext:(id)arg1 completion:(id)arg2;
- (void)loadMoreMessageDown;
- (void)loadMoreMessageUp;
- (void)loadMsgContext:(id)arg1 filter:(unsigned long long)arg2 completion:(id)arg3;
- (void)gotoContext:(id)arg1 completion:(id)arg2;
- (void)gotoDate:(id)arg1;
- (void)reloadDataWithSessionId:(id)arg1;
- (void)refresh;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
