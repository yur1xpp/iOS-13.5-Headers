/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat {

	BOOL _preserveAlpha;
	long long _pixelType;
	long long _compression;

}

@property (assign) long long pixelType;                //@synthesize pixelType=_pixelType - In the implementation block
@property (assign) long long compression;              //@synthesize compression=_compression - In the implementation block
@property (assign) BOOL preserveAlpha;                 //@synthesize preserveAlpha=_preserveAlpha - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(int)depth;
-(long long)compression;
-(void)setCompression:(long long)arg1 ;
-(long long)pixelType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
-(void)setPixelType:(long long)arg1 ;
@end

