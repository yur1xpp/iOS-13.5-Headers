/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISceneControllerDelegate <NSObject>
@optional
-(void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2;
-(void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3;
-(void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3;
-(void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2;

@required
-(id)sceneConfigurationForDelegate;

@end
