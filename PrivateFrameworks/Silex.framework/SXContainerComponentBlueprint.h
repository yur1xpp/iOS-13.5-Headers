/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint {

	SXLayoutBlueprint* _parentLayoutBlueprint;
	SXLayoutBlueprint* _layoutBlueprint;

}

@property (nonatomic,retain) SXLayoutBlueprint * layoutBlueprint;              //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SXLayoutBlueprint *)layoutBlueprint;
-(id)parentLayoutBlueprint;
-(void)setParentLayoutBlueprint:(id)arg1 ;
-(void)setLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
@end
