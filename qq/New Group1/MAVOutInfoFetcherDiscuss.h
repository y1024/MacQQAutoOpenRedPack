//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAVOutInfoFetcherBase.h"

@class NSDictionary;

@interface MAVOutInfoFetcherDiscuss : MAVOutInfoFetcherBase
{
    NSDictionary *_pstnInfos;
}

- (void)openAIO;
- (id)getUserName:(unsigned long long)arg1;
- (unsigned long long)getAllUserListCnt;
- (id)getSessionHeader;
- (id)getSessionName;
- (id)initWithAVID:(struct AV_ID)arg1;

@end

