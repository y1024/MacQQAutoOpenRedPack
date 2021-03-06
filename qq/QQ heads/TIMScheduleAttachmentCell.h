//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@class MQNinePartImage, NSImage, NSString, NSTextView;

@interface TIMScheduleAttachmentCell : NSTextAttachmentCell
{
    long long otherPadding;
    BOOL _isSelf;
    NSImage *_icon;
    NSString *_subtitle;
    NSString *_address;
    NSString *_note;
    SEL _cellClicked;
    NSTextView *_textView;
    MQNinePartImage *_bubbleImage;
    MQNinePartImage *_textBgImage;
    MQNinePartImage *_maskBubbleImage;
    NSImage *_sourceImage;
    NSImage *_lineImage;
    struct NSEdgeInsets _contentPaddingEdgeInsets;
}

@property(retain, nonatomic) NSImage *lineImage; // @synthesize lineImage=_lineImage;
@property(retain, nonatomic) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) MQNinePartImage *maskBubbleImage; // @synthesize maskBubbleImage=_maskBubbleImage;
@property(retain, nonatomic) MQNinePartImage *textBgImage; // @synthesize textBgImage=_textBgImage;
@property(retain, nonatomic) MQNinePartImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(nonatomic) struct NSEdgeInsets contentPaddingEdgeInsets; // @synthesize contentPaddingEdgeInsets=_contentPaddingEdgeInsets;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) SEL cellClicked; // @synthesize cellClicked=_cellClicked;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)sourceAttributes;
- (id)noteAttributes;
- (id)addressAttributes;
- (id)summaryAttributes;
- (id)titleAttributes;
- (id)scheduleAttributes;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)isSelfMode;
- (void)drawSource:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawContent:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (struct CGSize)cellSize;
- (struct CGSize)bubbleSize;
- (double)currentScale;
- (void)commonInit;

@end

