/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)possibleRoles;
+(id)possibleStatuses;
-(id)role;
-(id)status;
-(BOOL)isCurrentUser;
-(id)participant;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)canGenerateContact;
@end

