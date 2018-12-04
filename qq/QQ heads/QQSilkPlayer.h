//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPttPlayerInterface.h"
#import "IQQVoicePlayerDelegate.h"

@class NSString, QQSilkCodec, QQSilkFile;

@interface QQSilkPlayer : NSObject <IQQVoicePlayerDelegate, IPttPlayerInterface>
{
    BOOL _isFirstRead;
    float _skipToTime;
    NSString *_currentFilePath;
    id <IQQAmrPlayerDelegate> _delegate;
    NSObject *_userInfo;
    QQSilkFile *_silkFile;
    QQSilkCodec *_silkDecoder;
    struct CVoicePlayer *_player;
}

@property(nonatomic) struct CVoicePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) QQSilkCodec *silkDecoder; // @synthesize silkDecoder=_silkDecoder;
@property(retain, nonatomic) QQSilkFile *silkFile; // @synthesize silkFile=_silkFile;
@property float skipToTime; // @synthesize skipToTime=_skipToTime;
@property(retain, nonatomic) NSObject *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) id <IQQAmrPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (void).cxx_destruct;
- (float)getAudioPlayerTime;
- (void)onPlayEnd;
- (void)onPlayBegin;
- (id)getAudioData:(unsigned int)arg1;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (void)setVolume:(float)arg1;
- (void)stop;
- (void)pause;
- (BOOL)playPttMarketFace:(id)arg1 userInfo:(id)arg2;
- (BOOL)playPttMarketFace:(id)arg1;
- (void)continuePlay;
- (BOOL)play:(id)arg1;
- (BOOL)initPlayer:(unsigned long long)arg1;
- (BOOL)initDecode:(unsigned long long)arg1;
- (BOOL)openFile;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

