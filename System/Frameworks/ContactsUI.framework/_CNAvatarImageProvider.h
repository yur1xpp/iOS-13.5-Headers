/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNAvatarImageProvider.h>

@protocol CNUIPRLikenessProvider;
@class NSString;

@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider> {

	id<CNUIPRLikenessProvider> _likenessProvider;

}

@property (nonatomic,readonly) id<CNUIPRLikenessProvider> likenessProvider;              //@synthesize likenessProvider=_likenessProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)roundImage:(id)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 ;
-(id)initWithLikenessProvider:(id)arg1 ;
-(id<CNUIPRLikenessProvider>)likenessProvider;
@end
