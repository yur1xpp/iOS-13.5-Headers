/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface TUVideoEffect : NSObject {

	NSString* _name;
	UIImage* _thumbnailImage;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(UIImage *)thumbnailImage;
-(id)initWithName:(id)arg1 thumbnailImage:(id)arg2 ;
-(BOOL)isEqualToEffect:(id)arg1 ;
@end

