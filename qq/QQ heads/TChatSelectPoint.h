//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TChatSelectPoint : NSObject
{
    unsigned long long _keyFlag;
    long long _index;
    struct CGPoint _beginPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long keyFlag; // @synthesize keyFlag=_keyFlag;
- (void)dealloc;
- (id)initWithSelectPoint:(id)arg1;

@end
