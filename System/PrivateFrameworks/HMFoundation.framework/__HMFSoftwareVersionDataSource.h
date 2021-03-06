/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoSoftwareVersionDataSource.h>

@class HMFSoftwareVersion, NSString;

@interface __HMFSoftwareVersionDataSource : HMFObject <HMFSystemInfoSoftwareVersionDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) HMFSoftwareVersion * softwareVersion; 
-(HMFSoftwareVersion *)softwareVersion;
@end

