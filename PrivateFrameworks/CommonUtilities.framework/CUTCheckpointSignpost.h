/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSObject;

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding> {

	NSObject*<OS_os_log> _log;
	unsigned long long _signpostID;
	long long _scope;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long scope;                            //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(NSObject*<OS_os_log>)log;
-(long long)scope;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_verifyMatchingName:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(void)setScope:(long long)arg1 ;
@end
