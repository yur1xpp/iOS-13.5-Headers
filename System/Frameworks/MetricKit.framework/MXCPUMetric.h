/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXCPUMetric : MXMetric {

	NSMeasurement* _cumulativeCPUTime;

}

@property (readonly) NSMeasurement * cumulativeCPUTime;              //@synthesize cumulativeCPUTime=_cumulativeCPUTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(NSMeasurement *)cumulativeCPUTime;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg1 ;
@end

