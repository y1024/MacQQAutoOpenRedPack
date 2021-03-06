//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MQAvatarImageView, NSTextField;

@interface MQContactsCellItem : NSTableCellView
{
    MQAvatarImageView *_avtarImgView;
    NSTextField *_nameTextField;
}

@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property __weak MQAvatarImageView *avtarImgView; // @synthesize avtarImgView=_avtarImgView;
- (void).cxx_destruct;
- (void)updateSelectedItem:(BOOL)arg1;
- (void)resetItem;
- (void)setupContactItem:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;

@end

