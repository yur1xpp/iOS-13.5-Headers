/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, IKDOMFeatureNavigationDocument;

@interface IKSplitTemplate : IKViewElement {

	NSString* _displayMode;
	IKDOMFeatureNavigationDocument* _leftNavigationDocument;
	IKDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,copy) NSString * displayMode;                                                    //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * leftNavigationDocument;               //@synthesize leftNavigationDocument=_leftNavigationDocument - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * rightNavigationDocument;              //@synthesize rightNavigationDocument=_rightNavigationDocument - In the implementation block
+(id)supportedFeatures;
-(NSString *)displayMode;
-(void)setDisplayMode:(NSString *)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)_featureWithName:(id)arg1 ;
-(IKDOMFeatureNavigationDocument *)leftNavigationDocument;
-(IKDOMFeatureNavigationDocument *)rightNavigationDocument;
@end
