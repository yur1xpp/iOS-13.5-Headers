/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(unsigned long long)state;
-(void)finish;
-(void)setState:(unsigned long long)arg1 ;
@end

