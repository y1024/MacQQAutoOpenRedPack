//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel_Internal.h"

@class NSString;

@interface BHCollectionAuthor : QQModel_Internal
{
    unsigned long long _type;
    unsigned long long _uid;
    NSString *_sid;
    unsigned long long _groupID;
    NSString *_groupName;
}

@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) unsigned long long groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct Author *)encode;

@end
