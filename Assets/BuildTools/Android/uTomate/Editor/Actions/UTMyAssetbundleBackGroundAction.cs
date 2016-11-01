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


public class UTMyAssetbundleBackGroundAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["CurAssetbundleBackGround"] as string;
		Debug.Log("finalout = "+finalout);
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandleAssetbundleBackGround(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MyAssetbundleBackGround", false, 200)]
	public static void AddAction() {
		Create<UTMyAssetbundleBackGroundAction>();
	}

	public static bool HandleAssetbundleBackGround(string assetPath)
	{
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Object)) as UnityEngine.Object;

		bool ret = false;
		if(obj != null)
		{
			string targetPath = Application.dataPath + "/StreamingAssets/BattleBackground/" + obj.name + ".assetbundle";
			if (BuildPipeline.BuildAssetBundle (obj, null, targetPath, BuildAssetBundleOptions.CollectDependencies,BuildTarget.Android)) {

  			
				Debug.Log ("$$  Assetbundle BackGround => "+obj.name);
				ret = true;
			} 
			else 
			{
 				Debug.Log ("$$  Assetbundle BackGround "+obj.name+" failed!");
			}
		}
		return ret;
	}
}

