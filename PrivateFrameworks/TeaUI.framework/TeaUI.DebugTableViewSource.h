/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@interface TeaUI.DebugTableViewSource : NSObject <UITableViewDelegate, UITableViewDataSource> {

	 dataSource;
	 controller;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)init;
@end
