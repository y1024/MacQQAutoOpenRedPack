//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQScreenShareCaptureService;

@protocol MQScreenShareCaptureServiceDelegate <NSObject>
- (void)imageCapture:(MQScreenShareCaptureService *)arg1 didGetNewOriginBGRAImageData:(char *)arg2 width:(int)arg3 height:(int)arg4;
- (void)imageCapture:(MQScreenShareCaptureService *)arg1 didGetNewScaledYUVImageData:(char *)arg2 width:(int)arg3 height:(int)arg4;
@end

