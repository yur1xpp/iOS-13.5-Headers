/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (nonatomic,readonly) id object; 
+(id)weakReferenceWithObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end
