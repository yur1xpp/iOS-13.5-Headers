/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _includeAutomaticTimeZones;
	NSArray* _sortDescriptors;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
@end
