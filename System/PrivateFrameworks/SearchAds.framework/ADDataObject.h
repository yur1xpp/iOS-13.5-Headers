/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSError;

@interface ADDataObject : NSObject {

	NSDictionary* _iAdData;
	NSError* _error;

}

@property (nonatomic,copy) NSDictionary * iAdData;              //@synthesize iAdData=_iAdData - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWith:(id)arg1 andError:(id)arg2 ;
-(NSDictionary *)iAdData;
-(void)setIAdData:(NSDictionary *)arg1 ;
@end

