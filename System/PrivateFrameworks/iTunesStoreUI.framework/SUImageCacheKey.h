/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUImageDataProvider, NSURL;

@interface SUImageCacheKey : NSObject <NSCopying> {

	SUImageDataProvider* _dataProvider;
	NSURL* _url;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

