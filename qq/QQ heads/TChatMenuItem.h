//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFont, NSMenuItem, NSMutableArray, NSString;

@interface TChatMenuItem : NSObject
{
    BOOL _isSection;
    BOOL _isDivider;
    BOOL _isSelected;
    BOOL _isGroup;
    BOOL _isDisable;
    NSString *_text;
    NSFont *_font;
    long long _type;
    long long _value;
    NSMutableArray *_chilrenDataSource;
    NSMenuItem *_menuItem;
}

@property(retain, nonatomic) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) NSMutableArray *chilrenDataSource; // @synthesize chilrenDataSource=_chilrenDataSource;
@property(nonatomic) BOOL isDisable; // @synthesize isDisable=_isDisable;
@property(nonatomic) BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isDivider; // @synthesize isDivider=_isDivider;
@property(nonatomic) BOOL isSection; // @synthesize isSection=_isSection;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

