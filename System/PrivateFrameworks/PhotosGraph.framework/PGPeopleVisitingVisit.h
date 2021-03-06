/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PGGraphNode, NSArray;

@interface PGPeopleVisitingVisit : NSObject {

	NSMutableArray* _momentNodes;
	BOOL _hasVeryCloseMoments;
	PGGraphNode* _addressNode;

}

@property (readonly) PGGraphNode * addressNode;                   //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) NSArray * momentNodes;                       //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) BOOL matchesFarVisitCriteria; 
@property (readonly) BOOL matchesCloseVisitCriteria; 
-(id)description;
-(BOOL)isValid;
-(NSArray *)momentNodes;
-(PGGraphNode *)addressNode;
-(BOOL)matchesFarVisitCriteria;
-(void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2 ;
-(id)initWithAddressNode:(id)arg1 ;
-(BOOL)matchesCloseVisitCriteria;
@end

