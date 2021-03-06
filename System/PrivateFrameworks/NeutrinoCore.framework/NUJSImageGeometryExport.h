/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NUJSScale;


@protocol NUJSImageGeometryExport <JSExport>
@property (readonly) CGRect extent; 
@property (readonly) CGSize size; 
@property (readonly) CGSize scaledSize; 
@property (readonly) NUJSScale * scale; 
@property (readonly) long long orientation; 
@required
-(CGSize)size;
-(NUJSScale *)scale;
-(long long)orientation;
-(CGRect)extent;
-(CGSize)scaledSize;

@end

