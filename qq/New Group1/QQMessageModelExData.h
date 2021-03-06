//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QQMessageModelExData : NSObject
{
    struct QQMessageModelExtend _exInfo;
    BOOL _isGroupSpecialFocusMessageFlag;
    BOOL _isGroopHaveSpecialFocusRecentMessageFlag;
}

@property(nonatomic) BOOL isGroopHaveSpecialFocusRecentMessageFlag; // @synthesize isGroopHaveSpecialFocusRecentMessageFlag=_isGroopHaveSpecialFocusRecentMessageFlag;
@property(nonatomic) BOOL isGroupSpecialFocusMessageFlag; // @synthesize isGroupSpecialFocusMessageFlag=_isGroupSpecialFocusMessageFlag;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSData *pc_body;
@property long long dataLineSessionId;
@property(copy) NSString *mobilePhone;
@property(nonatomic) unsigned int anonymousBubbleID;
@property(nonatomic) BOOL isResendModel;
@property(nonatomic) unsigned int anonymousExpireTime;
@property(nonatomic) unsigned int anonymousHeadportrait;
@property(retain, nonatomic) NSString *anonymousNick;
@property(retain, nonatomic) NSData *anonymousID;
@property(nonatomic) unsigned int anonymousFlags;
- (void)downloadAnonymousAvatarWithCompletion:(id)arg1;
- (id)anonymousAvatarURL;
- (id)anonymousAvatarPath;
- (BOOL)isGroupAnonymousModel;
- (BOOL)getIsGroopHaveSpecialFocusRecentMessageFlag;
- (BOOL)getIsGroupSpecialFocusMessageFlag;
- (id)serialize;
- (void)constructFromData:(id)arg1;

@end

