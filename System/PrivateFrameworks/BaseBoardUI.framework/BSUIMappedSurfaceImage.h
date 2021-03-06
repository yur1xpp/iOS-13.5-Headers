/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage {

	NSData* _mappedSurfaceData;

}

@property (setter=_setMappedSurfaceData:,getter=_mappedSurfaceData,nonatomic,retain) NSData * _mappedSurfaceData;              //@synthesize mappedSurfaceData=_mappedSurfaceData - In the implementation block
+(id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2 ;
+(BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2 ;
-(void)_setMappedSurfaceData:(id)arg1 ;
-(NSData *)_mappedSurfaceData;
@end

