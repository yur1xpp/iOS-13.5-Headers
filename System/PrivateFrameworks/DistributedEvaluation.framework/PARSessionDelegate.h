/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PARSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didDownloadResource:(id)arg2;
-(void)session:(id)arg1 didDeleteResource:(id)arg2;

@required
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

@end
