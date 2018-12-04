//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSString;

@interface TXHotkeyView : NSTextView
{
    int m_bCanSetHotKey;
    NSString *m_lastStr;
    BOOL isFoucsRing;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (int)m_bCanSetHotKey;
- (BOOL)becomeFirstResponder;
- (int)eatKey:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property id <TXHotkeyViewDelegate> delegate;

@end

