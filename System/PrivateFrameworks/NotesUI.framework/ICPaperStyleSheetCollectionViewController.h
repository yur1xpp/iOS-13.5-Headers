/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICPaperStyleCollectionViewController.h>

@protocol ICPaperStyleSheetCollectionViewControllerDelegate;
@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController {

	id<ICPaperStyleSheetCollectionViewControllerDelegate> _paperStyleDelegate;
	unsigned long long _initialPaperStyleType;

}

@property (assign,nonatomic) unsigned long long initialPaperStyleType;                                                     //@synthesize initialPaperStyleType=_initialPaperStyleType - In the implementation block
@property (assign,nonatomic,__weak) id<ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;              //@synthesize paperStyleDelegate=_paperStyleDelegate - In the implementation block
-(BOOL)accessibilityPerformEscape;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForInitialSelection;
-(void)cancelAction:(id)arg1 ;
-(unsigned long long)initialPaperStyleType;
-(id<ICPaperStyleSheetCollectionViewControllerDelegate>)paperStyleDelegate;
-(id)initWithInitialPaperStyleType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)setPaperStyleDelegate:(id<ICPaperStyleSheetCollectionViewControllerDelegate>)arg1 ;
-(void)setInitialPaperStyleType:(unsigned long long)arg1 ;
@end

