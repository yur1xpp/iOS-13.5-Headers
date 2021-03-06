/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class REUpNextCollectionViewFlowLayoutAttributes, NSDictionary, NSIndexPath;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {

	REUpNextCollectionViewFlowLayoutAttributes* _preferedCellAttributes;
	NSDictionary* _allAttributes;
	NSIndexPath* _preferedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * preferedIndexPath;              //@synthesize preferedIndexPath=_preferedIndexPath - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSIndexPath *)preferedIndexPath;
-(void)setPreferedIndexPath:(NSIndexPath *)arg1 ;
@end

