/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationObserver.h>

@class NSString;

@interface MNCommuteDestinationNavigabilityScore : MNCommuteDestinationScore <MNCommuteDestinationObserver> {

	BOOL _destinationInvalid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)weight;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_checkDestinationRoute:(id)arg1 ;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2 ;
@end

