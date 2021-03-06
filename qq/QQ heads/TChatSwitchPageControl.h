//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSLayoutConstraint, NSTextField, TXHoverButton;

@interface TChatSwitchPageControl : NSView
{
    TXHoverButton *_leftButton;
    NSTextField *_textField;
    TXHoverButton *_rightButton;
    NSLayoutConstraint *_textFieldConstraintW;
    id <TChatSwitchPageControlDelete> _delegate;
}

@property(nonatomic) __weak id <TChatSwitchPageControlDelete> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setRightBtnEnable:(BOOL)arg1;
- (void)setLeftBtnEnabled:(BOOL)arg1;
- (void)setCurrentPage:(long long)arg1 count:(long long)arg2;
- (void)buttonClicked:(id)arg1;
- (void)initSubviews;
- (void)dealloc;
- (id)init;

@end

