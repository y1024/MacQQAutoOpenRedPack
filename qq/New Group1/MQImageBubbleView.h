//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@interface MQImageBubbleView : NSImageView
{
    struct CGPath *_path;
    BOOL _ignoreArrow;
    BOOL _isFolder;
    struct CGRect _imageRect;
}

@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(nonatomic) BOOL isFolder; // @synthesize isFolder=_isFolder;
@property(nonatomic) BOOL ignoreArrow; // @synthesize ignoreArrow=_ignoreArrow;
- (id)toImageWithFileTypeisSelf:(BOOL)arg1 cellBound:(struct CGRect)arg2 widthOffset:(double)arg3 heightOffset:(double)arg4;
- (id)toImageWithColor:(id)arg1 isSelf:(BOOL)arg2;
- (BOOL)isFlipped;
- (struct CGPath *)bubblePathWithFileTypeMode:(BOOL)arg1 cellBound:(struct CGRect)arg2;
- (struct CGPath *)bubblePathWithMode:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

