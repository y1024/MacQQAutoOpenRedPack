//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXColorView.h"

#import "MQSSJoinUserButtonDelegate.h"

@class AVStatusLabel, MAVOutInfoFetcherBase, MQSSJoinUserButton, NSArray, NSButton, NSString, NSTextField, NSView;

@interface MQSSStatusbar : TXColorView <MQSSJoinUserButtonDelegate>
{
    MAVOutInfoFetcherBase *_oif;
    AVStatusLabel *_clockLabel;
    NSView *_titleContainerView;
    NSTextField *_titleLabel;
    NSTextField *_tipLabel;
    NSButton *_HDIcon;
    MQSSJoinUserButton *_joinUserButton;
    NSArray *_constraintsH;
    double _leftEdge;
    double _rightEdge;
    NSString *_titleText;
    NSString *_tipText;
}

@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) MQSSJoinUserButton *joinUserButton; // @synthesize joinUserButton=_joinUserButton;
@property(readonly, nonatomic) AVStatusLabel *clockLabel; // @synthesize clockLabel=_clockLabel;
@property(nonatomic) double rightEdge; // @synthesize rightEdge=_rightEdge;
@property(nonatomic) double leftEdge; // @synthesize leftEdge=_leftEdge;
- (void)button:(id)arg1 resize:(struct CGSize)arg2;
- (void)animationBackgroundColorToNormal:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)updateSubviewConstraintsH;
- (void)buttonClicked:(id)arg1;
- (void)addConstraintsForSubview;
- (void)dealloc;
- (void)setStartColor:(id)arg1;
- (id)initWithIOF:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

