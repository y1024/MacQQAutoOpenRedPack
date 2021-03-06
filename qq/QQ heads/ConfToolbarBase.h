//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MAVOutInfoFetcherBase;

@interface ConfToolbarBase : NSViewController
{
    MAVOutInfoFetcherBase *_outInfoFetcher;
}

- (id)createCustomAVButton:(id)arg1 image:(id)arg2 bkg:(id)arg3 iconLeftSpace:(double)arg4 textLeftSpace:(double)arg5;
- (id)createNoBorderPushButton:(id)arg1 toolTip:(id)arg2 image:(id)arg3 alterImage:(id)arg4;
- (id)createToggleButton:(id)arg1 toolTip:(id)arg2 mainImage:(id)arg3 alterImage:(id)arg4;
- (void)setViewHeight:(id)arg1 constraintView:(id)arg2 relationView:(id)arg3 cstNumber:(double)arg4;
- (void)setViewWidth:(id)arg1 constraintView:(id)arg2 relationView:(id)arg3 cstNumber:(double)arg4;
- (void)setViewInCenterH:(id)arg1 constraintView:(id)arg2;
- (void)setViewInCenterV:(id)arg1 constraintView:(id)arg2 constant:(double)arg3;
- (void)setViewInCenterV:(id)arg1 constraintView:(id)arg2;
- (void)raiseEventWithArg:(int)arg1 withArg:(id)arg2;
- (void)raiseEvent:(int)arg1;
- (void)setToolbarBtnState:(int)arg1 state:(BOOL)arg2 enable:(BOOL)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithIOF:(id)arg1;
- (id)init;

@end

