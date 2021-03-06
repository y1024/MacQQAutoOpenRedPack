//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FASender : NSObject
{
    BOOL _isOnlineFile;
    BOOL _isOnlineFolder;
    int _msgType;
    unsigned int _fileWidth;
    unsigned int _fileHeight;
    NSString *_localPath;
    NSString *_uin;
    NSString *_tmpSourceID;
    NSArray *_filePaths;
}

@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property BOOL isOnlineFolder; // @synthesize isOnlineFolder=_isOnlineFolder;
@property BOOL isOnlineFile; // @synthesize isOnlineFile=_isOnlineFile;
@property unsigned int fileHeight; // @synthesize fileHeight=_fileHeight;
@property unsigned int fileWidth; // @synthesize fileWidth=_fileWidth;
@property(copy) NSString *tmpSourceID; // @synthesize tmpSourceID=_tmpSourceID;
@property(copy) NSString *uin; // @synthesize uin=_uin;
@property int msgType; // @synthesize msgType=_msgType;
@property(copy) NSString *localPath; // @synthesize localPath=_localPath;
- (void).cxx_destruct;

@end

