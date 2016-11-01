//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEditor;
/*
 * 根据设置打包的渠道号更改设置
 * 
 */

public class UTMyModifyPlayerSettings : UTAction
{

    public override IEnumerator Execute(UTContext context)
    {
        Debug.Log("My-uTmote: UTMyModifyPlayerSettings--begin");
        //get channelID from for each
        string channelID = context["channelID_forBuild"] as string;
        Debug.Log("My-uTmote: channelID ==" + channelID);

        string assetsPath = Application.dataPath + "/";

        string defultIconPath = "Assets/MLDJ/UIRes/Texture/Icon/Android/default.png";
		string channelIconPath = "Assets/MLDJ/UIRes/Texture/Icon/Android/";

        string defaultPackageName = context["defaultPackageName"] as string ;
        string channelPackageName = "";

        string defaultSplashPath = "Assets/MLDJ/UIRes/Texture/Logo/iphone4.png";
        string androidDefaultSplashPath = "Assets/MLDJ/UIRes/Texture/Logo/Android/default.png";
        string androidSplashPath = "Assets/MLDJ/UIRes/Texture/Logo/Android/";
        string channelsplashPath = androidDefaultSplashPath;

		PlayerSettings.productName = "惊天动地";

        //set icon,splash and packagename based on channelID
        if (channelID.Equals("Android_360"))
        { // 360渠道无icon,splash要求//
			channelIconPath = channelIconPath + "360.png";
            channelsplashPath = androidSplashPath + "360.png";
            channelPackageName = defaultPackageName + ".c360";
        }
        else if (channelID.Equals("Android_uc"))
        {
            channelIconPath = channelIconPath + "uc.png";
            channelsplashPath = androidSplashPath + "uc.png";
            channelPackageName = defaultPackageName + ".uc";
        }
        else if (channelID.Equals("Android_xiaomi"))
        { // 小米渠道splash要求//
            channelIconPath = channelIconPath + "xiaomi.png";
            channelsplashPath = androidSplashPath + "xiaomi.png";
            channelPackageName = defaultPackageName + ".mi";
        }
        else if (channelID.Equals("Android_wdj"))
        { // 豌豆荚渠道无icon,splash要求//
            channelIconPath = channelIconPath + "wdj.png";
            channelsplashPath = androidSplashPath + "wdj.png";
            channelPackageName = defaultPackageName + ".wdj";
        }
        else if (channelID.Equals("Android_baidu"))
        {
            channelIconPath = channelIconPath + "baidu.png";
            channelsplashPath = androidSplashPath + "baidu.png";
            channelPackageName = defaultPackageName + ".baidu";
        }
        else if (channelID.Equals("Android_oppo"))
        {
            channelIconPath = channelIconPath + "oppo.png";
            channelsplashPath = androidSplashPath + "oppo.png";
            channelPackageName = defaultPackageName + ".nearme.gamecenter";
        }
        else if (channelID.Equals("Android_anzhi"))
        {
            channelIconPath = channelIconPath + "anzhi.png";
            channelsplashPath = androidSplashPath + "anzhi.png";
            channelPackageName = defaultPackageName + ".anzhi";
        }
        else if (channelID.Equals("Android_lenovo"))
        {
            channelIconPath = channelIconPath + "lenovo.png";
            channelsplashPath = androidSplashPath + "lenovo.png";
            channelPackageName = defaultPackageName + ".lenovo";
        }
        else if (channelID.Equals("Android_downjoy"))
        {
            channelIconPath = channelIconPath + "downjoy.png";
            channelsplashPath = androidSplashPath + "downjoy.png";
            channelPackageName = defaultPackageName + ".downjoy";
        }
        else if (channelID.Equals("Android_huawei"))
        {
            channelIconPath = channelIconPath + "huawei.png";
            channelsplashPath = androidSplashPath + "huawei.png";
            channelPackageName = defaultPackageName + ".huawei";
        }
        else if (channelID.Equals("Android_ewan"))
        {
            channelIconPath = channelIconPath + "ewan.png";
            channelsplashPath = androidSplashPath + "ewan.png";
            channelPackageName = defaultPackageName + ".ewan";
        }
		else if (channelID.Equals("Android_cyou"))
		{
            channelIconPath = channelIconPath + "cyou.png";
            channelsplashPath = androidSplashPath + "cyou.png";
			channelPackageName = defaultPackageName + ".cyou";
		}
		else if (channelID.Equals("Android_vivo"))
		{
            channelIconPath = channelIconPath + "vivo.png";
            channelsplashPath = androidSplashPath + "vivo.png";
			channelPackageName = defaultPackageName + ".vivo";
		}
		else if (channelID.Equals("Android_kupai"))
		{
            channelIconPath = channelIconPath + "kupai.png";
            channelsplashPath = androidSplashPath + "kupai.png";
			channelPackageName = defaultPackageName + ".kupai";
		}
		else if (channelID.Equals("Android_zhangyue"))
		{
            channelIconPath = channelIconPath + "zhangyue.png";
            channelsplashPath = androidSplashPath + "zhangyue.png";
			channelPackageName = defaultPackageName + ".zy";
		}
		else if (channelID.Equals("Android_pps"))
		{
            channelIconPath = channelIconPath + "pps.png";
            channelsplashPath = androidSplashPath + "pps.png";
			channelPackageName = defaultPackageName + ".pps";
		}
		else if (channelID.Equals("Android_meizu"))
		{
			channelIconPath = defultIconPath;
			channelsplashPath = androidDefaultSplashPath;
			channelPackageName = defaultPackageName + ".mz";
		}
        else if (channelID.Equals("Android_sy37"))
		{
			channelIconPath = defultIconPath;
			channelsplashPath = androidDefaultSplashPath;
			channelPackageName = defaultPackageName + ".sy37";
		}
        //else if (channelID.Equals("Android_fg"))
        //{
        //    channelIconPath = defultIconPath;
        //    channelsplashPath = androidDefaultSplashPath;
        //    channelPackageName = defaultPackageName + ".fg";
        //}
        else if (channelID.Equals("Android_jinli"))
        {
            channelIconPath = channelIconPath + "jinli.png";
            channelsplashPath = androidSplashPath + "jinli.png";
            channelPackageName = defaultPackageName + ".am";
        }
        else if (channelID.Equals("Android_yingyongbao"))
        {
            channelIconPath = channelIconPath + "yingyongbao.png";
            channelsplashPath = androidSplashPath + "yingyongbao.png";
            channelPackageName = "com.tencent.tmgp.mtlbb";
        }
        else if (channelID.Equals("Android_kingsoft"))
        {
			channelIconPath = channelIconPath + "kingsoft.png";
			channelsplashPath = androidSplashPath + "kingsoft.png";
            channelPackageName = defaultPackageName + ".kingsoft";
        }
		else if (channelID.Equals("Android_cyouq"))
		{
			channelIconPath = channelIconPath + "cyouq.png";
			channelsplashPath = androidSplashPath + "cyouq.png";
			channelPackageName = defaultPackageName + ".cyouq";
		}
        else if (channelID.Equals("Android_sogou"))
        {
            channelIconPath = channelIconPath + "sogou.png";
            channelsplashPath = androidSplashPath + "sogou.png";
            channelPackageName = defaultPackageName + ".sogou";
        }
        else if (channelID.Equals("Android_BaoFengWuXian"))
        {
            channelIconPath = channelIconPath + "baofengwuxian.png";
            channelsplashPath = androidSplashPath + "baofengwuxian.png";
            channelPackageName = defaultPackageName + ".bfwx";
        }
        else if (channelID.Equals("Android_youku"))
        {
            channelIconPath = channelIconPath + "youku.png";
            channelsplashPath = androidSplashPath + "youku.png";
            channelPackageName = defaultPackageName + ".youku";
        }
        else if (channelID.Equals("Android_MiTV"))
        {
            channelIconPath = channelIconPath + "mitv.png";
            channelsplashPath = androidSplashPath + "mitv.png";
            channelPackageName = defaultPackageName + ".mitv";
        }
        else if (channelID.Equals("Android_YingYongHui"))
        {
            channelIconPath = channelIconPath + "yingyonghui.png";
            channelsplashPath = androidSplashPath + "yingyonghui.png";
            channelPackageName = defaultPackageName + ".yyh";
        }
		else if (channelID.Equals("Android_XMWan"))
        {
            channelIconPath = channelIconPath + "xmwan.png";
            channelsplashPath = androidSplashPath + "xmwan.png";
            channelPackageName = defaultPackageName + ".xmw";
        }
		else if (channelID.Equals("Android_Cyouvideo"))
		{
            channelIconPath = channelIconPath + "cyou.png";
            channelsplashPath = androidSplashPath + "cyou.png";
			channelPackageName = defaultPackageName + ".cyou";
		}
        else if (channelID.Equals("CPS_CyouTY"))
		{
            channelIconPath = channelIconPath + "cyou.png";
            channelsplashPath = androidSplashPath + "cyou.png";
			channelPackageName = defaultPackageName + ".cyouty";
		}
		else if (channelID.Equals("Android_Momo"))
		{
            channelIconPath = channelIconPath + "momo.png";
            channelsplashPath = androidSplashPath + "momo.png";
			channelPackageName = defaultPackageName + ".momo";
		}
        else if (channelID.Equals("Android_Efun"))
        {
            channelIconPath = channelIconPath + "efun.png";
            channelsplashPath = androidSplashPath + "efun.png";
            channelPackageName = "com.vqw.tlbb";
        }
        else if (channelID.Equals("Android_EfunGooglePlay"))
        {
            channelIconPath = channelIconPath + "efun.png";
            channelsplashPath = androidSplashPath + "efun.png";
            channelPackageName = "com.vqw.tlbb";
        }
		else if (channelID.Equals("Android_EfunFetnet"))
		{
			channelIconPath = channelIconPath + "efun_fetnet.png";
			channelsplashPath = androidSplashPath + "efun.png";
			channelPackageName = "com.vqw.tlbb";
		}
		else if (channelID.Equals("Android_EfunAsus"))
		{
			channelIconPath = channelIconPath + "efun.png";
			channelsplashPath = androidSplashPath + "efun.png";
			channelPackageName = "com.vqw.tlbb";
		}
        else if (channelID.Equals("Android_Mian"))
        {
            channelIconPath = channelIconPath + "snail.png";
            channelsplashPath = androidSplashPath + "snail.png";
            channelPackageName = defaultPackageName + ".snail";
        }
        else if (channelID.Equals("Android_DuoWan"))
        {
            channelIconPath = channelIconPath + "duowan.png";
            channelsplashPath = androidSplashPath + "duowan.png";
            channelPackageName = defaultPackageName + ".dw";
        }
        else if (channelID.Equals("Android_LeDou"))
        {
            channelIconPath = channelIconPath + "ledou.png";
            channelsplashPath = androidSplashPath + "ledou.png";
            channelPackageName = defaultPackageName + ".ld";
        }
        else if (channelID.Equals("Android_ChuYou07073"))
        {
            channelIconPath = channelIconPath + "chuyou07073.png";
            channelsplashPath = androidSplashPath + "chuyou07073.png";
            channelPackageName = defaultPackageName + ".chuyou";
		}
		else if (channelID.Equals("Android_PPTV"))
		{
			PlayerSettings.productName = "PPTV惊天动地";
			channelIconPath = channelIconPath + "pptv.png";
			channelsplashPath = androidSplashPath + "pptv.png";
			channelPackageName = defaultPackageName + ".pptv";
		}
		else if (channelID.Equals("Android_37wan"))
		{
			channelIconPath = channelIconPath + "37wan.png";
			channelsplashPath = androidSplashPath + "37wan.png";
			channelPackageName = defaultPackageName + ".sy37X";
		}
		else if (channelID.Equals("Android_baiduXianFeng"))
		{
			channelIconPath = channelIconPath + "baidu.png";
			channelsplashPath = androidSplashPath + "baidu.png";
			channelPackageName = defaultPackageName + ".BD";
		}
		else if (channelID.Equals("Android_ucXianFeng"))
		{
			channelIconPath = channelIconPath + "uc.png";
			channelsplashPath = androidSplashPath + "uc.png";
			channelPackageName = defaultPackageName + ".ucxf";
		}
		else if (channelID.Equals("Android_YiDongJiDi"))
		{
			channelIconPath = channelIconPath + "yidongjidi.png";
			channelsplashPath = androidSplashPath + "yidongjidi.png";
			channelPackageName = defaultPackageName + ".ydjd";
		}
		else if (channelID.Equals("Android_LianTong"))
		{
			channelIconPath = channelIconPath + "wostore.png";
			channelsplashPath = androidSplashPath + "wostore.png";
			channelPackageName = defaultPackageName + ".wostore";
		}
		else if (channelID.Equals("Android_DianXin"))
		{
			channelIconPath = channelIconPath + "dxayx.png";
			channelsplashPath = androidSplashPath + "dxayx.png";
			channelPackageName = defaultPackageName + ".dxayx";
		}
        else if (channelID.Equals("Android_Gameone"))
        {
            channelIconPath = channelIconPath + "gameone.png";
            channelsplashPath = androidSplashPath + "gameone.png";
            channelPackageName = "com.gameone.tl3d";
        }
        else if (channelID.Equals("Android_GameoneGooglePlay"))
		{
			channelIconPath = channelIconPath + "gameone.png";
			channelsplashPath = androidSplashPath + "gameone.png";
			channelPackageName = "com.gameone.tl3d";
		}
		else if (channelID.Equals("Android_ucDuFu"))
		{
			PlayerSettings.productName = "惊天动地";
			channelIconPath = channelIconPath + "uc.png";
			channelsplashPath = androidSplashPath + "uc.png";
			channelPackageName = defaultPackageName + ".ucdf";
		}
		else if (channelID.Equals("Android_AliTV"))
		{
			channelIconPath = channelIconPath + "alitv.png";
			channelsplashPath = androidSplashPath + "alitv.png";
			channelPackageName = defaultPackageName+".altv";
		}
		else if (channelID.Equals("Android_linyou"))
		{
			channelIconPath = channelIconPath + "linyou.png";
			channelsplashPath = androidSplashPath + "linyou.png";
			channelPackageName = defaultPackageName+".linyou";
		}
		else if (channelID.Equals("Android_ParentPackage_WuWeiXin"))
		{
			channelIconPath = channelIconPath + "cyou.png";
			channelsplashPath = androidSplashPath + "cyou.png";
			channelPackageName = defaultPackageName + ".cyou";
		}
		/*else
        {
            channelIconPath = defultIconPath;
            channelsplashPath = androidDefaultSplashPath;
            channelPackageName = defaultPackageName;
        }*/
		else
		{
			channelIconPath = channelIconPath + "cyou.png";
			channelsplashPath = androidSplashPath + "cyou.png";
			channelPackageName = defaultPackageName + ".cyou";
		}

        if (!File.Exists(assetsPath + "../" + channelIconPath))
        {
            Debug.Log("My-uTmote: channelIconPath not exist:" + channelIconPath);
            channelIconPath = defultIconPath;
        }

        if (!File.Exists(assetsPath + "../" + channelsplashPath))
        {
            Debug.Log("My-uTmote: channelsplashPath not exist:" + channelsplashPath);
            channelsplashPath = androidDefaultSplashPath;
        }

        // Google Play 分包选项
        if (channelID.Equals("Android_EfunGooglePlay") || channelID.Equals("Android_GameoneGooglePlay"))
        {
            PlayerSettings.Android.useAPKExpansionFiles = true;
        }
        else 
        {
            PlayerSettings.Android.useAPKExpansionFiles = false;
        }

        Debug.Log("My-uTmote: channelIconPath -> " + channelIconPath);
        Debug.Log("My-uTmote: channelPackageName -> " + channelPackageName);
        Debug.Log("My-uTmote: channelsplashPath -> " + channelsplashPath);

        Texture2D[] icons = new Texture2D[] {AssetDatabase.LoadMainAssetAtPath(channelIconPath) as Texture2D,};
        PlayerSettings.SetIconsForTargetGroup(BuildTargetGroup.Unknown, icons);

        //splash 替换 自适应屏幕//
        Debug.Log("My-uTmote:  change splash image");
        FileUtil.ReplaceFile(channelsplashPath, defaultSplashPath);
        FileUtil.ReplaceFile(channelsplashPath + ".meta", defaultSplashPath + ".meta");

        Debug.Log("My-uTmote:  splashScreenScale -> ScaleToFill");
		PlayerSettings.Android.splashScreenScale = AndroidSplashScreenScale.ScaleToFill;

        // 针对小米电视，增加宏
		if (channelID.Equals("Android_MiTV")||channelID.Equals("CPS_XinYou")||channelID.Equals("Android_AliTV"))
        {
            PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android, "ANDROID_MITV;BOBJOYSTICK;XIAOMISTICK");
            Debug.Log(PlayerSettings.GetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android));
        }
        else
        {
            PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android, "");
        }

        //packagename
        PlayerSettings.bundleIdentifier = channelPackageName;
        Debug.Log("My-uTmote:  bundleIdentifier -> " + PlayerSettings.bundleIdentifier);

        PlayerSettings.allowedAutorotateToLandscapeLeft = true;
        PlayerSettings.allowedAutorotateToLandscapeRight = true;

        yield return "";
    }

    [MenuItem("Assets/Create/uTomate/MyModifyPlayerSettings", false, 300)]
    public static void AddAction()
    {
        Create<UTMyModifyPlayerSettings>();
    }
}
