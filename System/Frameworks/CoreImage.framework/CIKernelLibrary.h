/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, MTLLibrary;
@class NSObject;

@interface CIKernelLibrary : NSObject {

	NSObject*<OS_dispatch_data> _data;
	id<MTLLibrary> _library;

}

@property (readonly) unsigned long long functionCount; 
+(id)libraryWithData:(id)arg1 error:(id*)arg2 ;
+(id)internalLibraryWithName:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(id)functionWithName:(id)arg1 ;
-(unsigned long long)functionCount;
-(id)externFunctionNames;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 device:(id)arg2 ;
@end

