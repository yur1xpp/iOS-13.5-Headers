/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileCoordinatorDelegate.h>
#import <TSReading/TSPObjectContextDelegate.h>

@class NSMutableSet, NSURL, NSError, NSSet, NSString;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {

	NSMutableSet* _persistenceWarnings;
	BOOL _ignoreDocumentSupport;
	NSURL* _packageURL;
	NSError* _error;

}

@property (nonatomic,copy) NSURL * packageURL;                                          //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * persistenceWarnings;                             //@synthesize persistenceWarnings=_persistenceWarnings - In the implementation block
@property (assign,nonatomic) BOOL ignoreDocumentSupport;                                //@synthesize ignoreDocumentSupport=_ignoreDocumentSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
-(id)init;
-(NSError *)error;
-(NSURL *)packageURL;
-(void)setPackageURL:(NSURL *)arg1 ;
-(void)addPersistenceWarnings:(id)arg1 ;
-(BOOL)ignoreDocumentSupport;
-(id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3 ;
-(id)initWithPackageURL:(id)arg1 ;
-(void)presentPersistenceError:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(NSSet *)persistenceWarnings;
-(void)setIgnoreDocumentSupport:(BOOL)arg1 ;
@end
