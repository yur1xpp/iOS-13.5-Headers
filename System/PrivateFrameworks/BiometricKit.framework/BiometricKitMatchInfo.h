/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSArray *)topology;
-(void)setTopology:(NSArray *)arg1 ;
@end

