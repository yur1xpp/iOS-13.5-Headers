/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;
@interface _EFSamplingObservable : EFObservable {

	id<EFObservable> _observable;
	id<EFObservable> _sampler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
@end

