//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MsgType0x210SubMsgType0x1d : NSObject
{
    unsigned int dwOpType;
    long long dwUin;
    unsigned int dwID;
    NSString *strValue;
}

+ (void)parseMsgType0x210SubMsgType0x1d:(struct MsgType0x210SubMsgType0x1d *)arg1;
@property(retain, nonatomic) NSString *strValue; // @synthesize strValue;
@property(nonatomic) unsigned int dwID; // @synthesize dwID;
@property(nonatomic) long long dwUin; // @synthesize dwUin;
@property(nonatomic) unsigned int dwOpType; // @synthesize dwOpType;
- (void).cxx_destruct;

@end

