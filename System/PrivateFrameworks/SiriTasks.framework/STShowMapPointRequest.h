/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {

	NSData* _placeData;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;
	BOOL _isCurrentLocation;

}

@property (assign,nonatomic) BOOL isCurrentLocation;              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
-(id)mapPointData;
@end

