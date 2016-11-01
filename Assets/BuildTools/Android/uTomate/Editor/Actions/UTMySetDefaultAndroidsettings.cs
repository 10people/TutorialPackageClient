//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;

/*
 * Android平台默认设置
 * 
 */

[UTDoc(title = "Set Default Android Player Settings", description = "Sets the Default player settings for Android builds.")]
[UTInspectorGroups(groups = new string[] { "Set APKPlan Settrings","Cross-Platform Player Settings", "Resolution & Presentation", "Identification",
	"Configuration", "Optimization", "TextureQuality Settings", "Publishing Settings", "Android Plugin", "AssetBundles", "Set SDK Channels to Build", "Set CPS Channels to Build" })]
[UTRequiresAndroid]
public class UTMySetDefaultAndroidsettings : UTAction
{
	//[UTDoc(description = "Need pngquant?")]
   // [UTInspectorHint(group = "Set APKPlan Settrings", order = 0)]
    //public UTBool pngquant;
	
	[UTDoc(description = "Need androidBase Setting?")]
    [UTInspectorHint(group = "Set APKPlan Settrings", order = 0)]
    public UTBool androidBase;
    [UTDoc(description = "设置资源版本号")]
    [UTInspectorHint(group = "Set APKPlan Settrings", order = 1)]
    public UTString resourceVersion;
	
    [UTDoc(description = "The default icon.")]
    [UTInspectorHint(group = "Cross-Platform Player Settings", order = 0)]
    public UTTexture2D defaultIcon;

    [UTDoc(description = "The company name.")]
    [UTInspectorHint(group = "Cross-Platform Player Settings",order = 1)]
    public UTString companyName;

    [UTDoc(description = "The product name.")]
    [UTInspectorHint(group = "Cross-Platform Player Settings", order = 2)]
    public UTString productName;


    [UTDoc(description = "设置游戏的横竖屏")]
    [UTInspectorHint(group = "Resolution & Presentation", order = 1)]
    public UTUIOrientation defaultOrientation;
    [UTDoc(description = "Should status bar be hidden? Shared between iOS & Android platforms.")]
    [UTInspectorHint(group = "Resolution & Presentation", order = 2)]
    public UTBool statusBarHidden;
    [UTDoc(description = "Use 32-bit display buffer?")]
    [UTInspectorHint(group = "Resolution & Presentation", order = 3)]
    public UTBool use32BitDisplayBuffer;

    [UTDoc(description = "Use 24-bit depth buffer?")]
    [UTInspectorHint(group = "Resolution & Presentation", order = 4)]
    public UTBool use24BitDepthBuffer;

    [UTDoc(description = "The type of activity indicator to be shown when the application loads.", title = "Activity Indicator")]
    [UTInspectorHint(group = "Resolution & Presentation", order = 5)]
    public UTAndroidShowActivityIndicatorOnLoading showActivityIndicatorOnLoading;
    //
    [UTDoc(description = "设置游戏默认的包名，必填项")]
    [UTInspectorHint(group = "Identification", order = 1, required = true)]
    public UTString bundleIdentifier;
    [UTDoc(description = "设置游戏版本号，必填项")]
    [UTInspectorHint(group = "Identification", order = 2, required = true)]
    public UTString bundleVersion;
    [UTDoc(description = "Minium Android API level.", title = "Minimum API Level")]
    [UTInspectorHint(group = "Identification", order = 3, required = false)]
    public UTAndroidSdkVersions minimumApiLevel;

    //
    [UTDoc(description = "The target device to build for.", title = "Device Filter")]
    [UTInspectorHint(group = "Configuration", order = 1)]
    public UTAndroidTargetDevice targetDevice;
#if UNITY_3_5	
	[UTDoc(description="Target graphics.", title="Graphics Level")]
	[UTInspectorHint(group="Configuration", order=2)]
	public UTAndroidTargetGraphics targetGraphics;
#endif

#if UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1
	[UTDoc(description="Target GLES graphics.", title="Target GLES graphics")]
	[UTInspectorHint(group="Configuration", order=2)]
	public UTTargetGlesGraphics targetGlesGraphics;
#endif

    [UTDoc(description = "Preferred install location.")]
    [UTInspectorHint(group = "Configuration", order = 3)]
    public UTAndroidPreferredInstallLocation installLocation;
    [UTDoc(description = "Force internet permission?")]
    [UTInspectorHint(group = "Configuration", order = 4)]
    public UTBool forceInternetPermission;
    [UTInspectorHint(group = "Configuration", order = 5)]
    [UTDoc(description = "Force SD Card write permission?")]
    public UTBool forceSDCardPermission;
    //
    [UTDoc(description = ".NET API compatibility level.")]
    [UTInspectorHint(group = "Optimization", order = 1)]
    public UTApiCompatibilityLevel apiCompatibilityLevel;
    [UTDoc(description = "Should unused Mesh components be excluded from game build?")]
    [UTInspectorHint(group = "Optimization", order = 6)]
    public UTBool optimizeMeshData;

    [UTDoc(description = "Should StrippingLevel is open?")]
    [UTInspectorHint(group = "Optimization", order = 8)]
    public UTBool optimizeStrippingLevel;
	//
	[UTDoc(description = "Texture Quality")]
	[UTInspectorHint(group = "TextureQuality Settings", order = 1)]
	public UTBool lowQuality;

#if UNITY_3_5	
	[UTDoc(description="Outputs profiling information about Resources.UnloadUnusedAssets,")]
	[UTInspectorHint(group="Optimization", order=7)]
	public UTDebugUnloadMode debugUnloadMode;
#endif
    //
    [UTDoc(description = "Path to the keystore to use.")]
    [UTInspectorHint(group = "Publishing Settings", order = 1, displayAs = UTInspectorHint.DisplayAs.OpenFileSelect)]
    public UTString keyStore;
    [UTDoc(description = "Password for the key store.")]
    [UTInspectorHint(group = "Publishing Settings", order = 2, displayAs = UTInspectorHint.DisplayAs.Password)]
    public UTString keyStorePassword;
    [UTDoc(description = "Alias of the key to use")]
    [UTInspectorHint(group = "Publishing Settings", order = 3)]
    public UTString keyAlias;
    [UTDoc(description = "Password for the key to use.")]
    [UTInspectorHint(group = "Publishing Settings", order = 4, displayAs = UTInspectorHint.DisplayAs.Password)]
    public UTString keyPassword;
	//打包google版本生成obb
	[UTInspectorHint(group = "Publishing Settings", order = 5)]
	public UTBool splitApplicationBinary;

    [UTDoc(description = "Android Plugin folder.")]
    [UTInspectorHint(group = "Android Plugin", order = 1, displayAs = UTInspectorHint.DisplayAs.FolderSelect)]
    public UTString AndroidPluginFolder;
    //added by mawenbin
    [UTDoc(description = "Use Channel ServerList?")]
    [UTInspectorHint(group = "Android Plugin", order = 2)]
    public UTBool sdkServerList;

    // [UTDoc(description = "Asset Bundles Path to use.")]
    // [UTInspectorHint(group = "AssetBundles", order = 1, displayAs = UTInspectorHint.DisplayAs.FolderSelect)]
    // public UTString assetBundlesPath;
    // [UTInspectorHint(group = "AssetBundles", order = 2)]
    // public UTBool copyAssetBundles;

    /* 设置需要打包的渠道 */
    [UTDoc(description = "Should build all channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 0)]
    public UTBool Build_All_SDK_Channel;

    [UTDoc(description = "Should build Android_360 channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 1)]
    public UTBool Android_360;

    [UTDoc(description = "Should build Android_uc channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 2)]
    public UTBool Android_uc;

    [UTDoc(description = "Should build Android_xiaomi channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 3)]
    public UTBool Android_xiaomi;

    [UTDoc(description = "Should build Android_wdj channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 4)]
    public UTBool Android_wdj;

    [UTDoc(description = "Should build Android_baidu channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 5)]
    public UTBool Android_baidu;

    [UTDoc(description = "Should build Android_oppo channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 6)]
    public UTBool Android_oppo;

    [UTDoc(description = "Should build Android_anzhi channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 7)]
    public UTBool Android_anzhi;

    [UTDoc(description = "Should build Android_lenovo channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 8)]
    public UTBool Android_lenovo;

    [UTDoc(description = "Should build Android_downjoy channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 9)]
    public UTBool Android_downjoy;

    [UTDoc(description = "Should build Android_huawei channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 10)]
    public UTBool Android_huawei;

    [UTDoc(description = "Should build Android_ewan channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 11)]
    public UTBool Android_ewan;

    [UTDoc(description = "Should build Android_cyou channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 12)]
    public UTBool Android_cyou;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 13)]
    public UTBool Android_withoutchannel;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 14)]
	public UTBool Android_vivo;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 15)]
	public UTBool Android_kupai;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 16)]
	public UTBool Android_zhangyue;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 17)]
	public UTBool Android_pps;
	
	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 18)]
	public UTBool Android_meizu;

    [UTDoc(description = "Should build Android_jinli channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 19)]
    public UTBool Android_jinli;

    [UTDoc(description = "Should build Android_yingyongbao channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 20)]
    public UTBool Android_yingyongbao;

    [UTDoc(description = "Should build Android_kingsoft channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 21)]
    public UTBool Android_kingsoft;

    [UTDoc(description = "Should build YouKu channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 22)]
    public UTBool BaoFengWuXian;

    [UTDoc(description = "Should build Android_youku channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 23)]
    public UTBool YouKu;

    [UTDoc(description = "Should build MiTV channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 24)]
    public UTBool MiTV;

    [UTDoc(description = "Should build YingYongHui channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 25)]
    public UTBool YingYongHui;

    [UTDoc(description = "Should build Sogou channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 26)]
    public UTBool Sogou;
	
	[UTDoc(description = "Should build XMWan channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 27)]
    public UTBool XMWan;
	
	[UTDoc(description = "Should build Momo channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 28)]
    public UTBool Momo;

    [UTDoc(description = "Should build Mian channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 29)]
    public UTBool Mian;

    [UTDoc(description = "Should build DuoWan channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 30)]
    public UTBool DuoWan;

    [UTDoc(description = "Should build ChuYou channel for your apk file?")]
    [UTInspectorHint(group = "Set SDK Channels to Build", order = 32)]
    public UTBool ChuYou07073;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 33)]
	public UTBool PPTV;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 34)]
	public UTBool SY37X;

	
	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 35)]
	public UTBool Android_baiduXianFeng;
	
	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 36)]
	public UTBool Android_ucXianFeng;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 36)]
	public UTBool Android_ucDuFu;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 37)]
	public UTBool Android_YiDongJiDi;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 38)]
	public UTBool Android_LianTong;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 39)]
	public UTBool Android_DianXin;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 40)]
	public UTBool Android_AliTV;

	[UTDoc(description = "Should build ChuYou channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 41)]
	public UTBool Android_linyou;

	[UTDoc(description = "Should build Android_ParentPackage_WuWeiXin channel for your apk file?")]
	[UTInspectorHint(group = "Set SDK Channels to Build", order = 42)]
	public UTBool Android_ParentPackage_WuWeiXin;

    // CPS
    //[UTDoc(description = "Should build Build_All_SDK_Channel channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 0)]
    //public UTBool Build_All_CPS_Channel;

    //[UTDoc(description = "Should build DiYiYingYong channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 1)]
    //public UTBool DiYiYingYong;

    //[UTDoc(description = "Should build _19196 channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 2)]
    //public UTBool _19196;


    //[UTDoc(description = "Should build YouYou channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 4)]
    //public UTBool YouYou;

    //[UTDoc(description = "Should build PuTao channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 5)]
    //public UTBool PuTao;

    //[UTDoc(description = "Should build _7881 channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 6)]
    //public UTBool _7881;

    //[UTDoc(description = "Should build MuMaYi channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 7)]
    //public UTBool MuMaYi;

    [UTDoc(description = "Should build ZhuoYi channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 8)]
    public UTBool ZhuoYi;

    [UTDoc(description = "Should build QiXiaZi channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 9)]
    public UTBool QiXiaZi;

    //[UTDoc(description = "Should build _91game channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 10)]
    //public UTBool _91game;

    //[UTDoc(description = "Should build AoYouTianXia channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 11)]
    //public UTBool AoYouTianXia;

    //[UTDoc(description = "Should build LiangZiTuiGuang channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 12)]
    //public UTBool LiangZiTuiGuang;

    //[UTDoc(description = "Should build AGuo channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 13)]
    //public UTBool AGuo;

    //[UTDoc(description = "Should build LiTian channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 14)]
    //public UTBool LiTian;

    [UTDoc(description = "Should build YouYi channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 15)]
    public UTBool YouYi;

    //[UTDoc(description = "Should build YouXiYuanZi channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 16)]
    //public UTBool YouXiTanZi;

    //[UTDoc(description = "Should build PiPa2 channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 17)]
    //public UTBool PiPa2;

    [UTDoc(description = "Should build JunHai channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 18)]
    public UTBool JunHai;

    //[UTDoc(description = "Should build TianYiLian channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 19)]
    //public UTBool TianYiLian;

    [UTDoc(description = "Should build YiGuo channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 20)]
    public UTBool YiGuo;

    //[UTDoc(description = "Should build BaiYu channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 21)]
    //public UTBool BaiYu;

    //[UTDoc(description = "Should build SOHU channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 22)]
    //public UTBool SOHU;

    //[UTDoc(description = "Should build MoLiDuo channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 23)]
    //public UTBool MoLiDuo;

    //[UTDoc(description = "Should build Android_maoren channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 24)]
    //public UTBool Android_maoren;

    //[UTDoc(description = "Should build Android_youxiyuan channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 25)]
    //public UTBool Android_youxiyuan;

    //[UTDoc(description = "Should build Android_xiaopiwang channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 26)]
    //public UTBool Android_xiaopiwang;

    //[UTDoc(description = "Should build Android_weiwan channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 27)]
    //public UTBool Android_weiwan;

    [UTDoc(description = "Should build Android_baidumedia channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 28)]
    public UTBool Android_baidumedia;

    //[UTDoc(description = "Should build Android_91 channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 29)]
    //public UTBool Android_91;

    [UTDoc(description = "Should build Android_18183 channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 30)]
    public UTBool Android_18183;

    [UTDoc(description = "Should build Android_duowan channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 31)]
    public UTBool DuoWanCPS;

    [UTDoc(description = "Should build Android_17173 channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 32)]
    public UTBool Android_17173;

    [UTDoc(description = "Should build Android_muzhiwan channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 33)]
    public UTBool Android_muzhiwan;

    //[UTDoc(description = "Should build Android_sougou channel for your apk file?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 35)]
    //public UTBool Android_sougou;

    [UTDoc(description = "Should build Android_anfeng channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 36)]
    public UTBool Android_anfeng;

    [UTDoc(description = "Should build Android_cyouq channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 37)]
    public UTBool Android_cyouq;

    [UTDoc(description = "Should build Android_cyouplus channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 38)]
    public UTBool Android_cyouplus;
	
	[UTDoc(description = "Should build Android_Cyouvideo channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 39)]
    public UTBool Android_Cyouvideo;

    [UTDoc(description = "Should build Android_HTC channel for your apk file?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 40)]
    public UTBool Android_htc;
    
    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 41)]
    public UTBool Android_sy37;

    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 42)]
    //public UTBool Android_fg;

    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 43)]
    //public UTBool HeiYou;

    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 44)]
    //public UTBool htc2;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 46)]
    public UTBool Tencent;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 47)]
    public UTBool Netease;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 48)]
    public UTBool YouXiDuo;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 49)]
    public UTBool BanMa;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 50)]
    public UTBool CyouTY;
	
	[UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 51)]
    public UTBool YaMaXun;
	
    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 52)]
    //public UTBool YangShiChuanMei;
	
    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 53)]
    //public UTBool HongYanXinXi;
	
	[UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 54)]
    public UTBool LiuJianFang;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 55)]
    public UTBool DuoMengCPA;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 56)]
    public UTBool DuoMengCPC;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 57)]
    public UTBool AiDeSiQiCPA;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 58)]
    public UTBool AiDeSiQiCPC;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 59)]
    public UTBool LiMeiCPA;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 60)]
    public UTBool LiMeiCPC;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 61)]
    public UTBool DianRuCPA;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 62)]
    public UTBool Adwords;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 63)]
    public UTBool Inmobi;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 64)]
    public UTBool ShouJiSOHU;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 65)]
    public UTBool SOHU1;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 66)]
    public UTBool AiDeSiQiWangYuYanCPC;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 67)]
    public UTBool DuoMengWangYuYanCPC;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 68)]
    public UTBool LiMeiWangYuYanCPC;

    //[UTDoc(description = "Should build your apk without channel?")]
    //[UTInspectorHint(group = "Set CPS Channels to Build", order = 69)]
    //public UTBool YouLeYuan;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 70)]
    public UTBool SanXing;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 71)]
    public UTBool FanRen;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 73)]
    public UTBool KuWan;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 74)]
	public UTBool SuTong;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 75)]
	public UTBool SuTong2;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 76)]
	public UTBool SouHuKuaiZhan;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 77)]
    public UTBool AnWo;

    [UTDoc(description = "Should build your apk without channel?")]
    [UTInspectorHint(group = "Set CPS Channels to Build", order = 78)]
    public UTBool CPS_17173App;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 78)]
	public UTBool CPS_17173New;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 79)]
	public UTBool Cyou_RecNow;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 80)]
	public UTBool BaiduSousuo;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 81)]
	public UTBool inmobi1;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 82)]
	public UTBool inmobi2;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 83)]
	public UTBool inmobi3;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 84)]
	public UTBool inmobi4;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 85)]
	public UTBool inmobi5;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 86)]
	public UTBool inmobi6;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 87)]
	public UTBool inmobi7;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 88)]
	public UTBool inmobi8;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 89)]
	public UTBool inmobi9;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 90)]
	public UTBool inmobi10;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 91)]
	public UTBool Google1;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 92)]
	public UTBool Google2;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 93)]
	public UTBool Google3;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 94)]
	public UTBool Google4;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 95)]
	public UTBool Google5;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 96)]
	public UTBool Google6;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 97)]
	public UTBool Google7;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 98)]
	public UTBool Google8;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 99)]
	public UTBool Google9;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 100)]
	public UTBool Google10;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 101)]
	public UTBool BaiduZhuanqu;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 102)]
	public UTBool BaiduGuanjianzi;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 103)]
	public UTBool BaiduIwan;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 104)]
	public UTBool SougouZhuanqu;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 105)]
	public UTBool SougouGuanjianzi;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 106)]
	public UTBool ZhiJian;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 107)]
	public UTBool FuLuWang;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set CPS Channels to Build", order = 108)]
	public UTBool XinYou;

	//===========废弃==========//
	[UTDoc(description = "Should build QingNing channel for your apk file?")]
	[UTInspectorHint(group = "Set FeiQi CPS Channels to Build", order = 1)]
	public UTBool QingNing;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set FeiQi CPS Channels to Build", order = 2)]
	public UTBool QuWang;

	[UTDoc(description = "Should build Android_pipa channel for your apk file?")]
	[UTInspectorHint(group = "Set FeiQi CPS Channels to Build", order = 3)]
	public UTBool Android_pipa;

	[UTDoc(description = "Should build your apk without channel?")]
	[UTInspectorHint(group = "Set FeiQi CPS Channels to Build", order = 4)]
	public UTBool HangZhouSaiZhong;

	[UTDoc(description = "Should build LeDou channel for your apk file?")]
	[UTInspectorHint(group = "Set FeiQi Channels to Build", order = 1)]
	public UTBool LeDou;
	//public Dictionary<string, bool> SDK_Channel;


    // 台湾渠道
    [UTInspectorHint(group = "台湾渠道", order = 1)]
    public UTBool Efun;

    [UTInspectorHint(group = "台湾渠道", order = 2)]
    public UTBool EfunGooglePlay;

	[UTInspectorHint(group = "台湾渠道", order = 3)]
	public UTBool EfunFetnet;
	
	[UTInspectorHint(group = "台湾渠道", order = 4)]
	public UTBool EfunAsus;

    [UTInspectorHint(group = "HK渠道", order = 1)]
    public UTBool Gameone;

	[UTInspectorHint(group = "HK渠道", order = 2)]
	public UTBool GameoneGooglePlay;

    public override IEnumerator Execute(UTContext context)
    {
        Debug.Log("Set Default Android Player Settings----begin-----");
		
		context ["androidBase"] =  androidBase.EvaluateIn(context);
        context["resourceVersion"] = resourceVersion.EvaluateIn(context);

        PlayerSettings.companyName = companyName.EvaluateIn(context);
        PlayerSettings.productName = productName.EvaluateIn(context);
        PlayerSettings.SetIconsForTargetGroup(BuildTargetGroup.Unknown, new Texture2D[] { defaultIcon.EvaluateIn(context) });
        if (UTPreferences.DebugMode)
        {
            Debug.Log("Cross platform player settings modified.", this);
        }

        var theBundleIdentifier = bundleIdentifier.EvaluateIn(context);
        if (string.IsNullOrEmpty(theBundleIdentifier))
        {
            throw new UTFailBuildException("You need to specify the bundle identifier.", this);
        }

        var theBundleVersion = bundleVersion.EvaluateIn(context);
        if (string.IsNullOrEmpty(theBundleVersion))
        {
            throw new UTFailBuildException("You need to specify the bundle version.", this);
        }

        var theKeyStore = keyStore.EvaluateIn(context);
        if (!string.IsNullOrEmpty(theKeyStore) && !File.Exists(theKeyStore))
        {
            throw new UTFailBuildException("The specified keystore does not exist.", this);
        }

        PlayerSettings.defaultInterfaceOrientation = defaultOrientation.EvaluateIn(context);
        PlayerSettings.statusBarHidden = statusBarHidden.EvaluateIn(context);
        PlayerSettings.use32BitDisplayBuffer = use32BitDisplayBuffer.EvaluateIn(context);
        PlayerSettings.Android.use24BitDepthBuffer = use24BitDepthBuffer.EvaluateIn(context);
        PlayerSettings.Android.showActivityIndicatorOnLoading = showActivityIndicatorOnLoading.EvaluateIn(context);

        context["defaultPackageName"] = theBundleIdentifier;
        PlayerSettings.bundleIdentifier = theBundleIdentifier;
        PlayerSettings.bundleVersion = theBundleVersion;
        PlayerSettings.Android.bundleVersionCode = UTMyBuildAndroidApkAction.GetVersionCode();
        PlayerSettings.Android.minSdkVersion = minimumApiLevel.EvaluateIn(context);

        PlayerSettings.Android.targetDevice = targetDevice.EvaluateIn(context);
#if UNITY_3_5		
		PlayerSettings.Android.targetGraphics = targetGraphics.EvaluateIn (context);
#endif
#if UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1
		PlayerSettings.targetGlesGraphics = targetGlesGraphics.EvaluateIn(context);
#endif
        PlayerSettings.Android.preferredInstallLocation = installLocation.EvaluateIn(context);
        PlayerSettings.Android.forceInternetPermission = forceInternetPermission.EvaluateIn(context);
        PlayerSettings.Android.forceSDCardPermission = forceSDCardPermission.EvaluateIn(context);

        PlayerSettings.apiCompatibilityLevel = apiCompatibilityLevel.EvaluateIn(context);
        PlayerSettings.stripUnusedMeshComponents = optimizeMeshData.EvaluateIn(context);
        
        bool needstrip = optimizeStrippingLevel.EvaluateIn(context);
        if(needstrip == true)
        {
            PlayerSettings.strippingLevel = UnityEditor.StrippingLevel.UseMicroMSCorlib;
        }

		context["lowQuality"] = lowQuality.EvaluateIn(context);
#if UNITY_3_5
		PlayerSettings.debugUnloadMode = debugUnloadMode.EvaluateIn(context);
#endif

        PlayerSettings.Android.keystoreName = theKeyStore;
        PlayerSettings.Android.keystorePass = keyStorePassword.EvaluateIn(context);

        PlayerSettings.Android.keyaliasName = keyAlias.EvaluateIn(context);
        PlayerSettings.Android.keyaliasPass = keyPassword.EvaluateIn(context);
		PlayerSettings.Android.useAPKExpansionFiles = splitApplicationBinary.EvaluateIn(context);//是否使用obb分离
        // context["AssetBundlesPath"] = assetBundlesPath.EvaluateIn(context);
        // context["CopyAssetBundles"] = copyAssetBundles.EvaluateIn(context);

        /*** 根据设置需要打包的渠道设置全局变量 ***/
        Debug.Log("My-uTmote: Build_All_SDK_Channel = " + Build_All_SDK_Channel.EvaluateIn(context));
        if (Build_All_SDK_Channel.EvaluateIn(context))
        {
            Android_360.Value = true;
            Android_uc.Value = true;
            Android_xiaomi.Value = true;
            Android_wdj.Value = true;
            Android_baidu.Value = true;
            Android_oppo.Value = true;
            Android_anzhi.Value = true;
            Android_lenovo.Value = true;
            Android_downjoy.Value = true;
            Android_huawei.Value = true;
            Android_ewan.Value = true;
            Android_cyou.Value = true;
            Android_withoutchannel.Value = true;
			Android_vivo.Value = true;
			Android_kupai.Value = true;
			Android_zhangyue.Value = true;
			Android_pps.Value = true;
			Android_meizu.Value = true;
            Android_jinli.Value = true;
            Android_yingyongbao.Value = true;
            Android_kingsoft.Value = true;
            Sogou.Value = true;
			XMWan.Value = true;
            BaoFengWuXian.Value = true;
            YouKu.Value = true;
            MiTV.Value = true;
            YingYongHui.Value = true;
            Efun.Value = true;
            EfunGooglePlay.Value = true;
			EfunFetnet.Value = true;
			EfunAsus.Value = true;
            Mian.Value = true;
			Momo.Value = true;
            DuoWan.Value = true;
            LeDou.Value = true;
            ChuYou07073.Value = true;
            PPTV.Value = true;
			SY37X.Value = true;
			Android_baiduXianFeng.Value = true;
			Android_ucXianFeng.Value = true;
			Android_ucDuFu.Value = true;
			Android_YiDongJiDi.Value = true;
			Android_LianTong.Value = true;
			Android_DianXin.Value = true;
			Android_AliTV.Value = true;
			Android_linyou.Value = true;
			Android_ParentPackage_WuWeiXin.Value = true;
            // CPS
            Android_sy37.Value = true;	
            //Android_fg.Value = true;
            Android_htc.Value = true;
            Android_cyouplus.Value = true;
            Android_cyouq.Value = true;
			Android_Cyouvideo.Value = true;
            //Android_maoren.Value = true;
            //Android_youxiyuan.Value = true;
            //Android_xiaopiwang.Value = true;
            //Android_weiwan.Value = true;
            Android_baidumedia.Value = true;
            //Android_91.Value = true;
            Android_18183.Value = true;
            DuoWanCPS.Value = true;
            Android_17173.Value = true;
            Android_muzhiwan.Value = true;
            Android_pipa.Value = true;
            //Android_sougou.Value = true;
            Android_anfeng.Value = true;
            //DiYiYingYong.Value = true;
            //_19196.Value = true;
            QingNing.Value = true;
            //YouYou.Value = true;
            //PuTao.Value = true;
            //_7881.Value = true;
            //MuMaYi.Value = true;
            ZhuoYi.Value = true;
            QiXiaZi.Value = true;
            //_91game.Value = true;
            //AoYouTianXia.Value = true;
            //LiangZiTuiGuang.Value = true;
            //AGuo.Value = true;
            //LiTian.Value = true;
            YouYi.Value = true;
            //YouXiTanZi.Value = true;
            //PiPa2.Value = true;
            JunHai.Value = true;
            //TianYiLian.Value = true;
            YiGuo.Value = true;
            //BaiYu.Value = true;
            //SOHU.Value = true;
            //MoLiDuo.Value = true;
            //HeiYou.Value = true;
            //htc2.Value = true;
            QuWang.Value = true;
            Tencent.Value = true;
            Netease.Value = true;
            YouXiDuo.Value = true;
            BanMa.Value = true;
            CyouTY.Value = true;
			YaMaXun.Value = true;
            //YangShiChuanMei.Value = true;
            //HongYanXinXi.Value = true;
			LiuJianFang.Value = true;
            DuoMengCPA.Value = true;
            DuoMengCPC.Value = true;
            AiDeSiQiCPA.Value = true;
            AiDeSiQiCPC.Value = true;
            LiMeiCPA.Value = true;
            LiMeiCPC.Value = true;
            DianRuCPA.Value = true;
            Adwords.Value = true;
            Inmobi.Value = true;
            ShouJiSOHU.Value = true;
            SOHU1.Value = true;
            AiDeSiQiWangYuYanCPC.Value = true;
            DuoMengWangYuYanCPC.Value = true;
            LiMeiWangYuYanCPC.Value = true;
            //YouLeYuan.Value = true;
            SanXing.Value = true;
            FanRen.Value = true;
            HangZhouSaiZhong.Value = true;
            KuWan.Value = true;
			SuTong.Value = true;
			SuTong2.Value = true;
			SouHuKuaiZhan.Value = true;
            AnWo.Value = true;
            CPS_17173App.Value = true;
			CPS_17173New.Value = true;
			Cyou_RecNow.Value = true;
			BaiduSousuo.Value = true;
			inmobi1.Value = true;
			inmobi2.Value = true;
			inmobi3.Value = true;
			inmobi4.Value = true;
			inmobi5.Value = true;
			inmobi6.Value = true;
			inmobi7.Value = true;
			inmobi8.Value = true;
			inmobi9.Value = true;
			inmobi10.Value = true;
			Google1.Value = true;
			Google2.Value = true;
			Google3.Value = true;
			Google4.Value = true;
			Google5.Value = true;
			Google6.Value = true;
			Google7.Value = true;
			Google8.Value = true;
			Google9.Value = true;
			Google10.Value = true;
			BaiduZhuanqu.Value = true;
			BaiduGuanjianzi.Value = true;
			BaiduIwan.Value = true;
			SougouZhuanqu.Value = true;
			SougouGuanjianzi.Value = true;
			ZhiJian.Value = true;
			FuLuWang.Value = true;
 			Gameone.Value = true;
			GameoneGooglePlay.Value = true;
			XinYou.Value = true;
        }
        Dictionary<string, bool> SDK_Channel = new Dictionary<string, bool>();
        SDK_Channel.Add("Android_360", Android_360.EvaluateIn(context));
        SDK_Channel.Add("Android_uc", Android_uc.EvaluateIn(context));
        SDK_Channel.Add("Android_xiaomi", Android_xiaomi.EvaluateIn(context));
        SDK_Channel.Add("Android_wdj", Android_wdj.EvaluateIn(context));
        SDK_Channel.Add("Android_baidu", Android_baidu.EvaluateIn(context));
        SDK_Channel.Add("Android_oppo", Android_oppo.EvaluateIn(context));
        SDK_Channel.Add("Android_anzhi", Android_anzhi.EvaluateIn(context));
        SDK_Channel.Add("Android_lenovo", Android_lenovo.EvaluateIn(context));
        SDK_Channel.Add("Android_downjoy", Android_downjoy.EvaluateIn(context));
        SDK_Channel.Add("Android_huawei", Android_huawei.EvaluateIn(context));
        SDK_Channel.Add("Android_ewan", Android_ewan.EvaluateIn(context));
        SDK_Channel.Add("Android_cyou", Android_cyou.EvaluateIn(context));
        SDK_Channel.Add("Android_withoutchannel", Android_withoutchannel.EvaluateIn(context));
		SDK_Channel.Add("Android_vivo", Android_vivo.EvaluateIn(context));
		SDK_Channel.Add("Android_kupai", Android_kupai.EvaluateIn(context));
		SDK_Channel.Add("Android_zhangyue", Android_zhangyue.EvaluateIn(context));
		SDK_Channel.Add("Android_pps", Android_pps.EvaluateIn(context));
		SDK_Channel.Add("Android_meizu", Android_meizu.EvaluateIn(context));
        SDK_Channel.Add("Android_jinli", Android_jinli.EvaluateIn(context));
        SDK_Channel.Add("Android_yingyongbao", Android_yingyongbao.EvaluateIn(context));
        SDK_Channel.Add("Android_kingsoft", Android_kingsoft.EvaluateIn(context));
        SDK_Channel.Add("Android_sogou", Sogou.EvaluateIn(context));
        SDK_Channel.Add("Android_BaoFengWuXian", BaoFengWuXian.EvaluateIn(context));
        SDK_Channel.Add("Android_youku", YouKu.EvaluateIn(context));
        SDK_Channel.Add("Android_MiTV", MiTV.EvaluateIn(context));
        SDK_Channel.Add("Android_YingYongHui", YingYongHui.EvaluateIn(context));
		SDK_Channel.Add("Android_XMWan", XMWan.EvaluateIn(context));
        SDK_Channel.Add("Android_Efun", Efun.EvaluateIn(context));
        SDK_Channel.Add("Android_EfunGooglePlay", EfunGooglePlay.EvaluateIn(context));
		SDK_Channel.Add("Android_EfunAsus", EfunAsus.EvaluateIn(context));
		SDK_Channel.Add("Android_EfunFetnet", EfunFetnet.EvaluateIn(context));
        SDK_Channel.Add("Android_Mian", Mian.EvaluateIn(context));
        SDK_Channel.Add("Android_Momo", Momo.EvaluateIn(context));
        SDK_Channel.Add("Android_DuoWan", DuoWan.EvaluateIn(context));
        SDK_Channel.Add("Android_LeDou", LeDou.EvaluateIn(context));
        SDK_Channel.Add("Android_ChuYou07073", ChuYou07073.EvaluateIn(context));
		SDK_Channel.Add("Android_PPTV", PPTV.EvaluateIn(context));
		SDK_Channel.Add("Android_37wan", SY37X.EvaluateIn(context));
		SDK_Channel.Add("Android_baiduXianFeng", Android_baiduXianFeng.EvaluateIn(context));
		SDK_Channel.Add("Android_ucXianFeng", Android_ucXianFeng.EvaluateIn(context));
		SDK_Channel.Add("Android_ucDuFu", Android_ucDuFu.EvaluateIn(context));
		SDK_Channel.Add("Android_YiDongJiDi", Android_YiDongJiDi.EvaluateIn(context));
		SDK_Channel.Add("Android_LianTong", Android_LianTong.EvaluateIn(context));
		SDK_Channel.Add("Android_DianXin", Android_DianXin.EvaluateIn(context));
		SDK_Channel.Add("Android_AliTV", Android_AliTV.EvaluateIn(context));
		SDK_Channel.Add("Android_linyou", Android_linyou.EvaluateIn(context));
		SDK_Channel.Add("Android_ParentPackage_WuWeiXin", Android_ParentPackage_WuWeiXin.EvaluateIn(context));

        // CPS
        SDK_Channel.Add("Android_sy37", Android_sy37.EvaluateIn(context));
		//SDK_Channel.Add("Android_fg", Android_fg.EvaluateIn(context));
        SDK_Channel.Add("Android_cyouplus", Android_cyouplus.EvaluateIn(context));
        SDK_Channel.Add("Android_cyouq", Android_cyouq.EvaluateIn(context));
		SDK_Channel.Add("Android_Cyouvideo", Android_Cyouvideo.EvaluateIn(context));
        SDK_Channel.Add("Android_htc", Android_htc.EvaluateIn(context));
        //SDK_Channel.Add("Android_maoren", Android_maoren.EvaluateIn(context));
        //SDK_Channel.Add("Android_youxiyuan", Android_youxiyuan.EvaluateIn(context));
        //SDK_Channel.Add("Android_xiaopiwang", Android_xiaopiwang.EvaluateIn(context));
        //SDK_Channel.Add("Android_weiwan", Android_weiwan.EvaluateIn(context));
        SDK_Channel.Add("Android_baidumedia", Android_baidumedia.EvaluateIn(context));
        //SDK_Channel.Add("Android_91", Android_91.EvaluateIn(context));
        SDK_Channel.Add("Android_18183", Android_18183.EvaluateIn(context));
        SDK_Channel.Add("CPS_DuoWan", DuoWanCPS.EvaluateIn(context));
        SDK_Channel.Add("Android_17173", Android_17173.EvaluateIn(context));
        SDK_Channel.Add("Android_muzhiwan", Android_muzhiwan.EvaluateIn(context));
        SDK_Channel.Add("Android_pipa", Android_pipa.EvaluateIn(context));
        //SDK_Channel.Add("Android_sougou", Android_sougou.EvaluateIn(context));
        SDK_Channel.Add("Android_anfeng", Android_anfeng.EvaluateIn(context));
        //SDK_Channel.Add("CPS_DiYiYingYong", DiYiYingYong.EvaluateIn(context));
        //SDK_Channel.Add("CPS_19196", _19196.EvaluateIn(context));
        SDK_Channel.Add("CPS_QingNing", QingNing.EvaluateIn(context));
        //SDK_Channel.Add("CPS_YouYou", YouYou.EvaluateIn(context));
        //SDK_Channel.Add("CPS_PuTao", PuTao.EvaluateIn(context));
        //SDK_Channel.Add("CPS_7881", _7881.EvaluateIn(context));
        //SDK_Channel.Add("CPS_MuMaYi", MuMaYi.EvaluateIn(context));
        SDK_Channel.Add("CPS_ZhuoYi", ZhuoYi.EvaluateIn(context));
        SDK_Channel.Add("CPS_QiXiaZi", QiXiaZi.EvaluateIn(context));
        //SDK_Channel.Add("CPS_91game", _91game.EvaluateIn(context));
        //SDK_Channel.Add("CPS_AoYouTianXia", AoYouTianXia.EvaluateIn(context));
        //SDK_Channel.Add("CPS_LiangZiTuiGuang", LiangZiTuiGuang.EvaluateIn(context));
        //SDK_Channel.Add("CPS_AGuo", AGuo.EvaluateIn(context));
        //SDK_Channel.Add("CPS_LiTian", LiTian.EvaluateIn(context));
        SDK_Channel.Add("CPS_YouYi", YouYi.EvaluateIn(context));
        //SDK_Channel.Add("CPS_YouXiTanZi", YouXiTanZi.EvaluateIn(context));
        //SDK_Channel.Add("CPS_PiPa2", PiPa2.EvaluateIn(context));
        SDK_Channel.Add("CPS_JunHai", JunHai.EvaluateIn(context));
        //SDK_Channel.Add("CPS_TianYiLian", TianYiLian.EvaluateIn(context));
        SDK_Channel.Add("CPS_YiGuo", YiGuo.EvaluateIn(context));
        //SDK_Channel.Add("CPS_BaiYu", BaiYu.EvaluateIn(context));
        //SDK_Channel.Add("CPS_SOHU", SOHU.EvaluateIn(context));
        //SDK_Channel.Add("CPS_MoLiDuo", MoLiDuo.EvaluateIn(context));
        //SDK_Channel.Add("CPS_HeiYou", HeiYou.EvaluateIn(context));
        //SDK_Channel.Add("CPS_htc2", htc2.EvaluateIn(context));
        SDK_Channel.Add("CPS_QuWang", QuWang.EvaluateIn(context));
        SDK_Channel.Add("CPS_Tencent", Tencent.EvaluateIn(context));
        SDK_Channel.Add("CPS_Netease", Netease.EvaluateIn(context));
        SDK_Channel.Add("CPS_YouXiDuo", YouXiDuo.EvaluateIn(context));
        SDK_Channel.Add("CPS_BanMa", BanMa.EvaluateIn(context));
        SDK_Channel.Add("CPS_CyouTY", CyouTY.EvaluateIn(context));
		SDK_Channel.Add("CPS_YaMaXun", YaMaXun.EvaluateIn(context));
        //SDK_Channel.Add("CPS_YangShiChuanMei", YangShiChuanMei.EvaluateIn(context));
        //SDK_Channel.Add("CPS_HongYanXinXi", HongYanXinXi.EvaluateIn(context));
		SDK_Channel.Add("CPS_LiuJianFang", LiuJianFang.EvaluateIn(context));
        SDK_Channel.Add("CPS_DuoMeng_CPA", DuoMengCPA.EvaluateIn(context));
        SDK_Channel.Add("CPS_DuoMeng_CPC", DuoMengCPC.EvaluateIn(context));
        SDK_Channel.Add("CPS_AiDeSiQi_CPA", AiDeSiQiCPA.EvaluateIn(context));
        SDK_Channel.Add("CPS_AiDeSiQi_CPC", AiDeSiQiCPC.EvaluateIn(context));
        SDK_Channel.Add("CPS_LiMei_CPA", LiMeiCPA.EvaluateIn(context));
        SDK_Channel.Add("CPS_LiMei_CPC", LiMeiCPC.EvaluateIn(context));
        SDK_Channel.Add("CPS_DianRu_CPA", DianRuCPA.EvaluateIn(context));
        SDK_Channel.Add("CPS_Adwords", Adwords.EvaluateIn(context));
        SDK_Channel.Add("CPS_Inmobi", Inmobi.EvaluateIn(context));
        SDK_Channel.Add("CPS_ShouJiSOHU", ShouJiSOHU.EvaluateIn(context));
        SDK_Channel.Add("CPS_SOHU1", SOHU1.EvaluateIn(context));
        SDK_Channel.Add("CPS_AiDeSiQiWangYuYan_CPC", AiDeSiQiWangYuYanCPC.EvaluateIn(context));
        SDK_Channel.Add("CPS_DuoMengWangYuYan_CPC", DuoMengWangYuYanCPC.EvaluateIn(context));
        SDK_Channel.Add("CPS_LiMeiWangYuYan_CPC", LiMeiWangYuYanCPC.EvaluateIn(context));
        //SDK_Channel.Add("CPS_YouLeYuan", YouLeYuan.EvaluateIn(context));
        SDK_Channel.Add("CPS_SanXing", SanXing.EvaluateIn(context));
        SDK_Channel.Add("CPS_FanRen", FanRen.EvaluateIn(context));
        SDK_Channel.Add("CPS_HangZhouSaiZhong", HangZhouSaiZhong.EvaluateIn(context));
        SDK_Channel.Add("CPS_KuWan", KuWan.EvaluateIn(context));
		SDK_Channel.Add("CPS_SuTong", SuTong.EvaluateIn(context));
		SDK_Channel.Add("CPS_SuTong2", SuTong2.EvaluateIn(context));
		SDK_Channel.Add("CPS_SouHuKuaiZhan", SouHuKuaiZhan.EvaluateIn(context));
        SDK_Channel.Add("CPS_AnWo", AnWo.EvaluateIn(context));
        SDK_Channel.Add("CPS_17173App", CPS_17173App.EvaluateIn(context));
		SDK_Channel.Add("CPS_17173New", CPS_17173New.EvaluateIn(context));
		SDK_Channel.Add("Cyou_RecNow", Cyou_RecNow.EvaluateIn(context));
		SDK_Channel.Add("CPS_BaiduSousuo", BaiduSousuo.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi1", inmobi1.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi2", inmobi2.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi3", inmobi3.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi4", inmobi4.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi5", inmobi5.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi6", inmobi6.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi7", inmobi7.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi8", inmobi8.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi9", inmobi9.EvaluateIn(context));
		SDK_Channel.Add("CPS_inmobi10", inmobi10.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google1", Google1.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google2", Google2.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google3", Google3.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google4", Google4.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google5", Google5.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google6", Google6.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google7", Google7.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google8", Google8.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google9", Google9.EvaluateIn(context));
		SDK_Channel.Add("CPS_Google10", Google10.EvaluateIn(context));
		SDK_Channel.Add("CPS_BaiduZhuanqu", BaiduZhuanqu.EvaluateIn(context));
		SDK_Channel.Add("CPS_BaiduGuanjianzi", BaiduGuanjianzi.EvaluateIn(context));
		SDK_Channel.Add("CPS_BaiduIwan", BaiduIwan.EvaluateIn(context));
		SDK_Channel.Add("CPS_SougouZhuanqu", SougouZhuanqu.EvaluateIn(context));
		SDK_Channel.Add("CPS_SougouGuanjianzi", SougouGuanjianzi.EvaluateIn(context));
		SDK_Channel.Add("CPS_ZhiJian", ZhiJian.EvaluateIn(context));
		SDK_Channel.Add("CPS_FuLuWang", FuLuWang.EvaluateIn(context));
		SDK_Channel.Add("Android_Gameone", Gameone.EvaluateIn(context));
        SDK_Channel.Add("Android_GameoneGooglePlay", GameoneGooglePlay.EvaluateIn(context));
		SDK_Channel.Add("CPS_XinYou", XinYou.EvaluateIn(context));
        context["SDK_Channel"] = SDK_Channel;

        //Debug.Log("My-uTmote: Build_All_CPS_Channel = " + Build_All_CPS_Channel.EvaluateIn(context));
        //if (Build_All_CPS_Channel.EvaluateIn(context))
        //{
        //}
        //Dictionary<string, bool> CPS_Channel = new Dictionary<string, bool>();
        //context["CPS_Channel"] = CPS_Channel;

        context["AndroidPlugin"] = AndroidPluginFolder.EvaluateIn(context);
        context["sdkServerList"] = sdkServerList.EvaluateIn(context);

        Debug.Log("Set Default Android Player Settings----end-----");
        yield return "";

    }

    [MenuItem("Assets/Create/uTomate/MySetDefaultAndroidsettings", false, 300)]
    public static void AddAction()
    {
        Create<UTMySetDefaultAndroidsettings>();
    }
}
