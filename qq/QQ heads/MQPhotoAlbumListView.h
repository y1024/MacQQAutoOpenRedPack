//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MQPhotoAccessoryViewDelegate.h"

@class MQPhotoAlbumController, MQPhotoAlbumImageView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MQPhotoAlbumListView : NSView <MQPhotoAccessoryViewDelegate>
{
    NSMutableDictionary *_accessoryViewCache;
    MQPhotoAlbumController *_controller;
    NSArray *_photoes;
    NSArray *_imageViews;
    long long _columnNum;
    long long _lineNum;
    id <MQPhotoAccessoryViewDelegate> _accessoryDelegate;
    MQPhotoAlbumImageView *_hoverView;
    MQPhotoAlbumImageView *_selectedView;
    NSMutableArray *_reusePool;
    struct CGSize _ivSize;
}

@property(retain, nonatomic) NSMutableArray *reusePool; // @synthesize reusePool=_reusePool;
@property(nonatomic) __weak MQPhotoAlbumImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) __weak MQPhotoAlbumImageView *hoverView; // @synthesize hoverView=_hoverView;
@property(nonatomic) __weak id <MQPhotoAccessoryViewDelegate> accessoryDelegate; // @synthesize accessoryDelegate=_accessoryDelegate;
@property(readonly, nonatomic) long long lineNum; // @synthesize lineNum=_lineNum;
@property(readonly, nonatomic) long long columnNum; // @synthesize columnNum=_columnNum;
@property(readonly, nonatomic) struct CGSize ivSize; // @synthesize ivSize=_ivSize;
@property(readonly, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(readonly, copy, nonatomic) NSArray *photoes; // @synthesize photoes=_photoes;
@property(nonatomic) __weak MQPhotoAlbumController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)accessoryViewForIndex:(long long)arg1;
- (id)viewForAccessoryIndex:(long long)arg1;
- (BOOL)showAccessoryViewWithIndex:(long long)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isFlipped;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)scrollNative:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (struct CGRect)photoRectInControllerByIndex:(long long)arg1;
- (struct CGPoint)pointToScrollByIndex:(long long)arg1;
- (struct CGPoint)documentViewOriginWithPhotoNum:(long long)arg1 photoSize:(struct CGSize)arg2;
- (struct CGSize)documentViewSizeWithEdge:(double)arg1;
- (void)resizingAlbumImageView:(id)arg1;
- (void)setSelectView:(id)arg1;
- (void)createReusePoolWithViewType:(long long)arg1;
- (void)setViewType;
- (void)createAlbumImageView;
- (id)initWithFrame:(struct CGRect)arg1 Photoes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

