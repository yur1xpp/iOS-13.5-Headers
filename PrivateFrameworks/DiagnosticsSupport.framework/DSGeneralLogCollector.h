/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface DSGeneralLogCollector : NSObject {

	NSArray* _logFiles;
	NSDictionary* _friendlyAppNamesDictionary;
	NSArray* _logIDs;

}

@property (nonatomic,retain) NSArray * logFiles;                                     //@synthesize logFiles=_logFiles - In the implementation block
@property (nonatomic,retain) NSDictionary * friendlyAppNamesDictionary;              //@synthesize friendlyAppNamesDictionary=_friendlyAppNamesDictionary - In the implementation block
@property (nonatomic,retain) NSArray * logIDs;                                       //@synthesize logIDs=_logIDs - In the implementation block
+(id)latestUserLog;
+(id)latestRootLog;
-(void)getLogFiles;
-(id)logFilesFromEnumerator:(id)arg1 ;
-(NSArray *)logIDs;
-(NSArray *)logFiles;
-(id)initWithLogIDs:(id)arg1 ;
-(void)enumerateLogLinesWithBlock:(/*^block*/id)arg1 ;
-(void)setLogFiles:(NSArray *)arg1 ;
-(NSDictionary *)friendlyAppNamesDictionary;
-(void)setFriendlyAppNamesDictionary:(NSDictionary *)arg1 ;
-(void)setLogIDs:(NSArray *)arg1 ;
@end
