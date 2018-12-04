//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "TChatSearchBarDelegate.h"

@class EIMButton, FAModel, MQSearchBar, NSArray, NSIndexSet, NSMutableArray, NSRecursiveLock, NSSearchField, NSString, NSTableView, QLPreviewPanel, TChatMenuController, TXColorView;

@interface HistoryTransmissionViewController : NSViewController <TChatSearchBarDelegate, NSTableViewDelegate, NSTableViewDataSource, QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSMenuDelegate>
{
    TXColorView *_headerView;
    NSTableView *_tableview;
    QLPreviewPanel *previewPanel;
    NSArray *_previewItems;
    NSIndexSet *_selectedIndexSet;
    NSSearchField *_searchField;
    long long _rightClickedRow;
    NSMutableArray *_files;
    FAModel *_locateFile;
    TChatMenuController *_menuGroup;
    NSMutableArray *_menuGroupDataSource;
    EIMButton *_popUpButton;
    unsigned long long _loadIndex;
    long long _listFilter;
    NSString *_searchKey;
    MQSearchBar *_searchBar;
    NSRecursiveLock *_lock;
    BOOL _isLoading;
    TChatMenuController *_menuPopover;
}

@property(nonatomic) __weak TChatMenuController *menuPopover; // @synthesize menuPopover=_menuPopover;
@property(retain) NSIndexSet *selectedIndexSet; // @synthesize selectedIndexSet=_selectedIndexSet;
@property(copy) NSArray *previewItems; // @synthesize previewItems=_previewItems;
- (void).cxx_destruct;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)togglePreview;
- (void)closePopover;
- (void)stopSearch;
- (void)locateFile:(id)arg1 byKeyWords:(id)arg2 needDownload:(BOOL)arg3;
- (void)changeSelection:(BOOL)arg1 withIndexes:(id)arg2;
- (id)selectedTransmissionItems:(id)arg1;
- (void)tbDoubleClick:(id)arg1;
- (id)attributedStringFormFAModel:(id)arg1;
- (id)attributedStringFromFAList:(id)arg1;
- (BOOL)showForward:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)isFileExist:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)getClearFromListMenu;
- (id)getForwardMenu;
- (id)getRevealInFinderMenu;
- (id)getOpenMenu;
- (id)getSaveToMenu;
- (id)menuWithRowClicked:(long long)arg1;
- (void)filterFiles:(long long)arg1 searchKey:(id)arg2;
- (void)onClickPopMenu:(id)arg1;
- (void)onMenuDeleteItem:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onMenuRevealInFinder:(id)arg1;
- (void)onMenuOpenFile:(id)arg1;
- (void)onSaveTo:(id)arg1;
- (id)getFilePath;
- (void)onRevealInFinder:(id)arg1;
- (void)searchbar:(id)arg1 textChanged:(id)arg2;
- (void)searchbar:(id)arg1 enterKeyDown:(id)arg2;
- (void)searchbar:(id)arg1 searchRuleButtonClicked:(id)arg2;
- (void)searchbar:(id)arg1 clearButtonClicked:(id)arg2;
- (void)addPopButton;
- (void)setupTitleView;
- (void)FAGroupDidChanged:(id)arg1;
- (void)FADidChange:(id)arg1;
- (void)FAListDidChange:(id)arg1;
- (void)viewDidAppear;
- (void)loadFiles:(unsigned long long)arg1 filter:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadContents;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

