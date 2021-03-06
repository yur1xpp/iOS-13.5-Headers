/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding> {

	LPLinkMetadata* _linkMetadata;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * _linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(LPLinkMetadata *)_linkMetadata;
-(void)set_linkMetadata:(LPLinkMetadata *)arg1 ;
@end

