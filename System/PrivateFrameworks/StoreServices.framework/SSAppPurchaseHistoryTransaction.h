/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
@end

