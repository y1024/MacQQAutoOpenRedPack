//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUIWindowController.h"

#import "MQScreenSelectorItemViewDelegate.h"
#import "QMSSViewDelegate.h"

@class NSString, NSWindowController, QMSSView;

@interface MQScreenSelectorWindowController : QUIWindowController <MQScreenSelectorItemViewDelegate, QMSSViewDelegate>
{
    QMSSView *_backgroundView;
    NSWindowController *_selectWindowController;
    id <MQScreenSelectorWindowControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MQScreenSelectorWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)view:(id)arg1 mouseExited:(id)arg2;
- (void)view:(id)arg1 mouseEntered:(id)arg2;
- (void)itemView:(id)arg1 clickedScreenDisplayID:(unsigned int)arg2;
- (void)loadScreenImages;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
