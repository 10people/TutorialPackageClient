//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEngine;
using UnityEditor;
using System.Collections;


public class UTMyMatAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["CurMatFile"] as string;
		Debug.Log ("finalout = "+finalout);
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandleMat(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MyMat", false, 200)]
	public static void AddAction() {
		Create<UTMyMatAction>();
	}
	/*
	 * 所有材质如果shader是Unlit/Premultiplied Colored，全改成Unlit/Transparent Colored
	 * */
	public	static	bool HandleMat(string assetPath)
	{
		bool ret = false;
		Debug.Log ("UTMyMatAction");
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Material));
		if(obj != null)
		{
			UnityEngine.Material mat = (UnityEngine.Material)obj;
			if(mat.shader.name.Equals("Unlit/Premultiplied Colored"))
			{
				// 设置shader
				mat.shader = Shader.Find("Unlit/Transparent Colored");
				
				Debug.Log ("$$  Unlit/Premultiplied Colored=>Unlit/Transparent Colored ");
				EditorUtility.SetDirty(obj);
				PlayerSettings.Android.targetDevice = AndroidTargetDevice.FAT;
				ret = true;
			}
		}
		return ret;
	}
}

