//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AudioOfflineInvite : NSObject
{
    BOOL _isShowCall;
    int _relationType;
    int _businessType;
    unsigned long long _groupUin;
    unsigned long long _friUin;
    NSMutableArray *_invitees;
}

@property(retain, nonatomic) NSMutableArray *invitees; // @synthesize invitees=_invitees;
@property(nonatomic) BOOL isShowCall; // @synthesize isShowCall=_isShowCall;
@property(nonatomic) unsigned long long friUin; // @synthesize friUin=_friUin;
@property(nonatomic) unsigned long long groupUin; // @synthesize groupUin=_groupUin;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int relationType; // @synthesize relationType=_relationType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

