/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSDate, RBSProcessExitStatus, RBSTerminateContext, NSString;

@interface RBSProcessExitContext : NSObject <BSXPCSecureCoding> {

	NSDate* _timestamp;
	long long _type;
	RBSProcessExitStatus* _status;
	RBSTerminateContext* _terminationContext;

}

@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) RBSProcessExitStatus * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) RBSTerminateContext * terminationContext;              //@synthesize terminationContext=_terminationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(RBSProcessExitStatus *)status;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setStatus:(RBSProcessExitStatus *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(RBSTerminateContext *)terminationContext;
-(void)setTerminationContext:(RBSTerminateContext *)arg1 ;
@end
