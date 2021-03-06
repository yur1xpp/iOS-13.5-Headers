/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>

@class SBIcon, NSArray;

@interface SBPlaceholderIcon : SBIcon {

	id _nodeIdentifier;
	SBIcon* _icon;
	NSArray* _icons;

}

@property (nonatomic,readonly) SBIcon * referencedIcon; 
@property (nonatomic,copy,readonly) NSArray * referencedIcons; 
+(id)grabbedIconPlaceholderForIcon:(id)arg1 ;
+(id)grabbedIconPlaceholderForIcons:(id)arg1 ;
+(id)placeholderNodeIdentifierForIcon:(id)arg1 ;
+(id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1 ;
+(BOOL)hasIconImage;
+(id)placeholderForIcon:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)children;
-(id)nodeIdentifier;
-(id)automationID;
-(NSArray *)referencedIcons;
-(SBIcon *)referencedIcon;
-(BOOL)referencesIcon:(id)arg1 ;
-(BOOL)referencesIconWithIdentifier:(id)arg1 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)isUninstallSupported;
-(id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2 ;
-(id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2 ;
-(id)gridCellImage;
@end

