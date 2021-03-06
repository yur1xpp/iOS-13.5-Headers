/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIPhysicalCirclesTemplateDOMFeature, SKUILabelViewElement, NSArray, SKUIPaletteViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {

	SKUIPhysicalCirclesTemplateDOMFeature* _scriptInterface;

}

@property (nonatomic,readonly) SKUILabelViewElement * subtitleElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
@property (nonatomic,readonly) NSArray * circleItemElements; 
@property (nonatomic,readonly) SKUIPaletteViewElement * footerPaletteElement; 
@property (nonatomic,readonly) SKUIPhysicalCirclesTemplateDOMFeature * scriptInterface;              //@synthesize scriptInterface=_scriptInterface - In the implementation block
+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUIPhysicalCirclesTemplateDOMFeature *)scriptInterface;
-(NSArray *)circleItemElements;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg1 ;
-(SKUILabelViewElement *)titleElement;
-(SKUIPaletteViewElement *)footerPaletteElement;
-(SKUILabelViewElement *)subtitleElement;
@end

