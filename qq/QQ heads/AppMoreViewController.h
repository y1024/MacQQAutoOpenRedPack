//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

@class MQWidgetButton, NSButton, NSCollectionView, NSDateFormatter, NSDictionary, NSLayoutConstraint, NSMutableArray, NSScrollView, NSTextField, NSView, TXColorView, TXHoverButton;

@interface AppMoreViewController : V5ViewController
{
    id <MQAIOAppListViewControllerDelegate> _delegate;
    NSMutableArray *_buttons;
    NSDictionary *_widgetList;
    NSLayoutConstraint *_bannerWrapperTopCon;
    NSView *_bannerWrapper;
    NSLayoutConstraint *_btnContainerHeightCns;
    long long _widgetMode;
    NSDateFormatter *_dateFormatter;
    NSTextField *_monthTextFiled;
    NSTextField *_chineseDateTextField;
    NSView *_dateContainerView;
    NSLayoutConstraint *_dateContainerHeightConstraint;
    TXColorView *_btnContainer;
    NSLayoutConstraint *_btnContainerTrailConstraint;
    NSLayoutConstraint *_iconMarginConstraint1;
    NSLayoutConstraint *_iconMarginConstraint2;
    NSLayoutConstraint *_iconMarginConstraint3;
    NSLayoutConstraint *_iconMarginConstraint4;
    NSLayoutConstraint *_iconMarginConstraint5;
    NSLayoutConstraint *_grayLineLeadingConstraint;
    NSLayoutConstraint *_grayLineTrailConstraint;
    NSCollectionView *_buttonCollectionView;
    NSLayoutConstraint *_collectionViewWidthCns;
    TXHoverButton *_btnPhone;
    TXHoverButton *_btnPad;
    TXHoverButton *_btnOnlineDoc;
    TXHoverButton *_btnFile;
    TXHoverButton *_btnFeedback;
    TXHoverButton *_btnSetting;
    TXHoverButton *_btnCollection;
    TXHoverButton *_btnWeiyun;
    NSLayoutConstraint *_leadCollection;
    NSLayoutConstraint *_bannerTailCns;
    NSLayoutConstraint *_scrollConHeightCns;
    NSButton *_closeBannerButton;
    TXHoverButton *_bannerButton;
    NSView *_nonWidgetTipsView;
    NSView *_settingWidgetTipsView;
    NSScrollView *_scrollView;
    NSView *_scrollContainerView;
    NSLayoutConstraint *_scrollHeightCns;
    NSTextField *_managerAppTips;
    NSTextField *_openAppTips;
    MQWidgetButton *_qzoneButton;
    MQWidgetButton *_weiyunButton;
    MQWidgetButton *_stockFtButton;
    MQWidgetButton *_qqNesButton;
}

+ (void)hideBanner;
+ (void)showBanner;
@property(retain, nonatomic) MQWidgetButton *qqNesButton; // @synthesize qqNesButton=_qqNesButton;
@property(retain, nonatomic) MQWidgetButton *stockFtButton; // @synthesize stockFtButton=_stockFtButton;
@property(retain, nonatomic) MQWidgetButton *weiyunButton; // @synthesize weiyunButton=_weiyunButton;
@property(retain, nonatomic) MQWidgetButton *qzoneButton; // @synthesize qzoneButton=_qzoneButton;
@property __weak NSTextField *openAppTips; // @synthesize openAppTips=_openAppTips;
@property __weak NSTextField *managerAppTips; // @synthesize managerAppTips=_managerAppTips;
@property __weak NSLayoutConstraint *scrollHeightCns; // @synthesize scrollHeightCns=_scrollHeightCns;
@property __weak NSView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak NSView *settingWidgetTipsView; // @synthesize settingWidgetTipsView=_settingWidgetTipsView;
@property __weak NSView *nonWidgetTipsView; // @synthesize nonWidgetTipsView=_nonWidgetTipsView;
@property TXHoverButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property NSButton *closeBannerButton; // @synthesize closeBannerButton=_closeBannerButton;
@property __weak NSLayoutConstraint *scrollConHeightCns; // @synthesize scrollConHeightCns=_scrollConHeightCns;
@property __weak NSLayoutConstraint *bannerTailCns; // @synthesize bannerTailCns=_bannerTailCns;
@property __weak NSLayoutConstraint *leadCollection; // @synthesize leadCollection=_leadCollection;
@property __weak TXHoverButton *btnWeiyun; // @synthesize btnWeiyun=_btnWeiyun;
@property TXHoverButton *btnCollection; // @synthesize btnCollection=_btnCollection;
@property TXHoverButton *btnSetting; // @synthesize btnSetting=_btnSetting;
@property TXHoverButton *btnFeedback; // @synthesize btnFeedback=_btnFeedback;
@property TXHoverButton *btnFile; // @synthesize btnFile=_btnFile;
@property TXHoverButton *btnOnlineDoc; // @synthesize btnOnlineDoc=_btnOnlineDoc;
@property TXHoverButton *btnPad; // @synthesize btnPad=_btnPad;
@property TXHoverButton *btnPhone; // @synthesize btnPhone=_btnPhone;
@property __weak NSLayoutConstraint *collectionViewWidthCns; // @synthesize collectionViewWidthCns=_collectionViewWidthCns;
@property NSCollectionView *buttonCollectionView; // @synthesize buttonCollectionView=_buttonCollectionView;
@property __weak NSLayoutConstraint *grayLineTrailConstraint; // @synthesize grayLineTrailConstraint=_grayLineTrailConstraint;
@property __weak NSLayoutConstraint *grayLineLeadingConstraint; // @synthesize grayLineLeadingConstraint=_grayLineLeadingConstraint;
@property __weak NSLayoutConstraint *iconMarginConstraint5; // @synthesize iconMarginConstraint5=_iconMarginConstraint5;
@property __weak NSLayoutConstraint *iconMarginConstraint4; // @synthesize iconMarginConstraint4=_iconMarginConstraint4;
@property __weak NSLayoutConstraint *iconMarginConstraint3; // @synthesize iconMarginConstraint3=_iconMarginConstraint3;
@property __weak NSLayoutConstraint *iconMarginConstraint2; // @synthesize iconMarginConstraint2=_iconMarginConstraint2;
@property __weak NSLayoutConstraint *iconMarginConstraint1; // @synthesize iconMarginConstraint1=_iconMarginConstraint1;
@property(retain) NSLayoutConstraint *btnContainerTrailConstraint; // @synthesize btnContainerTrailConstraint=_btnContainerTrailConstraint;
@property __weak TXColorView *btnContainer; // @synthesize btnContainer=_btnContainer;
@property __weak NSLayoutConstraint *dateContainerHeightConstraint; // @synthesize dateContainerHeightConstraint=_dateContainerHeightConstraint;
@property __weak NSView *dateContainerView; // @synthesize dateContainerView=_dateContainerView;
@property __weak NSTextField *chineseDateTextField; // @synthesize chineseDateTextField=_chineseDateTextField;
@property __weak NSTextField *monthTextFiled; // @synthesize monthTextFiled=_monthTextFiled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_showOrHidePushbanner:(id)arg1;
- (void)hideBanner;
- (void)showBanner;
- (void)closeWidgetTipsSetting:(id)arg1;
- (void)didBannerClick:(id)arg1;
- (void)closeBanner:(id)arg1;
- (void)restoreWidgetsType;
- (void)clickAppMoreBtn;
- (void)didClickSetting:(id)arg1;
- (void)resetCollectItems;
- (void)showScheduleCreatedTipsIfNeeded;
- (void)showWidgetSettingTips;
- (void)setNonWidgetTipsHidden:(BOOL)arg1;
- (void)showOrHiddenNoWidgetTips;
- (void)loadServerWidgetConfig:(BOOL)arg1;
- (void)initWidgets;
- (void)sortWidgets;
- (BOOL)isContainButtonsOfType:(unsigned long long)arg1;
- (long long)idxOfWidget:(unsigned long long)arg1;
- (void)restoreAllWidgets;
- (void)setUseWidget:(unsigned long long)arg1 isOn:(BOOL)arg2;
- (void)layoutBadgeNumWithXOffset:(double)arg1 YOffset:(double)arg2 ForButton:(unsigned long long)arg3;
- (void)setBadgeNumber:(long long)arg1 ForButton:(unsigned long long)arg2 inView:(id)arg3;
- (void)btnClickWeiyun:(id)arg1;
- (void)btnClickCollection:(id)arg1;
- (void)btnClickOnlineDoc:(id)arg1;
- (void)didClickApp:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchToSimpleModel:(id)arg1;
- (void)switchToNormalModel:(id)arg1;
- (void)willSwitchToSimpleModel:(id)arg1;
- (void)debugLog:(id)arg1;
- (void)loadView;
- (id)weiyunBtn;
- (void)addViewsToBtn:(id)arg1 downSubTitle:(id)arg2 imgNamed:(id)arg3 btn:(id)arg4;
- (void)addViewsToBtn:(id)arg1 subTitle:(id)arg2 imgNamed:(id)arg3 btn:(id)arg4;
- (id)qzoneBtn;
- (id)qqStock;
- (id)scheduleButton;
- (id)qqNewsButton;
- (id)weatherButton;
- (id)qmailButton;
- (void)addBorderToView:(id)arg1;
- (id)makeButton;
- (id)dateString:(long long)arg1;
- (void)changeCollectionSize:(struct CGSize)arg1;
- (void)dateDidChange:(id)arg1;
- (void)viewFrameDidChange:(id)arg1;
- (void)awakeFromNib;

@end

