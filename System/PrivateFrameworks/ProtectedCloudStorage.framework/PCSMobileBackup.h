/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>

@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate> {

	MBManager* _backupManager;

}

@property (retain) MBManager * backupManager;              //@synthesize backupManager=_backupManager - In the implementation block
+(id)defaultMobileBackup;
-(id)init;
-(BOOL)isBackupEnabled;
-(MBManager *)backupManager;
-(void)setBackupManager:(MBManager *)arg1 ;
@end
