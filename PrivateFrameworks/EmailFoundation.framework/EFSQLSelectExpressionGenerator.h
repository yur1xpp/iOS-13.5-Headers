/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject {

	NSArray* _columnExpressionGenerators;
	NSSet* _tableExpressionGenerators;

}

@property (nonatomic,readonly) NSArray * columnExpressionGenerators;              //@synthesize columnExpressionGenerators=_columnExpressionGenerators - In the implementation block
@property (nonatomic,readonly) NSSet * tableExpressionGenerators;                 //@synthesize tableExpressionGenerators=_tableExpressionGenerators - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)columnExpressionGenerators;
-(BOOL)isEqualToSelectExpressionGenerator:(id)arg1 ;
-(NSSet *)tableExpressionGenerators;
-(id)initExpressionGeneratorWithColumns:(id)arg1 tables:(id)arg2 ;
-(id)selectExpression;
-(id)columnAliases;
@end
