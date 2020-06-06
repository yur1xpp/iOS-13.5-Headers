/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {

	BOOL _includePrivateTransactions;
	CKRecordZone* _recordZone;

}

@property (nonatomic,retain) CKRecordZone * recordZone;                    //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic) BOOL includePrivateTransactions;              //@synthesize includePrivateTransactions=_includePrivateTransactions - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKRecordZone *)recordZone;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
-(id)initWithRecordZone:(id)arg1 ;
-(BOOL)includePrivateTransactions;
-(void)setIncludePrivateTransactions:(BOOL)arg1 ;
@end
