/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyObjectForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
@end

