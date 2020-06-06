/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSession.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)shortDescription;
-(void)commitChangeBatch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithLibraryManager:(id)arg1 ;
-(void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(/*^block*/id)arg2 ;
@end
