/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString, UIViewController;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 viewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController * viewController; 
@property (readonly,nonatomic) long long hash; 
-(id)init;
-(long long)hash;
-(NSString *)identifier;
-(CGSize)size;
-(long long)revision;
-(UIViewController *)viewController;
@end

