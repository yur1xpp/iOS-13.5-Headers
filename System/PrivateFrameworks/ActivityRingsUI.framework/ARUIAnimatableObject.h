/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ARUIAnimatableObject : NSObject {

	NSMutableDictionary* _animatableProperties;

}
-(void)update:(double)arg1 ;
-(void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(void)removeAllAnimationsForPropertyType:(unsigned long long)arg1 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(id)endingValueForPropertyType:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(id)_animatablePropertyForType:(unsigned long long)arg1 ;
@end

