//
//  TessarMobileSDK.h
//  TessarMobileSDK
//
//  Created by dingrui_cx on 13-10-13.
//  Copyright (c) 2013年 dingrui_cx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TessarMobileSDK : NSObject {
    //@private

}
typedef enum {
    
    NETWORK_TYPE_NONE= 0,
    NETWORK_TYPE_WIFI= 1,
    NETWORK_TYPE_2G= 2,
    
    NETWORK_TYPE_3G= 3,
    NETWORK_TYPE_4G= 4,
    NETWORK_TYPE_5G= 5,//  5G目前为猜测结果
    
}NETWORK_TYPE;

+ (void) proj:(NSString *)proj_t channel:(NSString *)channel_t version:(NSString *)version_t;

+ (void) proj:(NSString *)proj_t channel:(NSString *)channel_t version:(NSString *)version_t reportpolicy:(NSString*)reportPolicy isdebug:(Boolean)beDebug;
//用户信息 登陆 退出信息
+ (void) onLogInfo:(NSString*)userName_t role:(NSString *)role_t level:(unsigned int)level_t coin:(unsigned int)coin_t gamestate:(NSString *)gameState;  //reportpolicy:(NSString*)reportPolicy//
//新手任务
+(void)onNewMission:(unsigned int)level_t coin:(unsigned int)coin_t costtime:(NSString *)costTime;
//通用任务
+(void)onMission:(NSString *)mission level:(unsigned int)level_t coin:(unsigned int)coin_t;
//真实消费统计
+(void)pay:(double)money coin:(unsigned int)coin_t  source:(int)source_t;
//虚拟消费
+(void)buy:(NSString *)item number:(unsigned int)number_t price:(double)price_t;
//额外奖励
+(void)bonus:(double)coin trigger:(unsigned int)trigger_t;
+(void)bonus:(NSString *)item num:(unsigned int)num_t price:(double)price_t trigger:(unsigned int)trigger_t;

//额外崩溃信息
+(void)exceptionExtra:(NSString *)crashName crashreason:(NSString *)crashReason crashstack:(NSString *)crashStack;
////将数据库中的信息发送
//+(void)sendUserDBInfo;
//监测touchdown
+(void)startUIclick:(NSString *)UIEvent;
//被动接受点击屏幕位置
+(void)doUIClick:(int)x point_y:(int)y;
//结束屏幕touch监控事件
+(void)finishUIclick:(NSString *)UIEvent;
//游戏特殊数值统计
+(void)onKeyValue:(unsigned int)value keytype:(int)keyType trig:(int)trigger;

//上传流量大小统计
+(void)recordSendDataSize:(unsigned int)bytesize;
//上传流量大小统计
+(void)recordReceiveDataSize:(unsigned int)bytesize;

+(long)getUsageSend;
+(long)getUsageReceive;
//获得上传下载数组总流量大小
//+(NSString *)getZoomusageflow;
//上传log文件
+(void)reportErrorFile:(NSString *)logfilename;

+(void)setSendInfoInterval:(double)second;
//返回网络类型
+(int) backNetstatus;
//返回uuID
+(NSString*) backDeviceUUID;
//返回手机可用内存
+(int) backFreeMemory;
//返回手机总内存
+(int) backTotalMemory;
//控制手机屏幕变暗
+(void)controlIphnedark:(BOOL)oprndark;

+(void) SavePhoto:(NSString*) readAddr;
//+ (NSArray *)runningProcesses;
//+ (void) sendDeviceInfoToServer:(NSDictionary *)dict_t reporturl:(NSString *)reportUrl;
@end
