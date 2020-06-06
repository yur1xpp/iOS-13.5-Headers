/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {

	_UIViewAnimationAttributes* _attributes;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)delay;
-(double)duration;
-(id)_initWithAttributes:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end
