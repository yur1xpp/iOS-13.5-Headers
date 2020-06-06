/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict {

	BOOL _cacheEligibleForPrewarm;
	BOOL _punchoutCacheEligibleForPrewarm;
	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;                          //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL cacheEligibleForPrewarm;                      //@synthesize cacheEligibleForPrewarm=_cacheEligibleForPrewarm - In the implementation block
@property (assign,nonatomic) BOOL punchoutCacheEligibleForPrewarm;              //@synthesize punchoutCacheEligibleForPrewarm=_punchoutCacheEligibleForPrewarm - In the implementation block
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCacheEligibleForPrewarm:(BOOL)arg1 ;
-(void)setPunchoutCacheEligibleForPrewarm:(BOOL)arg1 ;
-(void)markCacheAsPrewarmed;
-(void)markPunchoutCacheAsPrewarmed;
-(BOOL)cacheEligibleForPrewarm;
-(BOOL)punchoutCacheEligibleForPrewarm;
@end
