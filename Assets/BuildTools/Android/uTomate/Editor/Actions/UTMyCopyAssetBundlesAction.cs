using UnityEngine;
using UnityEditor;
using System.Collections;
using System.IO;
using System.Collections.Generic;


public class UTMyCopyAssetBundlesAction : UTAction
{
    public override IEnumerator Execute(UTContext context)
    {
        Debug.Log("Start Copy Asset Bundles.");

        string assetBundlesPath = context["AssetBundlesPath"] as string;
        string targetDirectory = "Assets/StreamingAssets";

        Debug.Log("My-uTmote: Copy AssetBundles, Path is " + assetBundlesPath);

        if (!Directory.Exists(assetBundlesPath))
        {
            Debug.Log("My-uTmote: AssetBundles Path(" + assetBundlesPath.ToString() + ") is empty!");
            throw new UTFailBuildException("AssetBundles Path " + assetBundlesPath + " does not exist.", this);

        }

        FileUtil.DeleteFileOrDirectory(targetDirectory);
        Debug.Log("My-uTmote: DeleteFile StreamingAssets ==" + targetDirectory);

        if (!Directory.Exists(targetDirectory))
        {
            Debug.Log("My-uTmote: targetDirectory is empty!");
        }

        FileUtil.CopyFileOrDirectory(assetBundlesPath, targetDirectory);

        Debug.Log("Complete Copy Asset Bundles.");
        yield return "";
    }

    [MenuItem("Assets/Create/uTomate/CopyAssetBundlesAction", false, 300)]
    public static void AddAction()
    {
        Create<UTMyCopyAssetBundlesAction>();
    }

}
