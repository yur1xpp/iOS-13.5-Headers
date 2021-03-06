/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REUpNextSiriObserver.h>
#import <libobjc.A.dylib/RESiriEngagementPredictorProperties.h>

@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties> {

	REUpNextTimer* _siriDecayTimer;
	NSString* _lastSiriDomain;
	float _siriInfluence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * lastSiriDomain; 
@property (nonatomic,readonly) float siriInfluence; 
+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2 ;
-(NSString *)lastSiriDomain;
-(float)siriInfluence;
@end

