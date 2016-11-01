using UnityEngine;
using UnityEditor;
using System;
using System.IO;
//using Ionic.Zip;

public class BuildAssetProcess
{
    public static void BuildAndroid()
    {
        Debug.Log("BuildAssetProcess.BuildAndroid start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        string sVersion = string.Empty;
        //parse command line parameters from shell
        string[] arguments = Environment.GetCommandLineArgs();
        Debug.Log("BuildAssetProcess.BuildAndroid arguments number is:" + arguments.Length.ToString());
        for (int index = 0; index < arguments.Length; ++index)
        {
            string sArgu = arguments[index];
            Debug.Log(string.Format("BuildAssetProcess.BuildAndroid argument[{0}]:{1}", index.ToString(), sArgu));
            int iTest = index + 1;
            if (arguments.Length <= iTest)
            {
                break;
            }
            if (sArgu.Equals("-version_num"))
            {
                sVersion = arguments[iTest];
                continue;
            }
        }

        //check command line parameters
        if (string.IsNullOrEmpty(sVersion))
        {
            throw new Exception(string.Format("BuildAssetProcess.BuildAndroid arguments error! Version:{0}", sVersion));
        }

        DoAndroidLowTextrue();
        BundleEditor.ExportBundleData(true, BuildTarget.Android);
        //CreateAssetZip(sVersion);
        Debug.Log("BuildAssetProcess.BuildAndroid end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
    }

    //public static void BuildResUpdate()
    //{
    //    try
    //    {
    //        Debug.Log("BuildAssetProcess.BuildResUpdate start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
    //        string sResourceVersion = string.Empty;
    //        string sSVNDiffFilePath = string.Empty;
    //        string sSrcResPath = string.Empty;
    //        string sUpdateResPath = string.Empty;
    //        string sBuildTarget = string.Empty;

    //        //parse command line parameters from shell
    //        string[] arguments = Environment.GetCommandLineArgs();
    //        Debug.Log("BuildAssetProcess.BuildResUpdate arguments number is:" + arguments.Length.ToString());
    //        for (int index = 0; index < arguments.Length; ++index)
    //        {
    //            string sArgu = arguments[index];
    //            Debug.Log(string.Format("BuildAssetProcess.BuildResUpdate argument[{0}]:{1}", index.ToString(), sArgu));
    //            int iTest = index + 1;
    //            if (arguments.Length <= iTest)
    //            {
    //                break;
    //            }
    //            if (sArgu.Equals("-res_version"))
    //            {
    //                sResourceVersion = arguments[iTest];
    //                int iResourceVersionCode = 0;
    //                if (!int.TryParse(sResourceVersion, out iResourceVersionCode))
    //                {
    //                    throw new Exception("BuildAssetProcess.BuildResUpdate resource version error! res_version:" + sResourceVersion);
    //                }
    //                continue;
    //            }
    //            if (sArgu.Equals("-svn_diff"))
    //            {
    //                sSVNDiffFilePath = arguments[iTest];
    //                continue;
    //            }
    //            if (sArgu.Equals("-source_resource"))
    //            {
    //                sSrcResPath = arguments[iTest];
    //                continue;
    //            }
    //            if (sArgu.Equals("-update_resource"))
    //            {
    //                sUpdateResPath = arguments[iTest];
    //                continue;
    //            }
    //            if (sArgu.Equals("-build_target"))
    //            {
    //                sBuildTarget = arguments[iTest];
    //                continue;
    //            }
    //        }

    //        //check command line parameters
    //        if (string.IsNullOrEmpty(sSVNDiffFilePath)
    //            || string.IsNullOrEmpty(sSrcResPath)
    //            || string.IsNullOrEmpty(sUpdateResPath)
    //            || string.IsNullOrEmpty(sBuildTarget))
    //        {
    //            throw new Exception(string.Format("BuildAssetProcess.BuildResUpdate arguments error! SVNDiffFilePath:{0}, SrcResPath:{1}, UpdateResPath:{2}, BuildTarget:{3}"
    //                , sSVNDiffFilePath, sSrcResPath, sUpdateResPath, sBuildTarget));
    //        }

    //        if (!File.Exists(sSVNDiffFilePath))
    //        {
    //            throw new Exception(string.Format("BuildAssetProcess.BuildResUpdate svn diff file don't exist, path is: " + sSVNDiffFilePath));
    //        }

    //        if (!Directory.Exists(sSrcResPath))
    //        {
    //            throw new Exception(string.Format("BuildAssetProcess.BuildResUpdate source resource directory don't exist, path is: " + sSrcResPath));
    //        }

    //        BuildTarget eTarget = BuildTarget.Android;
    //        if (sBuildTarget.Equals("android", StringComparison.OrdinalIgnoreCase))
    //        {
    //            eTarget = BuildTarget.Android;
    //            DoAndroidLowTextrue();
    //        }
    //        else if (sBuildTarget.Equals("ios", StringComparison.OrdinalIgnoreCase))
    //        {
    //            eTarget = BuildTarget.iPhone;
    //        }
    //        else if (sBuildTarget.Equals("wp", StringComparison.OrdinalIgnoreCase))
    //        {
    //            eTarget = BuildTarget.WP8Player;
    //            FileUtil.DeleteFileOrDirectory("Assets/Plugins/LuYou");
    //            FileUtil.DeleteFileOrDirectory("Assets/UnityOSC");
    //        }
    //        else
    //        {
    //            throw new Exception("BuildAssetProcess.BuildResUpdate build_target:" + sBuildTarget + " is error!");
    //        }

    //        BundleEditor.ExportBundleData(true, eTarget);

    //        BundleEditor.ParseDiffFile(sResourceVersion, sSVNDiffFilePath, sSrcResPath, sUpdateResPath);
    //        Debug.Log("BuildAssetProcess.BuildResUpdate end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
    //    }
    //    catch (System.Exception ex)
    //    {
    //        Debug.LogError("BuildAssetProcess.BuildResUpdate exception is:" + ex.Message);
    //    }
    //}

    //private static void DoAndroidLowTextrue()
	public static void DoAndroidLowTextrue()
    {
        string sDoLowQualityPath = Application.dataPath + "/MLDJ/UIRes/Atlas/Common/Common.prefab";
        Debug.Log("BuildAssetProcess.BuildAndroid sDoLowQualityPath:" + sDoLowQualityPath);
        LowTexture.doLowTextrue(sDoLowQualityPath);
        //sDoLowQualityPath = Application.dataPath + "/MLDJ/UIRes/Atlas/NewCommon/NewCommon.prefab";
		sDoLowQualityPath = Application.dataPath + "/MLDJ/UIRes/Atlas/Common/NewCommon.prefab";
        Debug.Log("BuildAssetProcess.BuildAndroid sDoLowQualityPath:" + sDoLowQualityPath);
        LowTexture.doLowTextrue(sDoLowQualityPath);
    }

    //private static void CreateAssetZip(string sVersion)
    //{
    //    sVersion = sVersion.Replace(".", "_");
    //    string sCurDay = BuildPlayerHelper.GetCurDay();
    //    string sCurTime = BuildPlayerHelper.GetCurTime();

    //    string sZipFolder = BundleManager.UpdateOutputPath + "/../../";
    //    CreateFolder(sZipFolder);
    //    sZipFolder += sCurDay;
    //    CreateFolder(sZipFolder);

    //    string sZipFileName = "Android_" + sVersion + "_" + sCurDay + "_" + sCurTime + ".zip";
    //    string sZipFilePath = sZipFolder + "/" + sZipFileName;

    //    CreateSample(sZipFilePath, BundleManager.UpdateOutputPath + "/../");
    //}

    //private static void CreateFolder(string sFolder)
    //{
    //    if (!Directory.Exists(sFolder))
    //    {
    //        Directory.CreateDirectory(sFolder);
    //    }
    //}

    //private static void CreateSample(string sZipFilePath, string sFolderName)
    //{
    //    using (ZipFile zip = new ZipFile(sZipFilePath))
    //    {
    //        //zip.Password = "123456";
    //        zip.AddDirectory(sFolderName);
    //        //zip.AddFile(@"E:\\yangfeizai\\12051214544443\\"+"Jayzai.xml");
    //        zip.Save();
    //    }
    //}
}