/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTimeProvider.h>

@protocol CNTimeProvider <NSObject>
@property (readonly) double timestamp; 
@required
-(double)timestamp;

@end


@class NSString;

@interface CNTimeProvider : NSObject <CNTimeProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(id)defaultProvider;
-(double)timestamp;
@end

