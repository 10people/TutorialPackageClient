//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEngine;
using UnityEditor;
using System.ComponentModel;
using System.Collections;


public class UTMyAssetbundleSoundsAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["AssetbundleSounds"] as string;
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandleAssetbundleSounds(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MyAssetbundleSounds", false, 200)]
	public static void AddAction() {
		Create<UTMyAssetbundleSoundsAction>();
	}

	
	public	static	bool HandleAssetbundleSounds(string assetPath)
	{
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Object)) as UnityEngine.Object;

		bool ret = false;
		if(obj != null)
		{
			string targetPath = Application.dataPath + "/StreamingAssets/Sounds/" + obj.name + ".assetbundle";
			if (BuildPipeline.BuildAssetBundle (obj, null, targetPath, BuildAssetBundleOptions.CollectDependencies,BuildTarget.Android)) {
  			
				Debug.Log ("$$  Assetbundle Sounds => "+obj.name);
				ret = true;
			} 
			else 
			{
 				Debug.Log ("$$  Assetbundle Sounds "+obj.name+" failed!");
			}
		}
		return ret;
	}
}

