/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKTableEntries;
@class NSString;

@interface CRKTable : NSObject {

	id<CRKTableEntries> mEntries;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
+(id)parsableTableWithKeyValuePairs:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithEntries:(id)arg1 ;
-(id)columnLengths;
-(unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1 ;
@end

