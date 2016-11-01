using UnityEditor;
using System.Collections.Generic;
using System.IO;

public class BuildAndroidConfig 
{
    public BuildAndroidConfig(string sPluginBaseDirectory)
    {
        ChannelPluginBaseDirectory = sPluginBaseDirectory;
    }

    public const string DEFAULT_COMPANY_NAME = "CYOU";
    public const string DEFAULT_PRODUCT_NAME = "Cabal";

    public const string DEFAULT_ICON_PATH = "Assets/MLDJ/UIRes/Texture/Icon/Android/default.png";
    public const string CHANNEL_ICON_PATH = "Assets/MLDJ/UIRes/Texture/Icon/Android/";

    public const string SELECT_SPLASH_PATH = "Assets/MLDJ/UIRes/Texture/Logo/default.png";
    //public const string SELECT_SPLASH_PATH = "Assets/MLDJ/UIRes/Texture/Logo/iphone4.png";
    public const string DEFAULT_SPLASH_PATH = "Assets/MLDJ/UIRes/Texture/Logo/Android/default.png";
    public const string CHANNEL_SPLASH_PATH = "Assets/MLDJ/UIRes/Texture/Logo/Android/";

    public const string DEFAULT_PACKAGE_NAME = "com.cyou.cx.cabal";

    public static string ChannelPluginBaseDirectory
    {
        get
        {
            return sChannelPluginBaseDirectory;
        }
        private set
        {
            sChannelPluginBaseDirectory = value;
        }
    }
    private static string sChannelPluginBaseDirectory = string.Empty;
    //public const string CHANNELSDK_BASE_DIRECTORY = "E:/AndroidPlugins/";
    public const string CHANNELPLUGIN_TARGET_DIRECTORY = "Assets/Plugins/Android";

    public const string PLAYER_BASE_DIRECTORY = "Build/MLDJ_ANDROID/";
    //"E:/AndroidPlugins/gamecommon.properties";
    public static string GetCommonPropertiesFile()
    {
        return ChannelPluginBaseDirectory + COMMON_PROPERTIES_FILENAME;
    }
    public static string GetPlayerCommonPropertiesFile()
    {
        return CHANNELPLUGIN_TARGET_DIRECTORY + "/assets/" + COMMON_PROPERTIES_FILENAME;
    }
    private const string COMMON_PROPERTIES_FILENAME = "gamecommon.properties";

    public static string GetPlayerConfigPropertiesFile()
    {
        return CHANNELPLUGIN_TARGET_DIRECTORY + "/assets/" + CONFIG_PROPERTIES_FILENAME;
    }

    public static bool UpdatePlayerConfigPropertiesFile(string sVersion, bool bIsSDKServerList)
    {
        List<string> sLineList = new List<string>();
        if (ReadPlayerConfigPropertiesFile(sLineList))
        {
            return WritePlayerConfigPropertiesFile(sLineList, sVersion, bIsSDKServerList);
        }
        return false;
    }

    private static bool ReadPlayerConfigPropertiesFile(List<string> sLineList)
    {
        sLineList.Clear();
        string sConfigPropertiesFile = GetPlayerConfigPropertiesFile();
        if (File.Exists(sConfigPropertiesFile))
        {
            StreamReader sr = new StreamReader(sConfigPropertiesFile, System.Text.Encoding.Default);
            string sLine = string.Empty; ;
            while (null != (sLine = sr.ReadLine()))
            {
                if (!string.IsNullOrEmpty(sLine))
                {
                    sLineList.Add(sLine);
                }
            }
            sr.Close();
            if (0 != sLineList.Count)
            {
                return true;
            }
        }
        return false;
    }

    private static bool WritePlayerConfigPropertiesFile(List<string> sLineList, string sVersion, bool bIsSDKServerList)
    {
        string sConfigPropertiesFile = GetPlayerConfigPropertiesFile();
        if (File.Exists(sConfigPropertiesFile))
        {
            FileStream fs = new FileStream(sConfigPropertiesFile, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs);
            foreach (string sItem in sLineList)
            {
                if (sItem.StartsWith(CONFIG_PROPERTIES_RES_DOWNLOAD_URL))
                {
                    string sResURL = sItem + BuildPlayerHelper.GetResDownloadUrlVersion(sVersion);
                    sw.WriteLine(sResURL);
                }
                else if (sItem.StartsWith(CONFIG_PROPERTIES_SERVERLIST_URL))
                {
                    if (bIsSDKServerList)
                    {
                        sw.WriteLine(sItem);
                    }
                    else
                    {
                        sw.WriteLine(LOCAL_CONFIG_SERVERLIST_URL);
                    }
                }
                else
                {
                    sw.WriteLine(sItem);
                }
            }
            sw.Close();
            fs.Close();
            sLineList.Clear();
            return true;
        }
        return false;
    }
    private const string CONFIG_PROPERTIES_FILENAME = "config.properties";
    //RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/TY_1_132
    //RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/XianFeng_1_132
    private const string CONFIG_PROPERTIES_RES_DOWNLOAD_URL = "RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/";
    //SERVERLIST_URL=http://mrd.changyou.com/tianlong3D/conf/serverlist/Android_TY_IPList.txt
    //SERVERLIST_URL=0
    private const string CONFIG_PROPERTIES_SERVERLIST_URL = "SERVERLIST_URL=";
    private const string LOCAL_CONFIG_SERVERLIST_URL = "SERVERLIST_URL=0";

    //"E:/AndroidPlugins/cyou.keystore";
    public static string GetKeyStoreFile()
    {
        return ChannelPluginBaseDirectory + KEY_STORE_FILENAME;
    }
    public const string KEY_STORE_FILENAME = "cyou.keystore";
    public const string KEY_STORE_PASSWORD = "q1w2e3r4t5";
    public const string KEY_ALIAS_NAME = "cyou";
    public const string KEY_ALIAS_PASSWORD = "q1w2e3r4t5";

    public static string GetDownjoyKeyStoreFile()
    {
        return ChannelPluginBaseDirectory + DOWNJOY_KEY_STORE_FILENAME;
    }
    public const string DOWNJOY_KEY_STORE_FILENAME = "downjoy.keystore";
    public const string DOWNJOY_KEY_STORE_PASSWORD = "downjoy_126";
    public const string DOWNJOY_KEY_ALIAS_NAME = "126";
    public const string DOWNJOY_KEY_ALIAS_PASSWORD = "downjoy_126";

    //"E:/AndroidPlugins/ignorechannellist";
    public static string GetIgnoreChannelListFile()
    {
        return ChannelPluginBaseDirectory + IGNORE_CHANNELLIST_FILENAME;
    }
    private const string IGNORE_CHANNELLIST_FILENAME = "ignorechannellist";

    public static string[] GetAllScenes()
    {
        List<string> scenePathList = new List<string>();
        foreach (EditorBuildSettingsScene scene in EditorBuildSettings.scenes)
        {
            if (null == scene) continue;
            if (scene.enabled)
            {
                scenePathList.Add(scene.path);
            }
        }
        return scenePathList.ToArray();

        //var scenesFromEditor = EditorBuildSettings.scenes;
        //if (0 == scenesFromEditor.Length)
        //{
        //    return null;
        //}
        //var active = Array.FindAll(scenesFromEditor, scene => scene.enabled);
        //return Array.ConvertAll(active, scene => scene.path);
    }
}