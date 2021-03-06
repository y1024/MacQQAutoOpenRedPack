//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NotifyBase.h"

@class NSData, NSString;

@interface FileUploadNotifyInfo : NotifyBase
{
    unsigned long long _senderUin;
    unsigned long long _recverUin;
    unsigned long long _fileSize;
    NSData *_fileMd5;
    NSString *_fileName;
}

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long recverUin; // @synthesize recverUin=_recverUin;
@property(nonatomic) unsigned long long senderUin; // @synthesize senderUin=_senderUin;
- (void).cxx_destruct;

@end

