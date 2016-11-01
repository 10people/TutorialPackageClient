
#import "GameConfig.h"
#import "SDKHelper.h"
#import "DeviceHelper.h"
#import <AdSupport/AdSupport.h>

#import "sys/utsname.h"

#define MakeStringCopy(_x_) ((_x_ != NULL && [_x_ isKindOfClass:[NSString class]]) ? strdup ([_x_ UTF8String]) : NULL)


extern UIView*             UnityGetGLView();

extern "C" int _getGameVersion()
{
    return GAME_VERSION;
}


extern "C" int _getProgramVersion()
{
    return PROGRAM_VERSION;
}

extern "C" void _setScreenCanAutoLock(bool bCanLock)
{
	[UIApplication sharedApplication].idleTimerDisabled = !bCanLock;
}

extern "C" bool _isEnableGM()
{
	return (GM_ENABLE > 0);
}

extern "C" bool _isEnableShareCenter()
{
    return (SHARECENTER_ENABLE > 0);
}

extern "C" bool _IsEnableDebugMode()
{
	return (DEBUGMODE_ENABLE > 0);
}

extern "C" bool _isEnableUpdate()
{
    return (UPDATE_ENABLE > 0);
}

extern "C" const char *_getResDonwloadUrl()
{
    return MakeStringCopy(RES_DOWNLOAD_URL);
}

extern "C" void _appStart()
{
    //[SDKHelper AppStart];
}

extern "C" void _userLogin()
{
    [SDKHelper UserLogin];
}

extern "C" void _userLogout()
{
    [SDKHelper UserLogout];
}

extern "C" const char *_getChannelString()
{
    return MakeStringCopy(CHANNEL_STRING);
}

extern "C" const char *_getServerlistUrl()
{
    return MakeStringCopy(SERVERLIST_URL);
}

extern "C" const void _roleEnterGame(const char *strAccountID, const char *strRoleType, const char *strRoleName, int RoleLevel)
{
    [SDKHelper RoleEnterGame:[NSString stringWithUTF8String:strAccountID] :[NSString stringWithUTF8String:strRoleType] :[NSString stringWithUTF8String:strRoleName] :RoleLevel];
}

extern "C" const void _onAccountLogin(const char *strServerID, const char *strUserID)
{
    [SDKHelper OnAccountLogin:[NSString stringWithUTF8String:strServerID] :[NSString stringWithUTF8String:strUserID]];
}

extern "C" const void _makePay(const char *strRoleID, const char *groupID)
{
    [SDKHelper MakePay:[NSString stringWithUTF8String:strRoleID] :[NSString stringWithUTF8String:groupID]];
}

extern "C" const char *_getUpdateAppUrl()
{
    return MakeStringCopy(UPDATEAPP_URL);
}

extern "C" const char *_getAppDetailUrl()
{
    return MakeStringCopy(APP_DETAIL_URL);
}

extern "C" const char *_getMediaChannel()
{
    return MakeStringCopy(MEIDA_CHANNEL);
}

extern "C" const char *_getChannelID()
{
    return MakeStringCopy(CHANNEL_ID);
}

extern "C" const char *_getDeviceUDID()
{
    NSString *retString = [SDKHelper  GetDeviceUDID];
    return MakeStringCopy(retString);
    
}

extern "C" const char *_getDeviceType()
{
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString * strModel = [NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
    return MakeStringCopy(strModel);
}

extern "C" const char *_getDeviceVersion()
{
    NSString *retString = [[UIDevice currentDevice] systemVersion];
    return MakeStringCopy(retString);
}


extern "C" const int _getNetworkType()
{
    return [DeviceHelper GetNetworkState] ;
}

extern "C" const void _sendUserAction(const char *szAction)
{
    [SDKHelper UserActionEvent:[NSString stringWithUTF8String:szAction]];
}

extern "C" const void _enterUserCenter()
{
    [SDKHelper EnterUserCenter];
}

extern "C" const void _showCallCenter()
{
    [SDKHelper ShowCallCenter];
}

extern "C" const void _makePayWithGoodInfo(const char *roleID,
                                           const char *serverID,
                                           const char *roleName,
                                           const char *goodID,
                                           const char *goodName,
                                           const char *goodNum,
                                           const char *price,
                                           const char *registerID)
{
    [SDKHelper MakePayWithGoodInfo :
     [NSString stringWithUTF8String:roleID] :
     [NSString stringWithUTF8String:serverID] :
     [NSString stringWithUTF8String:roleName] :
     [NSString stringWithUTF8String:goodID] :
     [NSString stringWithUTF8String:goodName] :
     [NSString stringWithUTF8String:goodNum] :
     [NSString stringWithUTF8String:price] :
     [NSString stringWithUTF8String:registerID]];
}

extern "C" const void _reqPaymentGoodInfoList()
{
    [SDKHelper ReqPaymentGoodInfoList];
}

extern "C" const void _showRechargeRecord()
{
    [SDKHelper ShowRechargeRecord];
}
extern "C" const void _showSocialShareCenter(const char *szShareContent)
{
    [SDKHelper ShowSocialShareCenter:[NSString stringWithUTF8String:szShareContent]];
}

extern "C" const void _startBanner()
{
    [SDKHelper StartBanner];
}

extern "C" const void _showBanner(bool bShow)
{
    [SDKHelper ShowBanner:bShow ? YES : NO];
}

extern "C" const void _enableTestMode(bool bEnable)
{
    [SDKHelper ShowBanner:bEnable ? YES : NO];
}

extern "C" const char *_getGengxinURL()
{
    return MakeStringCopy(GENGXIN_URL);
}

extern "C" const char *_getCommonGengxinURL()
{
    return MakeStringCopy(COMMON_GENGXIN_URL);
}

extern "C" void _SGInitSDK(const char *appid,const char *appkey)
{
    [SDKHelper SGInitSDK:appid :appkey];
}

extern "C" void _SGSetUnityReceiver(const char* string)
{
    [SDKHelper SGSetUnityReceiver:string];
}

extern "C" void _SGStartRecord()
{
    [SDKHelper SGStartRecord];
}

extern "C" void _SGStopRecord()
{
    [SDKHelper SGStopRecord];
}

extern "C" void _SGCancelTask()
{
    [SDKHelper SGCancelTask];
}

extern "C" void _SGPlayAudio(const char *path)
{
    [SDKHelper SGPlayAudio:path];
}

extern "C" void _SGPlayAudioBuffer(Byte* bytes,int length)
{
    [SDKHelper SGPlayAudioBuffer: bytes :length];
}

extern "C" int _SGGetAudioBufferLength()
{
    return [SDKHelper SGGetAudioBufferLength];
}

extern "C" void _SGGetAudioBuffer(Byte* buffer)
{
    [SDKHelper SGGetAudioBuffer:buffer];
}

extern "C" void _SGSetMaxRecordInterval(float interval)
{
    [SDKHelper SGSetMaxRecordInterval:interval];
}

extern "C" const void _shareToFB(const char *szShareContent)
{
    [SDKHelper ShareToFB:[NSString stringWithUTF8String:szShareContent]];
}