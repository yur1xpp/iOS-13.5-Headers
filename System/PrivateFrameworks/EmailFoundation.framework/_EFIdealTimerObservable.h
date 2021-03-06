/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable, EFScheduler;
@interface _EFIdealTimerObservable : EFObservable {

	id<EFObservable> _input;
	id<EFScheduler> _scheduler;
	double _interval;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 ;
@end

