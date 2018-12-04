//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField, WebView;

@interface RedpackAgreementWindowController : NSWindowController
{
    id _cancelCb;
    id _confirmCb;
    WebView *_myWebView;
    NSButton *_qqWalletRuleBtn;
    NSTextField *_titleLabel;
    NSButton *_agreeBtn;
    NSButton *_cancelBtn;
    NSButton *_confirmBtn;
}

@property __weak NSButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property __weak NSButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property __weak NSButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSButton *qqWalletRuleBtn; // @synthesize qqWalletRuleBtn=_qqWalletRuleBtn;
@property __weak WebView *myWebView; // @synthesize myWebView=_myWebView;
@property(copy, nonatomic) id confirmCb; // @synthesize confirmCb=_confirmCb;
@property(copy, nonatomic) id cancelCb; // @synthesize cancelCb=_cancelCb;
- (void).cxx_destruct;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showInWindow:(id)arg1;
- (void)onAgreeClicked:(id)arg1;
- (void)onQQWalletRuleClicked:(id)arg1;
- (void)onCancelClicked:(id)arg1;
- (void)onConfirmClicked:(id)arg1;
- (void)awakeFromNib;
- (void)windowDidLoad;

@end

