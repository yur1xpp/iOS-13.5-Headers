/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTableTextStyle, OADTableCellStyle;

@interface OADTablePartStyle : NSObject {

	OADTableTextStyle* mTextStyle;
	OADTableCellStyle* mCellStyle;

}
+(id)defaultStyle;
-(id)description;
-(void)setTextStyle:(id)arg1 ;
-(id)textStyle;
-(id)cellStyle;
-(void)setCellStyle:(id)arg1 ;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
@end

