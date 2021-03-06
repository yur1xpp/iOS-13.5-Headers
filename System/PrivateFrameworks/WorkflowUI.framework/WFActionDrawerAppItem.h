/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface WFActionDrawerAppItem : NSObject {

	NSString* _name;
	UIImage* _icon;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UIImage *)icon;
-(id)initWithName:(id)arg1 icon:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

