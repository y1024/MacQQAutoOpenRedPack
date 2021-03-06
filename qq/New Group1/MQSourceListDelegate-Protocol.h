//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSourceList, NSCell, NSEvent, NSIndexSet, NSMenu;

@protocol MQSourceListDelegate <NSObject>

@optional
- (NSCell *)sourceList:(MQSourceList *)arg1 dataCellForItem:(id)arg2;
- (NSCell *)sourceList:(MQSourceList *)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3;
- (double)sourceList:(MQSourceList *)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)sourceList:(MQSourceList *)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)sourceList:(MQSourceList *)arg1 shouldExpandItem:(id)arg2;
- (BOOL)sourceList:(MQSourceList *)arg1 shouldTrackCell:(NSCell *)arg2 forItem:(id)arg3;
- (BOOL)sourceList:(MQSourceList *)arg1 shouldEditItem:(id)arg2;
- (NSIndexSet *)sourceList:(MQSourceList *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2;
- (BOOL)sourceList:(MQSourceList *)arg1 shouldSelectItem:(id)arg2;
- (NSMenu *)sourceList:(MQSourceList *)arg1 menuForEvent:(NSEvent *)arg2 item:(id)arg3;
- (BOOL)sourceList:(MQSourceList *)arg1 isGroupAlwaysExpanded:(id)arg2;
@end

