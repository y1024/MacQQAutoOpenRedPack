//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSMutableDictionary;

@interface ProxyDataSupport : QQBaseSingleton
{
    NSMutableDictionary *_proxyCache;
}

- (void).cxx_destruct;
- (BOOL)saveProxyList:(id)arg1;
- (BOOL)saveProxy:(id)arg1;
- (id)proxy;
- (id)proxyByType:(unsigned long long)arg1;
- (id)proxyCache;
- (id)proxyInfoCache;
- (id)networkProxyConfigPath;

@end

