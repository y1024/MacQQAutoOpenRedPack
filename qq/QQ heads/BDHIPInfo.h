//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface BDHIPInfo : NSObject <NSCoding>
{
    int port;
    NSString *ip;
}

@property int port; // @synthesize port;
@property(copy) NSString *ip; // @synthesize ip;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
