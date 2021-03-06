/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/RESessionRelevanceProviderManagerProperties.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * lastUpdateDate; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
-(void)pause;
-(void)resume;
-(NSDate *)lastUpdateDate;
-(void)_handleSignificantTimeChange;
-(float)_relevanceForProvider:(id)arg1 ;
-(void)_prepareForUpdate;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_scheduleUpdatesForSessionProvider:(id)arg1 ;
@end

