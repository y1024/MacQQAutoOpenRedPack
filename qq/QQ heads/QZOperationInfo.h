//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSWindow;

@interface QZOperationInfo : NSObject
{
    BOOL _hasFolder;
    BOOL _ignoreFileExist;
    unsigned long long _type;
    NSString *_archivePath;
    NSString *_destinationPath;
    NSWindow *_fromWindow;
    NSArray *_extractSubFiles;
}

+ (id)infoWithType:(unsigned long long)arg1;
@property(retain) NSArray *extractSubFiles; // @synthesize extractSubFiles=_extractSubFiles;
@property BOOL ignoreFileExist; // @synthesize ignoreFileExist=_ignoreFileExist;
@property BOOL hasFolder; // @synthesize hasFolder=_hasFolder;
@property(retain) NSWindow *fromWindow; // @synthesize fromWindow=_fromWindow;
@property(retain) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
