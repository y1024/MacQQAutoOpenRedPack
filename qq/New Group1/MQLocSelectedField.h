//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface MQLocSelectedField : NSTextField
{
    BOOL _bResponder;
    id <MQLocSelectFieldDelegate> _locFieldDelegate;
}

@property(nonatomic) __weak id <MQLocSelectFieldDelegate> locFieldDelegate; // @synthesize locFieldDelegate=_locFieldDelegate;
@property(nonatomic) BOOL bResponder; // @synthesize bResponder=_bResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)recetivedMouseDown:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

