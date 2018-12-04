//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class MQBadgeNumberView, NSAttributedString, NSColor, NSCursor, NSImage, NSTrackingArea;

@interface TXHoverButton : NSButton
{
    NSImage *hoverImage;
    NSImage *normalImage;
    NSAttributedString *attributedHoverTitle;
    NSAttributedString *m_attributedTitle;
    BOOL m_hoverFlag;
    long long _trackingTag;
    NSColor *_textColor;
    NSColor *_hoverTextColor;
    NSColor *_borderColor;
    NSColor *_normalTextColor;
    float _borderWidth;
    unsigned long long _buttonType;
    unsigned long long _textAlignment;
    NSTrackingArea *_trackingArea;
    MQBadgeNumberView *_badgeNumberView;
    BOOL _isHoverBackgroundButton;
    id <HoverButtonDelegate> _hoverDelegate;
    long long _badgeNumber;
    double _badgeMarginRight;
    double _badgeMarginLeft;
    double _badgeMarginTop;
    NSCursor *_cursor;
    NSImage *_tmpNormalImage;
}

@property BOOL isHoverBackgroundButton; // @synthesize isHoverBackgroundButton=_isHoverBackgroundButton;
@property(retain, nonatomic) NSImage *tmpNormalImage; // @synthesize tmpNormalImage=_tmpNormalImage;
@property(retain) NSCursor *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) double badgeMarginTop; // @synthesize badgeMarginTop=_badgeMarginTop;
@property(nonatomic) double badgeMarginLeft; // @synthesize badgeMarginLeft=_badgeMarginLeft;
@property(nonatomic) double badgeMarginRight; // @synthesize badgeMarginRight=_badgeMarginRight;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(nonatomic) __weak id <HoverButtonDelegate> hoverDelegate; // @synthesize hoverDelegate=_hoverDelegate;
@property(retain, nonatomic) NSAttributedString *attributedHoverTitle; // @synthesize attributedHoverTitle;
- (void).cxx_destruct;
- (void)layoutBadgeNumberView;
- (id)badgeNumberView;
- (BOOL)isOpaque;
- (void)setAttributedTitle:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)dealloc;
- (void)setButtonType:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNormalState;
- (void)mouseExited:(id)arg1;
- (void)setHoverState;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setHoverImage:(id)arg1;
- (void)updateTrackingRect;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHoverBorderColor:(id)arg1 boardWidth:(float)arg2;
- (void)setNormalTextColor:(id)arg1;
- (void)setHighlightedColor:(id)arg1;
- (void)setHoverTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

