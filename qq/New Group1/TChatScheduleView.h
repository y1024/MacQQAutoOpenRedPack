//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatBaseEventView.h"

#import "TChatBaseContentViewAbility.h"

@class MQNinePartImage, NSImage, NSString, TChatBaseViewModel, TChatCellBuilderOption, TChatImage;

@interface TChatScheduleView : TChatBaseEventView <TChatBaseContentViewAbility>
{
    BOOL _drawSelectedRange;
    long long otherPadding;
    BOOL _isSelf;
    NSImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    NSString *_address;
    NSString *_note;
    SEL _cellClicked;
    double _aioWidth;
    TChatBaseViewModel *_viewModel;
    TChatCellBuilderOption *_option;
    MQNinePartImage *_bubbleImage;
    MQNinePartImage *_bubbleImage1;
    MQNinePartImage *_textBgImage;
    MQNinePartImage *_textBgImage1;
    MQNinePartImage *_maskBubbleImage;
    MQNinePartImage *_maskBubbleImage1;
    NSImage *_sourceImage;
    NSImage *_lineImage;
}

@property(retain, nonatomic) NSImage *lineImage; // @synthesize lineImage=_lineImage;
@property(retain, nonatomic) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) MQNinePartImage *maskBubbleImage1; // @synthesize maskBubbleImage1=_maskBubbleImage1;
@property(retain, nonatomic) MQNinePartImage *maskBubbleImage; // @synthesize maskBubbleImage=_maskBubbleImage;
@property(retain, nonatomic) MQNinePartImage *textBgImage1; // @synthesize textBgImage1=_textBgImage1;
@property(retain, nonatomic) MQNinePartImage *textBgImage; // @synthesize textBgImage=_textBgImage;
@property(retain, nonatomic) MQNinePartImage *bubbleImage1; // @synthesize bubbleImage1=_bubbleImage1;
@property(retain, nonatomic) MQNinePartImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(nonatomic) __weak TChatCellBuilderOption *option; // @synthesize option=_option;
@property(nonatomic) __weak TChatBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double aioWidth; // @synthesize aioWidth=_aioWidth;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) SEL cellClicked; // @synthesize cellClicked=_cellClicked;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)refreshWithType:(unsigned long long)arg1;
- (id)handleDragEvent:(id)arg1;
- (void)handleClick:(struct CGPoint)arg1;
- (void)handleTripleClick:(struct CGPoint)arg1;
- (unsigned long long)isPointInSelectedArea:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)handleSelectEvent:(id)arg1;
@property(readonly, nonatomic) TChatImage *dragImage;
- (id)sourceAttributes;
- (id)noteAttributes;
- (id)addressAttributes;
- (id)summaryAttributes;
- (id)titleAttributes;
- (id)scheduleAttributes;
- (void)clickeEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isSelfMode;
- (void)drawSource:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL drawSelectedRange;
- (struct CGSize)cellSize;
- (struct CGSize)bubbleSize;
- (double)currentScale;
- (void)update:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

