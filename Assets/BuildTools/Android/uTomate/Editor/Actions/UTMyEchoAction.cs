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


public class UTMyEchoAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["CurMatFile"] as string;
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandleMat(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MyEcho", false, 200)]
	public static void AddAction() {
		Create<UTMyEchoAction>();
	}

	/*
	 * 所有材质如果shader是Unlit/Premultiplied Colored，全改成Unlit/Transparent Colored
	 * */
	public	static	bool HandleMat(string assetPath)
	{
		bool ret = false;
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Material));
		if(obj != null)
		{
			UnityEngine.Material mat = (UnityEngine.Material)obj;
			if(mat.shader.name.Equals("Unlit/Premultiplied Colored"))
			{
				// 设置shader
				mat.shader = Shader.Find("Unlit/Transparent Colored");
				Debug.Log (assetPath+"$$  Unlit/Premultiplied Colored=>Unlit/Transparent Colored ");
				EditorUtility.SetDirty(obj);
				ret = true;
			}
		}
		return ret;
	}
}

