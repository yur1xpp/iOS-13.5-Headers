/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSString *)canonicalID;
-(id)_purchaseEventDescriptor;
-(id)initWithPurchaseEventDescriptor:(id)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
@end
