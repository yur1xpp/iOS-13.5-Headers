/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTask.h>

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask {

	/*^block*/id _batchProcessingBlock;
	/*^block*/id _knownRecordIDsFromList;
	BOOL _shouldContinueFromLastSyncPoint;

}

@property (nonatomic,copy) id batchProcessingBlock;                             //@synthesize batchProcessingBlock=_batchProcessingBlock - In the implementation block
@property (nonatomic,copy) id knownRecordIDsFromList;                           //@synthesize knownRecordIDsFromList=_knownRecordIDsFromList - In the implementation block
@property (assign,nonatomic) BOOL shouldContinueFromLastSyncPoint;              //@synthesize shouldContinueFromLastSyncPoint=_shouldContinueFromLastSyncPoint - In the implementation block
-(id)batchProcessingBlock;
-(void)setBatchProcessingBlock:(id)arg1 ;
-(id)knownRecordIDsFromList;
-(void)setKnownRecordIDsFromList:(id)arg1 ;
-(BOOL)shouldContinueFromLastSyncPoint;
-(void)setShouldContinueFromLastSyncPoint:(BOOL)arg1 ;
@end

