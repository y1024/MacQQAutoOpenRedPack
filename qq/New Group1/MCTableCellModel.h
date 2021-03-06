//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHCollectionContent, BHCollectionManager, BHCollectionModel, NSString;

@interface MCTableCellModel : NSObject
{
    NSString *_publisherName;
    NSString *_fileName;
    BHCollectionModel *_collectionModel;
    BHCollectionContent *_collectionModelContent;
    NSString *_strBrief;
    NSString *_strFrom;
    BHCollectionManager *_collectionManager;
}

@property(retain) BHCollectionManager *collectionManager; // @synthesize collectionManager=_collectionManager;
@property(copy) NSString *strFrom; // @synthesize strFrom=_strFrom;
@property(copy) NSString *strBrief; // @synthesize strBrief=_strBrief;
@property(retain) BHCollectionContent *collectionModelContent; // @synthesize collectionModelContent=_collectionModelContent;
@property(retain) BHCollectionModel *collectionModel; // @synthesize collectionModel=_collectionModel;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSString *publisherName; // @synthesize publisherName=_publisherName;
- (void).cxx_destruct;
- (void)_getPic:(id)arg1 block:(id)arg2;
- (void)_uploadCollectionPic:(id)arg1;
- (void)getUrlString:(id)arg1;
- (void)getAddress:(id)arg1;
- (void)getLocation:(id)arg1;
- (void)getFilePath:(id)arg1;
- (void)getFileSize:(id)arg1;
- (void)getFileName:(id)arg1;
- (BOOL)_hasPic;
- (id)getPicInfo;
- (void)getSpeechDurationString:(id)arg1;
- (void)getThumbnails:(id)arg1;
- (void)getTitle:(id)arg1;
- (void)getBrief:(id)arg1;
- (void)getDetailTime:(unsigned long long)arg1 block:(id)arg2;
- (void)getTime:(unsigned long long)arg1 block:(id)arg2;
- (void)getPublisherHeader:(id)arg1 block:(id)arg2;
- (void)getPublisherName:(id)arg1 block:(id)arg2;
- (void)initData;
- (id)initWithCollectionModel:(id)arg1;

@end

