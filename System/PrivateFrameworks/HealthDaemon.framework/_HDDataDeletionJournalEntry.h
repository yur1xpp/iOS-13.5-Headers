/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {

	BOOL _restrictSource;
	HKObject* _dataObject;

}

@property (nonatomic,readonly) HKObject * dataObject;              //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) BOOL restrictSource;                //@synthesize restrictSource=_restrictSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKObject *)dataObject;
-(id)initWithDataObject:(id)arg1 restrictSource:(BOOL)arg2 ;
-(BOOL)restrictSource;
@end

