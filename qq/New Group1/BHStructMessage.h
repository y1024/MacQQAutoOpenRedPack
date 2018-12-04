//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BHSMItemElementAction.h"

@class NSString;

@interface BHStructMessage : BHSMItemElementAction
{
    NSString *_templateID;
    NSString *_serviceID;
    NSString *_brief;
    NSString *_fwflag;
    NSString *_flag;
}

@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *fwflag; // @synthesize fwflag=_fwflag;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
- (id)getValueWithKeyInURL:(id)arg1 key:(id)arg2;
- (id)getPositionAddress;
- (id)getPositionTitle;
- (struct CLLocationCoordinate2D)getCoordinate;
- (BOOL)hasFlagType:(int)arg1;
- (id)getPictureMd5;
- (id)getPictureUuid;
- (BOOL)isRedEnvelopeMsg;
- (BOOL)isGreetingMsg;
- (BOOL)isAAPayMsg;
- (BOOL)isWebShareMsg;
- (BOOL)isPositionShareMsg;

@end

