/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TREraseAnisetteDataResponse : TRResponseMessage {

	BOOL _didSucceed;

}

@property (assign,nonatomic) BOOL didSucceed;              //@synthesize didSucceed=_didSucceed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
@end
