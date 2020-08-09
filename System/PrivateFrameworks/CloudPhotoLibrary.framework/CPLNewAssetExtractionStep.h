/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {

	NSMutableSet* _alreadySeenMasterScopedIdentifiers;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) unsigned long long maximumCount;              //@synthesize maximumCount=_maximumCount - In the implementation block
-(void)reset;
-(id)shortDescription;
-(unsigned long long)maximumCount;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3 ;
@end
