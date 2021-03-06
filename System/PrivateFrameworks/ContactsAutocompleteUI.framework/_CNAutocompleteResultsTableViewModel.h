/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _CNAutocompleteResultsTableViewModel : NSObject {

	NSMutableDictionary* _sections;
	unsigned long long _numberOfSections;

}

@property (assign,nonatomic) unsigned long long numberOfSections;                        //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNonEmptySections; 
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSections;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
-(void)setSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfNonEmptySections;
-(id)initWithNumberOfSections:(unsigned long long)arg1 ;
-(id)computeDiffForModel:(id)arg1 ;
@end

