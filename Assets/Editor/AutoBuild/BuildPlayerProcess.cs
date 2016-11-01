using System;
using UnityEngine;
using UnityEditor;

public class BuildPlayerProcess
{
    public static void BuildPlayerByCommandline()
    {
        try
        {
            Debug.Log("BuildPlayerProcess.BuildPlayerByCommandline start:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
            string sBuildTarget = string.Empty;
            string sBuildChannels = string.Empty;
            string sVersion = string.Empty;
            string sIsAssetBundle = string.Empty;
            string sPluginBaseDirectory = string.Empty;
            string sIsSDKServerList = string.Empty;

            //parse command line parameters from shell
            string[] arguments = Environment.GetCommandLineArgs();
            Debug.Log("BuildPlayerProcess.BuildPlayerByCommandline arguments number is:" + arguments.Length.ToString());
            for (int index = 0; index < arguments.Length; ++index)
            {
                string sArgu = arguments[index];
                Debug.Log(string.Format("BuildPlayerProcess.BuildPlayerByCommandline argument[{0}]:{1}", index.ToString(), sArgu));
                int iTest = index + 1;
                if (arguments.Length <= iTest)
                {
                    break;
                }
                if (sArgu.Equals("-build_target"))
                {
                    sBuildTarget = arguments[iTest];
                    continue;
                }
                if (sArgu.Equals("-build_channel"))
                {
                    sBuildChannels = arguments[iTest];
                    continue;
                }
                if (sArgu.Equals("-version_num"))
                {
                    sVersion = arguments[iTest];
                    continue;
                }
                if (sArgu.Equals("-is_asset_bundle"))
                {
                    sIsAssetBundle = arguments[iTest];
                    continue;
                }
                if (sArgu.Equals("-android_plugin"))
                {
                    sPluginBaseDirectory = arguments[iTest];
                    continue;
                }
                if (sArgu.Equals("-is_sdk_serverlist"))
                {
                    sIsSDKServerList = arguments[iTest];
                    continue;
                }
            }

            //check command line parameters
            if (string.IsNullOrEmpty(sBuildTarget)
                || string.IsNullOrEmpty(sBuildChannels)
                || string.IsNullOrEmpty(sVersion)
                || string.IsNullOrEmpty(sIsAssetBundle)
                || string.IsNullOrEmpty(sPluginBaseDirectory)
                || string.IsNullOrEmpty(sIsSDKServerList))
            {
                throw new Exception(string.Format("BuildPlayerProcess.BuildPlayerByCommandline arguments error! BuildTarget:{0}, BuildChannels:{1}, Version:{2}, IsAssetBundle:{3}, PluginBaseDirectory:{4}, IsSDKServerList:{5}",
                    sBuildTarget, sBuildChannels, sVersion, sIsAssetBundle, sPluginBaseDirectory, sIsSDKServerList));
            }

            if (!(sBuildTarget.Equals("android") || sBuildTarget.Equals("ios")))
            {
                throw new Exception("BuildPlayerProcess.BuildPlayerByCommandline build_target:" + sBuildTarget + " is error!");
            }

            bool bIsAssetbundle = (sIsAssetBundle.ToLower().Equals("on") ? true : false);

            if (sBuildTarget.Equals("android"))
            {
//                BuildAndroidConfig config = new BuildAndroidConfig(sPluginBaseDirectory);
                if (null == BuildAndroidConfig.GetAllScenes() || 0 == BuildAndroidConfig.GetAllScenes().Length)
                {
                    throw new Exception("BuildPlayerProcess.BuildPlayerByCommandline scenes list is null!");
                }

                bool bIsSDKServerList = (sIsSDKServerList.ToLower().Equals("on") ? true : false);

                BuildAndroidProcess.BuildAndroid(sBuildChannels, sVersion, bIsAssetbundle, bIsSDKServerList);
            }
            Debug.Log("BuildPlayerProcess.BuildPlayerByCommandline end:" + DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss"));
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerProcess.BuildPlayerByCommandline exception is:" + ex.Message);
        }
    }
}
