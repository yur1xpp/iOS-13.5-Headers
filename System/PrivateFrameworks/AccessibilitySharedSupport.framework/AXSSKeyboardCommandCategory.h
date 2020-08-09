/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AXSSKeyboardCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedName;

}

@property (nonatomic,readonly) NSArray * commands;                    //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
+(id)allCategoriesForAvailableCommands:(id)arg1 ;
+(id)_basicCommandsFromAvailableCommands:(id)arg1 ;
+(id)_movementCommandsFromAvailableCommands:(id)arg1 ;
+(id)_interactionCommandsFromAvailableCommands:(id)arg1 ;
+(id)_deviceCommandsFromAvailableCommands:(id)arg1 ;
+(id)_gesturesCommandsFromAvailableCommands:(id)arg1 ;
+(id)_categoryWithCommands:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3 ;
+(id)_categoryWithCommandIdentifiers:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3 ;
-(NSString *)localizedName;
-(NSArray *)commands;
-(id)initWithCommands:(id)arg1 localizedName:(id)arg2 ;
@end
