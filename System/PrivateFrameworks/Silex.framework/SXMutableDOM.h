/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXDOM.h>

@class SXMutableComponents, NSMutableDictionary;

@interface SXMutableDOM : SXDOM

@property (nonatomic,copy,readonly) SXMutableComponents * components; 
@property (nonatomic,copy,readonly) NSMutableDictionary * textStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentLayouts; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentTextStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * resources; 
@property (nonatomic,retain) id<SXAutoPlacement> autoPlacement; 
@property (nonatomic,retain) id<SXDocumentStyle> documentStyle; 
-(id)debugDescription;
-(id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 ;
-(void)setAutoPlacement:(id<SXAutoPlacement>)arg1 ;
-(void)setDocumentStyle:(id<SXDocumentStyle>)arg1 ;
@end

