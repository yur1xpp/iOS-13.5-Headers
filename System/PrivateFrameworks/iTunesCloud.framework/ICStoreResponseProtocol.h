/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, ICStoreDialogResponse;


@protocol ICStoreResponseProtocol <NSObject>
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@required
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;

@end

