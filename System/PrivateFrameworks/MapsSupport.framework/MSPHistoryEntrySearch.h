/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, GEOMapRegion;


@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
@property (nonatomic,copy,readonly) NSString * query; 
@property (nonatomic,copy,readonly) NSString * locationDisplayString; 
@property (nonatomic,copy,readonly) NSString * languageCode; 
@property (nonatomic,copy,readonly) GEOMapRegion * mapRegion; 
@required
-(NSString *)query;
-(NSString *)languageCode;
-(GEOMapRegion *)mapRegion;
-(NSString *)locationDisplayString;

@end

