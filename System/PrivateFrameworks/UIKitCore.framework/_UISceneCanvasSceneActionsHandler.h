/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneBSActionHandler.h>

@protocol _UICanvasSceneActionsHandler;
@class NSString;

@interface _UISceneCanvasSceneActionsHandler : NSObject <_UISceneBSActionHandler> {

	id<_UICanvasSceneActionsHandler> _canvasSceneActionsHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneArrayFromCanvasArray:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithCanvasSceneActionsHandler:(id)arg1 ;
-(id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4 ;
-(id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4 ;
@end

