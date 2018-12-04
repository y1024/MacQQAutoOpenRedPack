//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class NSCondition, NSString;

@interface CaptureDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    NSCondition *mHasNewFrame;
    struct __CVBuffer *mGrabbedPixels;
    struct __CVBuffer *mCurrentImageBuffer;
    struct _IplImage *mDeviceImage;
    char *mOutImagedata;
    struct _IplImage *mOutImage;
    unsigned long long currSize;
}

- (int)updateImage;
- (BOOL)grabImageUntilDate:(id)arg1;
- (struct _IplImage *)getOutput;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

