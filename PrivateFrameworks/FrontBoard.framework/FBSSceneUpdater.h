/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(id)endpoint;
-(id)hostProcess;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(id)callOutQueue;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3;

@end
