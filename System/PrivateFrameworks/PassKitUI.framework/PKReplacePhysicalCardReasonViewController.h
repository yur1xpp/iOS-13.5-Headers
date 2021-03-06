/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>

@class PKPhysicalCardController, UIBarButtonItem, PKOrderPhysicalCardController;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController {

	PKPhysicalCardController* _controller;
	long long _context;
	unsigned long long _feature;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	BOOL _hasSelectedRow;
	long long _selectedRow;
	BOOL _loadingCustomizationOptions;
	PKOrderPhysicalCardController* _orderController;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)_updateNavigationButtons;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_nextButtonPressed:(id)arg1 ;
-(id)_cellForReasonAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_reasonRowSelectedAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)initWithPhysicalCardController:(id)arg1 context:(long long)arg2 ;
@end

