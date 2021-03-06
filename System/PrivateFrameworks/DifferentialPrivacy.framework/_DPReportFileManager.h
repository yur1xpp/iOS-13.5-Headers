/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject {

	NSString* _reportsDirectoryPath;
	_DPDaemonConnection* _connection;

}

@property (nonatomic,copy) NSString * reportsDirectoryPath;                   //@synthesize reportsDirectoryPath=_reportsDirectoryPath - In the implementation block
@property (nonatomic,readonly) _DPDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)submittedReports;
+(id)submittedReportsInDirectory:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(_DPDaemonConnection *)connection;
-(id)initWithDirectoryPath:(id)arg1 ;
-(NSString *)reportsDirectoryPath;
-(id)reportsNotYetSubmitted;
-(void)retireReports:(id)arg1 ;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
@end

