/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STTemperature, NSNumber;

@interface STWeatherAttributes : STSiriModelObject {

	long long _condition;
	STTemperature* _temperature;
	STTemperature* _highTemperature;
	STTemperature* _lowTemperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)condition;
-(id)temperature;
-(id)chanceOfPrecipitation;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5 ;
@end

