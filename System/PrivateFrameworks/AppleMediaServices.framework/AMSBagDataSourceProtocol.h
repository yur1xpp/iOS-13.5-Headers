/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol AMSBagDataSourceProtocol <NSObject>
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@optional
-(void)setDataSourceChangedHandler:(/*^block*/id)arg1;
-(void)setDataSourceDataInvalidatedHandler:(/*^block*/id)arg1;
-(id)dataSourceChangedHandler;
-(id)dataSourceDataInvalidatedHandler;

@required
-(BOOL)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(void)loadWithCompletion:(/*^block*/id)arg1;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end
