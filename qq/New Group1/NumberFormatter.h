//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TitleLengthFormatter.h"

@interface NumberFormatter : TitleLengthFormatter
{
    long long maxValue;
}

- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (void)setMaxValue:(long long)arg1;
- (id)init;

@end

