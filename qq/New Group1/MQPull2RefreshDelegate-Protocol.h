//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPull2RefreshScrollView, NSScrollView;

@protocol MQPull2RefreshDelegate <NSObject>

@optional
- (BOOL)isAbleToShowLoadingTips;
- (void)scrollViewDidStop:(MQPull2RefreshScrollView *)arg1;
- (void)scrollViewDidLiveScroll:(MQPull2RefreshScrollView *)arg1;
- (void)scrollViewDidEndScrolling:(MQPull2RefreshScrollView *)arg1;
- (void)scrollViewWillStartScroll:(MQPull2RefreshScrollView *)arg1;
- (void)scrollViewDidScrollToBottom:(MQPull2RefreshScrollView *)arg1;
- (void)viewBoundDidChange;
- (void)startLoading:(NSScrollView *)arg1;
@end

