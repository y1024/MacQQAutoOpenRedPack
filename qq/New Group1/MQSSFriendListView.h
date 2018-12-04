//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MQSSFriendCellDelegate.h"
#import "MQSSFriendListHeaderViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class CALayer, MAVOutInfoFetcherBase, MQSSFriendListHeaderView, NSArray, NSMutableArray, NSMutableDictionary, NSScrollView, NSString, NSTableView;

@interface MQSSFriendListView : NSView <NSTableViewDelegate, NSTableViewDataSource, MQSSFriendCellDelegate, MQSSFriendListHeaderViewDelegate>
{
    MQSSFriendListHeaderView *_headerView;
    NSScrollView *_scrollView;
    NSTableView *_friendTableView;
    CALayer *_blackMaskLayer;
    NSMutableArray *_allMemberInfoArray;
    NSMutableArray *_allRenderList;
    NSMutableArray *_visibleMemberInfoArray;
    NSMutableArray *_visibleRenderList;
    MAVOutInfoFetcherBase *_oif;
    NSMutableDictionary *_videoCtrllerDic;
    NSMutableArray *_layoutConstraints;
    unsigned long long _style;
    BOOL isFindSelfCamera;
    BOOL _cellsEnable;
    id <MQSSFriendListViewDelegate> _delegate;
    unsigned long long _headerAlignment;
}

@property(nonatomic) BOOL cellsEnable; // @synthesize cellsEnable=_cellsEnable;
@property(readonly, nonatomic) NSArray *allRenderList; // @synthesize allRenderList=_allRenderList;
@property(nonatomic) unsigned long long headerAlignment; // @synthesize headerAlignment=_headerAlignment;
@property(nonatomic) id <MQSSFriendListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)headerView:(id)arg1 handleClickEvent:(id)arg2;
- (void)cell:(id)arg1 handleClickEvent:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)updateAllRenderList:(id)arg1;
- (void)removeRender:(id)arg1;
- (void)addRenderDisplay:(id)arg1;
- (void)updateMemberInfo:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)updateMaskLayer;
- (void)filterVisibleCellData;
- (void)layoutWithStyle:(unsigned long long)arg1;
- (void)layout;
- (void)dealloc;
- (id)initWithOIF:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
