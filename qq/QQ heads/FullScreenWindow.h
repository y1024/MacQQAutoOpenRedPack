//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSScreen, NSView, NSWindowController;

@interface FullScreenWindow : NSWindow
{
    NSWindowController *mFullscreenWindowController;
    NSWindowController *mFullscreenOverlayWindowController;
    NSScreen *mFullscreenScreen;
    struct CGRect mSavedMovieViewRect;
    unsigned long long mSavedPresentationOptions;
    unsigned int _uiMode;
    unsigned int _uiOptions;
    id _selTarget;
    SEL _sel;
    NSView *_target;
    NSWindow *_targetWindow;
    BOOL isShowWarning_;
}

+ (BOOL)isInFullScreen;
+ (void)exitTheFullScreen;
+ (void)enterFullScreen:(id)arg1 floatView:(id)arg2 onExitFullScreenTarget:(id)arg3 action:(SEL)arg4 videoWarning:(BOOL)arg5;
+ (void)enterFullScreen:(id)arg1 floatView:(id)arg2 onExitFullScreenTarget:(id)arg3 action:(SEL)arg4;
+ (id)shareScreenWindow;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)repositionOverlayWindow;
- (void)screenParametersDidChange:(id)arg1;
- (void)dealloc;
- (void)exitFullScreen;
- (id)initInFullScreen:(id)arg1 floatView:(id)arg2 onExitFullScreen:(SEL)arg3 target:(id)arg4 videoWarning:(BOOL)arg5;
- (void)showWarningWindow:(BOOL)arg1;
- (id)warningWindow;
- (void)cancelOperation:(id)arg1;
- (BOOL)canBecomeKeyWindow;

@end

