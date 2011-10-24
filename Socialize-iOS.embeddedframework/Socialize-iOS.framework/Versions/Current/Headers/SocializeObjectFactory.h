//
//  SocializeObjectFactory.h
//  SocializeSDK
//
//  Created by William M. Johnson on 5/30/11.
//  Copyright 2011 Socialize, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SocializeConfiguration;
@protocol SocializeObject;

@interface SocializeObjectFactory : NSObject 
{
    @protected
        NSMutableDictionary * prototypeDictionary; 
        NSMutableDictionary * formatterDictionary;
}

-(id)initializeWithConfiguration:(SocializeConfiguration*)configuration;

-(id)createObjectFromString:(NSString *)stringRepresentation forProtocol:(Protocol *)protocol;
-(id)createObjectFromDictionary:(NSDictionary *)dictionaryRepresentation forProtocol:(Protocol *)protocol;

-(NSString *)createStringRepresentationOfObject:(id<SocializeObject>)socializeObject;
-(NSDictionary *)createDictionaryRepresentationOfObject:(id<SocializeObject>)socializeObject;
-(NSString *)createStringRepresentationOfArray:(NSArray *)objectArray;

-(id)createObjectForProtocolName:(NSString *)protocolName;
-(id)createObjectForProtocol:(Protocol *)protocol;

-(void)addPrototype:(Class)socializeObjectPrototype forKey:(NSString *)protocolName;

@end
