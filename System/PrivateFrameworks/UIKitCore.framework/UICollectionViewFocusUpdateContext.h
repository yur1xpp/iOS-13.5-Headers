/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {

	BOOL _didSetPreviouslyFocusedIndexPath;
	BOOL _didSetNextFocusedIndexPath;
	NSIndexPath* _previouslyFocusedIndexPath;
	NSIndexPath* _nextFocusedIndexPath;
	UICollectionView* _collectionView;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * previouslyFocusedIndexPath;              //@synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * nextFocusedIndexPath;                    //@synthesize nextFocusedIndexPath=_nextFocusedIndexPath - In the implementation block
+(id)_contextWithContext:(id)arg1 collectionView:(id)arg2 ;
+(id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(NSIndexPath *)previouslyFocusedIndexPath;
-(id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3 ;
-(NSIndexPath *)nextFocusedIndexPath;
@end

