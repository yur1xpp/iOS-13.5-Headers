/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABFillPropertiesManager.h>

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
@required
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(int)fillBgAlpha;
-(int)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;

@end


@protocol OABPropertiesManager;
@class NSString;

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {

	const EshFill* mFill;
	int mShapeType;
	id<OABPropertiesManager> mMasterManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EshColor)shadowColor;
-(BOOL)isFilled;
-(int)fillType;
-(EshColor)fillFgColor;
-(BOOL)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(int)fillBgAlpha;
-(int)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(id)initWithFill:(const EshFill*)arg1 shapeType:(int)arg2 masterShape:(EshShapeRef)arg3 ;
@end

