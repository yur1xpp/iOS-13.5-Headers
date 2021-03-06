/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface WXVmlReadClient : NSObject <OAVReadClient>
+(void)initialize;
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(BOOL)floating:(id)arg1 ;
+(int)horizontalPosition:(id)arg1 ;
+(int)relativeHorizontalPosition:(id)arg1 ;
+(int)verticalPosition:(id)arg1 ;
+(int)relativeVerticalPosition:(id)arg1 ;
+(double)wrapDistanceLeft:(id)arg1 ;
+(double)wrapDistanceTop:(id)arg1 ;
+(double)wrapDistanceRight:(id)arg1 ;
+(double)wrapDistanceBottom:(id)arg1 ;
+(int)zIndex:(id)arg1 ;
+(void)readTextWrappingFromParent:(xmlNode*)arg1 toAnchor:(id)arg2 ;
+(void)readFromDrawable:(xmlNode*)arg1 toContent:(id)arg2 ;
+(void)copyFromDrawable:(id)arg1 toContent:(id)arg2 ;
@end

