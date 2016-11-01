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
using System.Diagnostics;
using UDebug = UnityEngine.Debug;

public class UTMySetAndroidHighResETCAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["AndroidHighRes"] as string;
		UDebug.Log("finalout = "+finalout);
		//HandleMat(context["foreachfile"]);
		//Debug.Log(UTFileUtils.FullPathToProjectPath(finalout), this);
		//string res = context ["setHighRes"].ToString();
		//Debug.Log("setHighRes = "+res);
		//if(res.Equals("True")){
			HandleSetAndroidHighRes(UTFileUtils.FullPathToProjectPath(finalout));
		//}
				
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MySetAndroidHighRes", false, 200)]
	public static void AddAction() {
        Create<UTMySetAndroidHighResETCAction>();
	}


	public	static	bool HandleSetAndroidHighRes(string assetPath)
	{
		UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Texture));
		if(obj != null)
		{
            //UnityEngine.Texture tex = obj as UnityEngine.Texture;
            //int OldMaxSize = 0;
            //if(tex.height >= tex.width)
            //{
            //    OldMaxSize = tex.height;
            //}
            //else
            //{
            //    OldMaxSize = tex.width;
            //}

			TextureImporter textureImporter = (TextureImporter)AssetImporter.GetAtPath( assetPath );
			if(textureImporter != null)
			{
                int size = textureImporter.maxTextureSize;
                textureImporter.SetPlatformTextureSettings("Android", size, TextureImporterFormat.ETC_RGB4);
                AssetDatabase.ImportAsset(assetPath, ImportAssetOptions.ForceUpdate);
                EditorUtility.SetDirty(textureImporter);
                return true;
                //if(	textureImporter.textureFormat != TextureImporterFormat.ARGB16 ||
                //    textureImporter.maxTextureSize != OldMaxSize )
                //{
                //    textureImporter.textureFormat = TextureImporterFormat.ARGB16;
					
                //    UDebug.Log ("$$  HighRes PNG textureFormat=>ARGB16");
                //    textureImporter.maxTextureSize = OldMaxSize;
                //    AssetDatabase.ImportAsset( assetPath, ImportAssetOptions.ForceUpdate );
                //    EditorUtility.SetDirty(textureImporter);
                //    return true;
                //}
			}

		}
		return false;
	}
}

