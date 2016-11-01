using UnityEngine;
using System.Collections;
using UnityEditor;
using System;
using System.IO;

public class BuildAndroidProcess
{
    public static void BuildAndroid(string sBuildChannels, string sVersion, bool bIsAssetbundle, bool bIsSDKServerList)
    {
        try
        {
            Debug.Log("BuildAndroidProcess.BuildAndroid start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
            if (string.IsNullOrEmpty(sBuildChannels) || string.IsNullOrEmpty(sVersion))
            {
                return;
            }

            //Debug.Log("BuildAndroidProcess.BuildAndroid BuildChannels:" + sBuildChannels);
            string[] channelList = BuildPlayerHelper.ParseChannelListForAndroid(sBuildChannels);
            Debug.Log(string.Format("BuildAndroidProcess.BuildAndroid channelList number is:" + channelList.Length.ToString()));
            if (null == channelList || 0 == channelList.Length)
            {
                throw new Exception("BuildAndroidProcess.BuildAndroid channel list is null!");
            }
            else
            {
                //for (int index = 0; index < channelList.Length;++index)
                //{
                //    Debug.Log(string.Format("BuildPlayerProcess.BuildPlayerByCommandline channelList[{0}]:{1}", index.ToString(), channelList[index]));
                //}

                AssetDatabase.Refresh();
                SetupPlayerSettings(sVersion);

                foreach (string sChannel in channelList)
                {
                    if (!BuildAndroidForChannel(sChannel, sVersion, bIsAssetbundle, bIsSDKServerList))
                    {
                        throw new Exception("BuildAndroidProcess.BuildAndroid failed. channel is:" + sChannel);
                    }
                }
            }
            Debug.Log("BuildAndroidProcess.BuildAndroid end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildAndroidProcess.BuildAndroid exception is: " + ex.Message);
        }
    }

    private static void SetupPlayerSettings(string sVersion)
    {
        try
        {
            Debug.Log("BuildAndroidProcess.SetupPlayerSettings start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
            //TODO BY MAWENBIN 1 //E:\AndroidPlugins\Android_360\assets\config.properties
            //设置AppName GroupName ChannelName NoticeConfigUrl ServerListUrl，并生产版本文件
            //BuildGameConfig.Load(Path.Combine(Application.streamingAssetsPath, BuildGameConfig.c_GameConfigFile));
            //BuildGameConfig.Save(buildchannel);

            //context["androidBase"] = androidBase.EvaluateIn(context); //BundleEditor.ExportBundleData

            //context["resourceVersion"] = resourceVersion.EvaluateIn(context); //wangdi
            if (!BuildPlayerHelper.UpdateResourceVersionFile(sVersion))
            {
                throw new Exception("BuildAndroidProcess.SetupPlayerSettings UpdateResourceVersionFile failed!");
            }

            PlayerSettings.companyName = BuildAndroidConfig.DEFAULT_COMPANY_NAME;

            PlayerSettings.bundleVersion = sVersion;
            PlayerSettings.Android.bundleVersionCode = BuildPlayerHelper.GetVersionCode(sVersion);

            PlayerSettings.defaultInterfaceOrientation = UIOrientation.AutoRotation;
            PlayerSettings.statusBarHidden = true;
            PlayerSettings.use32BitDisplayBuffer = true;
            PlayerSettings.Android.use24BitDepthBuffer = true;
            PlayerSettings.Android.showActivityIndicatorOnLoading = AndroidShowActivityIndicatorOnLoading.DontShow;

            PlayerSettings.Android.minSdkVersion = AndroidSdkVersions.AndroidApiLevel10;
            PlayerSettings.Android.targetDevice = AndroidTargetDevice.ARMv7;

            //TODO BY MAWENBIN 2
            //#if UNITY_3_5		
            //        PlayerSettings.Android.targetGraphics = targetGraphics.EvaluateIn (context);
            //#endif
            //#if UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1
            //        PlayerSettings.targetGlesGraphics = targetGlesGraphics.EvaluateIn(context);
            //#endif

            PlayerSettings.Android.preferredInstallLocation = AndroidPreferredInstallLocation.Auto;
            PlayerSettings.Android.forceInternetPermission = true;
            PlayerSettings.Android.forceSDCardPermission = true;

            PlayerSettings.apiCompatibilityLevel = ApiCompatibilityLevel.NET_2_0_Subset;
            PlayerSettings.stripUnusedMeshComponents = true;
            PlayerSettings.strippingLevel = StrippingLevel.UseMicroMSCorlib;

//			string res = lowQuality.EvaluateIn(context).ToString();
//			if (res.Equals("True")) {
//				BuildAssetProcess.BuildAndroid();//资源高低配处理
//			}


            //already added in BuildAssetProcess::DoAndroidLowTextrue
            //context["lowQuality"] = lowQuality.EvaluateIn(context);
            //E:\Main\Project\Client\Assets\BuildTools\Android\uTomate\Editor\Actions\UTMyTextureAction.cs
            //MLDJ/UIRes/Atlas/Common/Common.prefab

            //#if UNITY_3_5
            //        PlayerSettings.debugUnloadMode = debugUnloadMode.EvaluateIn(context);
            //#endif

            PlayerSettings.allowedAutorotateToLandscapeLeft = true;
            PlayerSettings.allowedAutorotateToLandscapeRight = true;
            Debug.Log("BuildAndroidProcess.SetupPlayerSettings end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildAndroidProcess.SetupPlayerSettings exception is: " + ex.Message);
        }
    }

    private static bool BuildAndroidForChannel(string sChannel, string sVersion, bool bIsAssetbundle, bool bIsSDKServerList)
    {
        try
        {
            Debug.Log(string.Format("BuildAndroidProcess.BuildAndroidForChannel Channel:{0}, Version:{1}, IsAssetbundle{2}", sChannel, sVersion, bIsAssetbundle.ToString()));
            Debug.Log("BuildAndroidProcess.BuildAndroidForChannel start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));

            if (string.IsNullOrEmpty(sChannel))
            {
                throw new Exception("BuildAndroidProcess.BuildAndroidForChannel channel is null");
            }
            if (string.IsNullOrEmpty(sVersion))
            {
                throw new Exception("BuildAndroidProcess.BuildAndroidForChannel Version is null");
            }

            AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);

            if (!CopyChannelPlugin(sChannel, sVersion, bIsSDKServerList))
            {
                throw new Exception("BuildAndroidProcess.BuildAndroidForChannel CopyChannelPlugin failed");
            }

            AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);

            if (!SetupChannelPlugin(sChannel))
            {
                throw new Exception("BuildAndroidProcess.BuildAndroidForChannel SetupChannelPlugin failed");
            }

            string sPlayerPath = BuildPlayerHelper.GetPlayerPathForAndroid(sChannel, sVersion, bIsAssetbundle);
            AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
            BuildPipeline.BuildPlayer(BuildAndroidConfig.GetAllScenes(), sPlayerPath, BuildTarget.Android, BuildOptions.None);
            Debug.Log("BuildAndroidProcess.BuildAndroidForChannel end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildAndroidProcess.BuildAndroidForChannel exception is:" + ex.Message);
            return false;
        }
        return true;
    }

    private static bool CopyChannelPlugin(string sChannel, string sVersion, bool bIsSDKServerList)
    {
        try
        {
            Debug.Log("BuildAndroidProcess.CopyChannelPlugin start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
            if (string.IsNullOrEmpty(sChannel))
            {
                throw new Exception("BuildAndroidProcess.CopyChannelPlugin channel is null");
            }

            string sBaseDirectory = BuildAndroidConfig.ChannelPluginBaseDirectory + sChannel;
            string sTargetDirectory = BuildAndroidConfig.CHANNELPLUGIN_TARGET_DIRECTORY;
            Debug.Log("BuildAndroidProcess.CopyChannelPlugin BaseDirectory: " + sBaseDirectory);

            if (!Directory.Exists(sBaseDirectory))
            {
                throw new Exception("BuildAndroidProcess.CopyChannelPlugin BaseDirectory:" + sBaseDirectory + "don't Exists!");
            }

            string sCommonPropertiesFile = BuildAndroidConfig.GetCommonPropertiesFile();
            if (!File.Exists(sCommonPropertiesFile))
            {
                throw new Exception("BuildAndroidProcess.CopyChannelPlugin CommonPropertiesFile:" + sCommonPropertiesFile + "don't Exists!");
            }

            FileUtil.DeleteFileOrDirectory(sTargetDirectory);
            FileUtil.CopyFileOrDirectory(sBaseDirectory, sTargetDirectory);
            FileUtil.CopyFileOrDirectory(sCommonPropertiesFile, BuildAndroidConfig.GetPlayerCommonPropertiesFile());

            string sPlayerConfigPropertiesFile = BuildAndroidConfig.GetPlayerConfigPropertiesFile();
            if (!File.Exists(sPlayerConfigPropertiesFile))
            {
                throw new Exception("BuildAndroidProcess.CopyChannelPlugin PlayerConfigPropertiesFile:" + sPlayerConfigPropertiesFile + "don't Exists!");
            }
            if (!BuildAndroidConfig.UpdatePlayerConfigPropertiesFile(sVersion, bIsSDKServerList))
            {
                throw new Exception("BuildAndroidProcess.CopyChannelPlugin UpdatePlayerConfigPropertiesFile failed");
            }
            Debug.Log("BuildAndroidProcess.CopyChannelPlugin end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildAndroidProcess.CopyChannelPlugin exception is:" + ex.Message);
            return false;
        }
        return true;
    }

    private static bool SetupChannelPlugin(string sChannel)
    {
        try
        {
            Debug.Log("BuildAndroidProcess.SetupChannelPlugin start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
            if (string.IsNullOrEmpty(sChannel))
            {
                throw new Exception("BuildAndroidProcess.SetupChannelPlugin channel is null");
            }
            if (!File.Exists(BuildAndroidConfig.DEFAULT_ICON_PATH))
            {
                throw new Exception("BuildAndroidProcess.SetupChannelPlugin default Icon don't exist!");
            }
            if (!File.Exists(BuildAndroidConfig.DEFAULT_SPLASH_PATH))
            {
                throw new Exception("BuildAndroidProcess.SetupChannelPlugin default splash don't exist!");
            }
            string sKeyStoreFile = BuildAndroidConfig.GetKeyStoreFile();
            Debug.Log("BuildAndroidProcess.SetupChannelPlugin keyStoreFile = " + sKeyStoreFile);
            if (!File.Exists(sKeyStoreFile))
            {
                throw new Exception("BuildAndroidProcess.SetupChannelPlugin keyStoreFile don't exist!");
            }
            string sDownjoyKeyStoreFile = BuildAndroidConfig.GetDownjoyKeyStoreFile();
            Debug.Log("BuildAndroidProcess.SetupChannelPlugin downjoy keyStoreFile = " + sDownjoyKeyStoreFile);
            if (!File.Exists(sDownjoyKeyStoreFile))
            {
                throw new Exception("BuildAndroidProcess.SetupChannelPlugin downjoy keyStoreFile don't exist!");
            }
            PlayerSettings.Android.keystoreName = sKeyStoreFile;
            PlayerSettings.Android.keystorePass = BuildAndroidConfig.KEY_STORE_PASSWORD;
            PlayerSettings.Android.keyaliasName = BuildAndroidConfig.KEY_ALIAS_NAME;
            PlayerSettings.Android.keyaliasPass = BuildAndroidConfig.KEY_ALIAS_PASSWORD;

            PlayerSettings.productName = BuildAndroidConfig.DEFAULT_PRODUCT_NAME;
            string sChannelIconPath = BuildAndroidConfig.DEFAULT_ICON_PATH;
            string sChannelSplashPath = BuildAndroidConfig.DEFAULT_SPLASH_PATH;
            string sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME;
            //set icon,splash and packagename based on channel
            //部分渠道无icon,splash要求，但是代码按照以下规则编写，方便后期无需修改代码直接添加图片即可
            switch (sChannel.ToLower())
            {
                case "android_360":
                    { // 360渠道无icon,splash要求//
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "360.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "360.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".c360";
                    }
                    break;
                case "android_uc":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "uc.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "uc.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".uc";
                    }
                    break;
                case "android_xiaomi":
                    { // 小米渠道splash要求//
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "xiaomi.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "xiaomi.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".mi";
                    }
                    break;
                case "android_wdj":
                    { // 豌豆荚渠道无icon,splash要求//
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "wdj.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "wdj.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".wdj";
                    }
                    break;
                case "android_baidu":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "baidu.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "baidu.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".baidu";
                    }
                    break;
                case "android_oppo":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "oppo.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "oppo.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".nearme.gamecenter";
                    }
                    break;
                case "android_anzhi":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "anzhi.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "anzhi.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".anzhi";
                    }
                    break;
                case "android_lenovo":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "lenovo.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "lenovo.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".lenovo";
                    }
                    break;
                case "android_downjoy":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "downjoy.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "downjoy.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".downjoy";
                        PlayerSettings.Android.keystoreName = sDownjoyKeyStoreFile;
                        PlayerSettings.Android.keystorePass = BuildAndroidConfig.DOWNJOY_KEY_STORE_PASSWORD;
                        PlayerSettings.Android.keyaliasName = BuildAndroidConfig.DOWNJOY_KEY_ALIAS_NAME;
                        PlayerSettings.Android.keyaliasPass = BuildAndroidConfig.DOWNJOY_KEY_ALIAS_PASSWORD;
                    }
                    break;
                case "android_huawei":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "huawei.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "huawei.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".huawei";
                    }
                    break;
                case "android_ewan":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "ewan.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "ewan.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".ewan";
                    }
                    break;
                case "android_cyou":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".cyou";
                    }
                    break;
                case "android_vivo":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "vivo.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "vivo.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".vivo";
                    }
                    break;
                case "android_kupai":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "kupai.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "kupai.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".kupai";
                    }
                    break;
                case "android_zhangyue":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "zhangyue.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "zhangyue.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".zy";
                    }
                    break;
                case "android_pps":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "pps.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "pps.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".pps";
                    }
                    break;
                case "android_meizu":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "mz.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "mz.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".mz";
                    }
                    break;
                case "android_sy37":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "sy37.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "sy37.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".sy37";
                    }
                    break;
                //case "android_fg":
                //    {
                //        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "fg.png";
                //        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "fg.png";
                //        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".fg";
                //    }
                //    break;
                case "android_jinli":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "jinli.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "jinli.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".am";
                    }
                    break;
                case "android_yingyongbao":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "yingyongbao.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "yingyongbao.png";
                        sChannelPackageName = "com.tencent.tmgp.mtlbb";
                    }
                    break;
                case "android_kingsoft":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "kingsoft.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "kingsoft.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".kingsoft";
                    }
                    break;
                case "android_cyouq":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyouq.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyouq.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".cyouq";
                    }
                    break;
                case "android_sogou":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "sogou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "sogou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".sogou";
                    }
                    break;
                case "android_baofengwuxian":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "baofengwuxian.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "baofengwuxian.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".bfwx";
                    }
                    break;
                case "android_youku":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "youku.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "youku.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".youku";
                    }
                    break;
                case "android_mitv":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "mitv.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "mitv.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".mitv";
                    }
                    break;
                case "android_yingyonghui":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "yingyonghui.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "yingyonghui.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".yyh";
                    }
                    break;
                case "android_xmwan":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "xmwan.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "xmwan.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".xmw";
                    }
                    break;
                case "android_cyouvideo":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".cyou";
                    }
                    break;
                case "cps_cyouty":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".cyouty";
                    }
                    break;
                case "android_momo":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "momo.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "momo.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".momo";
                    }
                    break;
                case "android_efun":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "efun.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "efun.png";
                        sChannelPackageName = "com.vqw.tlbb";
                    }
                    break;
                case "android_efungoogleplay":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "efun.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "efun.png";
                        sChannelPackageName = "com.vqw.tlbb";
                    }
                    break;
                case "android_efunfetnet":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "efun_fetnet.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "efun.png";
                        sChannelPackageName = "com.vqw.tlbb";
                    }
                    break;
                case "android_efunasus":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "efun.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "efun.png";
                        sChannelPackageName = "com.vqw.tlbb";
                    }
                    break;
                case "android_mian":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "snail.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "snail.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".snail";
                    }
                    break;
                case "android_duowan":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "duowan.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "duowan.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".dw";
                    }
                    break;
                case "android_ledou":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "ledou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "ledou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".ld";
                    }
                    break;
                case "android_chuyou07073":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "chuyou07073.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "chuyou07073.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".chuyou";
                    }
                    break;
                case "android_pptv":
                    {
						PlayerSettings.productName = "PPTV惊天动地";
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "pptv.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "pptv.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".pptv";
                    }
                    break;
                case "android_37wan":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "37wan.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "37wan.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".sy37X";
                    }
                    break;
                case "android_baiduxianfeng":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "baidu.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "baidu.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".BD";
                    }
                    break;
                case "android_ucxianfeng":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "uc.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "uc.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".ucxf";
                    }
                    break;
                case "android_yidongjidi":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "yidongjidi.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "yidongjidi.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".ydjd";
                    }
                    break;
                case "android_liantong":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "wostore.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "wostore.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".wostore";
                    }
                    break;
                case "android_dianxin":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "dxayx.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "dxayx.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".dxayx";
                    }
                    break;
                case "android_gameone":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "gameone.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "gameone.png";
                        sChannelPackageName = "com.gameone.tl3d";
                    }
                    break;
                case "android_gameonegoogleplay":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "gameone.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "gameone.png";
                        sChannelPackageName = "com.gameone.tl3d";
                    }
                    break;
                case "android_ucdufu":
                    {
						PlayerSettings.productName = "惊天动地";
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "uc.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "uc.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".ucdf";
                    }
                    break;
                case "android_alitv":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "alitv.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "alitv.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".altv";
                    }
                    break;
                case "android_linyou":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "linyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "linyou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".linyou";
                    }
                    break;
                case "android_parentpackage":
                case "android_parentpackage_wuweixin":
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyou.png";
                        sChannelPackageName = "com.changyou.mgp.sdk.mbi.platform.base";
                    }
                    break;
                default:
                    {
                        sChannelIconPath = BuildAndroidConfig.CHANNEL_ICON_PATH + "cyou.png";
                        sChannelSplashPath = BuildAndroidConfig.CHANNEL_SPLASH_PATH + "cyou.png";
                        sChannelPackageName = BuildAndroidConfig.DEFAULT_PACKAGE_NAME + ".cyou";
                    }
                    break;
            }
            string sAssetsPath = Application.dataPath + "/";
            if (!File.Exists(sAssetsPath + "../" + sChannelIconPath))
            {
                Debug.Log("BuildAndroidProcess.SetupChannelPlugin Channel Icon don't exist:" + sChannelIconPath);
                sChannelIconPath = BuildAndroidConfig.DEFAULT_ICON_PATH;
            }
            if (!File.Exists(sAssetsPath + "../" + sChannelSplashPath))
            {
                Debug.Log("BuildAndroidProcess.SetupChannelPlugin Channel Splash don't exist:" + sChannelSplashPath);
                sChannelSplashPath = BuildAndroidConfig.DEFAULT_SPLASH_PATH;
            }

            Texture2D[] icons = new Texture2D[] { AssetDatabase.LoadMainAssetAtPath(sChannelIconPath) as Texture2D, };
            PlayerSettings.SetIconsForTargetGroup(BuildTargetGroup.Unknown, icons);

            //splash 替换 自适应屏幕
            Debug.Log("BuildAndroidProcess.SetupChannelPlugin Replace splash image");
            FileUtil.ReplaceFile(sChannelSplashPath, BuildAndroidConfig.SELECT_SPLASH_PATH);
            FileUtil.ReplaceFile((sChannelSplashPath + ".meta"), (BuildAndroidConfig.SELECT_SPLASH_PATH + ".meta"));

            Debug.Log("BuildAndroidProcess.SetupChannelPlugin splashScreenScale -> ScaleToFill");
            PlayerSettings.Android.splashScreenScale = AndroidSplashScreenScale.ScaleToFill;

            //packagename
            PlayerSettings.bundleIdentifier = sChannelPackageName;
            Debug.Log(string.Format("BuildAndroidProcess.SetupChannelPlugin Channel:{0}, ChannelIconPath:{1}, ChannelSplashPath:{2}, ChannelPackageName:{3}",
                sChannel, sChannelIconPath, sChannelSplashPath, sChannelPackageName));

            // Google Play 分包选项
            if (sChannel.Equals("Android_EfunGooglePlay", StringComparison.OrdinalIgnoreCase)
                 || sChannel.Equals("Android_GameoneGooglePlay", StringComparison.OrdinalIgnoreCase))
            {
                PlayerSettings.Android.useAPKExpansionFiles = true;
            }
            else
            {
                PlayerSettings.Android.useAPKExpansionFiles = false;
            }

            // 针对小米电视，增加宏
            if (sChannel.Equals("Android_MiTV", StringComparison.OrdinalIgnoreCase)
                || sChannel.Equals("CPS_XinYou", StringComparison.OrdinalIgnoreCase)
			    || sChannel.Equals("Android_AliTV", StringComparison.OrdinalIgnoreCase))
            {
                PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android, "ANDROID_MITV;BOBJOYSTICK;XIAOMISTICK");
                Debug.Log("BuildAndroidProcess.SetupChannelPlugin ScriptingDefineSymbolsForGroup:" + PlayerSettings.GetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android));
            }
            else
            {
                PlayerSettings.SetScriptingDefineSymbolsForGroup(BuildTargetGroup.Android, "");
            }

            Debug.Log("BuildAndroidProcess.SetupChannelPlugin end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildAndroidProcess.SetupChannelPlugin exception is:" + ex.Message);
            return false;
        }
        return true;
    }
}
