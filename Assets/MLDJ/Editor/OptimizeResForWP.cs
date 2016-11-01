using System;
using UnityEditor;
using UnityEngine;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using Object = UnityEngine.Object;

public class OptimizeResForWP
{
    private static int mAssetPathStartIndex = Application.dataPath.IndexOf( "Assets" );

    #region AudioRes
    struct AudioOriginResValue
    {
        public AudioImporterFormat mFormat;
        public int mCompressionBitrate;
        public AudioClipLoadType mLoadType;
    }

    private static Dictionary<string, AudioOriginResValue> mOriginAudioRes = new Dictionary<string, AudioOriginResValue>();

    public static bool OptimizeAudioRes()
    {
        mOriginAudioRes.Clear();

        string[] mAudioExtensionArray = new string[] { "*.ogg", "*.wav", "*.mp3" };
        DirectoryInfo rootDir = new DirectoryInfo( Application.dataPath );
        try
        {
            foreach ( string ext in mAudioExtensionArray )
            {
                FileInfo[] allFiles = rootDir.GetFiles( ext, SearchOption.AllDirectories );
                foreach ( FileInfo fi in allFiles )
                {
                    string pathName = fi.FullName.Replace( '\\', '/' );
                    pathName = pathName.Remove( 0, mAssetPathStartIndex );

                    AudioImporter imp = AssetImporter.GetAtPath( pathName ) as AudioImporter;

                    if ( imp )
                    {
                        //Get Origin Res Info
                        AudioOriginResValue originResValue = new AudioOriginResValue();
                        originResValue.mFormat = imp.format;
                        originResValue.mCompressionBitrate = imp.compressionBitrate;
                        originResValue.mLoadType = imp.loadType;
                        if ( !mOriginAudioRes.ContainsKey( pathName ) )
                        {
                            mOriginAudioRes.Add( pathName, originResValue );
                        }

                        imp.format = AudioImporterFormat.Compressed;
                        imp.compressionBitrate = 40 * 1024;
                        imp.loadType = AudioClipLoadType.DecompressOnLoad;
                    }

                    AssetDatabase.ImportAsset( pathName );
                }
            }
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "OptimizeAudioRes Exception: " + ex.Message );

            return false;
        }

        Debug.Log( "OptimizeAudioRes Success!" );
        return true;
    }

    public static bool RevertOriginAudioRes()
    {
        try
        {
            foreach ( KeyValuePair<string, AudioOriginResValue> info in mOriginAudioRes )
            {
                string pathName = info.Key;
                AudioImporter imp = AssetImporter.GetAtPath( pathName ) as AudioImporter;

                if ( imp )
                {
                    imp.format = info.Value.mFormat;
                    imp.compressionBitrate = info.Value.mCompressionBitrate;
                    imp.loadType = info.Value.mLoadType;
                }

                AssetDatabase.ImportAsset( pathName );
            }
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "RevertOriginAudioRes Exception: " + ex.Message );

            return false;
        }

        mOriginAudioRes.Clear();

        Debug.Log( "RevertOriginAudioRes Success!" );
        return true;
    }
    #endregion

    #region ShaderRes
    private static Dictionary<string, string> mOriNewShaderNamePair = new Dictionary<string, string>();

    struct ShaderBackUpInfo
    {
        public string mFallBackOriginName;
        public string mFallBackNewName;
    }

    struct MaterialBackUpInfo
    {
        public string mShaderOriginName;
        public string mShaderNewName;
    }

    private static Dictionary<string, ShaderBackUpInfo> mShaderBackUpInfoDic = new Dictionary<string, ShaderBackUpInfo>();
    private static Dictionary<string, MaterialBackUpInfo> mMaterialBackUpInfoDic = new Dictionary<string, MaterialBackUpInfo>();

    public static bool OptimizeShaderMaterial()
    {
        mOriNewShaderNamePair.Clear();
        mShaderBackUpInfoDic.Clear();
        mMaterialBackUpInfoDic.Clear();

        mOriNewShaderNamePair.Add( "Diffuse", "Mobile/Diffuse" );
        mOriNewShaderNamePair.Add( "VertexLit", "Mobile/VertexLit" );
        mOriNewShaderNamePair.Add( "Self-Illumin/Diffuse", "MLDJ/Self-Illumin/Diffuse" );
        mOriNewShaderNamePair.Add( "Self-Illumin/VertexLit", "Mobile/Self-Illumin/VertexLit" );
        mOriNewShaderNamePair.Add( "Particles/Additive", "Mobile/Particles/Additive" );
        mOriNewShaderNamePair.Add( "Particles/Alpha Blended", "Mobile/Particles/Alpha Blended" );

        //Change Shader
        try
        {
            DirectoryInfo rootDir = new DirectoryInfo( Application.dataPath );
            FileInfo[] allFiles = rootDir.GetFiles( "*.shader", SearchOption.AllDirectories );
            foreach ( FileInfo fi in allFiles )
            {
                StreamReader sr = new StreamReader( fi.FullName );
                string contentStr = sr.ReadToEnd();
                System.Text.Encoding encoding = sr.CurrentEncoding;
                sr.Close();
                
                foreach ( KeyValuePair<string, string> info in mOriNewShaderNamePair )
                {
                    string oriNameWithFallback = string.Empty;
                    if ( contentStr.IndexOf( "FallBack" ) != -1 )
                    {
                        oriNameWithFallback = "FallBack" + " \"" + info.Key + "\"";
                    }
                    else if ( contentStr.IndexOf( "Fallback" ) != -1 )
                    {
                        oriNameWithFallback = "Fallback" + " \"" + info.Key + "\"";
                    }

                    if ( oriNameWithFallback != string.Empty && contentStr.Contains( oriNameWithFallback ) )
                    {
                        string newNameWithFallback = oriNameWithFallback.Substring( 0, 8 ) + " \"" + info.Value + "\"";

                        contentStr = contentStr.Replace( oriNameWithFallback, newNameWithFallback );

                        ShaderBackUpInfo shaderRes = new ShaderBackUpInfo();
                        shaderRes.mFallBackOriginName = oriNameWithFallback;
                        shaderRes.mFallBackNewName = newNameWithFallback;

                        mShaderBackUpInfoDic.Add( fi.FullName, shaderRes );

                        StreamWriter sw = new StreamWriter( fi.FullName, false, encoding );
                        sw.Write( contentStr );
                        sw.Close();

                        break;
                    }
                }           
            }

            Debug.Log( "Optimize Shader Success!" );
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "Optimize Shader Exception: " + ex.Message );

            return false;
        }

        //Change Material
        try
        {
            DirectoryInfo rootDir = new DirectoryInfo( Application.dataPath );
            FileInfo[] allFiles = rootDir.GetFiles( "*.mat", SearchOption.AllDirectories );
            foreach ( FileInfo fi in allFiles )
            {
                string pathName = fi.FullName.Replace( '\\', '/' );
                pathName = pathName.Remove( 0, mAssetPathStartIndex );

                Material mat = AssetDatabase.LoadAssetAtPath( pathName, typeof( Material ) ) as Material;

                foreach ( KeyValuePair<string, string> info in mOriNewShaderNamePair )
                {
                    if ( mat && mat.shader.name == info.Key )
                    {
                        mat.shader = Shader.Find( info.Value );

                        MaterialBackUpInfo matRes = new MaterialBackUpInfo();
                        matRes.mShaderOriginName = info.Key;
                        matRes.mShaderNewName = info.Value;

                        mMaterialBackUpInfoDic.Add( pathName, matRes );

                        break;
                    }
                }                
            }
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "Optimize Material Exception: " + ex.Message );

            return false;
        }
        finally
        {
            AssetDatabase.SaveAssets();
        }

        Debug.Log( "Optimize Material Success!" );
        return true;
    }

    public static bool RevertOriginShaderMaterial()
    {
        //Revert Shader
        try
        {
            foreach ( KeyValuePair<string, ShaderBackUpInfo> info in mShaderBackUpInfoDic )
            {
                StreamReader sr = new StreamReader( info.Key );
                string contentStr = sr.ReadToEnd();
                System.Text.Encoding encoding = sr.CurrentEncoding;
                sr.Close();

                if ( contentStr.Contains( info.Value.mFallBackNewName ) )
                {
                    contentStr = contentStr.Replace( info.Value.mFallBackNewName, info.Value.mFallBackOriginName );
                }

                StreamWriter sw = new StreamWriter( info.Key, false, encoding );
                sw.Write( contentStr );
                sw.Close();
            }

            Debug.Log( "Revert Shader Success!" );
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "Revert Shader Exception: " + ex.Message );

            return false;
        }
        finally
        {
            mShaderBackUpInfoDic.Clear();
        }

        //Revert Material
        try
        {
            foreach ( KeyValuePair<string, MaterialBackUpInfo> info in mMaterialBackUpInfoDic )
            {
                Material mat = AssetDatabase.LoadAssetAtPath( info.Key, typeof( Material ) ) as Material;

                mat.shader = Shader.Find( info.Value.mShaderOriginName );
            }

            Debug.Log( "Revert Material Success!" );
        }
        catch ( System.Exception ex )
        {
            Debug.Log( "Revert Material Exception: " + ex.Message );

            return false;
        }
        finally
        {
            AssetDatabase.SaveAssets();
            mMaterialBackUpInfoDic.Clear();
        }

        return true;
    }
    #endregion

    #region common
    private static OptimizeData m_OptimizeData = null;
    public static string mOptimizeDataPath = "Assets/OptimizeData.asset";
    public static string mOptimizeFontName = "Assets/MLDJ/UIRes/Font/FZLTHJW.TTF";
    public static string mOptimizeSceneName = "Assets/MLDJ/BundleData/Scene/SuZhou.unity";

    public static string[] mTextureExtensionArray = new string[] { "*.jpg", "*.png", "*.psd", "*.tiff", "*.tga", "*.gif", "*.bmp", "*.iff", "*.pict", "*.exr", "*.tif" };
    public static string[] mMeshExcludeArray = new string[] { "Assets/Res_MS/Character" };
    /// <summary>
    /// 获得优化数据
    /// </summary>
    public static OptimizeData OptData
    {
        get
        {
            if (m_OptimizeData == null)
            {
                m_OptimizeData = AssetDatabase.LoadAssetAtPath(mOptimizeDataPath, typeof(OptimizeData)) as OptimizeData;
                if (m_OptimizeData == null)
                {
                    OptimizeData od = new OptimizeData();
                    AssetDatabase.CreateAsset(od, mOptimizeDataPath);
                    AssetDatabase.SaveAssets();
                    m_OptimizeData = AssetDatabase.LoadAssetAtPath(mOptimizeDataPath, typeof(OptimizeData)) as OptimizeData;
                }
            }

            return m_OptimizeData;
        }
    }

    /// <summary>
    /// 删除优化数据
    /// </summary>
    public static void DeleteOptimizeData()
    {
        AssetDatabase.DeleteAsset(mOptimizeDataPath);
    }

    /// <summary>
    /// 获取文件的依赖对象
    /// </summary>
    /// <param name="filepath">目标文件路径</param>
    /// <returns></returns>
    static Object[] GetDependObjectByPath(string filepath)
    {
        Object obj = AssetDatabase.LoadMainAssetAtPath(filepath);
        Object[] Objs = new Object[] { obj };

        return EditorUtility.CollectDependencies(Objs);
    }
    #endregion

    #region Texture
    /// <summary>
    /// 优化纹理
    /// </summary>
    /// <returns></returns>
    public static bool OptimizeTexture()
    {
        List<string> mTexturePathList = new List<string>();
        DirectoryInfo rootDir = new DirectoryInfo(Application.dataPath);

        foreach (string ext in mTextureExtensionArray)
        {
            FileInfo[] allFiles = rootDir.GetFiles(ext, SearchOption.AllDirectories);
            //             int filecount = allFiles.Length;
            //             int fileindex = 0;
            foreach (FileInfo fi in allFiles)
            {
                string fullName = fi.FullName.Replace('\\', '/');
                fullName = fullName.Remove(0, mAssetPathStartIndex);
                mTexturePathList.Add(fullName);
                //                 float percent = (float)fileindex / (float)filecount;
                //                 EditorUtility.DisplayProgressBar("收集Texture数据" + percent.ToString(" 0.00%").ToString(), fullName, percent);
                //                 fileindex++;
            }
        }

        int texcount = mTexturePathList.Count;
        for (int i = 0; i < texcount; i++)
        {
            string path = mTexturePathList[i];

            float percent = (float)i / (float)texcount;
            EditorUtility.DisplayProgressBar("处理Texture" + percent.ToString(" 0.00%").ToString(), path, percent);

            int MaxSize = 1024;
            TextureImporterFormat TexFormat;
            TextureImporter textureImporter = AssetImporter.GetAtPath(path) as TextureImporter;
            textureImporter.GetPlatformTextureSettings("WP8", out MaxSize, out TexFormat);

            if (true/* && textureResourceUnitIt.mIsPowerOfTwo*/)
            {
                bool hasAlpha = textureImporter.DoesSourceTextureHaveAlpha();
                if (hasAlpha)
                {
                    textureImporter.SetPlatformTextureSettings("WP8", MaxSize, TextureImporterFormat.DXT5);
                }
                else
                {
                    textureImporter.SetPlatformTextureSettings("WP8", MaxSize, TextureImporterFormat.DXT1);
                }
                AssetDatabase.ImportAsset(path);
            }
        }

        GC.Collect();
        return true;
    }

    #endregion

    #region Font
    /// <summary>
    /// 优化Font
    /// </summary>
    /// <returns></returns>
    public static bool OptimizeFont()
    {
        DirectoryInfo rootDir = new DirectoryInfo(Application.dataPath);

        Font OptimizeFont = AssetDatabase.LoadAssetAtPath(mOptimizeFontName, typeof(Font)) as Font;

        if (OptData == null)
        {
            Debug.Log("OptData is null");
            return false;
        }

        if (!OptData.mFontDataCollected)
        {
            FileInfo[] allFiles = rootDir.GetFiles("*.prefab", SearchOption.AllDirectories);
            int filecount = allFiles.Length;
            int fileindex = 0;
            foreach (FileInfo fi in allFiles)
            {
                string fullName = fi.FullName.Replace('\\', '/');
                fullName = fullName.Remove(0, mAssetPathStartIndex);

                float percent = (float)fileindex / (float)filecount;
                EditorUtility.DisplayProgressBar("收集Font数据" + percent.ToString(" 0.00%").ToString(), fullName, percent);
                fileindex++;

                Object[] depends = GetDependObjectByPath(fullName);

                for (int i = 0; i < depends.Length; i++)
                {
                    if (depends[i] is UnityEngine.Font)
                    {
                        string dependpath = AssetDatabase.GetAssetPath(depends[i]);

                        GameObject go = AssetDatabase.LoadMainAssetAtPath(fullName) as GameObject;
                        if (go.GetComponent<UIFont>() != null)
                        {
                            OptData.AddFontData(new FontData(fullName, dependpath));
                            EditorUtility.SetDirty(OptData);
                        }

                    }
                }
            }
            OptData.mFontDataCollected = true;
        }

        if (!OptData.mFontModified)
        {
            int fontcount = OptData.mFontDataList.Count;
            for (int i = 0; i < fontcount; i++)
            {
                FontData fd = OptData.mFontDataList[i];

                float percent = (float)i / (float)fontcount;
                EditorUtility.DisplayProgressBar("处理Font" + percent.ToString(" 0.00%").ToString(), fd.PrefabPath, percent);

                GameObject go = AssetDatabase.LoadMainAssetAtPath(fd.PrefabPath) as GameObject;
                if (go != null)
                {
                    UIFont uifont = go.GetComponent<UIFont>();
                    if (uifont != null)
                    {
                        OptData.mFontDataList[i].mModified = true;
                        uifont.dynamicFont = OptimizeFont;
                    }
                    EditorUtility.SetDirty(go);
                    EditorUtility.SetDirty(OptData);
                }
            }
            OptData.mFontModified = true;
            EditorUtility.SetDirty(OptData);
        }

        EditorUtility.ClearProgressBar();
        GC.Collect();
        return true;
    }

    /// <summary>
    /// 恢复Font
    /// </summary>
    /// <returns></returns>
    public static bool RecoverFont()
    {
        if (OptData == null)
        {
            Debug.Log("OptData is null");
            return false;
        }

        Dictionary<string, Font> FontList = new Dictionary<string, Font>();
        DirectoryInfo rootDir = new DirectoryInfo(Application.dataPath);
        FileInfo[] allFonts = rootDir.GetFiles("*.ttf", SearchOption.AllDirectories);

        foreach (FileInfo fi in allFonts)
        {
            string fullName = fi.FullName.Replace('\\', '/');
            fullName = fullName.Remove(0, mAssetPathStartIndex);
            if (!FontList.ContainsKey(fullName))
            {
                Font font = AssetDatabase.LoadAssetAtPath(fullName, typeof(Font)) as Font;
                FontList.Add(fullName, font);
            }
        }

        int fontcount = OptData.mFontDataList.Count;
        for (int i = 0; i < fontcount; i++)
        {
            FontData fd = OptData.mFontDataList[i];

            float percent = (float)i / (float)fontcount;
            EditorUtility.DisplayProgressBar("恢复Font" + percent.ToString(" 0.00%").ToString(), fd.PrefabPath, percent);

            if (FontList.ContainsKey(fd.FontPath) && fd.mModified)
            {
                GameObject go = AssetDatabase.LoadMainAssetAtPath(fd.PrefabPath) as GameObject;
                UIFont uifont = go.GetComponent<UIFont>();
                if (uifont != null)
                {
                    uifont.dynamicFont = FontList[fd.FontPath];
                    EditorUtility.SetDirty(go);
                    OptData.mFontDataList[i].mModified = false;
                    EditorUtility.SetDirty(OptData);
                }
            }
        }
        OptData.mFontModified = false;
        EditorUtility.SetDirty(OptData);

        OptData.CleanUpFontData();

        EditorUtility.ClearProgressBar();
        GC.Collect();
        return true;
    }

    #endregion

    #region Mesh
    /// <summary>
    /// 优化Mesh
    /// </summary>
    /// <returns></returns>
    public static bool OptimizeMesh()
    {
        if (OptData == null)
        {
            Debug.Log("OptData is null");
            return false;
        }

        if (!OptData.mMeshDataCollected)
        {
            DirectoryInfo rootDir = new DirectoryInfo(Application.dataPath);
            FileInfo[] allFiles = rootDir.GetFiles("*.fbx", SearchOption.AllDirectories);

            int filecount = allFiles.Length;
            int fileindex = 0;

            foreach (FileInfo fi in allFiles)
            {
                string fullName = fi.FullName.Replace('\\', '/');
                fullName = fullName.Remove(0, mAssetPathStartIndex);

                float percent = (float)fileindex / (float)filecount;
                EditorUtility.DisplayProgressBar("收集Mesh数据" + percent.ToString(" 0.00%").ToString(), fullName, percent);
                fileindex++;

                bool isExcluded = false;
                for (int i = 0; i < mMeshExcludeArray.Length; i++)
                {
                    if (fullName.Contains(mMeshExcludeArray[i]))
                    {
                        isExcluded = true;
                        break;
                    }
                }
                if (!isExcluded)
                {
                    ModelImporter imp = AssetImporter.GetAtPath(fullName) as ModelImporter;
                    OptData.AddMeshData(new MeshData(fullName, imp.normalImportMode, imp.meshCompression, imp.optimizeMesh, imp.isReadable));
                    EditorUtility.SetDirty(OptData);
                }
            }

            OptData.mMeshDataCollected = true;
            EditorUtility.SetDirty(OptData);
        }

        if (!OptData.mMeshModified)
        {
            int meshcount = OptData.mMeshDataList.Count;
            for (int i = 0; i < meshcount; i++)
            {
                MeshData md = OptData.mMeshDataList[i];

                float percent = (float)i / (float)meshcount;
                EditorUtility.DisplayProgressBar("处理Mesh" + percent.ToString(" 0.00%").ToString(), md.MeshPath, percent);

                ModelImporter imp = AssetImporter.GetAtPath(md.MeshPath) as ModelImporter;
                if (imp != null)
                {
                    OptData.mMeshDataList[i].mModified = true;
                    EditorUtility.SetDirty(OptData);
                    imp.normalImportMode = ModelImporterTangentSpaceMode.None;
                    imp.optimizeMesh = true;
                    imp.isReadable = false;
                    imp.meshCompression = ModelImporterMeshCompression.High;
                    AssetDatabase.ImportAsset(md.MeshPath);
                }
            }
            OptData.mMeshModified = true;
            EditorUtility.SetDirty(OptData);
        }

        EditorUtility.ClearProgressBar();
        GC.Collect();
        return true;
    }

    /// <summary>
    /// 恢复Mesh
    /// </summary>
    public static bool RecoverMesh()
    {
        if (OptData == null)
        {
            Debug.Log("OptData is null");
            return false;
        }

        int meshcount = OptData.mMeshDataList.Count;
        for (int i = 0; i < meshcount; i++)
        {
            MeshData md = OptData.mMeshDataList[i];

            float percent = (float)i / (float)meshcount;
            EditorUtility.DisplayProgressBar("恢复Mesh" + percent.ToString(" 0.00%").ToString(), md.MeshPath, percent);

            ModelImporter imp = AssetImporter.GetAtPath(md.MeshPath) as ModelImporter;
            if (imp != null)
            {

                imp.normalImportMode = OptData.mMeshDataList[i].NormalImportMode;
                imp.optimizeMesh = OptData.mMeshDataList[i].OptimizeMesh;
                imp.isReadable = OptData.mMeshDataList[i].IsReadable;
                imp.meshCompression = OptData.mMeshDataList[i].MeshCompression;
                AssetDatabase.ImportAsset(md.MeshPath);

                OptData.mMeshDataList[i].mModified = true;
                EditorUtility.SetDirty(OptData);
            }
        }
        OptData.mMeshModified = false;
        EditorUtility.SetDirty(OptData);

        OptData.CleanUpMeshData();

        EditorUtility.ClearProgressBar();
        GC.Collect();
        return true;
    }

    #endregion

    #region Scene BatchingStatic

    public static void OptimizeSceneStaticBatching()
    {
        EditorApplication.OpenScene(mOptimizeSceneName);

        GameObject models = GameObject.Find("Models");
        if (null != models)
        {
            models.isStatic = false;

            for (int i = 0; i < models.transform.childCount; ++i)
            {
                Transform child = models.transform.GetChild(i);
                child.gameObject.isStatic = false;
            }
        }

        GameObject trees = GameObject.Find("Trees");
        if (null != trees)
        {
            trees.isStatic = false;

            for (int i = 0; i < trees.transform.childCount; ++i)
            {
                Transform child = trees.transform.GetChild(i);
                child.gameObject.isStatic = false;
            }
        }

        EditorApplication.SaveScene();

    }

    public static void RecoverSceneStaticBatching()
    {
        EditorApplication.OpenScene(mOptimizeSceneName);

        GameObject models = GameObject.Find("Models");
        if (null != models)
        {
            models.isStatic = true;

            for (int i = 0; i < models.transform.childCount; ++i)
            {
                Transform child = models.transform.GetChild(i);
                child.gameObject.isStatic = true;
            }
        }

        GameObject trees = GameObject.Find("Trees");
        if (null != trees)
        {
            trees.isStatic = true;

            for (int i = 0; i < trees.transform.childCount; ++i)
            {
                Transform child = trees.transform.GetChild(i);
                child.gameObject.isStatic = true;
            }
        }

        EditorApplication.SaveScene();

    }


    #endregion

}
