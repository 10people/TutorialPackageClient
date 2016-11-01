using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;



public class AtlasDataBase : ScriptableObject
{
    public List<string> mAtlasPaths;
    public List<AtlasProperty> mAtlasCurrentInfoList;
    public List<AtlasProperty> mAtlasOriginalInfoList;

    public List<string> mTexturePaths;
    public List<TextureProperty> mTextureCurrentInfoList;
    public List<TextureProperty> mTextureOriginalInfoList;
    public AtlasDataBase()
    {
        mAtlasPaths = new List<string>();
        mAtlasCurrentInfoList = new List<AtlasProperty>();
        mAtlasOriginalInfoList = new List<AtlasProperty>();

        mTexturePaths = new List<string>();
        mTextureCurrentInfoList = new List<TextureProperty>();
        mTextureOriginalInfoList = new List<TextureProperty>();
    }

    /// <summary>
    /// 获取Atlas当前属性
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public AtlasProperty GetAtlasProperty(string path, bool getOriginal = false)
    {
        if (ContainsPath(path))
        {
            if (getOriginal)
            {
                return mAtlasOriginalInfoList[mAtlasPaths.IndexOf(path)];
            }
            else
            {
                return mAtlasCurrentInfoList[mAtlasPaths.IndexOf(path)];
            }
        }
        return null;
    }

    /// <summary>
    /// 获取贴图的属性，在db中保存了两份属性，一份是原始属性，一份是当前属性
    /// </summary>
    /// <param name="path">贴图的路径</param>
    /// <param name="getOriginal">是否获取原始属性</param>
    /// <returns></returns>
    public TextureProperty GetTextureProperty(string path, bool getOriginal = false)
    {
        if (ContainsPath(path))
        {
            if (getOriginal)
            {
                return mTextureOriginalInfoList[mTexturePaths.IndexOf(path)];
            }
            else
            {
                return mTextureCurrentInfoList[mTexturePaths.IndexOf(path)];
            }
        }
        return null;
    }
    /// <summary>
    /// 资源中是否有路径为path的
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public bool ContainsPath(string path)
    {
        if (mAtlasPaths.Contains(path))
        {
            return true;
        }
        if (mTexturePaths.Contains(path))
        {
            return true;
        }
        return false;
    }

    /// <summary>
    /// 设置Atlas数据
    /// </summary>
    /// <param name="path"></param>
    /// <param name="origin"></param>
    /// <param name="cur"></param>
    public void SaveAtlasData(string path, AtlasProperty origin, AtlasProperty cur)
    {
        int _index = mAtlasPaths.IndexOf(path);
        if (_index == -1)
        {
            mAtlasPaths.Add(path);
            mAtlasOriginalInfoList.Add(origin);
            mAtlasCurrentInfoList.Add(cur);
        }
        else
        {
            mAtlasOriginalInfoList[_index] = origin;
            mAtlasCurrentInfoList[_index] = cur;
        }
    }
    /// <summary>
    /// 保存Texture数据
    /// </summary>
    /// <param name="path"></param>
    /// <param name="origin"></param>
    /// <param name="cur"></param>
    public void SaveTextureData(string path, TextureProperty origin, TextureProperty cur)
    {
        int _index = mTexturePaths.IndexOf(path);
        if (_index == -1)
        {
            mTexturePaths.Add(path);
            mTextureOriginalInfoList.Add(origin);
            mTextureCurrentInfoList.Add(cur);
        }
        else
        {
            mTextureOriginalInfoList[_index] = (origin);
            mTextureCurrentInfoList[_index] = (cur);
        }
    }

    public void RemoveData(string path)
    {
        int index = mAtlasPaths.IndexOf(path);
        if (index != -1)
        {
            mAtlasPaths.RemoveAt(index);
            mAtlasOriginalInfoList.RemoveAt(index);
            mAtlasCurrentInfoList.RemoveAt(index);

            GameObject obj = AssetDatabase.LoadAssetAtPath(path, typeof(GameObject)) as GameObject;
            if (obj != null)
            {
                UIAtlas uiatlas = obj.GetComponent<UIAtlas>();
                if (uiatlas != null)
                {
                    string texturepath = AssetDatabase.GetAssetPath(uiatlas.spriteMaterial.mainTexture);
                    RemoveData(texturepath);
                }
            }
        }

        index = mTexturePaths.IndexOf(path);
        if (index != -1)
        {
            mTexturePaths.RemoveAt(index);
            mTextureOriginalInfoList.RemoveAt(index);
            mTextureCurrentInfoList.RemoveAt(index);
        }
    }

    /// <summary>
    /// 清空数据
    /// </summary>
    public void ClearData()
    {
        mAtlasPaths.Clear();
        mAtlasCurrentInfoList.Clear();
        mAtlasOriginalInfoList.Clear();

        mTexturePaths.Clear();
        mTextureCurrentInfoList.Clear();
        mTextureOriginalInfoList.Clear();
    }

}
