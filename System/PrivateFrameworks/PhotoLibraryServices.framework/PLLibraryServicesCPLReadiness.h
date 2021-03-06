/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class PLLibraryServicesManager, NSObject, NSMutableArray;

@interface PLLibraryServicesCPLReadiness : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_source> _photoLibraryCPLReadinessTimer;
	NSMutableArray* _photoLibraryCPLReadinessBlocks;

}

@property (readonly) BOOL isReadyForCloudPhotoLibrary; 
-(void)invalidate;
-(id)libraryServicesManager;
-(BOOL)isReadyForCloudPhotoLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
-(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
-(BOOL)_isAssetsdReadyForCPLManager;
-(void)stopWaitingForCPLReadiness;
-(void)_stopWaitingForCPLReadiness;
-(void)_callOutstandingCPLReadinessBlocks;
-(BOOL)_checkForCPLReadinessAndCallBlocks;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
@end

