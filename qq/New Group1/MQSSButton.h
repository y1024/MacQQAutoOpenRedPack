//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class MQSSGIFImageView;

@interface MQSSButton : NSButton
{
    MQSSGIFImageView *_gifImageView;
}

@property(readonly, nonatomic) MQSSGIFImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)mouseDownCanMoveWindow;
- (void)dealloc;
- (id)init;
- (void)awakeFromNib;

@end

