/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject {

	BOOL _isPlaceholder;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder;               //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(BOOL)isPlaceholder;
-(id)initWithBundleID:(id)arg1 isPlaceholder:(BOOL)arg2 ;
@end
