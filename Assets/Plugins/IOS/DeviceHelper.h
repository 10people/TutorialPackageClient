//
//  DeviceHelper.h
//  Unity-iPhone
//
//  Created by WD on 14-6-10.
//
//

#import <Foundation/Foundation.h>

@interface DeviceHelper : NSObject

+(NSString *)GetMacAddr;
+(int)GetNetworkState;
@end
