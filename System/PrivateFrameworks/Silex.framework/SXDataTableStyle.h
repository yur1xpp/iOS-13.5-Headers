/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXDataTableBorderSides, SXDataTableRowStyle, SXDataTableColumnStyle, SXDataTableCellStyle;

@interface SXDataTableStyle : SXJSONObject

@property (nonatomic,readonly) SXDataTableBorderSides * border; 
@property (nonatomic,readonly) SXDataTableRowStyle * headerRows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * headerColumns; 
@property (nonatomic,readonly) SXDataTableCellStyle * headerCells; 
@property (nonatomic,readonly) SXDataTableRowStyle * rows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * columns; 
@property (nonatomic,readonly) SXDataTableCellStyle * cells; 
-(SXDataTableCellStyle *)cells;
-(SXDataTableColumnStyle *)columns;
-(SXDataTableRowStyle *)rows;
-(SXDataTableCellStyle *)headerCells;
-(SXDataTableColumnStyle *)headerColumns;
-(SXDataTableRowStyle *)headerRows;
-(SXDataTableBorderSides *)border;
@end
