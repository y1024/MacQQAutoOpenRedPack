//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CALayerDelegate.h"
#import "NSAnimationDelegate.h"

@class CALayer, CATextLayer, NSAnimation, NSArray, NSString, NSTimer;

@interface MQRecordView : NSView <NSAnimationDelegate, CALayerDelegate>
{
    id <MQRecordViewDelegate> _delegate;
    CALayer *_hostLayer;
    CALayer *_centerLayer;
    CALayer *_recordButtonlayer;
    CALayer *_recordingButtonlayer;
    CALayer *_recordingOutCircle;
    CALayer *_recordingInCircle;
    CATextLayer *_textButtonlayer;
    struct CGPoint _centerLayerPosition;
    int state;
    NSTimer *mTimer;
    unsigned long long _dwUin;
    int _chatType;
    int audioRecordOprType;
    NSTimer *_mouseUpTimer;
    NSTimer *_keyUpTimer;
    BOOL isRecording;
    BOOL canResign;
    NSArray *_recordingImgArray;
    NSAnimation *_animationRecording;
    double scaleOut;
}

@property __weak id <MQRecordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)dealloc;
- (void)AIOResignKeyWindow:(id)arg1;
- (void)onTerminateRecord:(id)arg1;
- (void)printTransform:(id)arg1;
- (void)setRecordingOutCircleScale:(double)arg1;
- (void)setRecordingInCircleScale:(double)arg1;
- (void)scaleLayer:(id)arg1 fromScale:(double)arg2 toScale:(double)arg3;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)onKeyUpTimer:(id)arg1;
- (void)onMouseUpTimer:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)stopKeyUpTimer;
- (void)startKeyUpTimer;
- (void)stopMouseUpTimer;
- (void)startMouseUpTimer;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)changeVol;
- (void)initVolShow;
- (void)timeLimit;
- (void)cancelRecord;
- (void)stopRecordWithNeedSend:(BOOL)arg1;
- (void)startRecord;
- (void)showStopRecordWithNeedSend:(BOOL)arg1;
- (void)showStartRecord;
- (void)show:(BOOL)arg1;
- (BOOL)isShowRecordView:(unsigned long long)arg1;
- (void)setUin:(unsigned long long)arg1 chatType:(int)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)initRecordingAnimation;
- (void)onFrameChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

