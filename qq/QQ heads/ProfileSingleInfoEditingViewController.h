//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseInfoViewController.h"

#import "EIMMenuControllerDelegate.h"

@class BorderEditText, EIMMenuController, MQBuddyProfileEntity, MQNinePartImage, NSArray, NSButton, NSImageView, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, NSView, TXColorView;

@interface ProfileSingleInfoEditingViewController : ProfileBaseInfoViewController <EIMMenuControllerDelegate>
{
    TXColorView *_infoView;
    NSView *_gridInfoContainer;
    TXColorView *_gridInfo;
    NSView *_containerSex;
    NSView *_containerAge;
    NSView *_containerShengxiao;
    NSView *_containerConstellation;
    NSView *_containerBirthday;
    NSView *_containerBloodType;
    NSImageView *_imgGender;
    NSImageView *_imgShengxiao;
    NSImageView *_imgConstellation;
    NSImageView *_imgBloodType;
    NSImageView *_imageAgeDefault;
    NSImageView *_imageAge;
    NSImageView *_imageAge2;
    NSImageView *_imageAge3;
    NSLayoutConstraint *_imageAgeLeading;
    NSLayoutConstraint *_imageAgeLeading2;
    NSLayoutConstraint *_imageAgeLeading3;
    TXColorView *_birthLine;
    NSImageView *_imageBirthDefault;
    NSImageView *_imageBirthday;
    NSImageView *_imageBirthday2;
    NSTextField *_labelBirthOfDay;
    NSLayoutConstraint *imageBirthLeading;
    NSLayoutConstraint *imageBirthLeading2;
    NSLayoutConstraint *imageBirthLeading3;
    NSLayoutConstraint *birthLineLeading;
    NSButton *_btnGender;
    NSButton *_btnAge;
    NSButton *_btnShengxiao;
    NSButton *_btnConstellation;
    NSButton *_btnBirthday;
    NSButton *_btnBloodType;
    NSTextField *_labelNick;
    NSTextField *_labelMobile;
    NSTextField *_labelTelephone;
    NSTextField *_labelEmail;
    NSTextField *_labelCompany;
    NSTextField *_labelPression;
    NSTextField *_lableSchool;
    NSTextField *_labelLocation;
    NSTextField *_labelHome;
    NSTextField *_labelHomePage;
    NSTextField *_labelDescription;
    BorderEditText *_textNick;
    BorderEditText *_textMobile;
    BorderEditText *_textTelephone;
    BorderEditText *_textEmail;
    BorderEditText *_textCompany;
    BorderEditText *_textSchool;
    NSButton *_btnProfession;
    NSButton *_btnCountry;
    NSButton *_btnProvince;
    NSButton *_btnCity;
    NSButton *_btnHomeCountry;
    NSButton *_btnHomeProvince;
    NSButton *_btnHomeCity;
    BorderEditText *_textHomePage;
    BorderEditText *_textDescription;
    TXColorView *_chooseBirthdayContainer;
    NSButton *_btnYear;
    NSButton *_btnMonth;
    NSButton *_btnDay;
    MQBuddyProfileEntity *_profileEntity;
    EIMMenuController *menuProfession;
    EIMMenuController *menuCountry;
    EIMMenuController *menuHomeCountry;
    EIMMenuController *menuLocation;
    EIMMenuController *menuGridInfo;
    EIMMenuController *menuBirthday;
    NSArray *_gridArrUIOrder;
    NSMutableArray *_gridArrUIContraints;
    NSMutableArray *_provinceArray;
    NSMutableArray *_cityArray;
    NSMutableArray *_homeProvinceArray;
    NSMutableArray *_homeCityArray;
    NSMutableArray *_genderArray;
    NSMutableArray *_ageArray;
    NSMutableArray *_animalSignArray;
    NSMutableArray *_constellationArray;
    NSMutableArray *_bloodArray;
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSMutableArray *_dayArray;
    TXColorView *birthdayBg;
    MQNinePartImage *btnBgimg;
}

- (void).cxx_destruct;
- (void)btnBloodTypeClick:(id)arg1;
- (void)btnBirthdayClick:(id)arg1;
- (void)btnConstellationClick:(id)arg1;
- (void)btnAnimalClick:(id)arg1;
- (void)btnAgeClick:(id)arg1;
- (void)btnGenderClick:(id)arg1;
- (void)btnDayClick:(id)arg1;
- (void)btnMonthClick:(id)arg1;
- (void)btnYearClick:(id)arg1;
- (void)btnHomeCityClick:(id)arg1;
- (void)btnHomeProvinceClick:(id)arg1;
- (void)btnCityClick:(id)arg1;
- (void)btnProvinceClick:(id)arg1;
- (void)btnHomeCountryClick:(id)arg1;
- (void)btnCountryClick:(id)arg1;
- (void)btnProfessionClick:(id)arg1;
- (void)uploadProfileResultCompletion:(id)arg1;
- (long long)indexOfArray:(id)arg1 item:(id)arg2;
- (void)initCityData:(id)arg1 province:(id)arg2 saveArray:(id)arg3;
- (void)initProvinceData:(id)arg1 saveArray:(id)arg2;
- (void)OnHomeProvinceChange;
- (void)OnHomeCountryChange;
- (void)OnProvinceChange;
- (void)OnCountryChange;
- (void)onBirthMonthChange;
- (void)eimMenu:(id)arg1 onSelectedItem:(id)arg2;
- (void)updateBirthday;
- (void)updateAge;
- (void)updateGender;
- (void)updateBloodType;
- (void)updateConstellation;
- (void)updateShengxiao;
- (void)updateGridInfoWithProfile:(id)arg1;
- (void)updateContentWithProfile:(id)arg1;
- (void)updateContentWithProfile;
- (void)initPopupViewItems;
- (void)layoutGridInfo;
- (void)initLayoutInfo;
- (void)setUpButton:(id)arg1 paddingLeft:(double)arg2 paddingRight:(double)arg3;
- (void)setUpButton:(id)arg1;
- (void)setUpEditText:(id)arg1;
- (void)initButtons;
- (void)layoutGridBtn:(id)arg1;
- (void)initLabelTitle;
- (void)hideChooseBirthView;
- (void)onTXColorViewMouseDown:(id)arg1;
- (void)initChooseBirthday;
- (void)awakeFromNib;
- (void)dealloc;
- (id)infoNibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

