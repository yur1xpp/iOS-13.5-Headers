/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFMakeVideoFromGIFAction : WFAction {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;              //@synthesize cancelBlock=_cancelBlock - In the implementation block
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
@end
