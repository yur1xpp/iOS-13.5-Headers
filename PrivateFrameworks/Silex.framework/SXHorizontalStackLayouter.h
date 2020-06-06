/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;
@class SXContainerComponentBlueprint, SXLayouterFactory, NSString;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> delegate;
	SXContainerComponentBlueprint* _containerComponentBlueprint;
	SXLayouterFactory* _layouterFactory;
	id<SXColumnCalculator> _columnCalculator;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) SXContainerComponentBlueprint * containerComponentBlueprint;              //@synthesize containerComponentBlueprint=_containerComponentBlueprint - In the implementation block
@property (nonatomic,readonly) SXLayouterFactory * layouterFactory;                                      //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) id<SXColumnCalculator> columnCalculator;                                  //@synthesize columnCalculator=_columnCalculator - In the implementation block
@property (nonatomic,readonly) id<SXLayoutContextFactory> layoutContextFactory;                          //@synthesize layoutContextFactory=_layoutContextFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                          //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate; 
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(SXLayouterFactory *)layouterFactory;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
-(id<SXLayoutContextFactory>)layoutContextFactory;
-(id<SXColumnCalculator>)columnCalculator;
-(SXContainerComponentBlueprint *)containerComponentBlueprint;
-(id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5 ;
-(CGPoint)calculatePositionForComponentWithBlueprint:(id)arg1 layout:(id)arg2 unitConverter:(id)arg3 margin:(id)arg4 maximumY:(double)arg5 layoutBlueprint:(id)arg6 ;
-(id)childColumnLayoutForContainerComponentWidth:(double)arg1 componentWidth:(double)arg2 componentBlueprint:(id)arg3 columnLayout:(id)arg4 unitConverter:(id)arg5 ;
-(CGSize)calculateSizeForContainerComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3 layoutDescription:(id)arg4 shouldContinue:(BOOL*)arg5 ;
-(CGSize)calculateSizeForComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3 ;
-(double)factorForAnchorAlingment:(long long)arg1 ;
@end
