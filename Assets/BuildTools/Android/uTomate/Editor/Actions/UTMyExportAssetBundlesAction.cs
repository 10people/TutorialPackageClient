//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEngine;
using UnityEditor;
using System.IO;
using System.ComponentModel;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using Ionic.Zip;


public class UTMyExportAssetBundlesAction : UTAction
{
    public override IEnumerator Execute(UTContext context)
    {
        Debug.Log("Start Export AssetBundles");
        BundleEditor.ExportBundleData(true, BuildTarget.Android);
        Debug.Log("End Export AssetBundles");

        // string targetDirectory = context["AssetBundlesPath"] as string;
        // CopyAssetBundle(targetDirectory);
        string resourceVersion = context["resourceVersion"] as string;
        string targetPath = BundleManager.UpdateOutputPath + "/../" + UpdateHelper.VersionFileName;
        Utils.WriteStringToFile(targetPath, resourceVersion);
        Debug.Log("Write resourceVersion[" + resourceVersion + "] to file[" + targetPath + "]");

        string MONTH = System.DateTime.Now.Month > 9 ? "" + System.DateTime.Now.Month : "0" + System.DateTime.Now.Month;
        string DAY = System.DateTime.Now.Day > 9 ? "" + System.DateTime.Now.Day : "0" + System.DateTime.Now.Day;
        string CurDay = System.DateTime.Now.Year + "_" + MONTH + "_" + DAY;
//        string productName = PlayerSettings.productName;
        string hour = System.DateTime.Now.Hour > 9 ? "" + System.DateTime.Now.Hour : "0" + System.DateTime.Now.Hour;
        string minute = System.DateTime.Now.Minute > 9 ? "" + System.DateTime.Now.Minute : "0" + System.DateTime.Now.Minute;
        string version = string.Format("{0}_{1}_{2}_{3}", PlatformHelper.GetGameVersion(), PlatformHelper.GetProgramVersion(), GCGame.Table.TableManager.GetPublicConfigByID(GameDefines.PublicResVersionKey, 0).IntValue, UserConfigData.ClientResVersion);
        
        string zipFileName = "Android_" + version + "_" + CurDay + "_" + hour + "" + minute + ".zip";

        // release�ļ���
        string zipFolder = BundleManager.UpdateOutputPath + "/../../";
        CreateFolder(zipFolder);
        zipFolder += CurDay;
        CreateFolder(zipFolder);

        CreateSample(zipFolder + "/" + zipFileName, BundleManager.UpdateOutputPath + "/../");
        yield return "";
    }

    [MenuItem("Assets/Create/uTomate/MyExportAssetbundles", false, 200)]
    public static void AddAction()
    {
        Create<UTMyExportAssetBundlesAction>();
    }

    public void CopyAssetBundle(string targetDirectory)
    {

        FileUtil.DeleteFileOrDirectory(targetDirectory);
        Debug.Log("My-uTmote: DeleteFile StreamingAssets ==" + targetDirectory);

        if (!Directory.Exists(targetDirectory))
        {
            Debug.Log("My-uTmote: CopyAssetBundle targetDirectory is empty!");
        }
        else
        {
            FileUtil.DeleteFileOrDirectory(targetDirectory);
        }

        FileUtil.CopyFileOrDirectory("Assets/StreamingAssets", targetDirectory);

        Debug.Log("Complete Copy StreamingAssets.");
    }

    void CreateFolder(string folder)
    {
        if (!Directory.Exists(folder))
        {
            Directory.CreateDirectory(folder);
        }
    }

    // Compresses the files in the nominated folder, and creates a zip file on disk named as outPathname.
    //
    void CreateSample(string outPathname, string folderName)
    {

        //ZipFileʵ����һ��ѹ���ļ�����·����һ������zip
        using (ZipFile zip = new ZipFile(outPathname))
        {
            //����ѹ��
            //zip.Password = "123456";
            //��Ҫѹ�����ļ�����ӵ�zip������ȥ(Ҫѹ�����ļ���·��������)
            zip.AddDirectory(folderName);
            //��Ҫѹ�����ļ���ӵ�zip������ȥ,����ļ��������״�FileNotFoundExcept
            //zip.AddFile(@"E:\\yangfeizai\\12051214544443\\"+"Jayzai.xml");
            zip.Save();
        }
    }

}

