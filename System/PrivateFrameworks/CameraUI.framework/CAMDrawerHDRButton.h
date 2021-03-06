/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton {

	BOOL _allowAutoHDR;
	BOOL _allowHDROn;
	long long _hdrMode;

}

@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;              //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,nonatomic) BOOL allowAutoHDR;                                 //@synthesize allowAutoHDR=_allowAutoHDR - In the implementation block
@property (assign,nonatomic) BOOL allowHDROn;                                   //@synthesize allowHDROn=_allowHDROn - In the implementation block
-(long long)hdrMode;
-(long long)controlType;
-(void)setHDRMode:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAllowHDROn:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(BOOL)allowHDROn;
-(BOOL)allowAutoHDR;
@end

