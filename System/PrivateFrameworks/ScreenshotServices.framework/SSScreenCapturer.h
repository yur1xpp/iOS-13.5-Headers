/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSUIServiceServerDelegate.h>
#import <libobjc.A.dylib/SSTestingCoordinatorDelegate.h>

@protocol SSScreenCapturerDelegate;
@class SSSnapshotter, SSDittoRemoteConnection, SSApplicationScreenshotSupplementalDataCapturer, SSUIServiceServer, SSTestingCoordinator, SSScreenshotsWindow, RCPEventStreamRecorder, RCPScreenRecorder, UIWindow;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate> {

	SSSnapshotter* _snapshotter;
	SSDittoRemoteConnection* _dittoRemoteConnection;
	SSApplicationScreenshotSupplementalDataCapturer* _metadataCapturer;
	SSUIServiceServer* _uiServiceServer;
	SSTestingCoordinator* _testingCoordinator;
	SSScreenshotsWindow* _serviceWindow;
	RCPEventStreamRecorder* _recap;
	RCPScreenRecorder* _recapSnapshotter;
	id<SSScreenCapturerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenCapturerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWindow * screenshotsWindow; 
+(BOOL)_filesAppExistsOnSystem;
+(id)_currentDisplayLayout;
+(BOOL)shouldUseScreenCapturerForScreenshots;
+(void)playScreenshotSound;
-(id)init;
-(id<SSScreenCapturerDelegate>)delegate;
-(void)setDelegate:(id<SSScreenCapturerDelegate>)arg1 ;
-(void)takeScreenshot;
-(void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2 ;
-(id)_betaApplicationName;
-(void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)startRecap;
-(void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 ;
-(void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3 ;
-(void)takeScreenshotWithPresentationOptions:(id)arg1 ;
-(void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2 ;
-(void)_captureAndSendDocumentForEnvironmentElement:(id)arg1 ;
-(void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 sendCompletion:(/*^block*/id)arg2 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3 ;
-(id)_environmentDescriptionFromImage:(id)arg1 ;
-(BOOL)_screenshotWasTakenOverBetaApp;
-(id)_bundleIDForCurrentApplication;
-(BOOL)_betaFeedbackEnabled:(id)arg1 ;
-(void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1 ;
-(id)_applicationProxyForCurrentApp;
-(id)_testingCoordinator;
-(void)preheatWithPresentationOptions:(id)arg1 ;
-(UIWindow *)screenshotsWindow;
@end

