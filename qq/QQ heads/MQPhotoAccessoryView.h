//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class MQLoopProgressView, MQPhoto, NSTextField, TXColorView, TXHoverButton;

@interface MQPhotoAccessoryView : NSControl
{
    unsigned long long _type;
    TXColorView *_bgView;
    MQLoopProgressView *_progressView;
    TXHoverButton *_button;
    NSTextField *_progressTextView;
    TXColorView *_tipView;
    NSTextField *_tipTextView;
    MQPhoto *_myPhoto;
}

@property(nonatomic) __weak MQPhoto *myPhoto; // @synthesize myPhoto=_myPhoto;
@property(retain, nonatomic) NSTextField *tipTextView; // @synthesize tipTextView=_tipTextView;
@property(retain, nonatomic) TXColorView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSTextField *progressTextView; // @synthesize progressTextView=_progressTextView;
@property(retain, nonatomic) TXHoverButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MQLoopProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TXColorView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dismissTipViewAWhile;
- (void)setTarget:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)updateGroupView:(id)arg1;
- (void)updateView:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)configUI;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

