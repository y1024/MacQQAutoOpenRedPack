//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class LoginTabView;

@interface LoginWindow : NSWindow
{
    LoginTabView *loginTabView;
}

@property(readonly, nonatomic) LoginTabView *loginTabView; // @synthesize loginTabView;
- (void).cxx_destruct;
- (void)onWindowClose:(id)arg1;
- (void)seleteSecure;
- (void)dealloc;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)awakeFromNib;
- (id)init;

@end

