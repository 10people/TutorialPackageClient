/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   10:13
	filename: 	MLDJCommand.cs
	author:		王迪
	
	purpose:	命令行打包调用脚本，添加场景需要修改此文件
*********************************************************************/
using UnityEngine;
using UnityEditor;
//using UnityEditor.Callbacks;
//using UnityEditor.XCodeEditor;
using System.IO;
using Games;
using Games.GlobeDefine;


public class CommandBuild : Editor
{

    //[MenuItem("MLDJ/Build/WP8/BuildPlayer/LowQuality")]
    //public static void BuildWP8Player_Low()
    //{
    //    BuildWP8(false, true);
    //}
    //[MenuItem("MLDJ/Build/WP8/BuildPlayer/NormalQuality")]
    //public static void BuildWP8Player_Normal()
    //{
    //    BuildWP8(false, false);
    //}

    //[MenuItem("MLDJ/Build/WP8/BuildPlayerRapid/LowQuality")]
    //public static void BuildWP8PlayerRapid_Low()
    //{
    //    BuildWP8(true, true);
    //}
    //[MenuItem("MLDJ/Build/WP8/BuildPlayerRapid/NormalQuality")]
    //public static void BuildWP8PlayerRapid_Normal()
    //{
    //    BuildWP8(true, false);
    //}
    //[MenuItem("MLDJ/Build/WP8/BuildInternalRes/LowQuality")]
    //public static void BuildWP8InternalRes_Low()
    //{
    //    BundleEditor.ExportBundleDataWP8_(true);
    //}
    //[MenuItem("MLDJ/Build/WP8/BuildInternalRes/NormalQuality")]
    //public static void BuildWP8InternalRes_Normal()
    //{
    //    BundleEditor.ExportBundleDataWP8_(false);
    //}

//    [MenuItem("MLDJ/Build/WP8/BuildUpdateRes/NormalQuality")]
//    public static void BuildWP8UpdateRes_Normal()
//    {
//        BuildWP8UpdateRes_(false);
//    }
//    [MenuItem("MLDJ/Build/WP8/BuildUpdateRes/LowQuality")]
//    public static void BuildWP8UpdateRes_Low()
//    {
//        BuildWP8UpdateRes_(true);
//    }
//
//    private static void BuildWP8UpdateRes_(bool bShrink = false)
//    {
//            BundleEditor.ExportBundleDataWP8_(bShrink,true);
//    }

    [MenuItem("MLDJ/Build/BuildPlayer")]
    public static void BuildPlayer()
    {
#if UNITY_STANDALONE_WIN
        BuildWindows();
#elif UNITY_ANDROID
        BuildAndroid();
#elif UNITY_WP8
#else
        BuildiOS();
#endif
    }

    [MenuItem("MLDJ/Build/BuildPlayerRapid")]
    public static void BuildPlayerRapid()
    {
#if UNITY_STANDALONE_WIN
        BuildWindowsRapid();
#elif UNITY_ANDROID
        BuildAndroidRapid();
#elif UNITY_WP8
#else
        BuildiOSRapid();
#endif
    }

    [MenuItem("MLDJ/Build/BuildInternalRes")]
    public static void BuildiOSInternalRes()
    {
        BundleEditor.ExportBundleData(false, GetBuildResTarget);
    }

    /// <summary>
    /// 获取要编辑资源对象
    /// </summary>
    /// <returns></returns>
    public static BuildTarget GetBuildResTarget
    {
        get
        {
#if UNITY_STANDALONE_WIN
        return BuildTarget.StandaloneWindows;
#elif UNITY_ANDROID
            return BuildTarget.Android;
#else
        return BuildTarget.iOS;
#endif
        }
    }

    // 不更新资源（将资源放在包体内）
    public static void BuildiOS()
    {
        BundleEditor.ExportBundleData(false, BuildTarget.iOS);
        BuildOptions opt = BuildOptions.None;
        CommandBuild.BuildPlayer(BuildTarget.iOS, opt);
    }

    public static void BuildWindows()
    {
        BundleEditor.ExportBundleData(false, BuildTarget.StandaloneWindows);
        BuildOptions opt = BuildOptions.UncompressedAssetBundle | BuildOptions.SymlinkLibraries;
        CommandBuild.BuildPlayer(BuildTarget.StandaloneWindows, opt);
    }


    /// <summary>
    ///编译WP8的客户端
    /// 输出目录：
    /// Client/Build/MLDJ_WP8
    /// </summary>
    /// <param name="isRapid">是否快速编译，true则不重新打包，false则重新打包</param>
    /// <param name="bshrink">是否压缩资源，true则压缩，false则不压缩</param>
    public static void BuildWP8(bool isRapid = false, bool bshrink = false)
    {
        FileUtil.DeleteFileOrDirectory("Assets/Plugins/LuYou");
        FileUtil.DeleteFileOrDirectory("Assets/UnityOSC");

        string[] scenePath = new string[2];
        scenePath[0] = "Assets/MLDJ/BundleData/Scene/" + Games.GlobeDefine.GameDefine_Globe.LoginSceneName + ".unity";
        scenePath[1] = "Assets/MLDJ/BundleData/Scene/" + Games.GlobeDefine.GameDefine_Globe.LoadingSceneName + ".unity";

        string assetPath = Application.dataPath;
        string projPath = assetPath.Remove(assetPath.IndexOf("/Assets")) + "/";

//        string msbuildPath = projPath + "/MSBuild.exe";
        string folder = "";
        if (!isRapid)
        {
            //BundleEditor.ExportBundleDataWP8_(bshrink);//打包
        }

        if (bshrink)
        {
            //-----------------------编译低配置版本客户端----------------------
            folder = "Build/MLDJ_WP8/LowQuality";//设置输出目录
            if (!Directory.Exists(projPath + folder))
            {//确保输出目录
                Debug.Log(projPath + folder);
                Directory.CreateDirectory(projPath + folder);
            }
            //BundleEditor.BobCopyWP8BundleDataFrom(BundleManager.WP8LOWQuality);//将打好的低配资源拷贝进StreamingAssets
            BuildPipeline.BuildPlayer(scenePath, folder, BuildTarget.WP8Player, BuildOptions.None);//开始编译
            CompileClient(projPath, "BuildLowQualityWP8.bat");
        }
        else
        {
            //-----------------------编译标准配置版本客户端----------------------
            folder = "Build/MLDJ_WP8/NormalQuality";//过程同上，但用的标准资源
            if (!Directory.Exists(projPath + folder))
            {
                Debug.Log(projPath + folder);
                Directory.CreateDirectory(projPath + folder);
            }
            //BundleEditor.BobCopyWP8BundleDataFrom(BundleManager.WP8NormalQuality);
            BuildPipeline.BuildPlayer(scenePath, folder, BuildTarget.WP8Player, BuildOptions.None);
            CompileClient(projPath, "BuildNormalQualityWP8.bat");
        }
    }

    /// <summary>
    /// 调用批处理程序编译Unity3D生成的Windows Phone项目
    /// </summary>
    /// <param name="projPath">Unity3D项目目录</param>
    /// <param name="batchFileName">使用的编译批处理文件名称</param>
    private static void CompileClient(string projPath, string batchFileName)
    {
        System.Diagnostics.ProcessStartInfo psi = new System.Diagnostics.ProcessStartInfo(projPath + "/Build/" + batchFileName);
        System.Diagnostics.Process.Start(psi);
    }

    public static void BuildAndroid()
    {
        BundleEditor.ExportBundleData(false, BuildTarget.Android);
        BuildOptions opt = BuildOptions.UncompressedAssetBundle;
        CommandBuild.BuildPlayer(BuildTarget.Android, opt);
    }

    // 不打包资源
    public static void BuildiOSRapid()
    {
        BuildOptions opt = BuildOptions.None;
        CommandBuild.BuildPlayer(BuildTarget.iOS, opt);
    }

    public static void BuildWindowsRapid()
    {
        BuildOptions opt = BuildOptions.UncompressedAssetBundle | BuildOptions.SymlinkLibraries;
        CommandBuild.BuildPlayer(BuildTarget.StandaloneWindows, opt);
    }

    public static void BuildAndroidRapid()
    {
        BuildOptions opt = BuildOptions.UncompressedAssetBundle;
        CommandBuild.BuildPlayer(BuildTarget.Android, opt);
    }

    // 更新资源（将资源放在包体外）
    public static void BuildiOSUpdate()
    {
        BundleEditor.ExportBundleData(true, BuildTarget.iOS);
        BuildOptions opt = BuildOptions.None;
        CommandBuild.BuildPlayer(BuildTarget.iOS, opt, false);
    }

    public static void BuildiOSUpdateTW()
    {
        if (!Internationalize.CopyInternationRes(Games.GlobeDefine.GlobeVar.TYPE_INTERNATION))
        {
            return;
        }
        BundleEditor.ExportBundleData(true, BuildTarget.iOS);
        BuildOptions opt = BuildOptions.None;
        CommandBuild.BuildPlayer(BuildTarget.iOS, opt, false);
    }

    public static void BuildiOSUpdateRes()
    {
        BundleEditor.ExportBundleData(true, BuildTarget.iOS);
    }

    private static void BuildPlayer(BuildTarget _buildTarget, BuildOptions _opt, bool bContainFullScene = true)
    {
        string assetPath = Application.dataPath;
        string projPath = assetPath.Remove(assetPath.IndexOf("/Assets")) + "/";
        string folder = "Build/MLDJ_UNKNOWN";
        if (_buildTarget == BuildTarget.iOS)
        {
            folder = "Build/MLDJ_IOS";
        }
        else if (_buildTarget == BuildTarget.Android)
        {
            folder = "Build/MLDJ_ANDROID";
        }
        else if (_buildTarget == BuildTarget.StandaloneWindows)
        {
            folder = "Build/MLDJ_WIN";
        }
        if (!Directory.Exists(projPath + folder))
        {
            Debug.Log(projPath + folder);
            Directory.CreateDirectory(projPath + folder);
        }

        if (_buildTarget == BuildTarget.StandaloneWindows)
        {
            folder += "/MLDJ.exe";
        }

        if (_buildTarget == BuildTarget.Android)
        {
            folder += "/MLDJ.apk";
        }

        string[] scenePath = new string[2];
        scenePath[0] = "Assets/MLDJ/BundleData/Scene/" + Games.GlobeDefine.GameDefine_Globe.LoginSceneName + ".unity";
        scenePath[1] = "Assets/MLDJ/BundleData/Scene/" + Games.GlobeDefine.GameDefine_Globe.LoadingSceneName + ".unity";

        BuildPipeline.BuildPlayer(scenePath, folder, _buildTarget, _opt);
    }

}
