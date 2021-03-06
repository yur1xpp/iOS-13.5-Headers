/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CNVCardNameDataSource <NSObject>
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@required
-(NSString *)middleName;
-(NSString *)title;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
-(NSString *)companyName;
-(BOOL)isCompany;

@end

