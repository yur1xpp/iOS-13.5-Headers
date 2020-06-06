/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LocationOfInterestType : NSObject {

	NSString* _customLabel;
	long long _labelType;

}

@property (nonatomic,copy) NSString * customLabel;               //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,readonly) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) NSString * label; 
-(id)debugDescription;
-(NSString *)label;
-(long long)labelType;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id)initWithContactAddressType:(int)arg1 customLabel:(id)arg2 ;
-(id)initWithLabelType:(long long)arg1 ;
-(id)initWithLabelType:(long long)arg1 customLabel:(id)arg2 ;
@end
