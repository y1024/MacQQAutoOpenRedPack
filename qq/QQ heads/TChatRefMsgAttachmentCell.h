//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@class MQNinePartImage, NSAttributedString, NSLayoutManager, NSMutableAttributedString, NSString;

@interface TChatRefMsgAttachmentCell : NSTextAttachmentCell
{
    struct CGRect _frame;
    MQNinePartImage *_bgHoverImage;
    MQNinePartImage *_bgPressImage;
    NSAttributedString *_bodyAttStr;
    NSMutableAttributedString *_contentAttStr;
    NSLayoutManager *_layoutManager;
    long long _charIndex;
    BOOL _isHovered;
    BOOL _isSelected;
    BOOL _isSingleLineMode;
    unsigned int _sourceTime;
    unsigned int _sourceSeq;
    NSString *_sourceSenderUin;
    NSString *_anonNickName;
    NSString *_displayName;
    NSAttributedString *_msgBodyAttStr;
}

@property(nonatomic) BOOL isSingleLineMode; // @synthesize isSingleLineMode=_isSingleLineMode;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isHovered; // @synthesize isHovered=_isHovered;
@property(retain, nonatomic) NSAttributedString *msgBodyAttStr; // @synthesize msgBodyAttStr=_msgBodyAttStr;
@property(nonatomic) unsigned int sourceSeq; // @synthesize sourceSeq=_sourceSeq;
@property(nonatomic) unsigned int sourceTime; // @synthesize sourceTime=_sourceTime;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *anonNickName; // @synthesize anonNickName=_anonNickName;
@property(copy, nonatomic) NSString *sourceSenderUin; // @synthesize sourceSenderUin=_sourceSenderUin;
- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (id)bodyAttributes;
- (id)headerAttributes;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)contentAttStr;
@property(readonly, nonatomic) struct CGRect frame;
- (void)textView:(id)arg1 willMoveToWindow:(id)arg2;
- (id)init;

@end

