//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GroupAudioChatModel, NSArray, NSMutableArray;

@interface GroupAVMemberStateModel : NSObject
{
    GroupAudioChatModel *_chatModel;
    NSMutableArray *_memberStates;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) NSArray *memberStates; // @synthesize memberStates=_memberStates;
- (void).cxx_destruct;
- (unsigned long long)indexOfMemberStateByUin:(unsigned long long)arg1;
- (id)findMemberStateByUin:(unsigned long long)arg1;
- (void)resort;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)memberStatesProxy;
- (void)dealloc;
- (id)initWithChatModel:(id)arg1;

@end

