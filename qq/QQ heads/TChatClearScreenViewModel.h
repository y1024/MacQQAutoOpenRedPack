//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatAIOTipViewModel.h"

@interface TChatClearScreenViewModel : TChatAIOTipViewModel
{
    id <TChatReloadClearMsgDelegate> _reloadMsgDelegate;
}

@property(nonatomic) __weak id <TChatReloadClearMsgDelegate> reloadMsgDelegate; // @synthesize reloadMsgDelegate=_reloadMsgDelegate;
- (void).cxx_destruct;
- (void)cancelClearScreenAndReloadMsg;
- (id)outputMessageWithInformativeText:(id)arg1 time:(double)arg2 chatUIStyle:(int)arg3 background:(BOOL)arg4;
- (id)buildAttributeString;
- (id)text;

@end

