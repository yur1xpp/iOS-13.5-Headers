/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRSampling.h>

@class NSData, NSString;

@interface HAECGSample : NSObject <SRSampling> {

	NSData* _representation;
	double _timestamp;

}

@property (nonatomic,readonly) NSData * representation;              //@synthesize representation=_representation - In the implementation block
@property (nonatomic,readonly) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(NSData *)representation;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
@end

