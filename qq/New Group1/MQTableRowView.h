//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@interface MQTableRowView : NSTableRowView
{
    id <MQTableRowViewDelegate> _delegate;
}

@property __weak id <MQTableRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isEmphasized;
- (void)drawSelectionInRect:(struct CGRect)arg1;

@end

