/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TAVisitStateObserver.h>

@class NSHashTable, TAStore, NSDate, TASettings, TATrackingAvoidanceServiceSettings, TAOutgoingRequests, NSString;

@interface TATrackingAvoidanceService : NSObject <TAVisitStateObserver> {

	NSHashTable* _observers;
	TAStore* _store;
	NSDate* _latestClassificationDate;
	TASettings* _settings;
	unsigned long long _currentSessionID;
	TATrackingAvoidanceServiceSettings* _serviceSettings;
	TAOutgoingRequests* _stagedIntervisitMetrics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)notifyObserversOfRequests:(id)arg1 ;
-(BOOL)shouldPerformDetection;
-(void)notifyObserversOfSuspiciousDevices:(id)arg1 ;
-(void)notifyObserversOfSuspiciousDeviceUpdates:(id)arg1 ;
-(void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3 ;
-(void)visitState:(id)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2 ;
-(void)ingestTAEvent:(id)arg1 ;
@end

