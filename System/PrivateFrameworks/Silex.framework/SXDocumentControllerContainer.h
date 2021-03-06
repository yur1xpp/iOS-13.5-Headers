/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDocumentControllerContainer.h>

@protocol SXDocumentControllerContainer <SXDocumentControllerProvider>
@required
-(void)registerDocumentController:(id)arg1;

@end


@class SXDocumentController, NSString;

@interface SXDocumentControllerContainer : NSObject <SXDocumentControllerContainer> {

	SXDocumentController* _documentController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
-(SXDocumentController *)documentController;
-(void)registerDocumentController:(id)arg1 ;
@end

