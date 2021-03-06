/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXPIFingerEventSender : NSObject {

	BOOL _shouldAddRealEventFlag;

}

@property (assign,nonatomic) BOOL shouldAddRealEventFlag;              //@synthesize shouldAddRealEventFlag=_shouldAddRealEventFlag - In the implementation block
-(void)performCancel;
-(id)_assignFingerIdentifiersToTouches:(id)arg1 ;
-(void)performDownWithTouchesByFingerIdentifier:(id)arg1 ;
-(void)_sendHandEvent:(unsigned)arg1 touchesByFingerIdentifier:(id)arg2 ;
-(void)performMoveWithTouchesByFingerIdentifier:(id)arg1 ;
-(void)performUpWithTouchesByFingerIdentifier:(id)arg1 ;
-(BOOL)shouldAddRealEventFlag;
-(void)performDownWithTouches:(id)arg1 ;
-(void)performMoveWithTouches:(id)arg1 ;
-(void)performUpWithTouches:(id)arg1 ;
-(void)setShouldAddRealEventFlag:(BOOL)arg1 ;
@end

