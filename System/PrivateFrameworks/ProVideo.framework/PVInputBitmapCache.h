/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {

	NSMutableDictionary* _cache;
	unsigned long long _countLimit;

}
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)purge:(BOOL)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
@end

