using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

/// <summary>
/// IOS接口类，用于游戏调用IOS OC代码
/// 代码示例
///     点击登录按钮后添加   IOSHelper.doLogin();调用登录界面
///     点击商城按钮后添加   IOSHelper.doPay(roleId,groupId);调用支付界面
/// by lihao_yd     2015-12-07
/// </summary>

public class IOSHelper
{
	//================================游戏逻辑配置常量接口=============================================
	public static int Common_GetGameVersion()
	{
		return _getGameVersion();
	}

	public static int Common_GetProGramVersion()
	{
		return _getProgramVersion();
	}

	public static int Common_GetUpdateChannelAppConfig()
	{
		//return 0;
		return _getUpdateChannelAppConfig();
	}

	public static bool Common_IsEnableGm() //已废弃
	{
		return _isEnableGM();
	}

	public static bool Common_IsEnableDebugMode()
	{
		return _IsEnableDebugMode();
	}

	public static void Common_SetScreenCanAutoLock(bool bCanLock)
	{
		_setScreenCanAutoLock(bCanLock);
	}

	public static bool Common_IsEnableUpdate()
	{
		return _isEnableUpdate();
	}

	public static bool Common_isEnableShareCenter()
	{
		return _isEnableShareCenter();
	}

	public static string Common_GetResDownloadUrl()
	{
		return _getResDonwloadUrl();
	}

	public static string Common_GetServerListUrl()
	{
		return _getServerlistUrl();
	}

	public static string Common_GetUpdateAppUrl()
	{
		return _getUpdateAppUrl();
	}

	public static string Common_GetAppDetailUrl()
	{
		return _getAppDetailUrl();
	}

	public static string Common_GetGengXinUrl()
	{
		return _getGengxinURL();
	}

	public static string Common_GetCommonGengXinUrl()
	{
		return _getCommonGengxinURL();
	}

	public static string Common_GetCDNOrgUrl()
	{
		return _getCDNOrgUrl();
	}

	public static string Common_GetCDNReplaceUrl()
	{
		return _getCDNReplaceUrl();
	}

	public static string Common_GetCDNReplaceUrl2()
	{
		return _getCDNReplaceUrl2();
	}

	//================================设备信息接口=============================================
	public static int System_GetNetworkType()
	{
		return _getNetworkType();
	}

	public static string System_GetDeviceID()
	{
		return _getDeviceUDID();
	}

	public static string System_GetDeviceType()
	{
		return _getDeviceType();
	}

	public static string System_GetDeviceVersion()
	{
		return _getDeviceVersion();
	}
	//================================SDK相关接口=============================================
	public static void SDK_AppStart()
	{
		_appStart();
	}

	public static string SDK_GetMediaChannel()
	{
		return _getMediaChannel();
	}

	public static string SDK_GetChannelID()
	{
		return _getChannelID();
	}

	public static string SDK_GetChannelString()
	{
		return _getChannelString();
	}

	public static void SDK_SendUserAction(string strEvent)
	{
		_sendUserAction(strEvent);
	}

	public static void SDK_EnterUserCenter()
	{
		_enterUserCenter();
	}

	public static void SDK_ShowCallCenter()
	{
		_showCallCenter();
	}

	public static void SDK_ShareToFB(string text)
	{
		_shareToFB(text);
	}

	public static void SDK_ShareToFBWithImage(string url, string text)
	{
		_shareToFBWithImage(url, text);
	}

	public static void SDK_startBanner()
	{
		_startBanner();
	}

	public static void SDK_ShowBanner(bool bShow)
	{
		_showBanner(bShow);
	}

	public static void SDK_showSocialShareCenter(string szShareContent)
	{
		_showSocialShareCenter(szShareContent);
	}
	
	public static void SDK_ShowOverlapActivity(string url)
	{
		_ShowOverlapActivity(url);
	}

	public static void SDK_InitADYSDKWithProjectID(string projectID)
	{
		_instanceADYSDKWithProjectID(projectID);
	}

	public static void SDK_SetADYParamWithKey(string key, string value)
	{
		_setADYParamWithKey(key,value);
	}

	public static void SDK_LaunchCYMGADYH5Page()
	{
		_launchCYMGADYH5Page();
	}

	public static void SDK_ShowPolicy()
	{
		_ShowPolicy();
	}

	public static bool SDK_IsGuest()
	{
		return _IsGuest();
	}
	public static void SDK_guestBind()
	{
		_guestBind();
	}

	//=================================================================
	public static void doLogin()
	{
		_userLogin();
	}

	public static void doLogout()
	{
		_userLogout();
	}

	public static void onAccountLogin(string strServerID, string strUserID)
	{
		_onAccountLogin(strServerID,strUserID);
	}

	public static void onRoleEnterGame(string strAccountID, string strRoleType, string strRoleName, int RoleLevel)
	{
		_roleEnterGame(strAccountID, strRoleType, strRoleName, RoleLevel);
	}

	public static void CommitH5CustomServiceData(string serverName, string serverID, string roleName, string roleID, string gameVersion, string roleLevel, string vipLevel)
	{
		_setH5CustomServiceData(serverName, serverID, roleName, roleID, gameVersion, roleLevel, vipLevel);
	}

	public static void requestGoodsList()
	{
		_reqPaymentGoodInfoList();
	}

	public static void makePay(string strRoleID, string groupID)
	{
		_makePay(strRoleID,groupID);
	}
	public static void makePayWithGoodInfo(string roleID, string serverID, string roleName, string goodID, string goodName, string goodNum, string price, string registerID)
	{
		_makePayWithGoodInfo(roleID, serverID, roleName, goodID, goodName, goodNum, price, registerID);
	}
	public static void showRechargeRecord()
	{
		_showRechargeRecord();
	}

	//=============================================================================
	[DllImport("__Internal")]
	private static extern string _getDeviceUDID();
	[DllImport("__Internal")]
	private static extern int _getNetworkType();
	[DllImport("__Internal")]
	private static extern string _getDeviceType();
	[DllImport("__Internal")]
	private static extern string _getDeviceVersion();

	[DllImport("__Internal")]
	private static extern int _getGameVersion();
	[DllImport("__Internal")]
	private static extern int _getProgramVersion();
	[DllImport("__Internal")]
	private static extern int _getUpdateChannelAppConfig();
	[DllImport("__Internal")]
	private static extern bool _IsEnableDebugMode();
	[DllImport("__Internal")]
	private static extern bool _isEnableGM();
	[DllImport("__Internal")]
	private static extern void _setScreenCanAutoLock(bool bCanLock);
	[DllImport("__Internal")]
	private static extern bool _isEnableUpdate();
	[DllImport("__Internal")]
	private static extern bool _isEnableShareCenter();
	[DllImport("__Internal")]
	private static extern string _getServerlistUrl();
	[DllImport("__Internal")]
	private static extern string _getResDonwloadUrl();
	[DllImport("__Internal")]
	private static extern string _getUpdateAppUrl();
	[DllImport("__Internal")]
	private static extern string _getAppDetailUrl();
	[DllImport("__Internal")]
	private static extern string _getGengxinURL();
	[DllImport("__Internal")]
	private static extern string _getCommonGengxinURL();
	[DllImport("__Internal")]
	private static extern string _getCDNOrgUrl();
	[DllImport("__Internal")]
	private static extern string _getCDNReplaceUrl();
	[DllImport("__Internal")]
	private static extern string _getCDNReplaceUrl2();


	[DllImport("__Internal")]
	private static extern void _appStart();
	[DllImport("__Internal")]
    private static extern string _getMediaChannel();
	[DllImport("__Internal")]
	private static extern string _getChannelID();
	[DllImport("__Internal")]
	private static extern string _getChannelString();
	[DllImport("__Internal")]
	private static extern void _sendUserAction(string strEvent);
	[DllImport("__Internal")]
	private static extern void _enterUserCenter();
	[DllImport("__Internal")]
	private static extern void _showCallCenter();//客服
	[DllImport("__Internal")]
	private static extern void _shareToFB(string text);
	[DllImport("__Internal")]
	private static extern void _shareToFBWithImage(string url, string text);
	[DllImport("__Internal")]
	private static extern void _startBanner();
	[DllImport("__Internal")]
	private static extern void _showBanner(bool bShow);
	[DllImport("__Internal")]
	private static extern void _showSocialShareCenter(string szShareContent);
	[DllImport("__Internal")]
	private static extern void _ShowOverlapActivity(string url);
	[DllImport("__Internal")]
	private static extern void _instanceADYSDKWithProjectID(string projectID);
	[DllImport("__Internal")]
	private static extern void _setADYParamWithKey(string key, string value);
	[DllImport("__Internal")]
	private static extern void _launchCYMGADYH5Page();
	[DllImport("__Internal")]
	private static extern void _ShowPolicy();
	[DllImport("__Internal")]
	private static extern bool _IsGuest();
	[DllImport("__Internal")]
	private static extern void _guestBind();

	[DllImport("__Internal")]
	private static extern void _userLogin();
	[DllImport("__Internal")]
	private static extern void _userLogout();
	[DllImport("__Internal")]
	private static extern void _onAccountLogin(string strServerID, string strUserID);
	[DllImport("__Internal")]
	private static extern void _roleEnterGame(string strAccountID, string strRoleType, string strRoleName, int RoleLevel);
	[DllImport("__Internal")]
	private static extern void _setH5CustomServiceData(string serverName, string serverID, string roleName, string roleID, string gameVersion, string roleLevel, string vipLevel);
	[DllImport("__Internal")]
	private static extern void _reqPaymentGoodInfoList();
	[DllImport("__Internal")]
	private static extern void _makePay(string strRoleID, string groupID);
	[DllImport("__Internal")]
	private static extern void _makePayWithGoodInfo(string roleID, string serverID, string roleName, string goodID, string goodName, string goodNum, string price, string registerID);
	[DllImport("__Internal")]
	private static extern void _showRechargeRecord();

}
