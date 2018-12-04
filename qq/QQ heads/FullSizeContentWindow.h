//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class FullSizeContentView;

@interface FullSizeContentWindow : NSWindow
{
    FullSizeContentView *chromeWindowView_;
}

+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (BOOL)shouldUseFullSizeContentViewForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (void)forceContentViewSize:(struct CGSize)arg1;
- (void)registContentView;
- (void)awakeFromNib;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 wantsViewsOverTitlebar:(BOOL)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)init;

@end

