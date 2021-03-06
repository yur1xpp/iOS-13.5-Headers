/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIStatusBarAction : NSObject {

	BOOL _enabled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)block;
-(BOOL)isEnabled;
-(void)setBlock:(id)arg1 ;
-(void)performWithStatusBar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

