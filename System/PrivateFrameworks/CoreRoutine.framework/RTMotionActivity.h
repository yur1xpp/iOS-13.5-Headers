/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	NSDate* _startDate;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)motionActivityTypeToString:(unsigned long long)arg1 ;
+(id)motionActivityConfidenceToString:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)confidence;
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 startDate:(id)arg3 ;
@end
