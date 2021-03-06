//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQContactsCellView.h"

@class NSTextField, SelectableHeadImageView;

@interface MQPopoverRecentCellView : MQContactsCellView
{
    NSTextField *_nickName;
    SelectableHeadImageView *_headImage;
}

@property(nonatomic) __weak SelectableHeadImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) __weak NSTextField *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)updateSelectedItem:(BOOL)arg1;
- (void)setupContactItem:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

