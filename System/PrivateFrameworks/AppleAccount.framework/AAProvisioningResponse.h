/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
@property (nonatomic,readonly) NSString * fmipSiriToken; 
@property (nonatomic,readonly) NSString * searchPartyToken; 
@property (nonatomic,readonly) NSString * keyTransparencyToken; 
@property (nonatomic,readonly) NSString * fmipAppToken; 
@property (nonatomic,readonly) NSDictionary * regionInfo; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@property (getter=isNotesMigrated,nonatomic,readonly) BOOL notesMigrated; 
@property (getter=isRemindersMigrated,nonatomic,readonly) BOOL remindersMigrated; 
@property (getter=isSandboxAccount,nonatomic,readonly) BOOL sandboxAccount; 
@property (getter=isCloudDocsMigrated,nonatomic,readonly) BOOL cloudDocsMigrated; 
@property (getter=hasOptionalTerms,nonatomic,readonly) BOOL optionalTerms; 
@property (getter=isFamilyEligible,nonatomic,readonly) BOOL familyEligible; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)appleID;
-(NSArray *)provisionedDataclasses;
-(NSDictionary *)dataclassProperties;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)appleIDAliases;
-(NSString *)primaryEmail;
-(NSNumber *)primaryEmailVerified;
-(NSString *)iCloudAuthToken;
-(NSString *)fmipAuthToken;
-(NSString *)fmipSiriToken;
-(NSString *)searchPartyToken;
-(NSString *)keyTransparencyToken;
-(NSString *)fmipAppToken;
-(NSDictionary *)regionInfo;
-(BOOL)isManagedAppleID;
-(BOOL)isNotesMigrated;
-(BOOL)isRemindersMigrated;
-(BOOL)isSandboxAccount;
-(BOOL)isCloudDocsMigrated;
-(BOOL)hasOptionalTerms;
-(BOOL)isFamilyEligible;
@end

