//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "QQGroupFileOIDBRespondDelegate.h"
#import "WebFrameLoadDelegate.h"

@class NSDictionary, NSString, NSView, QQGroupFileInfo, QQGroupFileOIDBRequest, WebView;

@interface MQGroupFilePreviewWindowController : NSWindowController <QQGroupFileOIDBRespondDelegate, WebFrameLoadDelegate>
{
    QQGroupFileInfo *_fileInfo;
    NSString *_previewKey;
    NSString *_previewDomain;
    int _previewPort;
    WebView *_webView;
    QQGroupFileOIDBRequest *_previewRequest;
    NSDictionary *_previewConfig;
    NSView *_view;
    NSDictionary *_allPreviewConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *allPreviewConfig; // @synthesize allPreviewConfig=_allPreviewConfig;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSDictionary *previewConfig; // @synthesize previewConfig=_previewConfig;
@property(retain, nonatomic) QQGroupFileOIDBRequest *previewRequest; // @synthesize previewRequest=_previewRequest;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)dispatchJsEvent:(id)arg1 data:(id)arg2;
- (void)showError:(id)arg1;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)loadConfigNotFile;
- (void)windowDidLoad;
- (void)close:(id)arg1;
- (void)previewPictureWithURL:(id)arg1;
- (void)previewFileWithURL:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)previewFileWithInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

