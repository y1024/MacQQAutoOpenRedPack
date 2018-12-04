//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class BHGroupManager, NSMutableArray;

@interface GroupFolderNode : NSObject <NSCopying>
{
    NSMutableArray *m_groups;
    NSMutableArray *m_confGroups;
    unsigned char m_cFolderId;
    BHGroupManager *_groupManager;
    NSMutableArray *_localGroupList;
}

- (void).cxx_destruct;
- (id)confGroupList;
- (id)groupList;
- (void)sortGroups;
- (void)updateGroups;
- (id)m_confGroups;
- (id)m_groups;
- (void)sort;
- (long long)ConfGroupCount;
- (long long)GroupCount;
- (id)GroupAtIndex:(long long)arg1;
- (id)ConfGroupAtIndex:(long long)arg1;
- (id)groupsCodeInFolder;
- (id)groupsInFolder;
- (unsigned char)FolderId;
- (id)folderName;
- (void)dealloc;
- (id)initWithFolderId:(unsigned char)arg1;

@end

