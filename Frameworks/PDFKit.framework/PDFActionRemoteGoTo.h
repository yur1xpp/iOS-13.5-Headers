/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionRemoteGoToPrivateVars, NSURL;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {

	PDFActionRemoteGoToPrivateVars* _private2;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (assign,nonatomic) CGPoint point; 
@property (nonatomic,copy) NSURL * URL; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(void)commonInit;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(id)initWithPageIndex:(unsigned long long)arg1 atPoint:(CGPoint)arg2 fileURL:(id)arg3 ;
@end
