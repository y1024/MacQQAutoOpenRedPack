//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatAIOTipViewModel.h"

@interface TChatNoMoreTipViewModel : TChatAIOTipViewModel
{
    BOOL _hasMoreMsg;
    struct _NSRange highRange;
    id <TChatNoMoreTipViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <TChatNoMoreTipViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)IsChinese:(id)arg1;
- (id)buildAttributeString;
- (id)text;

@end

