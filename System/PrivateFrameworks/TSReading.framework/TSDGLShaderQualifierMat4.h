/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier {

	CATransform3D _transform3D;
	CATransform3D _proposedTransform3D;

}

@property (nonatomic,readonly) CATransform3D transform3D;                    //@synthesize transform3D=_transform3D - In the implementation block
@property (assign,nonatomic) CATransform3D proposedTransform3D;              //@synthesize proposedTransform3D=_proposedTransform3D - In the implementation block
-(id)description;
-(CATransform3D)transform3D;
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setProposedTransform3D:(CATransform3D)arg1 ;
-(CATransform3D)proposedTransform3D;
@end

