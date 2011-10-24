//
//  SocializeActivityService.h
//  SocializeSDK
//
//  Created by William Johnson on 6/1/11.
//  Copyright 2011 Socialize, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SocializeRequest.h"
#import "SocializeActivity.h"

@interface SocializeActivityService : NSObject 
{
    
}

-(void)activity:(NSString *)activityEndPoint withId:(uint64_t)activityId;
-(void)listActivity:(NSString *)activityEndPoint forEnitity:(id<SocializeEntity>)entity;
-(void)listActivity:(NSString *)activityEndPoint entityKey:(NSString *)keyOfEntity;
-(void)listActivity:(NSString *)activityEndPoint withIds:(NSArray *)activityIdsArray;
-(void)createActivity:(id<SocializeActivity>)activity atEndPoint:(NSString *)endPoint;


@end
