//********************************************************************
// 文件名: PlatformHelper.cs
// 描述: 移动设备相关接口控制类
// 作者: 
// 创建时间: 
//
// 修改历史:
// 2015-12-07 李浩修改 接口整理，Unity调用移动端的接口都在这里添加，然后按平台在这里分发
// 2016-03-14 吴婷婷修改，移植移动天龙相关接口功能及设置到Cabal
//********************************************************************
using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using Module.Log;
using Games.LogicObj;
using Games.GlobeDefine;
using System;

public class PlatformHelper
{
	public enum ChannelType
	{
		NONE,
		IOS_UNKNOWN,
		IOS_TEST,
		IOS_TY,
		IOS_APPSTORE,
		IOS_APPSTORE_KO,
		IOS_APPSTORE_TEST,
		IOS_PP,
		IOS_91,
		IOS_AS,
		IOS_XY,
		IOS_XY1,
		IOS_TONGBU,
		IOS_KUAIYONG,
		IOS_ITOOLS,
		IOS_360,
		IOS_APPSTORE_TW,
		TEST,
		ANDROID_360,
		ANDROID_UC,
		ANDROID_XIAOMI,
		ANDROID_WDJ,
		ANDROID_BAIDU,
		ANDROID_OPPO,
		ANDROID_ANZHI,
		ANDROID_LENOVO,
		ANDROID_DOWNJOY,
		ANDROID_HUAWEI,
		ANDROID_EWAN,
		ANDROID_CYOU,
		ANDROID_VIVO,
		ANDROID_KUPAI,
		ANDROID_ZHANGYUE,
		ANDROID_PPS,
		ANDROID_MEIZU,
		ANDROID_JINLI,
		ANDROID_YINGYONGBAO,
		ANDROID_KINGSOFT,
		ANDROID_SOGOU,
		ANDROID_BAOFENGWUXIAN,
		ANDROID_YOUKU,
		ANDROID_YYH,
		ANDROID_MITV,
		ANDROID_XMWAN,
		ANDROID_MOMO,
		ANDROID_EFUN,
		ANDROID_MIAN,
		ANDROID_DUOWAN,
		ANDROID_LEDOU,
		ANDROID_CHUYOU07073,
		ANDROID_PPTV,
		ANDROID_SY37X, //37wan
		ANDROID_YIDONGJIDI,
		ANDROID_XINYOU,
		ANDROID_LIANTONG,
		ANDROID_DIANXIN,
		ANDROID_GOOGLEPLAY_HK,
		ANDROID_TSTORE,
		ANDROID_NSTORE,
		ANDROID_GOOGLEPLAY_KO,
		ANDROID_ALITV,
		ANDROID_LINYOU,
		ANDROID_PARENTPACKAGE_WUWEIXIN,
		WP8_CYOU,
		ANDROID_XM_MOL,
		ANDROID_VN,
		ANDROID_XY,
		ANDROID_CHACHA,
		ANDROID_ITOOLS,
		ANDROID_8868,
		ANDROID_ganpu,
		ANDROID_ZHUOYI,
		ANDROID_KAOPUZHUSHOU,
		ANDROID_CHANGBA,
		ANDROID_JIFENG,
		ANDROID_PENGYOUWAN,
		ANDROID_XINLANG,
		ANDROID_YIJIE,
		ANDROID_SANXING,
	}

	// 是否是台湾版本
	public static bool IsChannelTW()
	{
		return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.TW;
	}

	public static bool IsChannelHK()
	{
		return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.HK;
	}

    public static bool IsChannelKO()
    {
        return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.KO;
    }

    //public static bool IsChannelVN()
    //{
    //    return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.VN;
    //}

    //public static bool IsChannelTH()
    //{
    //    return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.TH;
    //}

    //public static bool IsChannelXM()
    //{
    //    return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.XM;
    //}

	//是否是大陆默认版本
	public static bool IsChannelMainland()
	{
		return GlobeVar.TYPE_INTERNATION == Games.GlobeDefine.GameDefine_Globe.InternationType.DEFAULT;
	}

	public static bool IsCYSDK()
	{
		return (PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.TEST ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_APPSTORE_TEST ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_APPSTORE ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_TEST ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_TY ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.ANDROID_CYOU ||
				PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.WP8_CYOU);
	}

	// 以下是平台接口信息

#if UNITY_ANDROID && !UNITY_EDITOR

	#region Android

    private static void _unlockAchievement(int achievementID)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("AchievementID");
        writer.Write(achievementID.ToString());
        writer.WriteObjectEnd();
        AndroidHelper.doSdk("unlockAchievement", sb.ToString());
    }

    private static void _showGooglePlayService()
    {
        AndroidHelper.doSdk("showGooglePlayService", "");
    }

    private static void _submitRankScore(int type, int score)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("Type");
        writer.Write(type.ToString());
        writer.WritePropertyName("Score");
        writer.Write(score.ToString());
        writer.WriteObjectEnd();
        AndroidHelper.doSdk("submitRankScore", sb.ToString());
    }

	#endregion
#else

#endif

	public static void UploadBug(string butMsg)
	{
		//资料片9 AppStore版本，iOS9卡在Loading，经调试，Tessar在做网络请求和解析导致超时，主线程阻塞，以后直接干掉了 lihao_yd 2016-02-25

		//#if !UNITY_EDITOR && UNITY_IPHONE
		//		TessarSDK4iOS.OnexceptionExtra("C#Exception", butMsg, butMsg);
		//#endif

	}

	public static string getcurrentTime()
	{
		System.DateTime now = System.DateTime.Now;
		return now.ToString("yyyy-MM-dd HH:mm:SS");
	}

	public static string getCurrentDate()
	{
		System.DateTime now = System.DateTime.Now;
		return now.ToString("yyyy-MM-dd");
	}


    // 是否可以自动锁屏
    private static void _setScreenCanAutoLock(bool bCanLock)
    {
        if (!bCanLock)
        {
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
        }
    }

	// 获取版本类型枚举 (这个地方需要和王迪沟通下，看看是不是这样写的)
	public static ChannelType GetChannelType()
	{
		string strChannel = GetChannelString();
		if (strChannel == "IOSTest" || strChannel == "Test")
		{
			return ChannelType.IOS_TEST;
		}
		else if (strChannel == "AppStore" || strChannel == "AppStoreS")
		{
			return ChannelType.IOS_APPSTORE;
		}
		else if (strChannel == "TY" ||
			strChannel == "TY_XianFeng" ||
			strChannel == "TY_PingGuoYuan" ||
			strChannel == "TY_91Desk")
		{
			return ChannelType.IOS_TY;
		}
		else if (strChannel == "AppStoreTest")
		{
			return ChannelType.IOS_APPSTORE_TEST;
		}
		else if (strChannel == "PP")
		{
			return ChannelType.IOS_PP;
		}
		else if (strChannel == "91")
		{
			return ChannelType.IOS_91;
		}
		else if (strChannel == "XY")
		{
			return ChannelType.IOS_XY;
		}
		else if (strChannel == "XY1")
		{
			return ChannelType.IOS_XY1;
		}
		else if (strChannel == "TongBu")
		{
			return ChannelType.IOS_TONGBU;
		}
		else if (strChannel == "KuaiYong")
		{
			return ChannelType.IOS_KUAIYONG;
		}
		else if (strChannel == "iTools")
		{
			return ChannelType.IOS_ITOOLS;
		}
		else if (strChannel == "iOS360")
		{
			return ChannelType.IOS_360;
		}
		else if (strChannel == "AppStore_TW")
		{
			return ChannelType.IOS_APPSTORE_TW;
		}
		else if (strChannel == "ANDROID_360")
		{
			return ChannelType.ANDROID_360;
		}
		else if (strChannel == "ANDROID_UC")
		{
			return ChannelType.ANDROID_UC;
		}
		else if (strChannel == "ANDROID_XIAOMI")
		{
			return ChannelType.ANDROID_XIAOMI;
		}
		else if (strChannel == "ANDROID_WDJ")
		{
			return ChannelType.ANDROID_WDJ;
		}
		else if (strChannel == "ANDROID_BAIDU")
		{
			return ChannelType.ANDROID_BAIDU;
		}
		else if (strChannel == "ANDROID_OPPO")
		{
			return ChannelType.ANDROID_OPPO;
		}
		else if (strChannel == "ANDROID_ANZHI")
		{
			return ChannelType.ANDROID_ANZHI;
		}
		else if (strChannel == "ANDROID_LENOVO")
		{
			return ChannelType.ANDROID_LENOVO;
		}
		else if (strChannel == "ANDROID_DOWNJOY")
		{
			return ChannelType.ANDROID_DOWNJOY;
		}
		else if (strChannel == "ANDROID_HUAWEI")
		{
			return ChannelType.ANDROID_HUAWEI;
		}
		else if (strChannel == "ANDROID_EWAN")
		{
			return ChannelType.ANDROID_EWAN;
		}
		else if (strChannel == "ANDROID_CYOU")
		{
			return ChannelType.ANDROID_CYOU;
		}
		else if (strChannel == "ANDROID_VIVO")
		{
			return ChannelType.ANDROID_VIVO;
		}
		else if (strChannel == "ANDROID_KUPAI")
		{
			return ChannelType.ANDROID_KUPAI;
		}
		else if (strChannel == "ANDROID_ZHANGYUE")
		{
			return ChannelType.ANDROID_ZHANGYUE;
		}
		else if (strChannel == "ANDROID_PPS")
		{
			return ChannelType.ANDROID_PPS;
		}
		else if (strChannel == "ANDROID_MEIZU")
		{
			return ChannelType.ANDROID_MEIZU;
		}
		else if (strChannel == "ANDROID_JINLI")
		{
			return ChannelType.ANDROID_JINLI;
		}
		else if (strChannel == "ANDROID_YINGYONGBAO")
		{
			return ChannelType.ANDROID_YINGYONGBAO;
		}
		else if (strChannel == "ANDROID_KINGSOFT")
		{
			return ChannelType.ANDROID_KINGSOFT;
		}
		else if (strChannel == "ANDROID_SOGOU")
		{
			return ChannelType.ANDROID_SOGOU;
		}
		else if (strChannel == "ANDROID_BAOFENGWUXIAN")
		{
			return ChannelType.ANDROID_BAOFENGWUXIAN;
		}
		else if (strChannel == "ANDROID_YOUKU")
		{
			return ChannelType.ANDROID_YOUKU;
		}
		else if (strChannel == "ANDROID_YYH")
		{
			return ChannelType.ANDROID_YYH;
		}
		else if (strChannel == "ANDROID_MITV")
		{
			return ChannelType.ANDROID_MITV;
		}
		else if (strChannel == "ANDROID_XMWAN")
		{
			return ChannelType.ANDROID_XMWAN;
		}
		else if (strChannel == "ANDROID_MOMO")
		{
			return ChannelType.ANDROID_MOMO;
		}
		else if (strChannel == "ANDROID_EFUN")
		{
			return ChannelType.ANDROID_EFUN;
		}
		else if (strChannel == "ANDROID_MIAN")
		{
			return ChannelType.ANDROID_MIAN;
		}
		else if (strChannel == "ANDROID_DUOWAN")
		{
			return ChannelType.ANDROID_DUOWAN;
		}
		else if (strChannel == "ANDROID_LEDOU")
		{
			return ChannelType.ANDROID_LEDOU;
		}
		else if (strChannel == "ANDROID_CHUYOU07073")
		{
			return ChannelType.ANDROID_CHUYOU07073;
		}
		else if (strChannel == "ANDROID_PPTV")
		{
			return ChannelType.ANDROID_PPTV;
		}
		else if (strChannel == "ANDROID_SY37X")
		{
			return ChannelType.ANDROID_SY37X;
		}
		else if (strChannel == "ANDROID_YIDONGJIDI")
		{
			return ChannelType.ANDROID_YIDONGJIDI;
		}
		else if (strChannel == "ANDROID_LIANTONG")
		{
			return ChannelType.ANDROID_LIANTONG;
		}
		else if (strChannel == "ANDROID_DIANXIN")
		{
			return ChannelType.ANDROID_DIANXIN;
		}
		else if (strChannel == "ANDROID_XINYOU")
		{
			return ChannelType.ANDROID_XINYOU;
		}
		else if (strChannel == "ANDROID_LINYOU")
		{
			return ChannelType.ANDROID_LINYOU;
		}
		else if (strChannel == "ANDROID_PARENTPACKAGE_WUWEIXIN")
		{
			return ChannelType.ANDROID_PARENTPACKAGE_WUWEIXIN;
		}
		else if (strChannel == "ANDROID_TEST")
		{
			return ChannelType.TEST;
		}
		else if (strChannel == ChannelType.WP8_CYOU.ToString())
		{
			return ChannelType.WP8_CYOU;
		}
		else if (strChannel == "ANDROID_GOOGLEPLAY_HK")
		{
			return ChannelType.ANDROID_GOOGLEPLAY_HK;
		}
		else if (strChannel == "ANDROID_TSTORE")
		{
			return ChannelType.ANDROID_TSTORE;
		}
		else if (strChannel == "ANDROID_NSTORE")
		{
			return ChannelType.ANDROID_NSTORE;
		}
		else if (strChannel == "ANDROID_GOOGLEPLAY_KO")
		{
			return ChannelType.ANDROID_GOOGLEPLAY_KO;
		}
		else if (strChannel == "AppStore_KO")
		{
			return ChannelType.IOS_APPSTORE_KO;
		}
		else if (strChannel == "ANDROID_ALITV")
		{
			return ChannelType.ANDROID_ALITV;
		}
		else if (strChannel == "ANDROID_XM_MOL")
		{
			return ChannelType.ANDROID_XM_MOL;
		}
		else if (strChannel == "ANDROID_VN")
		{
			return ChannelType.ANDROID_VN;
		}
		else if (strChannel == "ANDROID_XY")
		{
			return ChannelType.ANDROID_XY;
		}
		else if (strChannel == "ANDROID_CHACHA")
		{
			return ChannelType.ANDROID_CHACHA;
		}
		else if (strChannel == "ANDROID_ITOOLS")
		{
			return ChannelType.ANDROID_ITOOLS;
		}
		else if (strChannel == "ANDROID_8868")
		{
			return ChannelType.ANDROID_8868;
		}
		else if (strChannel == "ANDROID_ganpu")
		{
			return ChannelType.ANDROID_ganpu;
		}
		else if (strChannel == "ANDROID_ZHUOYI")
		{
			return ChannelType.ANDROID_ZHUOYI;
		}
		else if (strChannel == "ANDROID_KAOPUZHUSHOU")
		{
			return ChannelType.ANDROID_KAOPUZHUSHOU;
		}
		else if (strChannel == "ANDROID_CHANGBA")
		{
			return ChannelType.ANDROID_CHANGBA;
		}
		else if (strChannel == "ANDROID_JIFENG")
		{
			return ChannelType.ANDROID_JIFENG;
		}
		else if (strChannel == "ANDROID_PENGYOUWAN")
		{
			return ChannelType.ANDROID_PENGYOUWAN;
		}
		else if (strChannel == "ANDROID_XINLANG")
		{
			return ChannelType.ANDROID_XINLANG;
		}
		else if (strChannel == "ANDROID_YIJIE")
		{
			return ChannelType.ANDROID_YIJIE;
		}
		else if (strChannel == "ANDROID_SANXING")
		{
			return ChannelType.ANDROID_SANXING;
		}
		else
		{
			if (Application.platform == RuntimePlatform.IPhonePlayer)
			{
				return ChannelType.IOS_UNKNOWN;
			}
		}
		return ChannelType.TEST;
	}

	public enum NetworkState
	{
		NOTCONNECT = 0,
		STATE_WIFI = 1,
		STATE_3G = 2,
		STATE_2G = 3,
		STATE_UNKNOWN = 4,
	};

	//*****************************************获取移动设备系统信息相关接口*********************************************************

	// 获取网络状况
	public static NetworkState GetNetworkState()
	{
		int nNetworkState = 0;
#if  UNITY_WP8 && !UNITY_EDITOR
        nNetworkState = 1;
#elif UNITY_ANDROID && !UNITY_EDITOR
        string ret = AndroidHelper.platformHelper("getNetworkType");
        nNetworkState =  int.Parse(ret);;
#elif UNITY_IPHONE && !UNITY_EDITOR
		nNetworkState = IOSHelper.System_GetNetworkType();
#else
		nNetworkState = 1;
#endif
		switch (nNetworkState)
		{
			case -1:
			case 0:
				return NetworkState.NOTCONNECT;
			case 1:
				return NetworkState.STATE_WIFI;
			case 2:
				return NetworkState.STATE_3G;
			case 3:
				return NetworkState.STATE_2G;
		}
		return NetworkState.STATE_UNKNOWN;
	}

	// 获取设备唯一ID
	public static string GetDeviceUDID()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetDeviceID();
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return "Device." + LoginData.accountData.m_account;
        return AndroidHelper.platformHelper("getDeviceUDID");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.System_GetDeviceID();
#else
		// 编辑器和windows下返回Device.account
		return "Device." + LoginData.accountData.m_account;
#endif
	}

	// 获取设备类型
	public static string GetDeviceType()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return "";
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return "";
        return AndroidHelper.platformHelper("getDeviceType");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.System_GetDeviceType();
#else
		return "";
#endif
	}

	// 获取设备系统版本号
	public static string GetDeviceVersion()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return "";
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return "";
        return AndroidHelper.platformHelper("getDeviceVersion");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.System_GetDeviceVersion();
#else
		return "";
#endif
	}

	//*****************************************获取游戏配置信息相关接口*********************************************************
	// 游戏大版本
	public static int GetGameVersion()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetGameVersion();
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return (int)VERSION.GameVersion;
		string ret = AndroidHelper.platformHelper("getGameVersion");
        return int.Parse(ret);
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetGameVersion();
#else
		return (int)VERSION.GameVersion;
#endif
	}

	// 程序版本
	public static int GetProgramVersion()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetProgramVersion();
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return (int)VERSION.ProgramVersion;
		string ret = AndroidHelper.platformHelper("getProgramVersion");
        return int.Parse(ret);
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetProGramVersion();
#else
		return (int)VERSION.ProgramVersion;
#endif
	}

	//获取渠道强更配置版本号,默认为0，当不改变服务器版本号和程序版本号时，通过这个值实现单独渠道强更 lihao_yd 2015-12-08
	public static int GetUpdateChannelAppConfig()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
		return WPSDKHelperScript.Instance().WPGetUpdateChannelAppConfig();
#elif UNITY_ANDROID && !UNITY_EDITOR
		string ret = AndroidHelper.platformHelper("getValue","UPDATE_CHANNEL_APP_CONFIG_VERSION");
		return int.Parse(ret);
		//return 0;
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetUpdateChannelAppConfig();
#else
		return 0;
#endif
	}

	// 是否可以使用GM指令 移动端配置已弃用
	public static bool IsEnableGM()
	{
		return true;
	}

	// 设置是否可以自动锁屏
	public static void SetScreenCanAutoLock(bool bCanLock)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.platformHelper("setScreenCanAutoLock", bCanLock.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.Common_SetScreenCanAutoLock(bCanLock);
#else

#endif
	}

	// 是否开启资源更新
	public static bool IsEnableUpdate()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPIsEnableUpdate();
#elif UNITY_ANDROID && !UNITY_EDITOR
		string ret = AndroidHelper.platformHelper("isEnableUpdate");
        if ("1".Equals(ret))
        {
            return true;
        }
        else
        {
            return false;
        }
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_IsEnableUpdate();
#else
		return false;
#endif
	}

	// 资源更新地址
	public static string GetResDonwloadUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        if (null != WPSDKHelperScript.Instance())
        {
            return WPSDKHelperScript.Instance().WPgetResDonwloadUrl();
        }
        else
        {
            return "";
        }
#elif UNITY_ANDROID && !UNITY_EDITOR
		return AndroidHelper.platformHelper("getResDonwloadUrl");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetResDownloadUrl();
#else
		return "http://127.0.0.1:8080/tlbb/res";
#endif
	}

	// 获取服务器列表地址
	public static string GetServerListUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        string strServerListPath = WPSDKHelperScript.Instance().WPGetServerlistUrl(); 
#elif UNITY_ANDROID && !UNITY_EDITOR
        string strServerListPath = AndroidHelper.platformHelper("getServerlistUrl");
#elif UNITY_IPHONE && !UNITY_EDITOR
		string strServerListPath = IOSHelper.Common_GetServerListUrl();
#else
		string strServerListPath = "0";
#endif
		if (string.Equals(strServerListPath, "0") || string.IsNullOrEmpty(strServerListPath))
		{
			//如果从平台URL获取错误，使用包体内的IPList
#if UNITY_ANDROID && !UNITY_EDITOR 
            strServerListPath = Application.streamingAssetsPath + "/IPList.txt";
#else // IOS PC Editor
			strServerListPath = "file://" + Application.streamingAssetsPath + "/IPList.txt";
#endif
		}
		else
		{
			strServerListPath = DownloadHelper.AddTimestampToUrl(strServerListPath);
		}
		return strServerListPath;
	}

	// 获取包体更新地址
	public static string GetUpdateAppUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPgetUpdateAppUrl();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getUpdateAppUrl");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetUpdateAppUrl();
#else
		return "http://127.0.0.1:8080/tlbb/res";
#endif
	}

	//获取应用的Detail介绍Url
	public static string GetAppDetailUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPgetAppDetailUrl();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue","APP_DETAIL_URL");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetAppDetailUrl();
#else
		return "https://itunes.apple.com/cn/app/tian-long-ba-bu3d/id824104400?l=zh&ls=1&mt=8";
#endif
	}

	// 是否开启调试模式：左上角调试框，FPS
	public static bool IsEnableDebugMode()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPIsEnableDebugMode();
#elif UNITY_ANDROID && !UNITY_EDITOR
		return true;
        //return AndroidHelper.isDebug;
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_IsEnableDebugMode();
#else
		return true;
#endif
	}

	// 公告更新路径
	public static string GetGengxinInfoURL()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetGengxinInfoURL();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue","GONGGAO_CHANNEL");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetGengXinUrl();
#else
        return @"http://ydcabal.changyou.com/cabal3D/conf/notice/login/Notice_AppStore.txt";
#endif
	}

	public static bool IsEnableShareCenter()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return true;
#elif UNITY_ANDROID && !UNITY_EDITOR
        return true;
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_isEnableShareCenter();
#else
		return true;
#endif
	}

	// 更新公告_备用公告地址
	public static string GetCommonGengxinInfoURL()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetCommonGengxinInfoURL();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue","GONGGAO_COMMON");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetCommonGengXinUrl();
#else
        return @"http://ydcabal.changyou.com/cabal3D/conf/notice/login/Notice_AppStore.txt";
#endif
	}

	// CDN地址
	public static string GetCDNOrgUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetCDNOrgUrl();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue", "CDN_ORG_URL");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetCDNOrgUrl();
#else
		return "";
#endif
	}

	//备用CDN1
	public static string GetCDNReplaceUrl()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetCDNReplaceUrl();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue", "CDN_REPLACE_URL");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetCDNReplaceUrl();
#else
		return "";
#endif
	}

	//备用CDN2
	public static string GetCDNReplaceUrl2()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPGetCDNReplaceUrl2();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getValue", "CDN_REPLACE_URL2");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.Common_GetCDNReplaceUrl2();
#else
		return "";
#endif
	}

	//*****************************************SDK相关接口*********************************************************
	public static void AppStart()
	{
#if UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_AppStart();
#else

#endif
	}

	// 媒体渠道ID
	public static string GetMediaChannel()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().WPgetMediaChannel();
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return "";
        return AndroidHelper.platformHelper("getMediaChannel");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.SDK_GetMediaChannel();
#else
		return "";
#endif
	}

	// 获取渠道标识
	public static string GetChannelID()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return WPSDKHelperScript.Instance().channelid();
#elif UNITY_ANDROID && !UNITY_EDITOR
		//return "";
        return AndroidHelper.platformHelper("getChannelID");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.SDK_GetChannelID();
#else
		return "";
#endif
	}

	// 获取版本类型枚举
	private static string GetChannelString()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return ChannelType.WP8_CYOU.ToString();
#elif UNITY_ANDROID && !UNITY_EDITOR
        return AndroidHelper.platformHelper("getChannelString");
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.SDK_GetChannelString();
#else
		return ChannelType.TEST.ToString();
#endif
	}

	// 用户登录
	public static void UserLogin()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        if (null != WPSDKHelperScript.Instance())
        {
            WPSDKHelperScript.Instance().WPStartGame();
        }
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("doLogin","");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.doLogin();
#else

#endif
	}

	// 用户登出,注销
	public static void UserLogout()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        if (null != WPSDKHelperScript.Instance())
        {
            WPSDKHelperScript.Instance().WPLogOut();
        }
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("doLogout","");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.doLogout();
#else

#endif
	}

	// 推送 只有Android在移动端接口实现
	public static void Notification(string news)
	{
#if UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.doSdk("notification",news);
#endif
	}

	//切换账号，只有Android端有实现
	public static void ChangeAccount()
	{
#if UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("doChangeAccount","");
#endif
	}

	// 统计日志：角色进入游戏
	public static void RoleEnterGame(string strAccountID, string strRoleType, string strRoleName, int RoleLevel)
	{
#if  UNITY_WP8 && !UNITY_EDITOR

#elif UNITY_ANDROID && !UNITY_EDITOR
		string serverId = PlayerPreferenceData.LastServer.ToString();
		string serverName = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer).m_name;

		System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("AccountId");
        writer.Write(strAccountID);
        if (PlatformHelper.IsChannelTW())
        {
            //GUID 
            UInt64 roleId = Convert.ToUInt64(strAccountID);
            string guid16 = string.Format("{0:X16}", roleId);
            writer.WritePropertyName("GUID16");
            writer.Write(guid16);
        }
        writer.WritePropertyName("RoleType");
        writer.Write(strRoleType);
        writer.WritePropertyName("RoleName");
        writer.Write(strRoleName);
        writer.WritePropertyName("RoleLevel");
        writer.Write(RoleLevel);
        writer.WritePropertyName("ServerId");
        writer.Write(serverId);
        writer.WritePropertyName("ServerName");
        writer.Write(serverName);
        writer.WriteObjectEnd();

        AndroidHelper.platformHelper("roleEnterGame", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.onRoleEnterGame(strAccountID, strRoleType, strRoleName, RoleLevel);
		//提交新版客服页面参数
		LoginData.ServerListData lastServerData = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer);
		LoginData.PlayerRoleData lastRoleData = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		if (null != lastServerData && null != lastRoleData && null != mainPlayer)
		{
			IOSHelper.CommitH5CustomServiceData(lastServerData.m_name,
				lastServerData.m_id.ToString(),
				lastRoleData.name,
				string.Format("{0:X16}", lastRoleData.guid),
				GCGame.Utils.GetVersionString(),
				mainPlayer.BaseAttr.Level.ToString(),
				VipData.GetVipLv().ToString());
		}
#else

#endif
	}

	// 统计日志：进入游戏
	public static void OnAccountLogin(string strServerID, string strUserID)
	{
#if  UNITY_WP8 && !UNITY_EDITOR

#elif UNITY_ANDROID && !UNITY_EDITOR
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("ServerID");
        writer.Write(strServerID);
        writer.WritePropertyName("UserID");
        writer.Write(strUserID);
        writer.WritePropertyName("OID");
        writer.Write(LoginData.accountData.m_oid.ToString());
        writer.WritePropertyName("AccessToken");
        writer.Write(LoginData.accountData.m_accessToken.ToString());
        writer.WriteObjectEnd();
        AndroidHelper.platformHelper("onAccountLogin", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.onAccountLogin(strServerID,strUserID);
#else

#endif
	}

	// 请求商品列表
	public static void ReqPaymentGoodInfoList()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        WPSDKHelperScript.Instance().WPreqPaymentGoodInfoList();
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("reqPaymentGoodInfoList","");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.requestGoodsList();
#else

        RechargeData.Text();
        if (null != RechargeController.Instance())
        {
            RechargeController.Instance().UpdateRechargeList();
        }
#endif
	}

	// 支付
	public static void MakePay()
	{
		if (Application.platform == RuntimePlatform.IPhonePlayer)
		{
			if (GetChannelType() == ChannelType.IOS_APPSTORE || GetChannelType() == ChannelType.IOS_APPSTORE_TEST)
			{
#if UNITY_IPHONE && !UNITY_EDITOR
				IOSHelper.makePay(string.Format("{0:X16}", PlayerPreferenceData.LastRoleGUID), PlayerPreferenceData.LastServer.ToString());
#endif
				return;
			}
		}
		else if (Application.platform == RuntimePlatform.Android)
		{
#if UNITY_ANDROID && !UNITY_EDITOR
			if (GameManager.gameManager == null || GameManager.gameManager.PlayerDataPool == null)
			{
				return;
			}
			PayActivityData payActivityData = GameManager.gameManager.PlayerDataPool.PayActivity;

			System.Text.StringBuilder sb = new System.Text.StringBuilder();
			JsonWriter writer = new JsonWriter(sb);
			writer.WriteObjectStart();
			writer.WritePropertyName("ROLEID");
			writer.Write(string.Format("{0:X16}", PlayerPreferenceData.LastRoleGUID));
			writer.WritePropertyName("UID");
			writer.Write(LoginData.accountData.m_userID);
			writer.WritePropertyName("SERVERID");
			writer.Write(PlayerPreferenceData.LastServer.ToString());
			writer.WritePropertyName("OID");
			writer.Write(LoginData.accountData.m_oid);
			writer.WritePropertyName("TOKEN");
			writer.Write(LoginData.accountData.m_accessToken);
			writer.WritePropertyName("ROLENAME");
			writer.Write(LoginData.m_sRoleName);
			if (PlatformHelper.IsChannelTW())
			{
				// 成长基金
				writer.WritePropertyName("CZJJ_SHOWFLAG");
				writer.Write(payActivityData.IsGrowUpFlag() == true ? "0" : "1");
				// 招财进宝
				writer.WritePropertyName("ZCJB_SHOWFLAG");
				writer.Write(payActivityData.IsMonthCardFlag() == true ? "0" : "1");
				writer.WritePropertyName("ZCJB_SURPLUSDAY");
				writer.Write(payActivityData.GetMonthCardLeftDay().ToString());
			}
			LoginData.PlayerRoleData curRole = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
			if (null != curRole)
			{
				writer.WritePropertyName("ROLELEVEL");
				writer.Write(curRole.level.ToString());
			}
			writer.WriteObjectEnd();

			AndroidHelper.doSdk("doOrder", sb.ToString());
#endif
			return;
		}

		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if (null != mainPlayer)
		{
			mainPlayer.SendNoticMsg(false, "#{2136}");
		}
	}

	// 使用GOODINFO方式支付
	public static bool MakePayWithGoodInfo(RechargeData.GoodInfo curGoodInfo)
	{
		if (null == curGoodInfo)
		{
			LogModule.ErrorLog("goodinfo null");
			return false;
		}
		LoginData.PlayerRoleData curRole = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
		if (null == curRole)
		{
			LogModule.ErrorLog("get role data fail");
			return false;
		}

#if  UNITY_WP8 && !UNITY_EDITOR
        WPSDKHelperScript.Instance().WPmakePayWithGoodInfo(string.Format("{0:X16}", curRole.guid),PlayerPreferenceData.LastServer.ToString(), curRole.name, 
		curGoodInfo.goods_id, curGoodInfo.goods_name, curGoodInfo.goods_number, curGoodInfo.goods_price, curGoodInfo.goods_register_id);
#elif UNITY_ANDROID && !UNITY_EDITOR
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("roleID");
        writer.Write(string.Format("{0:X16}", curRole.guid));
        writer.WritePropertyName("serverId");
        writer.Write(PlayerPreferenceData.LastServer.ToString());
        writer.WritePropertyName("roleName");
        writer.Write(curRole.name);
        writer.WritePropertyName("goodsId");
        writer.Write(curGoodInfo.goods_id);
        writer.WritePropertyName("goodsName");
        writer.Write(curGoodInfo.goods_name);
        writer.WritePropertyName("goodsNum");
        writer.Write(curGoodInfo.goods_number);
        writer.WritePropertyName("goodsPrice");
        writer.Write(curGoodInfo.goods_price);
        writer.WritePropertyName("goodsDesc");
        writer.Write(curGoodInfo.goods_describe);
        writer.WritePropertyName("goodsRegisterId");
        writer.Write(curGoodInfo.goods_register_id);
        writer.WritePropertyName("oid");
        writer.Write(LoginData.accountData.m_oid);
        writer.WritePropertyName("token");
        writer.Write(LoginData.accountData.m_accessToken);
        writer.WritePropertyName("vip");
        writer.Write("0");
        writer.WritePropertyName("balance");
        writer.Write("0");
        writer.WritePropertyName("roleLevel");
        writer.Write("1");
        writer.WritePropertyName("partyName");
        writer.Write("partyName");
        writer.WritePropertyName("pushInfo");
        writer.Write("pushInfo");
        writer.WriteObjectEnd();
        AndroidHelper.doSdk("makePayWithGoodInfo", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.makePayWithGoodInfo(string.Format("{0:X16}", curRole.guid),PlayerPreferenceData.LastServer.ToString(), curRole.name, 
		curGoodInfo.goods_id, curGoodInfo.goods_name, curGoodInfo.goods_number, curGoodInfo.goods_price, curGoodInfo.goods_register_id);
#else

#endif
		return true;
	}

	// 显示充值记录
	public static void ShowRechargeRecord()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        WPSDKHelperScript.Instance().WPShowChargeRecord();
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("showRechargeRecord", "");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.showRechargeRecord();
#else

#endif
	}

	// 发送客户端自定义事件 MBI统计
	public static void SendUserAction(string strEvent)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        WPSDKHelperScript.Instance().WPSendUserAction(strEvent);
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.platformHelper("sendUserAction", strEvent);
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_SendUserAction(strEvent);
#else

#endif
	}

	// 进入用户中心
	public static void EnterUserCenter()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
        AndroidHelper.doSdk("enterUserCenter","");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_EnterUserCenter();
#else

#endif
	}

	// 打开客服界面
	public static void ShowCallCenter()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        WPSDKHelperScript.Instance().WPReqShowCallCenter();
#elif UNITY_ANDROID && !UNITY_EDITOR
        LoginData.ServerListData lastServerData = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer);
		LoginData.PlayerRoleData lastRoleData = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		if (null != lastServerData && null != lastRoleData && null != mainPlayer)
		{
			System.Text.StringBuilder sb = new System.Text.StringBuilder();
			JsonWriter writer = new JsonWriter(sb);
			writer.WriteObjectStart();
			writer.WritePropertyName("serverName");
			writer.Write(lastServerData.m_name);
			writer.WritePropertyName("serverId");
			writer.Write(lastServerData.m_id.ToString());
			writer.WritePropertyName("roleName");
			writer.Write(lastRoleData.name);
			writer.WritePropertyName("roleId");
			writer.Write(string.Format("{0:X16}", lastRoleData.guid));
			writer.WritePropertyName("roleGrade");
			writer.Write(mainPlayer.BaseAttr.Level.ToString());
			writer.WritePropertyName("vipGrade");
			writer.Write(VipData.GetVipLv().ToString());
			writer.WritePropertyName("version");
			writer.Write(GCGame.Utils.GetVersionString());
			writer.WriteObjectEnd();
			
			AndroidHelper.doSdk("showCallCenter", sb.ToString());
		}
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_ShowCallCenter();
#else

#endif
	}

	//打开社会化分享界面
	//参数为要分享的内容
	public static void ShowSocialShareCenter(string szShareContent)
	{
		if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SNS))
		{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
			AndroidHelper.doSdk("share",szShareContent);
#elif UNITY_IPHONE && !UNITY_EDITOR
			IOSHelper.SDK_showSocialShareCenter(szShareContent);
#else

#endif
		}
	}

	//初始化友盟社会化组件
	public static void StartAD()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR

#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_startBanner();
#else

#endif
	}

	public static void ShowAD(bool bShow)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR

#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_ShowBanner(bShow);
#else

#endif
	}

	public static void OnRoleCreate(string roleName, string roleLevel)
	{

#if UNITY_ANDROID && !UNITY_EDITOR
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();

        writer.WritePropertyName("RoleName");
        writer.Write(roleName);

        writer.WritePropertyName("RoleLevel");
        writer.Write(roleLevel);

        writer.WriteObjectEnd();

        AndroidHelper.platformHelper("onRoleCreate", sb.ToString());    
#endif
	}

	public static void ShareToFB(string text)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        JsonWriter writer = new JsonWriter(sb);
        writer.WriteObjectStart();
        writer.WritePropertyName("Text");
        writer.Write(text);
        writer.WriteObjectEnd();
        AndroidHelper.doSdk("shareToFB", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_ShareToFB(text);
#else

#endif
	}

	public static void ShareToFBWithImage(string imageURL, string text)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		System.Text.StringBuilder sb = new System.Text.StringBuilder();
		JsonWriter writer = new JsonWriter(sb);
		writer.WriteObjectStart();
		writer.WritePropertyName("imageURL");
		writer.Write(imageURL);
		writer.WritePropertyName("text");
		writer.Write(text);
		writer.WriteObjectEnd();
		AndroidHelper.doSdk("shareToFBWithImage", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_ShareToFBWithImage(imageURL,text);
#else

#endif
	}

	public static void UnlockAchievement(GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE achievement)
	{
#if UNITY_ANDROID && !UNITY_EDITOR
		if (IsChannelTW() || (GetChannelType() == ChannelType.ANDROID_GOOGLEPLAY_KO))
		{
			_unlockAchievement((int)achievement);
		}
#endif
	}

	public static void ShowGooglePlayService()
	{
#if UNITY_ANDROID && !UNITY_EDITOR
		if (IsChannelTW() || (GetChannelType() == ChannelType.ANDROID_GOOGLEPLAY_KO))
		{
			_showGooglePlayService();
		}
#endif
	}

	public static void SubmitRankScore(GameDefine_Globe.GOOGLEPLAY_RANK_TYPE type, int score)
	{
#if UNITY_ANDROID && !UNITY_EDITOR
		if (IsChannelTW() || (GetChannelType() == ChannelType.ANDROID_GOOGLEPLAY_KO))
		{
			_submitRankScore((int)type, score);
		}
#endif
	}

	public static bool IsEnableGooglePlayService()
	{
#if UNITY_ANDROID && !UNITY_EDITOR
		if (IsChannelTW())
		{
			string efunChannelType = AndroidHelper.platformHelper("getValue","EFUN_CHANNEL_TYPE");
			if ("0".Equals(efunChannelType))
			{
				return true;
			}
		}
		if (GetChannelType() == ChannelType.ANDROID_GOOGLEPLAY_KO)
		{
			return true;
		}
#endif
		return false;
	}

	public static string GetComplainURL()
	{
		return "http://gmreq.changyou.com:8005/GmComplaint/server";
	}

	// 打开交叉活动
	public static void ShowOverlapActivity(System.UInt64 guId, string userName, int level)
	{
//		https://promo.nexon.com/tlbbcross?userId=xxx&serverId=xxx&userName=xxx&level=xxx
//		string url = "https://promo.nexon.com/tlbbcross" + "?userId=" + WWW.EscapeURL(guId.ToString()) + "&serverId=" +
//			WWW.EscapeURL(PlayerPreferenceData.LastServer.ToString()) + "&userName=" + WWW.EscapeURL(userName) + "&level=" + WWW.EscapeURL(level.ToString());

//#if  UNITY_WP8 && !UNITY_EDITOR
        
//#elif UNITY_ANDROID && !UNITY_EDITOR
//		AndroidHelper.doSdk("showOverlapActivity", url);
//#elif UNITY_IPHONE && !UNITY_EDITOR
//		IOSHelper.SDK_ShowOverlapActivity(url);
//#else

//#endif
	}

	//韩国渠道
	public static void ShowPolicy()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.doSdk("showPolicy", "");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_ShowPolicy();
#else

#endif
	}

	public static bool IsGuest()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        return false;
#elif UNITY_ANDROID && !UNITY_EDITOR
		string ret = AndroidHelper.platformHelper("isGuest");
		if ("1".Equals(ret))
		{
			return true;
		}
		else
		{
			return false;
		}
#elif UNITY_IPHONE && !UNITY_EDITOR
		return IOSHelper.SDK_IsGuest();
#else
		return true;
#endif
	}

	public static void guestBind()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.doSdk("guestBind", "");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_guestBind();
#else

#endif
	}

	//初始化爱调研SDK
	public static void InstanceADYSDKWithProjectID(string projectID)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.doSdk("instanceADYSDKWithProjectID",projectID);
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_InitADYSDKWithProjectID(projectID);
#else

#endif
	}

	//设置爱调研所需参数
	public static void SetADYParamWithKey(string key, string value)
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		System.Text.StringBuilder sb = new System.Text.StringBuilder();
		JsonWriter writer = new JsonWriter(sb);
		writer.WriteObjectStart();
		writer.WritePropertyName("key");
		writer.Write(key);
		writer.WritePropertyName("value");
		writer.Write(value);
		writer.WriteObjectEnd();
		AndroidHelper.doSdk("setADYParamWithKey", sb.ToString());
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_SetADYParamWithKey(key,value);
#else

#endif
	}

	//加载爱调研H5页面
	public static void LaunchCYMGADYH5Page()
	{
#if  UNITY_WP8 && !UNITY_EDITOR
        
#elif UNITY_ANDROID && !UNITY_EDITOR
		AndroidHelper.doSdk("launchCYMGADYH5Page", "");
#elif UNITY_IPHONE && !UNITY_EDITOR
		IOSHelper.SDK_LaunchCYMGADYH5Page();
#else

#endif
	}

	// 是否启用Crash收集功能. 现在只支持IOS 5 以上版本;Android未使用收集功能
	public static bool IsEnabledCrash()
	{
//		string strSystemInfo = SystemInfo.operatingSystem;

#if UNITY_IPHONE && !UNITY_EDITOR

		string[] strArray = strSystemInfo.Split(new[] {' '});

		if (strArray != null && strArray.Length > 0)
		{
			strSystemInfo = strArray[strArray.Length - 1];
			if (!string.IsNullOrEmpty(strSystemInfo) && strSystemInfo.Length >= 1)
			{
				strArray = strSystemInfo.Split(new char['.']);
				if (strArray != null && strArray.Length >= 1)
				{
					strSystemInfo = strArray[0];
					int mainVersiong = 0;

					if (int.TryParse(strSystemInfo, out mainVersiong))
					{
						if (mainVersiong > 5)
						{
							return true;
						}
					}
				}
			}
		}

#endif
		return false;
	}

    public static void ShowAchievement()
    {
        //#if UNITY_ANDROID && !UNITY_EDITOR
        //        if (IsChannelTW())
        //        {
        //            _showAchievement();
        //        }
        //#endif
    }

}