/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface W5Event : NSObject <NSCopying, NSSecureCoding> {

	long long _eventID;
	double _timestamp;
	NSDictionary* _info;

}

@property (assign,nonatomic) long long eventID;              //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(long long)eventID;
-(void)setEventID:(long long)arg1 ;
@end
