/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {

	NSMutableDictionary* _maxConnectionPolicyOverrides;
	NSMutableDictionary* _maxRRCTimePolicyOverrides;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)useFullActivityBitmaps;
-(id)maxConnectionPolicyForTarget:(id)arg1 ;
-(id)maxRRCTimePolicyForTarget:(id)arg1 ;
@end

