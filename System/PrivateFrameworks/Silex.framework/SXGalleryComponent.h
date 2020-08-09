/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXGalleryComponent : SXComponent

@property (nonatomic,readonly) NSString * galleryType; 
@property (nonatomic,readonly) SXJSONArray * items; 
+(id)typeString;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)items;
-(NSString *)galleryType;
-(unsigned long long)traits;
@end
