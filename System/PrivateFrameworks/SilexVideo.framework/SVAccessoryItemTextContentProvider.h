/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVAccessoryItemContentProviding.h>

@protocol SVVideoTitleProviding;
@class SVAccessoryItemButton, NSString;

@interface SVAccessoryItemTextContentProvider : NSObject <SVAccessoryItemContentProviding> {

	SVAccessoryItemButton* _accessoryItemButton;
	id<SVVideoTitleProviding> _titleProvider;
	NSString* _headerText;

}

@property (nonatomic,readonly) SVAccessoryItemButton * accessoryItemButton;              //@synthesize accessoryItemButton=_accessoryItemButton - In the implementation block
@property (nonatomic,readonly) id<SVVideoTitleProviding> titleProvider;                  //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                               //@synthesize headerText=_headerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerText;
-(id<SVVideoTitleProviding>)titleProvider;
-(SVAccessoryItemButton *)accessoryItemButton;
-(void)updateAccessoryItemForVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAccessoryItemButton:(id)arg1 titleProvider:(id)arg2 headerText:(id)arg3 ;
@end
