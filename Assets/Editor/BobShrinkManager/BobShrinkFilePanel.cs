
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;

/// <summary>
/// 负责维护一个带压缩资源的文件路径列表
/// </summary>
public class BobShrinkFilePanel : BobDragableFilePanel {
    /// <summary>
    /// 响应拖拽文件操作
    /// </summary>
    /// <param name="paths">拖拽的文件路径名数组</param>
    protected override void OnDragPerform(string[] paths)
    {
        AddFileItems(paths);
    }
    private List<bool> mAtlasFoldoutList = new List<bool>();
    private List<bool> mTextureFoldoutList = new List<bool>();
    /// <summary>
    /// 显示文件路径列表
    /// </summary>
    protected override void ListFiles()
    {
        GUILayout.BeginVertical();
        for (int i = 0; i < BobShrinker.db.mAtlasPaths.Count; ++i)
        {
            while (i >= mAtlasFoldoutList.Count)
            {
                mAtlasFoldoutList.Add(false);
            }
            string atlasPath = BobShrinker.db.mAtlasPaths[i];
            if (!string.IsNullOrEmpty(mfilterStr))
            {//过滤
                if (!atlasPath.ToLower().Contains(mfilterStr.ToLower()))
                {
                    continue;
                }
            }
            GUILayout.BeginHorizontal();
            if(GUILayout.Button("X", GUILayout.Width(30)))
            {
                BobShrinker.db.RemoveData(atlasPath);
                return;//删除了一个元素，如果不return的话，会导致数组越界
            }
            mAtlasFoldoutList[i] = EditorGUILayout.Foldout(mAtlasFoldoutList[i], atlasPath);
            GUILayout.EndHorizontal();
            if (mAtlasFoldoutList[i])
            {
                ShowAtlasProperty(i);
            }                       
        }
        for (int i = 0; i < BobShrinker.db.mTexturePaths.Count; ++i)
        {
            while (i >= mTextureFoldoutList.Count)
            {
                mTextureFoldoutList.Add(false);
            }
            string texturepath = BobShrinker.db.mTexturePaths[i];
            if (!string.IsNullOrEmpty(mfilterStr))
            {//过滤
                if (!texturepath.ToLower().Contains(mfilterStr.ToLower()))
                {
                    continue;
                }
            }
            GUILayout.BeginHorizontal();
            if (GUILayout.Button("X", GUILayout.Width(30)))
            {
                BobShrinker.db.RemoveData(texturepath);
                return;//删除了一个元素，如果不return的话，会导致数组越界
            }
            mTextureFoldoutList[i] = EditorGUILayout.Foldout(mTextureFoldoutList[i], texturepath);
            GUILayout.EndHorizontal();
            if (mTextureFoldoutList[i])
            {
                ShowTextureProperty(i);
            }
        }
        GUILayout.EndVertical();
    }

    /// <summary>
    /// 显示第index个Atlas的属性
    /// </summary>
    /// <param name="index"></param>
    private void ShowAtlasProperty(int index)
    {
        GUILayout.Label(BobShrinker.db.mAtlasPaths[index]);
        List<SpriteDetail> originalSpriteDetails = BobShrinker.db.mAtlasOriginalInfoList[index].SpriteDetails;
        List<SpriteDetail> currentSpriteDetails = BobShrinker.db.mAtlasCurrentInfoList[index].SpriteDetails;
        AtlasProperty originAtlas = BobShrinker.db.mAtlasOriginalInfoList[index];
        AtlasProperty currentAtlas = BobShrinker.db.mAtlasCurrentInfoList[index];

        GUILayout.Label("origin: " + originAtlas.pixelSize + " " + originAtlas.scale);
        GUILayout.Label("current: " + currentAtlas.pixelSize + " " + currentAtlas.scale);
        for (int i = 0; i < originalSpriteDetails.Count; i++)
        {
            GUILayout.Label(i.ToString() + " original Detail ");
            GUILayout.Label("    Demension: " + originalSpriteDetails[i].Demension.ToString());
            GUILayout.Label("    Padding: " + originalSpriteDetails[i].Padding.ToString());
            GUILayout.Label("    Border: " + originalSpriteDetails[i].Border.ToString());

            GUILayout.Label(i.ToString() + " current Detail ");
            GUILayout.Label("    Demension: " + currentSpriteDetails[i].Demension.ToString());
            GUILayout.Label("    Padding: " + currentSpriteDetails[i].Padding.ToString());
            GUILayout.Label("    Border: " + currentSpriteDetails[i].Border.ToString());
        }

    }

    /// <summary>
    /// 显示第index个Texture的属性
    /// </summary>
    /// <param name="index"></param>
    private void ShowTextureProperty(int index)
    {
        TextureProperty originTex = BobShrinker.db.mTextureOriginalInfoList[index];
        TextureProperty currentTex = BobShrinker.db.mTextureCurrentInfoList[index];
        GUILayout.Label(BobShrinker.db.mTexturePaths[index]);
        GUILayout.Label("origin: " + originTex.MaxSize + " " + originTex.MipmapEnabled);
        GUILayout.Label("current: " + currentTex.MaxSize + " " + currentTex.MipmapEnabled);
    }
    /// <summary>
    /// 添加一组文件路径
    /// </summary>
    /// <param name="filepaths"></param>
    private void AddFileItems(string[] filepaths)
    {
        for (int i = 0; i < filepaths.Length; ++i)
        {
            AddFileItems(filepaths[i]);
        }
        BobUtils.ClearProgressBar();
    }
    /// <summary>
    /// 添加单个文件路径
    /// </summary>
    /// <param name="filepath"></param>
    private void AddFileItems(string filepath)
    {
        filepath = filepath.Replace('\\', '/');
        Object obj = AssetDatabase.LoadAssetAtPath(filepath, typeof(UnityEngine.Object));
        if (obj == null)
            return;

        if (!System.IO.File.Exists(filepath) && System.IO.Directory.Exists(filepath))
        {///如果是目录，则遍历其中的所有文件
            string[] files = System.IO.Directory.GetFiles(filepath, "*.*", System.IO.SearchOption.AllDirectories);
            for (int i = 0; i < files.Length; ++i)
            {
                AddFileItems(files[i]);
            }
            return;
        }
        if (obj is Texture)
        {
            if (BobShrinker.db.mTexturePaths.Contains(filepath))
            {
                return;
            }
            else
            {
                TextureImporter ti = TextureImporter.GetAtPath(filepath) as TextureImporter;
                if (ti == null)
                {
                    return;
                }
                BobUtils.DisplayProgressBar(1, 1, "添加文件", filepath);
                int maxTextSize = 0;
                TextureImporterFormat tf = new TextureImporterFormat();
                bool ret = ti.GetPlatformTextureSettings("WP8", out maxTextSize, out tf);//获取WP8的平台设置
                if (ret == false)
                {
                    maxTextSize = ti.maxTextureSize;
                    ti.SetPlatformTextureSettings("WP8", maxTextSize, ti.textureFormat); //若没有设置WP8平台，则用default的设置来设置
                }
                //备份原始属性
                TextureProperty originalTextureProp = new TextureProperty(maxTextSize, ti.mipmapEnabled);
                originalTextureProp.isOriginal = true;
                BobShrinker.db.SaveTextureData(filepath, originalTextureProp, originalTextureProp);
                
            }
        }
        if (obj is GameObject)
        {
            GameObject go = obj as GameObject;
            UIAtlas uiatlas = go.GetComponent<UIAtlas>();
            if (uiatlas != null)
            {
                if (BobShrinker.db.mAtlasPaths.Contains(filepath))
                {
                    return;
                }
                else if (uiatlas.spriteMaterial == null)
                {
                    Debug.LogError(filepath + " has no materials");
                    return;
                }
                else
                {
                    BobUtils.DisplayProgressBar(1, 1, "添加文件", filepath);
                    AtlasProperty originalAtlasProp = BobShrinker.GetAtlasProperty(uiatlas, true);
                    BobShrinker.db.SaveAtlasData(filepath, originalAtlasProp, originalAtlasProp);
                }
            }

            List<string> dependencies = BobUtils.CollectDependencies(filepath);//获取依赖资源 接着AddItems
            for (int i = 0; i < dependencies.Count; ++i)
            {
                AddFileItems(dependencies[i]);
            }
        }  
    }
}
