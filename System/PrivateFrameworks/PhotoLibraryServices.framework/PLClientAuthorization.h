/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLClientAuthorization <NSObject>
@property (nonatomic,readonly) NSString * trustedCallerBundleID; 
@property (nonatomic,readonly) NSString * trustedCallerDisplayName; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) BOOL photoKitEntitled; 
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@required
-(int)clientProcessIdentifier;
-(SCD_Struct_PL32)clientAuditToken;
-(BOOL)photoKitEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)photoKitEntitledFor:(id)arg1;
-(NSString *)trustedCallerDisplayName;
-(BOOL)directDatabaseAccessAuthorized;
-(BOOL)directDatabaseWriteAuthorized;

@end
