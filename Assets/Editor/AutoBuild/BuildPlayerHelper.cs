using UnityEditor;
using System.IO;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using System;

class BuildPlayerHelper
{
    private const string ANDROID_CHANNEL_ARGUMENT_DELIMITER = "%";              //渠道参数分隔符
    private const string ANDROID_BUILD_ALL = "All";              //构建全部包
    private const string ANDROID_BUILD_ALLSDK = "Android_All";              //构建全部渠道包
    private const string ANDROID_BUILD_ALLCPS = "CPS_All";              //构建全部媒体包

    private const string ANDROID_SDK_PREFIX = "Android_";              //渠道资源路径前缀
    private const string ANDROID_CPS_PREFIX = "CPS_";              //媒体资源路径前缀

    public static string[] ParseChannelListForAndroid(string sBuildChannels)
    {
        try
        {
            if (string.IsNullOrEmpty(sBuildChannels))
            {
                throw new Exception(string.Format("BuildPlayerHelper.ParseChannelListForAndroid Commandline argument BuildChannels:{0} is error!", sBuildChannels));
            }

            sBuildChannels = sBuildChannels.Trim();
            string[] parseChannels = sBuildChannels.Split(new string[] { ANDROID_CHANNEL_ARGUMENT_DELIMITER }, StringSplitOptions.RemoveEmptyEntries);
            if (null == parseChannels || 0 == parseChannels.Length)
            {
                throw new Exception(string.Format("BuildPlayerHelper.ParseChannelListForAndroid Commandline argument BuildChannels:{0} is error!", sBuildChannels));
            }
            //Debug.Log("BuildPlayerHelper.ParseChannelListForAndroid arguments number is:" + parseChannels.Length.ToString());
            //for (int index = 0; index < parseChannels.Length;++index)
            //{
            //    Debug.Log(string.Format("BuildPlayerHelper.ParseChannelListForAndroid parseChannels[{0}]:{1}", index.ToString(), parseChannels[index]));
            //}

            if (IsBuildAllChannelsForAndroid(parseChannels))
            {
                return GetAllChannelListForAndroid();
            }
            else if (IsBuildAllSDKForAndroid(parseChannels))
            {
                return GetAllSDKChannelListForAndroid();
            }
            else if (IsBuildAllCPSForAndroid(parseChannels))
            {
                return GetAllCPSChannelListForAndroid();
            }
            else
            {
                return GetChannelListForAndroid(parseChannels);
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.ParseChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    private static bool IsBuildAllChannelsForAndroid(string[] parseChannels)
    {
        if (null == parseChannels) return false;

        foreach (string sArgument in parseChannels)
        {
            if (sArgument.Equals(ANDROID_BUILD_ALL, StringComparison.OrdinalIgnoreCase))
            {
                return true;
            }
        }
        return false;
    }

    private static bool IsBuildAllSDKForAndroid(string[] parseChannels)
    {
        if (null == parseChannels) return false;

        foreach (string sArgument in parseChannels)
        {
            if (sArgument.Equals(ANDROID_BUILD_ALLSDK, StringComparison.OrdinalIgnoreCase))
            {
                return true;
            }
        }
        return false;
    }

    private static bool IsBuildAllCPSForAndroid(string[] parseChannels)
    {
        if (null == parseChannels) return false;

        foreach (string sArgument in parseChannels)
        {
            if (sArgument.Equals(ANDROID_BUILD_ALLCPS, StringComparison.OrdinalIgnoreCase))
            {
                return true;
            }
        }
        return false;
    }

    private static List<string> GetIgnoreChannelListForAndroid()
    {
        try
        {
            string sIgnoreChannelListFile = BuildAndroidConfig.GetIgnoreChannelListFile();
            if (!File.Exists(sIgnoreChannelListFile))
            {
                throw new Exception("BuildPlayerHelper.GetIgnoreChannelListForAndroid CommonPropertiesFile:" + sIgnoreChannelListFile + " don't Exists!");
            }
            List<string> ignoreChannelList = new List<string>();
            StreamReader sr = new StreamReader(sIgnoreChannelListFile, System.Text.Encoding.Default);
            string sLine = string.Empty; ;
            while (null != (sLine = sr.ReadLine()))
            {
                if (!string.IsNullOrEmpty(sLine))
                {
                    ignoreChannelList.Add(sLine.ToLower());
                }
            }
            sr.Close();
            return ignoreChannelList;
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetIgnoreChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    private static bool IsIgnoreChannel(string sChannel)
    {
        return GetIgnoreChannelListForAndroid().Contains(sChannel.ToLower());
    }

    private static bool CheckValidChannelForAndroid(string sChannel)
    {
        if (string.IsNullOrEmpty(sChannel)) return false;

        string[] androidChannels = GetAllChannelListForAndroid();
        foreach (string sValidChannel in androidChannels)
        {
            if (sValidChannel.Equals(sChannel, StringComparison.OrdinalIgnoreCase))
            {
                return true;
            }
        }

        Debug.LogError(string.Format("BuildPlayerHelper.CheckValidChannelForAndroid Channel:{0} don't Exists!", sChannel));
        return false;
    }

    private static string[] GetAllChannelListForAndroid()
    {
        try
        {
            DirectoryInfo sdkBaseDirectory = new DirectoryInfo(BuildAndroidConfig.ChannelPluginBaseDirectory);
            if (!sdkBaseDirectory.Exists)
            {
                throw new Exception("BuildPlayerHelper.GetAllChannelListForAndroid channelSDK BaseDirectory don't Exists!");
            }
            DirectoryInfo[] sdkDirectorys = sdkBaseDirectory.GetDirectories();
            if (null == sdkBaseDirectory || 0 == sdkDirectorys.Length)
            {
                throw new Exception("BuildPlayerHelper.GetAllChannelListForAndroid channelSDK Directory count is 0!");
            }
            List<string> androidChannels = new List<string>();
            foreach (DirectoryInfo sdkDirectory in sdkDirectorys)
            {
                if ((!sdkDirectory.Name.Equals(".svn")) && (!sdkBaseDirectory.Name.Equals(".")) && (!sdkBaseDirectory.Name.Equals("..")))
                {
                    if (!IsIgnoreChannel(sdkDirectory.Name))
                    {
                        androidChannels.Add(sdkDirectory.Name);
                    }

                }
            }
            return androidChannels.ToArray();
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetAllChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    private static string[] GetAllSDKChannelListForAndroid()
    {
        try
        {
            string[] androidChannels = GetAllChannelListForAndroid();
            if (null == androidChannels || 0 == androidChannels.Length)
            {
                throw new Exception("BuildPlayerHelper.GetAllSDKChannelListForAndroid all channel list is null!");
            }
            List<string> sdkChannels = new List<string>();
            foreach (string sChannel in androidChannels)
            {
                if (sChannel.StartsWith(ANDROID_SDK_PREFIX))
                {
                    sdkChannels.Add(sChannel);
                }
            }
            return sdkChannels.ToArray();
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetAllSDKChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    private static string[] GetAllCPSChannelListForAndroid()
    {
        try
        {
            string[] androidChannels = GetAllChannelListForAndroid();
            if (null == androidChannels || 0 == androidChannels.Length)
            {
                throw new Exception("BuildPlayerHelper.GetAllCPSChannelListForAndroid all channel list is null!");
            }
            List<string> cpsChannels = new List<string>();
            foreach (string sChannel in androidChannels)
            {
                if (sChannel.StartsWith(ANDROID_CPS_PREFIX))
                {
                    cpsChannels.Add(sChannel);
                }
            }
            return cpsChannels.ToArray();
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetAllCPSChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    private static string[] GetChannelListForAndroid(string[] parseChannelsArguments)
    {
        try
        {
            if (null == parseChannelsArguments || 0 == parseChannelsArguments.Length)
            {
                throw new Exception("BuildPlayerHelper.GetChannelListForAndroid parse Channels Arguments is null!");
            }
            List<string> argumentChannels = new List<string>();
            foreach (string sArgument in parseChannelsArguments)
            {
                if (CheckValidChannelForAndroid(sArgument))
                {
                    argumentChannels.Add(sArgument);
                }
            }
            return argumentChannels.ToArray();
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetChannelListForAndroid exception is: " + ex.Message);
        }
        return null;
    }

    public static string GetPlayerPathForAndroid(string sChannel, string sVersion, bool bIsAssetbundle)
    {
        //Android_uc_TLBB3D_0_580_0_0_148480_2015_03_06_1107.apk
        string sFolder = BuildAndroidConfig.PLAYER_BASE_DIRECTORY + GetCurDay() + "/";
        if (!Directory.Exists(sFolder))
        {
            Directory.CreateDirectory(sFolder);
        }

        //if (sChannel.StartsWith("Android_"))
        //{
        //    sChannel = sChannel.Substring("Android_".Length);
        //}
        string sVersionCode = BuildPlayerHelper.GetVersionCode(sVersion).ToString();
        sVersion = sVersion.Replace(".", "_");
        string sPath = sFolder + sChannel + "_" + "Cabal" + "_" + sVersion + "_" + sVersionCode + "_" + GetCurDay() + "_" + GetCurTime();
        if (bIsAssetbundle)
        {
            return sPath + ".apk";
        }
        else
        {
            return sPath + "_off.apk";
        }
    }

    public static int GetVersionCode(string sVersion)
    {
        int iVersionCode = 1501;
        try
        {
            string[] splitVersions = sVersion.Split(new string[] { "." }, System.StringSplitOptions.RemoveEmptyEntries);
            if (null != splitVersions && 4 <= splitVersions.Length)
            {
                int iGameVersion = int.Parse(splitVersions[0]);
                int iCodeVersion = int.Parse(splitVersions[1]);
                //int iPublicResourceVersion = int.Parse(splitVersions[2]);
                int iPrivateResourceVersion = int.Parse(splitVersions[3]);
                iVersionCode = (int)(
                  +((iGameVersion & 0x7F) << (24))
                  + ((iCodeVersion & 0xFFFF) << (8))
                  + ((iPrivateResourceVersion & 0xFF) << (0)));
            }
            else
            {
                throw new Exception("BuildPlayerHelper.GetVersionCode parse failed; Version:" + sVersion);
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetVersionCode exception is: " + ex.Message);
        }
        return iVersionCode;
    }

    private static int GetResourceVersionCode(string sVersion)
    {
        int iResourceVersionCode = 0;
        try
        {
            string[] splitVersions = sVersion.Split(new string[] { "." }, System.StringSplitOptions.RemoveEmptyEntries);
            if (null != splitVersions && 4 <= splitVersions.Length)
            {
                iResourceVersionCode = int.Parse(splitVersions[3]);
            }
            else
            {
                throw new Exception("BuildPlayerHelper.GetResourceVersionCode parse failed; Version:" + sVersion);
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetResourceVersionCode exception is: " + ex.Message);
        }
        return iResourceVersionCode;
    }

    public static bool UpdateResourceVersionFile(string sVersion)
    {
        try
        {
            int iResourceVersionCode = GetResourceVersionCode(sVersion);
            return UpdateResourceVersionFile(iResourceVersionCode);
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.UpdateResourceVersionFile exception is: " + ex.Message);
            return false;
        }
    }

    public static bool UpdateResourceVersionFile(int iResourceVersionCode)
    {
        //try
        //{
        //    string sResourceVersionFile = BundleManager.AppOutputPath + UpdateHelper.AppVersionFolder + "/" + UpdateHelper.VersionFileName;
        //    if (!GCGame.Utils.WriteStringToFile(sResourceVersionFile, iResourceVersionCode.ToString()))
        //    {
        //        throw new Exception("BuildPlayerHelper.UpdateResourceVersionFile write file failed; ResourceVersionFile:" + sResourceVersionFile);
        //    }
        //}
        //catch (System.Exception ex)
        //{
        //    Debug.LogError("BuildPlayerHelper.UpdateResourceVersionFile exception is: " + ex.Message);
        //    return false;
        //}
        return true;
    }

    public static string GetResDownloadUrlVersion(string sVersion)
    {
        try
        {
            string[] splitVersions = sVersion.Split(new string[] { "." }, System.StringSplitOptions.RemoveEmptyEntries);
            if (null != splitVersions && 4 <= splitVersions.Length)
            {
                int iGameVersion = int.Parse(splitVersions[0]);
                int iCodeVersion = int.Parse(splitVersions[1]);
                return string.Format("{0}_{1}", iGameVersion, iCodeVersion);
            }
            else
            {
                throw new Exception("BuildPlayerHelper.GetResDownloadUrlVersion parse failed; Version:" + sVersion);
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("BuildPlayerHelper.GetResDownloadUrlVersion exception is: " + ex.Message);
        }
        return string.Empty;
    }

    public static string GetCurDay()
    {
        string sMonth = System.DateTime.Now.Month > 9 ? "" + System.DateTime.Now.Month : "0" + System.DateTime.Now.Month;
        string sDay = System.DateTime.Now.Day > 9 ? "" + System.DateTime.Now.Day : "0" + System.DateTime.Now.Day;
        string sCurDay = System.DateTime.Now.Year + "_" + sMonth + "_" + sDay;
        return sCurDay;
    }

    public static string GetCurTime()
    {
        string sHour = System.DateTime.Now.Hour > 9 ? "" + System.DateTime.Now.Hour : "0" + System.DateTime.Now.Hour;
        string sMinute = System.DateTime.Now.Minute > 9 ? "" + System.DateTime.Now.Minute : "0" + System.DateTime.Now.Minute;
        return sHour + sMinute;
    }
}