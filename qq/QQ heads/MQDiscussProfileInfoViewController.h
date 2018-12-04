//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class MQFloatTextField, MQSessionID, NSArrayController, NSButton, NSCollectionView, NSLayoutConstraint, NSMatrix, NSMutableArray, NSString, NSTextField, TXColorView, TXHoverButton;

@interface MQDiscussProfileInfoViewController : NSViewController <NSTextFieldDelegate>
{
    NSCollectionView *collectionView;
    NSMatrix *_discussMessageReceiveTypeMatrix;
    NSArrayController *arrayController;
    MQFloatTextField *_textGroupName;
    TXHoverButton *_btnEditGroupName;
    NSTextField *_labelDiscussName;
    NSTextField *_labelDiscussMember;
    NSTextField *_labelReceiveTips;
    TXColorView *_backgroundColorView;
    NSString *_realDiscussName;
    MQSessionID *_sessionId;
    NSMutableArray *_images;
    NSButton *_quitDiscussBtn;
    NSLayoutConstraint *_collectionViewHeightConstraints;
    BOOL _isSeparate;
    long long _memberListCount;
    NSString *_lastGroupName;
}

@property(retain, nonatomic) NSString *lastGroupName; // @synthesize lastGroupName=_lastGroupName;
@property(retain, nonatomic) NSButton *quitDiscussBtn; // @synthesize quitDiscussBtn=_quitDiscussBtn;
@property(copy) NSString *realDiscussName; // @synthesize realDiscussName=_realDiscussName;
@property(retain) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)saveDiscussTitle;
- (void)floatTextFieldDidEndEditing:(id)arg1;
- (void)onClickEditGroupName:(id)arg1;
- (void)didEndNewDiscussSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)onDiscussAddMember:(id)arg1;
- (void)itemClicked:(id)arg1;
- (void)handleDiscussEventNotification:(id)arg1;
- (void)updateBlockMatrixState;
- (void)onDiscussMessageReceiveTypeChanged:(id)arg1;
- (void)updateDiscussMemberCollectionView:(id)arg1;
- (void)reloadMemberList;
- (void)handleAvatarChange:(id)arg1;
- (id)discussShowNameFromRealName;
- (void)updateContentWithDiscussProfile:(id)arg1;
- (void)closeWindow;
- (void)sheetQuitDiscuss:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)onQuitDiscuss:(id)arg1;
- (void)quitDiscussAction:(id)arg1;
- (void)reloadData;
- (void)reloadProfileInfoWithDelay;
- (void)hiddenDisNames;
- (void)setupDiscussBtn;
- (void)itemFrameChanged:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 isSeparate:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
