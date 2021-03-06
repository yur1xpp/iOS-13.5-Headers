/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TATrackingAvoidanceServiceSettings : NSObject {

	BOOL _enableTAFilterGeneral;
	BOOL _enableTAFilterVisits;
	BOOL _enableTAFilterSingleVisit;
	double _classificationTimeInterval;

}

@property (nonatomic,readonly) BOOL enableTAFilterGeneral;                     //@synthesize enableTAFilterGeneral=_enableTAFilterGeneral - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterVisits;                      //@synthesize enableTAFilterVisits=_enableTAFilterVisits - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterSingleVisit;                 //@synthesize enableTAFilterSingleVisit=_enableTAFilterSingleVisit - In the implementation block
@property (nonatomic,readonly) double classificationTimeInterval;              //@synthesize classificationTimeInterval=_classificationTimeInterval - In the implementation block
-(id)initWithDefaults;
-(id)initWithEnableTAFilterGeneral:(BOOL)arg1 enableTAFilterVisits:(BOOL)arg2 enableTAFilterSingleVisit:(BOOL)arg3 classificationTimeInterval:(double)arg4 ;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;
-(BOOL)enableTAFilterGeneral;
-(BOOL)enableTAFilterVisits;
-(BOOL)enableTAFilterSingleVisit;
-(double)classificationTimeInterval;
@end

