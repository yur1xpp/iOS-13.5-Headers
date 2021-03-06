/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMapTable, SKUIResourceLoader, NSHashTable, NSString;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {

	NSMapTable* _imageRequests;
	SKUIResourceLoader* _resourceLoader;
	NSHashTable* _stringViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(void)connectStringView:(id)arg1 ;
-(void)disconnectStringView:(id)arg1 ;
-(BOOL)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3 ;
@end

