/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec {

	NSArray* _allowedValues;

}

@property (nonatomic,readonly) NSArray * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 allowedValues:(id)arg2 ;
-(NSArray *)allowedValues;
@end

