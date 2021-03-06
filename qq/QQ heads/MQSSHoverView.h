//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTrackingArea;

@interface MQSSHoverView : NSView
{
    NSTrackingArea *_trackingArea;
    id <MQSSHoverViewDelegate> _delegate;
}

@property(nonatomic) id <MQSSHoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)init;

@end

