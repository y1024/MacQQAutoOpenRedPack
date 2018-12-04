//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSessionID, TChatCellBuilderOption;

@interface TChatCellBuilder : NSObject
{
    MQSessionID *_sessionID;
    TChatCellBuilderOption *_option;
}

@property(retain, nonatomic) MQSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)didRemoveCellWithViewModel:(id)arg1;
- (void)didAddCellWithViewModel:(id)arg1;
- (double)getCellHeightWidthModel:(id)arg1 row:(long long)arg2 cellWidth:(double)arg3;
- (id)getIdentifier;
- (id)getCellView:(id)arg1 message:(id)arg2 cellWidth:(double)arg3;
- (id)initWithSession:(id)arg1 option:(id)arg2;

@end

