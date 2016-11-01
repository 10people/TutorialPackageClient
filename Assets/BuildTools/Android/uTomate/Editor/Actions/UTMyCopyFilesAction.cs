//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

/*
 * 文件拷贝
 * 
 */

public class UTMyCopyFilesAction : UTAction
{
	
	public override IEnumerator Execute (UTContext context)
    {
        //get channelID from setProperty
        string channelID = context["channelID_forBuild"] as string;
		Debug.Log("My-uTmote: channelID =="+channelID);
        string directory = context["AndroidPlugin"] as string;
		string targetDirectory = "Assets/Plugins/Android";
		string baseDirectory = directory + "/" + channelID;
		Debug.Log("My-uTmote: CopyFiles- baseDirectory == " + baseDirectory);
		
		if(!Directory.Exists(baseDirectory))
		{
			Debug.Log("My-uTmote: baseDirectory(" + baseDirectory.ToString() + ") is empty!");
			Debug.LogError("My-uTmote: Do you set an illegal ChannelID ????");
			throw new UTFailBuildException("The base directory " + baseDirectory + " does not exist.", this);

		}
		
		FileUtil.DeleteFileOrDirectory(targetDirectory);
		Debug.Log("My-uTmote: DeleteFile targetDirectory =="+targetDirectory);
		
		if(!Directory.Exists(targetDirectory))
		{
			Debug.Log("My-uTmote: targetDirectory is empty!");
		}
		
		FileUtil.CopyFileOrDirectory(baseDirectory,targetDirectory);

        //added by mawenbin
        //copy gamecommon.properties to android path
        string sFromFile = directory + "/" + COMMON_PROPERTIES_FILENAME;
        if (!File.Exists(sFromFile))
        {
            Debug.LogError("My-uTmote: gamecommon.properties file does not exist.");
            throw new UTFailBuildException("gamecommon.properties file " + sFromFile + " does not exist.", this);
        }
        string sToFile = targetDirectory + "/assets/" + COMMON_PROPERTIES_FILENAME;
        FileUtil.CopyFileOrDirectory(sFromFile, sToFile);

        //update config.properties (RES_DOWNLOAD_URL and SERVERLIST_URL)
        string sConfigPropertiesFile = targetDirectory + "/assets/" + CONFIG_PROPERTIES_FILENAME;
        if (!File.Exists(sConfigPropertiesFile))
        {
            Debug.LogError("My-uTmote: config.properties file does not exist.");
            throw new UTFailBuildException("config.properties file " + sConfigPropertiesFile + " does not exist.", this);
        }
        string sSDKServerList = context["sdkServerList"].ToString();
        bool bIsSDKServerList = sSDKServerList.ToLower().Equals("true");
        if (!UpdatePlayerConfigPropertiesFile(sConfigPropertiesFile, bIsSDKServerList))
        {
            Debug.LogError("My-uTmote: UseLocalServerListConfig failed.");
            throw new UTFailBuildException("UpdatePlayerConfigPropertiesFile failed.", this);
        }

        Debug.Log("My-uTmote: CopyFiles is done!");
		
		yield return "";
			
	}

    private const string COMMON_PROPERTIES_FILENAME = "gamecommon.properties";
    private const string CONFIG_PROPERTIES_FILENAME = "config.properties";
    //RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/TY_1_132
    //RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/XianFeng_1_132
    private const string CONFIG_PROPERTIES_RES_DOWNLOAD_URL = "RES_DOWNLOAD_URL=http://mrd.changyou.com/tianlong3D/res/Android/";
    //SERVERLIST_URL=http://mrd.changyou.com/tianlong3D/conf/serverlist/Android_TY_IPList.txt
    //SERVERLIST_URL=0
    private const string CONFIG_PROPERTIES_SERVERLIST_URL = "SERVERLIST_URL=";
    private const string LOCAL_CONFIG_SERVERLIST_URL = "SERVERLIST_URL=0";

    private static bool UpdatePlayerConfigPropertiesFile(string sConfigPropertiesFile, bool bIsSDKServerList)
    {
        if (File.Exists(sConfigPropertiesFile))
        {
            //read
            List<string> sLineList = new List<string>();
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
            if (0 == sLineList.Count)
            {
                return false;
            }

            //write
            FileStream fs = new FileStream(sConfigPropertiesFile, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs);
            foreach (string sItem in sLineList)
            {
                if (sItem.StartsWith(CONFIG_PROPERTIES_RES_DOWNLOAD_URL))
                {
                    string sResURL = sItem + string.Format("{0}_{1}", PlatformHelper.GetGameVersion(), PlatformHelper.GetProgramVersion());
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
        else
        {
            return false;
        }
    }
	
	[MenuItem("Assets/Create/uTomate/MyCopyFiles", false, 300)]
	public static void AddAction() {
		Create<UTMyCopyFilesAction>();
	}

}
