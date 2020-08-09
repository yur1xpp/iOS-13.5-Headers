/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTablePrinting.h>

@class CRKTable, NSArray;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting> {

	CRKTable* _table;
	NSArray* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,readonly) CRKTable * table;                          //@synthesize table=_table - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(CRKTable *)table;
-(NSArray *)keyValuePairs;
-(id)initWithKeyValuePairs:(id)arg1 ;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
@end
