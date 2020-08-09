/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMMovieContainerViewControllerDelegate <NSObject>
@optional
-(void)playerDidPlayToEnd;
-(void)playerProgressDidChange:(SCD_Struct_PM5)arg1;
-(void)toggleControlVisibility;
-(void)airPlayDidStart;
-(void)setAirPlayIsAvailable:(BOOL)arg1;
-(void)playerRateChanged;
-(void)playerReadyForDisplay;
-(void)playerDidDoContentChange;
-(void)playerWillDoContentChange;
-(void)playerWillRefreshMovie;
-(void)playerContentChangeFailed;
-(void)playerDidGenerateNewPosters;
-(void)playerNotReadyForDisplay;

@required
-(void)airPlayDidEnd;

@end
