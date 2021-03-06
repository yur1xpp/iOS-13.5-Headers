/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersonNameComponents;

@interface CNAutocompleteSupplementalGroupMember : NSObject {

	NSString* _address;
	long long _addressType;
	NSPersonNameComponents* _nameComponents;
	NSString* _name;

}

@property (copy,readonly) NSString * address;                                   //@synthesize address=_address - In the implementation block
@property (readonly) long long addressType;                                     //@synthesize addressType=_addressType - In the implementation block
@property (copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(NSString *)address;
-(NSPersonNameComponents *)nameComponents;
-(long long)addressType;
-(id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
-(id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3 ;
@end

