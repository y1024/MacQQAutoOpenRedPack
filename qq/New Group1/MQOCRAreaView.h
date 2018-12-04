//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQFlippedView.h"

@class MQOCRResultItem, NSShadow, NSTrackingArea;

@interface MQOCRAreaView : MQFlippedView
{
    NSTrackingArea *_trackArea;
    NSShadow *_shadow;
    BOOL _selected;
    MQOCRResultItem *_data;
    id <MQOCRAreaViewEventDelegate> _delegate;
}

@property(nonatomic) __weak id <MQOCRAreaViewEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MQOCRResultItem *data; // @synthesize data=_data;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)setHovered:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
