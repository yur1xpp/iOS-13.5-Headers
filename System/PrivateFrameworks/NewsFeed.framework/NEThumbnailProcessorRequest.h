/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 thumbnailFrame;
	 focalFrame;
	 scale;
	 roundedCorners;
	 cornerRadius;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(id)initWithThumbnailAssetHandle:(id)arg1 thumbnailFrame:(CGRect)arg2 focalFrame:(CGRect)arg3 scale:(double)arg4 byRoundingCorners:(unsigned long long)arg5 cornerRadius:(double)arg6 ;
@end

