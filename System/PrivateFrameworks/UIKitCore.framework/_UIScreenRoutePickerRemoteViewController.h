/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost.h>

@protocol NSCopyingNSObject;
@class _UIScreenRoutePickerViewController, NSExtension, NSString;

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost> {

	_UIScreenRoutePickerViewController* _publicController;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic,__weak) _UIScreenRoutePickerViewController * publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)invalidate;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_dismissViewController;
-(void)setPublicController:(_UIScreenRoutePickerViewController *)arg1 ;
-(_UIScreenRoutePickerViewController *)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end
