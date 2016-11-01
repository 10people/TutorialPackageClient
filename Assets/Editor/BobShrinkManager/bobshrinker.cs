using UnityEngine;
using System.Collections;
using UnityEditor;
using System.Collections.Generic;
using System.IO;

public class BobShrinker
{
    private static AtlasDataBase mdb = null;
    public static AtlasDataBase db
    {
        get
        {
            if (mdb == null)
            {
                mdb = AssetDatabase.LoadAssetAtPath("Assets/AtlasData/AtlasData.asset", typeof(AtlasDataBase)) as AtlasDataBase;
                if (mdb == null)
                {
                    if (!Directory.Exists("Assets/AtlasData"))
                    {
                        AssetDatabase.CreateFolder("Assets", "AtlasData");
                    }
                    AssetDatabase.CreateAsset(new AtlasDataBase(), "Assets/AtlasData/AtlasData.asset");
                    AssetDatabase.SaveAssets();
                    mdb = AssetDatabase.LoadAssetAtPath("Assets/AtlasData/AtlasData.asset", typeof(AtlasDataBase)) as AtlasDataBase;
                }
            }
            return mdb;
        }
    }

    
    public static void ClearAtlasDatabase()
    {
        db.ClearData();
        EditorUtility.SetDirty(db);
    }


    #region 缩减UIAtlas

    /// <summary>
    /// 从一堆prefab中获取带有UIAtlas的资源
    /// </summary>
    /// <param name="prefablist"></param>
    /// <returns></returns>
    public static GameObject[] GetUIAtlasListFromPrefabList(GameObject[] prefablist)
    {
        List<GameObject> atList = new List<GameObject>();
        UIAtlas atlas = null;
        for (int i = 0; i < prefablist.Length; i++)
        {

            atlas = prefablist[i].GetComponent<UIAtlas>();
            if (atlas == null)
            {
                continue;
            }
            atList.Add(prefablist[i]);
        }
        return atList.ToArray();
    }

    /// <summary>
    /// 从项目文件夹下获取所有的prefab
    /// </summary>
    /// <param name="dir">指定的文件夹目录，fullname</param>
    /// <returns></returns>
    public static GameObject[] GetPrefabListUsingFileSys(string dir)
    {
        if (dir == null)
        {
            return null;
        }
        if (!BobUtils.IsDirectory(dir))
        {
            BobUtils.ShowErrorMessage("请提供一个文件夹地址");
            return null;
        }
        List<GameObject> prefabList = new List<GameObject>();
        DirectoryInfo dirRoot = new DirectoryInfo(dir);
        FileInfo[] allPrefabFiles = dirRoot.GetFiles("*.prefab", SearchOption.AllDirectories);
        string fullname = "";
        for (int i = 0; i < allPrefabFiles.Length; i++)
        {
            fullname = allPrefabFiles[i].FullName;
            fullname = BobUtils.GetRelativePath(fullname);
            BobUtils.DisplayProgressBar(i, allPrefabFiles.Length, "收集prefab信息", fullname);
            GameObject obj = (AssetDatabase.LoadAssetAtPath(fullname, typeof(Object))) as GameObject;
            if (obj == null)
            {
                continue;
            }
            prefabList.Add(obj);
        }
        BobUtils.ClearProgressBar();
        return prefabList.ToArray();
    }

    public enum ShrinkResult
    {
        Ignore = 0,
        Success,
        Failure
    }

    /// <summary>
    /// 缩纹理大小
    /// </summary>
    /// <param name="texObj"></param>
    /// <returns></returns>
    public static ShrinkResult ShrinkTexture(Texture2D texObj, bool divideByFour = false)
    {
        string assetpath = AssetDatabase.GetAssetPath(texObj);
        if (texObj == null)
        {
            return ShrinkResult.Failure;
        }
        int max = texObj.width > texObj.height ? texObj.width : texObj.height;

        if (divideByFour && !assetpath.Contains("UIRes"))
        {
            max /= 2;
        }

        TextureImporter ti = TextureImporter.GetAtPath(assetpath) as TextureImporter;
        if (ti == null)
        {
            Debug.Log(AssetDatabase.GetAssetPath(texObj) + " has no texture importer");
            return ShrinkResult.Failure;
        }
        if (TextureAlreadyShrinked(assetpath))
        {//已经压缩过了
            return ShrinkResult.Success;
        }
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

        if (TextureNoNeedShrink(max, maxTextSize))
        {//不需要再压缩
            SaveTextureData(texObj, originalTextureProp, originalTextureProp);
            return ShrinkResult.Ignore;
        }
        int a = maxTextSize;
        while (a >= max)
        {
            a = a >> 1;
        }
        ti.SetPlatformTextureSettings("WP8", a, tf);
        TextureProperty currentTextureProp = new TextureProperty(a, ti.mipmapEnabled);
        SaveTextureData(texObj, originalTextureProp, currentTextureProp);
        ApplyAssetChange(texObj, null, ti);
        return ShrinkResult.Success;

    }
    /// <summary>
    /// 根据贴图的大小来判断是否需要缩图
    /// </summary>
    /// <param name="max">贴图的长边的大小</param>
    /// <param name="maxTextSize">贴图的最大长度</param>
    /// <returns></returns>
    private static bool TextureNoNeedShrink(int max, int maxTextSize)
    {
        return max <= 32 || maxTextSize <= 32;
    }
    /// <summary>
    /// 根据贴图的属性判断是否已经被缩减过
    /// 若在db中不存在，则认为没有缩减过
    /// 否则根据属性的isOriginal值进行判断
    /// </summary>
    /// <param name="path">贴图的文件路径</param>
    /// <returns>true表示已经缩减过了；false表示未缩减过</returns>
    public static bool TextureAlreadyShrinked(string path)
    {
        TextureProperty tp = db.GetTextureProperty(path);
        if (tp == null)
        {
            return false;
        }
        return !tp.isOriginal;
    }

    /// <summary>
    /// 为压缩uiatlas做准备，包括压缩贴图及备份原始数据
    /// </summary>
    /// <param name="uiatlasobj"></param>
    /// <param name="originalAtlasProp">用于存储uiatlas的原始数据</param>
    /// <returns></returns>
    private static ShrinkResult prepareShrinkAtlas(Object uiatlasobj, ref AtlasProperty originalAtlasProp)
    {
        UIAtlas uiatlas = ((GameObject)uiatlasobj).GetComponent<UIAtlas>();
        string assetPath = AssetDatabase.GetAssetPath(uiatlas.gameObject);

        if (AtlasAlreadyShrinked(assetPath))
        {//已经处理过
            return ShrinkResult.Success;
        }

        if (null == uiatlas.spriteMaterial || null == uiatlas.spriteList)
        {
            return ShrinkResult.Failure;
        }

        BetterList<string> sl = uiatlas.GetListOfSprites();
        if (sl == null)
        {
            return ShrinkResult.Failure;
        }

        //先把纹理都缩了
        Object[] dependObjs = new Object[] { uiatlas.spriteMaterial.mainTexture }; //EditorUtility.CollectDependencies(new Object[] { uiatlas.gameObject }); //获取依赖的资源
        List<Texture2D> textureList = new List<Texture2D>();
        for (int i = 0; i < dependObjs.Length; i++)
        {//搜集依赖的纹理资源
            if (dependObjs[i] is Texture2D)
            {
                textureList.Add(dependObjs[i] as Texture2D);
            }
        }
        for (int index = 0; index < textureList.Count; ++index)
        {
            ShrinkResult sret = ShrinkTexture(textureList[index]);
            if (sret != ShrinkResult.Success)
            {
                RecoverUIAtlasFromMeta(uiatlasobj);
                return ShrinkResult.Failure;
            }
        }


        return ShrinkResult.Success;
    }


    /// <summary>
    /// 压缩UIAtlas
    /// </summary>
    /// <param name="uiatlasobj"></param>
    /// <returns></returns>
    public static ShrinkResult ShrinkAtlas(Object uiatlasobj)
    {
        AtlasProperty originalAtlasProp = null;
        ShrinkResult ret = prepareShrinkAtlas(uiatlasobj, ref originalAtlasProp);
        if (ret != ShrinkResult.Success)
        {
            return ret;
        }

        UIAtlas uiatlas = ((GameObject)uiatlasobj).GetComponent<UIAtlas>();
        BetterList<string> sl = uiatlas.GetListOfSprites();
        //备份原始尺寸
        originalAtlasProp = GetAtlasProperty(uiatlas, true);

        float times = 2f;
        uiatlas.scale /= times;

        foreach (string sn in sl)
        {
            UISpriteData sd = uiatlas.GetSprite(sn);
            sd.x /= (int)times;
            sd.y /= (int)times;
            sd.width /= (int)times;
            sd.height /= (int)times;

            sd.borderBottom /= (int)times;
            sd.borderLeft /= (int)times;
            sd.borderRight /= (int)times;
            sd.borderTop /= (int)times;

            sd.paddingTop /= (int)times;
            sd.paddingBottom /= (int)times;
            sd.paddingLeft /= (int)times;
            sd.paddingRight /= (int)times;
        }
        uiatlas.pixelSize *= times;
        uiatlas.MarkAsDirty();

        AtlasProperty currentAtlasProp = GetAtlasProperty(uiatlas);
        SaveAtlasData(uiatlas, originalAtlasProp, currentAtlasProp);

        return ShrinkResult.Success;
    }

    public static bool AtlasAlreadyShrinked(UIAtlas atlas)
    {
        string path = AssetDatabase.GetAssetPath(atlas);
        return AtlasAlreadyShrinked(path);
    }
    /// <summary>
    /// 根据在AtlasDatabase中的数据判断是否压缩过
    /// </summary>
    /// <param name="path">atlas的prefab文件路径</param>
    /// <returns>若db中不存在该路径则返回false，表示没有被压缩过；若db存在该路径，则判断其isOriginal属性</returns>
    public static bool AtlasAlreadyShrinked(string path)
    {
        AtlasProperty ap = db.GetAtlasProperty(path);
        if (ap == null)
        {
            return false;
        }
        return !ap.isOriginal;
    }
    /// <summary>
    /// 保存uiatlas改变前后的信息
    /// </summary>
    /// <param name="uiatlas"></param>
    /// <param name="originalAtlasProp"></param>
    /// <param name="currentAtlasProp"></param>
    private static void SaveAtlasData(UIAtlas uiatlas, AtlasProperty originalAtlasProp, AtlasProperty currentAtlasProp)
    {
        db.SaveAtlasData(AssetDatabase.GetAssetPath(uiatlas.gameObject), originalAtlasProp, currentAtlasProp);
        EditorUtility.SetDirty(db);
    }
    /// <summary>
    /// 保存texture改变前后的信息
    /// </summary>
    /// <param name="texObj"></param>
    /// <param name="originalTexProp"></param>
    /// <param name="currentTexProp"></param>
    private static void SaveTextureData(Texture2D texObj, TextureProperty originalTexProp, TextureProperty currentTexProp)
    {
        db.SaveTextureData(AssetDatabase.GetAssetPath(texObj), originalTexProp, currentTexProp);
        EditorUtility.SetDirty(db);
    }

    
    /// <summary>
    /// 获取Atlas的属性信息保存在AtlasProperty中
    /// </summary>
    /// <param name="uiatlas"></param>
    /// <param name="isOriginal">指定这一属性是否是原始属性</param>
    /// <returns>返回的AtlasProperty中包含了uiatlas的属性</returns>
    public static AtlasProperty GetAtlasProperty(UIAtlas uiatlas, bool isOriginal = false)
    {
        AtlasProperty atlasProp = new AtlasProperty();
        Vector4 spd, spb, spp;
        foreach (string sn in uiatlas.GetListOfSprites())
        {
            UISpriteData sd = uiatlas.GetSprite(sn);
            spd = new Vector4(sd.x, sd.y, sd.width, sd.height);
            spb = new Vector4(sd.borderLeft, sd.borderRight, sd.borderBottom, sd.borderTop);
            spp = new Vector4(sd.paddingLeft, sd.paddingRight, sd.paddingBottom, sd.paddingTop);
            SpriteDetail sddd = new SpriteDetail(spd, spb, spp);
            atlasProp.AddSpriteDetail(sddd);
        }
        atlasProp.scale = uiatlas.scale;
        atlasProp.pixelSize = uiatlas.pixelSize;
        atlasProp.isOriginal = isOriginal;
        return atlasProp;
    }
    /// <summary>
    /// 回复纹理大小
    /// </summary>
    /// <param name="texObj"></param>
    public static void RecoverTextureFromMeta(Texture2D texObj)
    {
        string assetpath = AssetDatabase.GetAssetPath(texObj);
        TextureImporter ti = AssetImporter.GetAtPath(assetpath) as TextureImporter;
        if (ti == null)
        {
            return;
        }
        int maxTextSize = 0;
        if (!TextureAlreadyShrinked(assetpath))
        {
            return;
        }
        TextureImporterFormat tf = new TextureImporterFormat();
        bool ret = ti.GetPlatformTextureSettings("WP8", out maxTextSize, out tf);
        if (ret == false)
        {
            maxTextSize = ti.maxTextureSize;
            ti.SetPlatformTextureSettings("WP8", maxTextSize, ti.textureFormat); //若没有设置WP8平台，则用default的设置来设置
            ApplyAssetChange(texObj, null, ti);
            return;
        }
        TextureProperty afterTexPro = db.GetTextureProperty(AssetDatabase.GetAssetPath(texObj), true);
        SaveTextureData(texObj, afterTexPro, afterTexPro);
        ti.SetPlatformTextureSettings("WP8", afterTexPro.MaxSize, tf);
        ti.mipmapEnabled = afterTexPro.MipmapEnabled;
        ApplyAssetChange(texObj, null, ti);

    }
    /// <summary>
    /// 回复UIAtlas
    /// </summary>
    /// <param name="uiatlas"></param>
    public static void RecoverUIAtlasFromMeta(Object uiatlasobj)
    {
        UIAtlas uiatlas = ((GameObject)uiatlasobj).GetComponent<UIAtlas>();
        string assetpath = AssetDatabase.GetAssetPath(uiatlas.gameObject);

        if (null == uiatlas.spriteMaterial || null == uiatlas.spriteList)
        {
            return;
        }
        //先把纹理都恢复了
        Object[] dependObjs = new Object[] { uiatlas.spriteMaterial.mainTexture };//获取纹理
        List<Texture2D> textureList = new List<Texture2D>();
        for (int i = 0; i < dependObjs.Length; i++)
        {
            if (dependObjs[i] is Texture2D)
            {
                textureList.Add(dependObjs[i] as Texture2D);
            }
        }

        for (int i = textureList.Count - 1; i >= 0; --i)
        {
            try
            {
                RecoverTextureFromMeta(textureList[i]);
            }
            catch (System.Exception e)
            {
                Debug.Log(e.ToString() + " " + textureList[i].name);
            }
        }

        if (!AtlasAlreadyShrinked(assetpath))
        {//并未缩减过，则不对它进行操作
            return;
        }
        AtlasProperty afterAtlasPro = db.GetAtlasProperty(AssetDatabase.GetAssetPath(uiatlas.gameObject), true);
        uiatlas = ((GameObject)uiatlasobj).GetComponent<UIAtlas>();
        BetterList<string> sl = uiatlas.GetListOfSprites();
        if (sl == null)
        {
            return;
        }
        uiatlas.scale = afterAtlasPro.scale;
        uiatlas.pixelSize = afterAtlasPro.pixelSize;
        for (int i = 0; i < afterAtlasPro.SpriteDetails.Count; i++)
        {
            UISpriteData sd = uiatlas.GetSprite(sl[i]);
            SpriteDetail spd = afterAtlasPro.SpriteDetails[i];

            sd.x = (int)spd.Demension.x;
            sd.y = (int)spd.Demension.y;
            sd.width = (int)spd.Demension.z;
            sd.height = (int)spd.Demension.w;

            sd.borderLeft = (int)spd.Border.x;
            sd.borderRight = (int)spd.Border.y;
            sd.borderBottom = (int)spd.Border.z;
            sd.borderTop = (int)spd.Border.w;

            sd.paddingLeft = (int)spd.Padding.x;
            sd.paddingRight = (int)spd.Padding.y;
            sd.paddingBottom = (int)spd.Padding.z;
            sd.paddingTop = (int)spd.Padding.w;
        }
        uiatlas.MarkAsDirty();
        AtlasProperty currentAtlas = GetAtlasProperty(uiatlas, true);
        SaveAtlasData(uiatlas, afterAtlasPro, currentAtlas);
    }

    /// <summary>
    /// 更新资源
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="userdata">importer的userdata</param>
    /// <param name="ai">资源的importer</param>
    public static void ApplyAssetChange(Object obj, string userdata, AssetImporter ai = null)
    {
        string assetPath = AssetDatabase.GetAssetPath(obj);
        if (ai == null)
        {
            ai = AssetImporter.GetAtPath(assetPath);
        }
        if (userdata != null)
        {
            ai.userData = userdata;
        }
        AssetDatabase.ImportAsset(assetPath, ImportAssetOptions.ForceUpdate);
    }
    #endregion


    /// <summary>
    /// 搜集项目中的atlas以及贴图资源显示在文件列表中
    /// </summary>
    public static void CollectAtlas()
    {
        string baseDir = Application.dataPath.Substring(0, Application.dataPath.IndexOf("Assets")) + "Assets/MLDJ";
        GameObject[] prefabs = BobShrinker.GetPrefabListUsingFileSys(baseDir);
        List<GameObject> prefabsList = new List<GameObject>(prefabs);
        GameObject[] atlaslist = BobShrinker.GetUIAtlasListFromPrefabList(prefabs);
        for (int i = 0; i < atlaslist.Length; i++)
        {
            BobUtils.DisplayProgressBar(i, atlaslist.Length, "搜集UIAtlas", atlaslist[i].name);
            string atlaspath = AssetDatabase.GetAssetPath(atlaslist[i]);
            if (!BobShrinker.db.ContainsPath(atlaspath))
            {
                AtlasProperty originalAtlasProp = BobShrinker.GetAtlasProperty(atlaslist[i].GetComponent<UIAtlas>(), true);
                BobShrinker.db.SaveAtlasData(atlaspath, originalAtlasProp, originalAtlasProp);
            }
            prefabsList.Remove(atlaslist[i].gameObject);
        }

        BobUtils.ClearProgressBar();
        Object[] dependencies = EditorUtility.CollectDependencies(prefabsList.ToArray());
        for (int i = 0; i < dependencies.Length; i++)
        {
            if (dependencies[i] is Texture2D)
            {
                BobUtils.DisplayProgressBar(i, dependencies.Length, "搜集Textures", dependencies[i].name);
                string texturePath = AssetDatabase.GetAssetPath(dependencies[i]);
                if (!BobShrinker.db.ContainsPath(texturePath))
                {
                    TextureImporter ti = TextureImporter.GetAtPath(texturePath) as TextureImporter;
                    if (ti == null)
                    {
                        Debug.LogError(texturePath);
                        continue;
                    }
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
                    BobShrinker.db.SaveTextureData(texturePath, originalTextureProp, originalTextureProp);
                }
            }
        }
        BobUtils.ClearProgressBar();

    }
}