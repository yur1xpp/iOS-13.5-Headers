/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIDeviceMediaLibrary, VUISidebandMediaLibrary;

@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary {

	VUIDeviceMediaLibrary* _deviceMediaLibrary;
	VUISidebandMediaLibrary* _sidebandMediaLibrary;

}

@property (nonatomic,readonly) VUIDeviceMediaLibrary * deviceMediaLibrary;                  //@synthesize deviceMediaLibrary=_deviceMediaLibrary - In the implementation block
@property (nonatomic,readonly) VUISidebandMediaLibrary * sidebandMediaLibrary;              //@synthesize sidebandMediaLibrary=_sidebandMediaLibrary - In the implementation block
+(id)keyPathsForValuesAffectingConnectionState;
-(void)dealloc;
-(id)title;
-(BOOL)isUpdating;
-(unsigned long long)connectionState;
-(VUIDeviceMediaLibrary *)deviceMediaLibrary;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3 ;
-(VUISidebandMediaLibrary *)sidebandMediaLibrary;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)_deviceMediaLibraryContentsDidChange:(id)arg1 ;
-(void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1 ;
@end

