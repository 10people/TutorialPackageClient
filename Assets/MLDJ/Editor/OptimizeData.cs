using UnityEditor;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class OptimizeData : ScriptableObject
{
    public OptimizeData()
    {
        mFontDataList = new List<FontData>();
        mFontPrefabList = new List<string>();
        mFontDataCollected = false;
        mFontModified = false;
    }
    void CleanUp()
    {
        CleanUpFontData();
        CleanUpMeshData();
    }

    #region Font
    public List<FontData> mFontDataList;
    public List<string> mFontPrefabList;
    public bool mFontDataCollected = false;
    public bool mFontModified = false;
    public void AddFontData(FontData fd)
    {
        if (mFontPrefabList.Contains(fd.PrefabPath))
        {
            for (int i = 0; i < mFontDataList.Count; i++)
            {
                if (mFontDataList[i].PrefabPath.Equals(fd.PrefabPath))
                {
                    mFontDataList[i].FontPath = fd.FontPath;
                    mFontDataList[i].mModified = fd.mModified;
                }
            }
        }
        else
        {
            mFontDataList.Add(fd);
            mFontPrefabList.Add(fd.PrefabPath);
        }
    }

    public void CleanUpFontData()
    {
        mFontDataList.Clear();
        mFontPrefabList.Clear();
        mFontDataCollected = false;
        mFontModified = false;
    }
    #endregion //Font

    #region Mesh
    public List<MeshData> mMeshDataList;
    public List<string> mMeshPathList;
    public bool mMeshDataCollected = false;
    public bool mMeshModified = false;
    public void AddMeshData(MeshData md)
    {
        if (mMeshPathList.Contains(md.MeshPath))
        {
            for (int i = 0; i < mMeshDataList.Count; i++)
            {
                if (mMeshDataList[i].MeshPath.Equals(md.MeshPath))
                {
                    mMeshDataList[i].MeshCompression = md.MeshCompression;
                    mMeshDataList[i].IsReadable = md.IsReadable;
                    mMeshDataList[i].NormalImportMode = md.NormalImportMode;
                    mMeshDataList[i].OptimizeMesh = md.OptimizeMesh;
                    mMeshDataList[i].mModified = md.mModified;
                }
            }
        }
        else
        {
            mMeshDataList.Add(md);
            mMeshPathList.Add(md.MeshPath);
        }
    }

    public void CleanUpMeshData()
    {
        mMeshDataList.Clear();
        mMeshPathList.Clear();
        mMeshDataCollected = false;
        mMeshModified = false;
    }

    #endregion
}
[System.Serializable]
public class TextureData
{

}

[System.Serializable]
public class FontData
{
    public string PrefabPath;
    public string FontPath;
    public bool mModified = false;

    public FontData()
    {

    }

    public FontData(string prefab, string font)
    {
        PrefabPath = prefab;
        FontPath = font;
        mModified = false;
    }
}


[System.Serializable]
public class MeshData
{
    public string MeshPath;
    public ModelImporterTangentSpaceMode NormalImportMode;
    public bool OptimizeMesh = false;
    public bool IsReadable = false;
    public ModelImporterMeshCompression MeshCompression;
    public bool mModified = false;

    public MeshData()
    {

    }

    public MeshData(string path, ModelImporterTangentSpaceMode normaltype,ModelImporterMeshCompression meshcompress,bool optmesh,bool readable)
    {
        MeshPath = path;
        NormalImportMode = normaltype;
        OptimizeMesh = optmesh;
        IsReadable = readable;
        MeshCompression = meshcompress;
    }
}
