/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

@interface ExtraClip : KonaClip

@property (nonatomic,retain,readonly) NSMutableDictionary * extraDefinition; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startRatio; 
@property (assign,nonatomic) double endRatio; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasVisualCharacteristic;
-(NSMutableDictionary *)extraDefinition;
-(double)startRatio;
-(void)setStartRatio:(double)arg1 ;
-(double)endRatio;
-(void)setEndRatio:(double)arg1 ;
@end

