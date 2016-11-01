//
//  SDKHelper.m
//  Unity-iPhone
//
//  Created by WD on 14-5-26.
//
//

#import "SDKHelper.h"


@implementation SDKHelper

+ (void)AppStart
{
   
}

+ (BOOL)AppOpenUrl:(NSURL *)url
{
    return YES;
}
+ (BOOL)AppHandleUrl:(NSURL *)url
{
    return YES;
}


+ (void)UserLogin
{
    
}

+ (void)UserLogout
{
    
}

+ (void)EnterUserCenter
{
    
}

+ (void)UserActionEvent:(NSString *)strEvent
{
    
}

+ (void)RoleEnterGame:(NSString *)strAccountID :(NSString *)strRoleType : (NSString *)strRoleName : (int)RoleLevel
{
    
}

+ (void)OnAccountLogin:(NSString *)strServerID : (NSString *)strUserID
{

}

+ (void)MakePay:(NSString *)strRoleID :(NSString *)strGroupID
{
    
}

+ (void)ShowCallCenter
{
    
}

+ (void)MakePayWithGoodInfo:(NSString *)strRoleID :(NSString *)strServerID : (NSString *)strRoleName :(NSString *)strGoodID :(NSString *)strGoodName  :(NSString *)strGoodNum : (NSString *)strPrice : (NSString *)strRegisterID
{
    
}

+ (void)ReqPaymentGoodInfoList
{
    
}

+ (void)ShowRechargeRecord
{
    
}

+ (void)ShowSocialShareCenter:(NSString *)strShareContent;
{
    
}

+ (void)StartBanner
{
    
}

+ (void)ShowBanner:(BOOL)bShow
{
    
}

+ (void)EnableTestMode:(BOOL)bEnable
{
    
}

+ (NSString *)GetDeviceUDID
{
    return @"";
}

+ (void) SGInitSDK:(const char *)appid :(const char *)appkey
{

}

+ (void) SGSetUnityReceiver:(const char* )string
{

}

+ (void) SGStartRecord
{

}

+ (void) SGStopRecord
{

}

+ (void) SGCancelTask
{

}

+ (void) SGPlayAudio:(const char *)path
{

}

+ (void) SGPlayAudioBuffer:(Byte* )bytes :(int)length
{

}

+ (int) SGGetAudioBufferLength
{
    return 0;
}

+ (void) SGGetAudioBuffer:(Byte* )buffer
{

}

+ (void) SGSetMaxRecordInterval:(float)buffer
{
    
}

+ (void)ShareToFB:(NSString *)strText
{
    
}

@end
