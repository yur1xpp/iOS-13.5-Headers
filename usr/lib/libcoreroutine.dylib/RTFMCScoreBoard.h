/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface RTFMCScoreBoard : NSObject {

	BOOL _engaged;
	BOOL _assisted;
	int _locationType;
	int _parkingEvents;
	int _engagedParkingEvents;
	int _assistedParkingEvents;
	int _engagements;
	int _assistances;
	int _suppressedEvents;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) int locationType;                       //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL engaged;                           //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) BOOL assisted;                          //@synthesize assisted=_assisted - In the implementation block
@property (assign,nonatomic) int parkingEvents;                      //@synthesize parkingEvents=_parkingEvents - In the implementation block
@property (assign,nonatomic) int engagedParkingEvents;               //@synthesize engagedParkingEvents=_engagedParkingEvents - In the implementation block
@property (assign,nonatomic) int assistedParkingEvents;              //@synthesize assistedParkingEvents=_assistedParkingEvents - In the implementation block
@property (assign,nonatomic) int engagements;                        //@synthesize engagements=_engagements - In the implementation block
@property (assign,nonatomic) int assistances;                        //@synthesize assistances=_assistances - In the implementation block
@property (assign,nonatomic) int suppressedEvents;                   //@synthesize suppressedEvents=_suppressedEvents - In the implementation block
-(id)init;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(int)locationType;
-(void)setLocationType:(int)arg1 ;
-(void)setEngaged:(BOOL)arg1 ;
-(int)engagements;
-(void)setEngagements:(int)arg1 ;
-(BOOL)engaged;
-(int)parkingEvents;
-(int)assistances;
-(int)assistedParkingEvents;
-(int)engagedParkingEvents;
-(id)initWithLocationType:(int)arg1 ;
-(void)clearScoreBoard;
-(void)setAssisted:(BOOL)arg1 ;
-(void)setParkingEvents:(int)arg1 ;
-(void)setEngagedParkingEvents:(int)arg1 ;
-(void)setAssistedParkingEvents:(int)arg1 ;
-(void)setAssistances:(int)arg1 ;
-(void)setSuppressedEvents:(int)arg1 ;
-(int)suppressedEvents;
-(BOOL)assisted;
-(void)copyToMetric:(id)arg1 ;
-(void)parkingEvent;
-(void)assistanceEvent;
-(void)engagementEvent;
-(void)suppressedEvent;
@end

