//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSArray, NSBox, NSButton, NSMatrix, NSString, NSTextField, NSWindow;

@interface MQListWindowController : NSWindowController
{
    NSWindow *infoWindow;
    NSTextField *messageTips;
    NSBox *checkBox;
    NSButton *okButton;
    NSMatrix *matrix;
    NSButton *closeQQListWindow;
    NSString *_urlToOpen;
    NSArray *_appInfoList;
}

@property(retain) NSArray *appInfoList; // @synthesize appInfoList=_appInfoList;
@property(copy) NSString *urlToOpen; // @synthesize urlToOpen=_urlToOpen;
- (void).cxx_destruct;
- (void)closeQQListWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setRadioGroupInfo:(int)arg1;
- (void)setRadioGroup;
- (id)init;

@end

