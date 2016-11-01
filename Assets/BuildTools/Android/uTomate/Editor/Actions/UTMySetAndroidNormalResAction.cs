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


public class UTMySetAndroidNormalResAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["AndroidHighRes"] as string;
		Debug.Log("finalout = "+finalout);
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		HandleSetAndroidNormalRes(UTFileUtils.FullPathToProjectPath(finalout));
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MySetAndroidNormalRes", false, 200)]
	public static void AddAction() {
		Create<UTMySetAndroidNormalResAction>();
	}

	static int maxSize;
	public	static	bool HandleSetAndroidNormalRes(string assetPath)
	{
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Texture));
		if(obj != null)
		{
			UnityEngine.Texture tex = obj as UnityEngine.Texture;
			int OldMaxSize = 0;
			if(tex.height >= tex.width)
			{
				OldMaxSize = tex.height;
			}
			else
			{
				OldMaxSize = tex.width;
			}
			
			if(Mathf.IsPowerOfTwo(OldMaxSize))
			{
				//只有二次幂处理
				maxSize = (int)(OldMaxSize/2f);
				TextureImporter textureImporter = (TextureImporter)AssetImporter.GetAtPath( assetPath );
				if(textureImporter != null)
				{
					
					if(	textureImporter.textureFormat != TextureImporterFormat.ATC_RGBA8 ||
						textureImporter.maxTextureSize != maxSize
						)
					{
						textureImporter.maxTextureSize = maxSize;
						textureImporter.textureFormat = TextureImporterFormat.ATC_RGBA8;
						
						Debug.Log ("$$  NormalRes PNG maxTextureSize from "+OldMaxSize+"=>"+maxSize+" textureFormat=ATC_RGBA8");
						AssetDatabase.ImportAsset( assetPath, ImportAssetOptions.ForceUpdate );
						EditorUtility.SetDirty(textureImporter);
						return true;
					}
				}
			}
		}
		return false;
	}
}

