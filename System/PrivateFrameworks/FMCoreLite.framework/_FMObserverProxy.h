/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _FMObserverProxy : NSObject {

	BOOL _valid;
	id _weakObserver;

}

@property (nonatomic,__weak,readonly) id weakObserver;                 //@synthesize weakObserver=_weakObserver - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)weakObserver;
-(id)initWithWeakObserver:(id)arg1 ;
@end

