//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEditor;
using UnityEngine;
using System.Collections;
using System.IO;


public class UTMyBuildAndroidApkAction : UTAction
{
//	private static string APK_NAME = "tlbbydb"; //project name
	private static string APK_FOLDER = "Build/MLDJ_ANDROID/";

	public override IEnumerator Execute (UTContext context)
	{
		
		//get channelID from last step "setProperty"
        string channelID = context["channelID_forBuild"] as string;
		Debug.Log("My-uTmote: channelID0 =="+channelID);
		
		string[] buildScenes;
		//get buildscene from PlayerSettings
		var scenesFromEditor = EditorBuildSettings.scenes;
		if (scenesFromEditor.Length == 0) {
			throw new UTFailBuildException ("There are no scenes set up in the editor build settings.",
				this);
		}
		var active = Array.FindAll (scenesFromEditor, scene => scene.enabled);
		buildScenes = Array.ConvertAll (active, scene => scene.path);
		Debug.Log("My-uTmote: buildScenes =="+buildScenes);

        bulidApkFile(channelID, buildScenes);
		
		yield return "";
	}
	
	[MenuItem("Assets/Create/uTomate/My Build Android Apk", false, 650)]
	public static void AddAction ()
	{
		Create<UTMyBuildAndroidApkAction> ();
	}
	
	private static void bulidApkFile(string channelID,string[] buildScenes){
		if(channelID.StartsWith("Android_")){
			channelID = channelID.Substring("android_".Length);
		}
		Debug.Log("My-uTmote: channelID1 =="+channelID);

        string folder = APK_FOLDER;
        if (!Directory.Exists(folder))
        {
            Directory.CreateDirectory(folder);
		}
        folder += getCurDay();
        Debug.Log("My-uTmote:  apkPath0 == " + folder);
        if (!Directory.Exists(folder))
        {
            Directory.CreateDirectory(folder);
		}
		//set apk filename based on channelID and current time
		string apkPath = getApkPath(channelID);
		Debug.Log ("My-uTmote:  apkPath == "+apkPath);
        BuildPipeline.BuildPlayer(buildScenes, apkPath, BuildTarget.Android, BuildOptions.None);
	}
	
	private static string getApkPath(string channel){
		// APK/uc_tlbbydb_1.2.0.1_20131111_1013.apk
		Debug.Log ("My-uTmote:  getApkPath  ");
//        APK_NAME = PlayerSettings.productName;
		string hour = System.DateTime.Now.Hour>9?""+System.DateTime.Now.Hour:"0"+System.DateTime.Now.Hour;
		string minute = System.DateTime.Now.Minute>9?""+System.DateTime.Now.Minute:"0"+System.DateTime.Now.Minute;
        // return APK_FOLDER + CurDay + "/" + channel + "_" + APK_NAME + "_" + AndroidConfig.GetVersionNumber() + "_" + CurDay + "_" + hour + "" + minute + ".apk";
        string version = string.Format("{0}_{1}_{2}_{3}", PlatformHelper.GetGameVersion(), PlatformHelper.GetProgramVersion(), GCGame.Table.TableManager.GetPublicConfigByID(GameDefines.PublicResVersionKey, 0).IntValue, UserConfigData.ClientResVersion);
        return APK_FOLDER + getCurDay() + "/" + channel + "_" + "CABAL3D" + "_" + version + "_" + GetVersionCode().ToString() + "_" + getCurDay() + "_" + hour + "" + minute + ".apk";
	}


    private static string getCurDay()
    { 
        string MONTH = System.DateTime.Now.Month>9?""+System.DateTime.Now.Month:"0"+System.DateTime.Now.Month;
        string DAY = System.DateTime.Now.Day>9?""+System.DateTime.Now.Day:"0"+System.DateTime.Now.Day;
        string CurDay = System.DateTime.Now.Year+"_"+MONTH+"_"+DAY;
        return CurDay;
    }

    public static int GetVersionCode()
    {
        string sVersion = PlayerSettings.bundleVersion;
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
                throw new Exception("UTMyBuildAndroidApkAction.GetVersionCode parse failed; Version:" + sVersion);
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("UTMyBuildAndroidApkAction.GetVersionCode exception is: " + ex.Message);
        }
        return iVersionCode;
    }
}

