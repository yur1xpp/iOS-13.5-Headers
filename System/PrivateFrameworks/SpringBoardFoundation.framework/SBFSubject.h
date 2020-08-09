/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>
#import <libobjc.A.dylib/SBFObserver.h>

@class NSMutableArray, NSString;

@interface SBFSubject : SBFObservable <SBFObserver> {

	NSMutableArray* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_observers;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
@end
