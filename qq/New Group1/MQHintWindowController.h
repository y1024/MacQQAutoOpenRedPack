//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@interface MQHintWindowController : NSWindowController
{
    id _closeBlock;
    double _showTime;
    double _fadeTime;
}

- (void).cxx_destruct;
- (void)performCloseWindow;
- (void)closeHintWindow;
- (void)showHintWindow;
- (void)dealloc;
- (id)initWithHint:(id)arg1 showTime:(double)arg2 fadeTime:(double)arg3 closeHandler:(id)arg4;

@end

