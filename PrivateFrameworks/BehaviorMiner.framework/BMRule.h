/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface BMRule : NSObject {

	NSSet* _antecedent;
	NSSet* _consequent;
	double _support;
	double _confidence;

}

@property (nonatomic,retain) NSSet * antecedent;              //@synthesize antecedent=_antecedent - In the implementation block
@property (nonatomic,retain) NSSet * consequent;              //@synthesize consequent=_consequent - In the implementation block
@property (assign,nonatomic) double support;                  //@synthesize support=_support - In the implementation block
@property (assign,nonatomic) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(NSSet *)antecedent;
-(void)setSupport:(double)arg1 ;
-(double)support;
-(NSSet *)consequent;
-(id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 ;
-(void)setAntecedent:(NSSet *)arg1 ;
-(void)setConsequent:(NSSet *)arg1 ;
@end
