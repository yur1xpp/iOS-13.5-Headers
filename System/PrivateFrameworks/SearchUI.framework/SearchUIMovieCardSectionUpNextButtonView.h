/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {

	SearchUIWatchListUtilities* _watchListUtility;

}

@property (nonatomic,retain) SearchUIWatchListUtilities * watchListUtility;              //@synthesize watchListUtility=_watchListUtility - In the implementation block
-(void)buttonPressed;
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(SearchUIWatchListUtilities *)watchListUtility;
-(id)initIsInUpNext:(BOOL)arg1 cardSectionView:(id)arg2 ;
-(void)updateUpNextStatus;
@end

