/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationBodyDescriptionProvider.h>

@protocol CALNTravelAdvisoryDescriptionGenerator;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider> {

	id<CALNTravelAdvisoryDescriptionGenerator> _travelAdvisoryDescriptionGenerator;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;              //@synthesize travelAdvisoryDescriptionGenerator=_travelAdvisoryDescriptionGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1 ;
-(id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
-(id<CALNTravelAdvisoryDescriptionGenerator>)travelAdvisoryDescriptionGenerator;
@end
