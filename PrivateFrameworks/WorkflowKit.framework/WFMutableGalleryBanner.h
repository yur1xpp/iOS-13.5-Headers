/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFGalleryBanner.h>

@class CKRecordID, NSString;

@interface WFMutableGalleryBanner : WFGalleryBanner {

	CKRecordID* identifier;
	NSString* name;
	CKRecordID* detailPage;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) CKRecordID * detailPage; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(CKRecordID *)detailPage;
-(void)setDetailPage:(CKRecordID *)arg1 ;
@end
