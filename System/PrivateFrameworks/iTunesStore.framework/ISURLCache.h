/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLCache, ISURLCacheConfiguration, NSString;

@interface ISURLCache : NSObject {

	NSURLCache* _cache;
	ISURLCacheConfiguration* _configuration;

}

@property (readonly) NSString * persistentIdentifier; 
@property (nonatomic,readonly) unsigned long long currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long currentMemoryUsage; 
@property (nonatomic,readonly) unsigned long long diskCapacity; 
@property (nonatomic,readonly) unsigned long long memoryCapacity; 
+(id)cacheDirectoryPath;
-(id)init;
-(void)dealloc;
-(NSString *)persistentIdentifier;
-(unsigned long long)currentDiskUsage;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
-(unsigned long long)memoryCapacity;
-(unsigned long long)diskCapacity;
-(unsigned long long)currentMemoryUsage;
-(void)saveMemoryCacheToDisk;
-(id)initWithCacheConfiguration:(id)arg1 ;
-(void)reloadWithCacheConfiguration:(id)arg1 ;
-(void)purgeMemoryCache;
@end

