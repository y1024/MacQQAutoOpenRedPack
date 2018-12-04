//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class MQFloatTextField, NSArray, NSMutableArray, NSString, NSTextField, ProfileScrollDocumentView, TXHoverButton;

@interface MQSingleProfileInfoViewController : NSViewController <NSTextFieldDelegate>
{
    ProfileScrollDocumentView *_infoView;
    MQFloatTextField *_textRemark;
    TXHoverButton *_btnEditRemark;
    NSTextField *_textNickName;
    NSTextField *_textUin;
    NSTextField *_textQAge;
    NSTextField *_textPersonalInfo;
    NSTextField *_textIdentity;
    NSTextField *_textSchool;
    NSTextField *_textBirthDay;
    NSTextField *_textCountry;
    NSTextField *_textProvince;
    NSTextField *_textCity;
    NSTextField *_textHomeCountry;
    NSTextField *_textHomeProvince;
    NSTextField *_textHomeCity;
    NSTextField *_textEmail;
    NSTextField *_textTel;
    NSTextField *_textMobile;
    NSTextField *_textHomepage;
    NSTextField *_textDescription;
    NSTextField *_labelRemark;
    NSTextField *_labelNickName;
    NSTextField *_labelUin;
    NSTextField *_labelQAge;
    NSTextField *_labelPersonalInfo;
    NSTextField *_labelIdentity;
    NSTextField *_labelSchool;
    NSTextField *_labelBirthDay;
    NSTextField *_labelLocation;
    NSTextField *_labelHomeLocation;
    NSTextField *_labelEmail;
    NSTextField *_labelTel;
    NSTextField *_labelMobile;
    NSTextField *_labelHomepage;
    NSTextField *_labelDescription;
    NSArray *_pArrUIOrder;
    NSMutableArray *_pArrUIContraints;
    unsigned long long _dwUin;
}

+ (void)showErrorMsg:(id)arg1 detailStr:(id)arg2;
+ (id)securityMobileStr:(id)arg1;
- (void).cxx_destruct;
- (void)onClickEditRemarkName:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)summitRemark:(id)arg1;
- (void)saveRemarkName;
- (void)updateComponentContent:(id)arg1;
- (void)initLayoutInfo;
- (void)relayoutUI;
- (void)hideComponent;
- (void)initLabelTitle;
- (void)updateContentWithProfile;
- (void)updateSelfContentInfo;
- (void)updateWithProfileModel:(id)arg1;
- (void)updateWithUin:(unsigned long long)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

