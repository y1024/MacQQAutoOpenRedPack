//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseViewController.h"

#import "SingleInfoDelegate.h"

@class NSString, ProfileBuddyPreferenceViewController, ProfileSingleInfoViewController;

@interface ProfileBuddyViewController : ProfileBaseViewController <SingleInfoDelegate>
{
    ProfileSingleInfoViewController *_singleInfoController;
    ProfileBuddyPreferenceViewController *_buddyPrefController;
}

- (void).cxx_destruct;
- (void)willQuitFriendSettings;
- (void)hideSettingBtn;
- (void)onRemarkChange:(id)arg1;
- (void)onSettingBtnClick:(id)arg1;
- (void)setProfileSource:(id)arg1;
- (void)onAvatarChange:(id)arg1 imageColor:(long long)arg2;
- (void)updateData:(unsigned long long)arg1;
- (id)createPreferenceContent;
- (id)createActiveHeaderView;
- (id)createInfoViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

