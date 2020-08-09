/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSUserSessionControlling, CSWallpaperViewProviding, CSWallpaperColorProvider;
@class CSVibrantWallpaperButton;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase {

	id<CSUserSessionControlling> _userSessionController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (nonatomic,readonly) CSVibrantWallpaperButton * button; 
@property (assign,nonatomic,__weak) id<CSUserSessionControlling> userSessionController;               //@synthesize userSessionController=_userSessionController - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
-(void)loadView;
-(CSVibrantWallpaperButton *)button;
-(void)_buttonPressed:(id)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(void)setUserSessionController:(id<CSUserSessionControlling>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
@end
