/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBDeviceTransferTask.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>
-(void)cancel;
-(void)resume;
-(void)start;
-(void)_start;
-(void)_cancel;
-(void)_finishWithError:(id)arg1 ;
-(long long)taskType;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
@end

