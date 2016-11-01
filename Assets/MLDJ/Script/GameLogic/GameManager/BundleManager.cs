/********************************************************************
	created:	2014/08/28
	created:	28:8:2014   15:32
	file base:	BundleManager
	file ext:	cs
	author:		王迪
	
	purpose:	Bundle加载 注意，在Bundle加载时AssetBundle.Unload(false)不能直接使用
 *              需要使用CacheBundle
*********************************************************************/

using GameRes;
using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using Games.GlobeDefine;
using Module.Log;
using System.IO;

public class BundleManager 
{

	public static string LocalLoadPath = Application.streamingAssetsPath;
	public static string FolderLoginUI = "Login";
	public static string FolderMainUI = "Main";
    public static string FolderCommonUI = "Common";

	public static string UIFontName = "font.data";
	public static string UIBaseName =  "baseui.data";
	public static string UISoundName = "uisound.data";
    public static string UILoginName = "login.data";
    public static string UIMainName = "main.data";
    public static string UICommonName = "common.data";

	public static string PathUICommon = "/UI/CommonData";
	public static string PathUIPrefab = "/UI/Prefab";
    public static string PathModelPrefab = "/Model";
    public static string PathEffectPrefab = "/Effect";
    public static string PathSoundPrefab = "/Sounds";
    public static string PathAnimationAsset = "/Animations";
    public static string PathTableData = "/Tables";
    public static string PathSceneData = "/Scene";

    public static string AppOutputPath = Application.streamingAssetsPath;
    public static string DevelopOutputPath = Application.dataPath + "/BundleAssets";
    public static string WP8OutputPath = Application.dataPath + "/BundleAssets_WP8";
    public static string WP8UpdateOutputPath = Application.dataPath + "/../BuildTool_WP8/res";
    public static string WP8LOWQuality = "/LowQuality/StreamingAssets";
    public static string WP8NormalQuality = "/NormalQuality/StreamingAssets";
	public static string UpdateOutputPath = Application.dataPath + "/../Release/ResData/StreamingAssets";

    private static int m_cacheResVersion = 0;
    // 下载更新后存放的路径
    public static string LocalPathRoot
    {
        get
        {
            return Application.persistentDataPath + "/ResData";
        }
    }


	public static string m_loadUrlHead = "file:///";

#if UNITY_WP8
    /// <summary>
    /// 保存下载好的bundle列表
    /// </summary>
    private static Dictionary<string, AssetBundle> m_UIBundleList = new Dictionary<string, AssetBundle>();
    private static Dictionary<string, AssetBundle> m_SoundBundleList = new Dictionary<string, AssetBundle>();
    /// <summary>
    /// 保存正在下载的www列表
    /// </summary>
    private static List<string> m_bobDownloadingWWWs = new List<string>();

    public static void ReleaseUnreferencedSoundBundle(string url)
    {
        if (m_SoundBundleList.ContainsKey(url))
        {
            m_SoundBundleList[url].Unload(true);
            m_SoundBundleList[url] = null;
            m_SoundBundleList.Remove(url);
        }

    }

    public static void ReleaseUnreferencedUIBundle(string url)
    {
        if (m_UIBundleList.ContainsKey(url))
        {
            m_UIBundleList[url].Unload(true);
            m_UIBundleList[url] = null;
            m_UIBundleList.Remove(url);
        }

    }

    public static void ReleaseAllUIBundleList()
    {
        foreach (KeyValuePair<string, AssetBundle> bundle in m_UIBundleList)
        {
            bundle.Value.Unload(true);
        }

        m_UIBundleList.Clear();
    }

#endif


    // 各种常驻内存容器
    private static List<AssetBundle> m_BundleListFont = new List<AssetBundle>();
    private static List<AssetBundle> m_BundleListCommon = new List<AssetBundle>();
    private static List<AssetBundle> m_BundleListLoginUI = new List<AssetBundle>();
    private static List<AssetBundle> m_BundleListMainUI = new List<AssetBundle>();
    private static List<Shader> m_CommonShaderList = new List<Shader>(); 

    private static List<string> m_BundleUILoadingList = new List<string>();


    private static int m_cacheBundleSize = 0;           // 距离上次unload缓存的大小
    private static int m_cacheBundleAddCount = 0;       // 缓存次数
    private const int m_cacheBundleMax = 500 * 1000;    // 缓存大小上限     
    private const int m_cacheBundleAddMax = 10;         // 缓存次数上限

    // 缓存Bundle
    private static void CacheBundle(WWW wwwBundle)
    {
        if (null == wwwBundle)
        {
            return;
        }

        if (wwwBundle.assetBundle != null)
        {
            //m_cacheBundleSize += wwwBundle.bytesDownloaded;
            //m_cacheBundleAddCount++;
            //LogModule.DebugLog("add bundle size" + m_cacheBundleSize + "  name: " + wwwBundle.assetBundle.name);
            wwwBundle.assetBundle.Unload(false);
        }
    }

    // 尝试清除缓存
    // 这个现在已经并没有什么用....
    public static void TryUnloadUnuseBundle()
    {
        if (m_cacheBundleSize > m_cacheBundleMax || m_cacheBundleAddCount > m_cacheBundleAddMax)
        {
            LogModule.DebugLog("Resources.UnloadUnusedAssets");
            //LogModule.ErrorLog("Resources.UnloadUnusedAssets");
            Resources.UnloadUnusedAssets();
            GC.Collect();
            m_cacheBundleSize = 0;
            m_cacheBundleAddCount = 0;
        }
    }

    // 清除缓存
    public static void DoUnloadUnuseBundle()
    {
        LogModule.DebugLog("Resources.UnloadUnusedAssets");
        Resources.UnloadUnusedAssets();
        GC.Collect();
        m_cacheBundleSize = 0;
        m_cacheBundleAddCount = 0;
    }

 #region UI Bundle
    // 存储捆绑打包类型，当主资源请求加载时加载Bundle
    private static Dictionary<string, AssetBundle> m_BundleDicUIGroup = new Dictionary<string, AssetBundle>();
    private static Dictionary<string, AssetBundle> m_BundleDicUIRef = new Dictionary<string, AssetBundle>();

	public delegate void LoadBundleFinish(UIPathData uiData,GameObject retObj, object param1, object param2);

    public static string GetBundleLoadUrl(string subFolder, string localName)
    {
        if (PlatformHelper.IsEnableUpdate())
        {
            string localPath = LocalPathRoot + subFolder + "/" + localName;

            if (File.Exists(localPath))
            {
                return m_loadUrlHead + localPath;
            }
        }

#if UNITY_ANDROID && !UNITY_EDITOR
        return Application.streamingAssetsPath + subFolder + "/" + localName;
#elif UNITY_EDITOR
        return m_loadUrlHead + BundleManager.DevelopOutputPath + subFolder + "/" + localName;
#else
        return BundleManager.m_loadUrlHead + Application.streamingAssetsPath + subFolder + "/" + localName;
#endif
    }

    public static IEnumerator LoadLoginUI()
    {
        if (m_BundleListLoginUI.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UILoginName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListLoginUI.Add(www.assetBundle);
            }
        }
    }

    public static IEnumerator LoadFontUI()
    {
        // 加载字体
        if (m_BundleListFont.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UIFontName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListFont.Add(www.assetBundle);
            }
            yield break;
        }
    }

    public static IEnumerator LoadCommonUI()
    {
        // 加载commonui
        if (m_BundleListCommon.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UICommonName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListCommon.Add(www.assetBundle);
            }
        }
    }

    public static IEnumerator LoadMainUI()
    {
        // 加载mainui
        if (m_BundleListMainUI.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UIMainName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListMainUI.Add(www.assetBundle);
                www.Dispose();
                www = null;
            }
        }
    }

    
    public static IEnumerator LoadUI(UIPathData uiData, LoadBundleFinish delFinish, object param1, object param2)
	{
        if (m_BundleListFont.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UIFontName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListFont.Add(www.assetBundle);
            }
        }

        // 加载通用资源
        if (m_BundleListCommon.Count == 0)
        {
            WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UICommonName), m_cacheResVersion);
            yield return www;
            if (null != www.assetBundle)
            {
                www.assetBundle.LoadAllAssets();
                m_BundleListCommon.Add(www.assetBundle);
            }
        }

        // 加载Login资源
        if (GameManager.gameManager.OnLineState == false)
        {
            if (m_BundleListMainUI.Count == 0)
            {
                WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UIMainName), m_cacheResVersion);
                yield return www;
                if (null != www.assetBundle)
                {
                    www.assetBundle.LoadAllAssets();
                    m_BundleListMainUI.Add(www.assetBundle);
                }
            }
        }
        else
        {
            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
            {
                if (m_BundleListLoginUI.Count == 0)
                {
                    WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UILoginName), m_cacheResVersion);
                    yield return www;
                    if (null != www.assetBundle)
                    {
                        www.assetBundle.LoadAllAssets();
                        m_BundleListLoginUI.Add(www.assetBundle);
                    }
                }
            }
            else
            {
                if (m_BundleListMainUI.Count == 0)
                {
                    WWW www = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUICommon, BundleManager.UIMainName), m_cacheResVersion);
                    yield return www;
                    if (null != www.assetBundle)
                    {
                        www.assetBundle.LoadAllAssets();
                        m_BundleListMainUI.Add(www.assetBundle);
                    }
                }
            }

        }
      
        // 加载当前UI
        GameObject retObj = null;
        WWW wwwUI;
        if (uiData.uiGroupName != null)
        {
             // 分组缓存，不释放
             while (m_BundleUILoadingList.Contains(uiData.uiGroupName))
             {
                 yield return null;
             }
             m_BundleUILoadingList.Add(uiData.uiGroupName);

            if (m_BundleDicUIGroup.ContainsKey(uiData.uiGroupName))
            {
                retObj = m_BundleDicUIGroup[uiData.uiGroupName].LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
            }
            else
            {
                LogModule.DebugLog("load asset :" + uiData.name + "UI gropu:" + uiData.uiGroupName);
                wwwUI = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUIPrefab, uiData.uiGroupName + ".data"), m_cacheResVersion);
                yield return wwwUI;
                if (null != wwwUI.assetBundle)
                {
                    retObj = wwwUI.assetBundle.LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
                    m_BundleDicUIGroup.Add(uiData.uiGroupName, wwwUI.assetBundle);
                }
                else
                {
                    LogModule.ErrorLog("load assetbundle none :" + uiData.uiGroupName);
                }
            }

            m_BundleUILoadingList.Remove(uiData.uiGroupName);
        }
        else if (uiData.uiType == UIPathData.UIType.TYPE_BASE || uiData.uiType == UIPathData.UIType.TYPE_ITEM || uiData.uiType == UIPathData.UIType.TYPE_MESSAGE)
        {
            while (m_BundleUILoadingList.Contains(uiData.path))
            {
                yield return null;
            }
            m_BundleUILoadingList.Add(uiData.path);

#if UNITY_WP8
            string _url = GetBundleLoadUrl(BundleManager.PathUIPrefab, uiData.name + ".data");

            if (m_bobDownloadingWWWs.Contains(_url))
            {
                yield break;
            }
            if (m_UIBundleList.ContainsKey(_url))
            {
                retObj = m_UIBundleList[_url].LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
            }
            else
            {
                wwwUI = new WWW(_url);
                m_bobDownloadingWWWs.Add(_url);
                yield return wwwUI;
                m_bobDownloadingWWWs.Remove(_url);
                if (null != wwwUI.assetBundle)
                {
                    retObj = wwwUI.assetBundle.LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
                    m_UIBundleList.Add(_url, wwwUI.assetBundle);
                }
                else
                {
                    LogModule.ErrorLog("load assetbundle none :" + uiData.uiGroupName);
                }
            }
#else
            wwwUI = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUIPrefab, uiData.name + ".data"), m_cacheResVersion);
            yield return wwwUI;
            if (null != wwwUI.assetBundle)
            {
                retObj = wwwUI.assetBundle.LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
                CacheBundle(wwwUI);
            }
            else
            {
                LogModule.ErrorLog("load assetbundle none :" + uiData.uiGroupName);
            }
            m_BundleUILoadingList.Remove(uiData.path);
#endif
        }
        else
        {
            while (m_BundleUILoadingList.Contains(uiData.path))
            {
                yield return null;
            }
            m_BundleUILoadingList.Add(uiData.path);
#if UNITY_WP8
            string _url = GetBundleLoadUrl(BundleManager.PathUIPrefab, uiData.name + ".data");

            if (m_bobDownloadingWWWs.Contains(_url))
            {
                yield break;
            }
            if (m_UIBundleList.ContainsKey(_url))
            {
                retObj = m_UIBundleList[_url].LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
            }
            else
            {
                wwwUI = new WWW(_url);
                m_bobDownloadingWWWs.Add(_url);
                yield return wwwUI;
                m_bobDownloadingWWWs.Remove(_url);
                if (null != wwwUI.assetBundle)
                {
                    retObj = wwwUI.assetBundle.LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
                    m_UIBundleList.Add(_url, wwwUI.assetBundle);
                }
                else
                {
                    LogModule.ErrorLog("load assetbundle none :" + uiData.uiGroupName);
                }
            }
#else
            if (m_BundleDicUIRef.ContainsKey(uiData.name))
            {
                LogModule.ErrorLog("load ui data fail: already load a same bundle " + uiData.name);
            }
            else
            {
                LogModule.DebugLog("load asset :" + uiData.name + "UI gropu:" + uiData.uiGroupName);
                wwwUI = WWW.LoadFromCacheOrDownload(GetBundleLoadUrl(BundleManager.PathUIPrefab, uiData.name + ".data"), m_cacheResVersion);
                yield return wwwUI;
                if (null != wwwUI.assetBundle)
                {
                    retObj = wwwUI.assetBundle.LoadAsset(uiData.name, typeof(GameObject)) as GameObject;
                    CacheBundle(wwwUI);
                    //m_BundleDicUIRef.Add(uiData.name, wwwUI.assetBundle);
                }
                else
                {
                    LogModule.ErrorLog("load assetbundle none :" + uiData.uiGroupName);
                }
            }
            m_BundleUILoadingList.Remove(uiData.path);
#endif
        }
       
        if (null != delFinish) delFinish(uiData, retObj, param1, param2);
	}

    public static void ReleaseLoginBundle()
    {
        for (int i = 0; i < m_BundleListLoginUI.Count; ++i )
        {
            m_BundleListLoginUI[i].Unload(true);
        }
        m_BundleListLoginUI.Clear();
    }

    public static GameObject GetGroupUIItem(UIPathData data)
    {
        if (null == data.uiGroupName)
        {
            return null;
        }
        if (m_BundleDicUIGroup.ContainsKey(data.uiGroupName))
        {
            return m_BundleDicUIGroup[data.uiGroupName].LoadAsset(data.name) as GameObject;
        }

        return null;
    }

    /// <summary>
    /// 分组的AB包只有在切场景才会清除
    /// </summary>
    public static void ReleaseGroupBundle()
    {
        foreach (KeyValuePair<string, AssetBundle> loginBundle in m_BundleDicUIGroup)
        {
            loginBundle.Value.Unload(true);
        }
        m_BundleDicUIGroup.Clear();
    }

    public static void ReleaseUIGroupBundle()
    {
        m_BundleUILoadingList.Clear();
    }

#if UNITY_WP8
    public static void ReleaseSingleGroupBundle(string name)
    {
        if (m_BundleDicUIGroup.ContainsKey(name))
        {
            m_BundleDicUIGroup[name].Unload(true);
            m_BundleDicUIGroup[name] = null;
            m_BundleDicUIGroup.Remove(name);
        }
    }
#endif

    public static void ReleaseUIRefBundle()
    {
        foreach (KeyValuePair<string, AssetBundle> refBundle in m_BundleDicUIRef)
        {
            refBundle.Value.Unload(true);
        }
        m_BundleDicUIRef.Clear();
    }

    // 当UI销毁时调用，如果未调用可能引起资源泄露
    // 此方法已经并没有卵用
    public static void OnUIDestroy(string uiName)
    {
        if (m_BundleDicUIRef.ContainsKey(uiName))
        {
            LogModule.DebugLog("remove ui " + uiName);
            m_BundleDicUIRef[uiName].Unload(true);
            m_BundleDicUIRef.Remove(uiName);
        }

        TryUnloadUnuseBundle();
    }

#endregion
    // 单体资源缓存，如果有缓存，则不从文件加载
    private static Dictionary<string, GameObject> m_dicSingleBundleCache = new Dictionary<string, GameObject>();
    // 单体资源引用计数，如果超过1，则将此资源放入缓存
    private static Dictionary<string, int> m_dicSingleBundleRef = new Dictionary<string, int>();

#if UNITY_WP8
    private static Dictionary<string, AssetBundle> m_SingleBundleList = new Dictionary<string, AssetBundle>();
    //private static Dictionary<string, int> m_SingleBundleRefDic = new Dictionary<string, int>();

    private static List<string> m_SingleBundleLoadingList = new List<string>();

    //public static void AddSingleBundleRef(string bundlePath)
    //{
    //    if (m_SingleBundleRefDic.ContainsKey(bundlePath))
    //    {
    //        ++m_SingleBundleRefDic[bundlePath];
    //    }
    //    else
    //    {
    //        m_SingleBundleRefDic.Add(bundlePath, 1);
    //    }
    //}

    //public static void RemoveSingleBundleRef(string bundlePath)
    //{
    //    if (m_SingleBundleRefDic.ContainsKey(bundlePath))
    //    {
    //        --m_SingleBundleRefDic[bundlePath];

    //        if (0 == m_SingleBundleRefDic[bundlePath] && m_SingleBundleList.ContainsKey(bundlePath))
    //        {
    //            m_dicSingleBundleCache.Remove(bundlePath);

    //            m_SingleBundleList[bundlePath].Unload(true);
    //            m_SingleBundleList[bundlePath] = null;
    //            m_SingleBundleList.Remove(bundlePath);
    //            m_SingleBundleRefDic.Remove(bundlePath);
    //        }
    //    }

    //}


#endif

    public static void ReleaseSingleBundle()
    {
        m_dicSingleBundleCache.Clear();

#if UNITY_WP8
        foreach (KeyValuePair<string, AssetBundle> refBundle in m_SingleBundleList)
        {
            refBundle.Value.Unload(true);
        }
        m_SingleBundleList.Clear();
#endif
    }

    public static void ChangeShader(Transform obj)
    {
        if (obj.GetComponent<Renderer>() != null && obj.GetComponent<Renderer>().material != null)
        {
            Material sm = obj.GetComponent<Renderer>().material;
            var shaderName = sm.shader.name;
            if (!string.IsNullOrEmpty(shaderName))
            {
                var newShader = Shader.Find(shaderName);
                if (newShader != null)
                {
                    sm.shader = newShader;
                }
                else
                {
                    LogModule.WarningLog("unable to refresh shader: " + shaderName + " in material " + sm.name);
                }
            }
        }

        for (int i = 0; i < obj.childCount; i++)
        {
            ChangeShader(obj.transform.GetChild(i));
        }
    }

    public delegate void LoadSingleFinish(string modelName, GameObject resObj, object param1, object param2, object param3 = null);
    
    private static bool LoadFromCache(string bundlePath, string bundleName, LoadSingleFinish delFinish, object param1, object param2, object param3)
    {
        if (m_dicSingleBundleCache.ContainsKey(bundlePath))
        {
            if (null != delFinish) delFinish(bundleName, m_dicSingleBundleCache[bundlePath], param1, param2, param3);
            return true;
        }

        if (m_dicSingleBundleRef.ContainsKey(bundlePath))
        {
            m_dicSingleBundleRef[bundlePath]++;
        }
        else
        {
            m_dicSingleBundleRef.Add(bundlePath, 1);
        }

        return false;
    }

    private static void ProcessLoad(WWW www, string bundlePath, string bundleName, LoadSingleFinish delFinish, object param1, object param2, object param3)
    {
        GameObject retObj = null;

#if UNITY_WP8
        if (m_dicSingleBundleCache.ContainsKey(bundlePath))
        {
            if (null != delFinish) delFinish(bundleName, m_dicSingleBundleCache[bundlePath], param1, param2, param3);
            return;
        }
#endif
        if (null != www.assetBundle)
        {
            retObj = www.assetBundle.mainAsset as GameObject;
#if UNITY_EDITOR
            ChangeShader(retObj.transform);
#endif

#if UNITY_WP8
            m_SingleBundleList.Add(bundlePath, www.assetBundle);
#else
            CacheBundle(www);
#endif
            if (m_dicSingleBundleRef.ContainsKey(bundlePath) &&
#if UNITY_WP8
                m_dicSingleBundleRef[bundlePath] >= 1
#else
                m_dicSingleBundleRef[bundlePath] > 1
#endif
               )
            {
                m_dicSingleBundleCache.Add(bundlePath, retObj);
                m_dicSingleBundleRef.Remove(bundlePath);
            }
        }
        else
        {
            LogModule.ErrorLog("load single assetbundle none :" + bundleName);
        }


        if (null != delFinish) delFinish(bundleName, retObj, param1, param2, param3);
    }

    // 加载声音，不缓存
    private static void ProcessLoadSound(WWW www, string bundlePath, string bundleName, LoadSoundFinish delFinish, object param1, object param2, object param3)
    {
        AudioClip retObj = null;
        if (null != www.assetBundle)
        {
            retObj = www.assetBundle.mainAsset as AudioClip;
            CacheBundle(www);
        }
        else
        {
            LogModule.ErrorLog("load single assetbundle none :" + bundleName);
        }

        if (null != delFinish) delFinish(bundleName, retObj, param1, param2, param3);
    }

    // 加载动作，不缓存
    private static void ProcessLoadAnimation(WWW www, string bundlePath, string bundleName, LoadAnimationFinish delFinish)
    {
        AnimationClip retObj = null;
        if (null != www.assetBundle)
        {
            retObj = www.assetBundle.mainAsset as AnimationClip;
            CacheBundle(www);
        }
        else
        {
            LogModule.ErrorLog("load single assetbundle none :" + bundleName);
        }

        if (null != delFinish) delFinish(bundleName, retObj);
    }

    public delegate void LoadSoundFinish(string modelName, AudioClip audioClip, object param1, object param2, object param3 = null);
    // 加载声音
    public static IEnumerator LoadSound(string soundPath, LoadSoundFinish delFinish, object param1 = null, object param2 = null, object param3 = null)
    {
        // 表里路径包含了Sounds文件夹名称
        string loadPath = GetBundleLoadUrl("", soundPath + ".data");
#if UNITY_WP8
        AudioClip retObj = null;

        while (m_bobDownloadingWWWs.Contains(loadPath))
        {
            yield return null;
        }
        if (m_SoundBundleList.ContainsKey(loadPath))
        {
            retObj = m_SoundBundleList[loadPath].mainAsset as AudioClip;
        }
        else
        {
            WWW www = new WWW(loadPath);
            m_bobDownloadingWWWs.Add(loadPath);
            yield return www;
            m_bobDownloadingWWWs.Remove(loadPath);
            if (null != www.assetBundle)
            {
                retObj = www.assetBundle.mainAsset as AudioClip;
                m_SoundBundleList.Add(loadPath, www.assetBundle);
            }
            else
            {
                LogModule.ErrorLog("load single assetbundle none :" + soundPath);
            }
        }
        if (null != delFinish) delFinish(soundPath, retObj, param1, param2, param3);
#else
        WWW www = new WWW(loadPath);
        yield return www;
        ProcessLoadSound(www, loadPath, soundPath, delFinish, param1, param2, param3);
#endif

    }

    // 加载场景
    public delegate void LoadAnimationFinish(string animPath, AnimationClip animClip);
    public static IEnumerator LoadAnimation(string animPath, LoadAnimationFinish delFinish)
    {
        string loadPath = GetBundleLoadUrl(BundleManager.PathAnimationAsset, animPath + ".data");
        WWW www = new WWW(loadPath);
        yield return www;
        ProcessLoadAnimation(www, loadPath, animPath, delFinish);
    }

    public delegate void LoadSceneFinish(string sceneName, AssetBundle sceneBundle);
    public static IEnumerator LoadScene(string sceneName, LoadSceneFinish delFinish)
    {
        string loadPath = GetBundleLoadUrl(BundleManager.PathSceneData, sceneName + ".data");
        WWW www = new WWW(loadPath);
        yield return www;
        if (null != www.assetBundle)
        {
            if (null != delFinish) delFinish(sceneName, www.assetBundle);
        }
        else
        {
            if (null != delFinish) delFinish(null, null);
        }


    }

	#region ModelLoadList
	
	class ModelLoadData
	{
        public enum LoadType
        {
            MODEL,
            EFFECT,
        }
        public ModelLoadData()
        {
        }
		public ModelLoadData(LoadType loadType, string modelName, LoadSingleFinish delFinish, object param1, object param2, object param3)
		{
			m_modelName = modelName;
			m_delFinish = delFinish;
			m_param1 = param1;
			m_param2 = param2;
			m_param3 = param3;
            m_loadType = loadType;
		}

        public void ResetData(LoadType loadType, string modelName, LoadSingleFinish delFinish, object param1, object param2, object param3)
		{
			m_modelName = modelName;
			m_delFinish = delFinish;
			m_param1 = param1;
			m_param2 = param2;
			m_param3 = param3;
            m_loadType = loadType;
		}

        public string GetLoadUrl()
        {
            switch (m_loadType)
            {
                case LoadType.MODEL:
                    return GetBundleLoadUrl(BundleManager.PathModelPrefab, m_modelName + ".data");
                case LoadType.EFFECT:
                    return GetBundleLoadUrl(BundleManager.PathEffectPrefab, m_modelName + ".data");
                default:
                    LogModule.ErrorLog("load un define single bundle");
                    return "";
            }
        }
		
		public string m_modelName;
		public LoadSingleFinish m_delFinish;
		public object m_param1;
		public object m_param2;
		public object m_param3;
        public LoadType m_loadType;
	}

    private static Queue<ModelLoadData> m_loadBundleQueue = new Queue<ModelLoadData>();
	
	public static void CleanBundleLoadQueue()
	{
        m_loadBundleQueue.Clear();
	}

    public static void LoadEffectInQueue(int id, LoadFinishCallback delFinish, object param1 = null)
    {
        LoadCompleteCallBackParameter data = new LoadCompleteCallBackParameter();
        data.Parameter1 = param1;
        ResourcesManager.Instance.Load(id, EResourceType.Effect, data,delFinish);
    }

    public static void LoadModelInQueue(int id, EResourceType type, LoadFinishCallback delFinish, object param1, object param2, object param3)
    {
        LoadCompleteCallBackParameter data = new LoadCompleteCallBackParameter();
        data.Parameter1 = param1;
        data.Parameter2 = param2;
        data.Parameter3 = param3;
        ResourcesManager.Instance.Load(id, type, data, delFinish);
    }

	public static void LoadModelInQueue(string modelName, LoadSingleFinish delFinish, object param1, object param2, object param3)
	{
        ModelLoadData curData = new ModelLoadData(ModelLoadData.LoadType.MODEL, modelName, delFinish, param1, param2, param3);
        
        if (m_dicSingleBundleCache.ContainsKey(curData.GetLoadUrl()))
        {
            if (null != delFinish) delFinish(modelName, m_dicSingleBundleCache[curData.GetLoadUrl()], param1, param2, param3);
            return;
        }
        m_loadBundleQueue.Enqueue(curData);

	}

	private static bool m_bLoadModelCommonShader = false;
	public static void BundleQueueLoadTick(MonoBehaviour bundleLoader)
	{
		if (null == bundleLoader)
		{
			return;
		}

		while (m_loadBundleQueue.Count > 0)
		{				
			ModelLoadData curData = m_loadBundleQueue.Dequeue();
			if (null != curData)
			{
				bundleLoader.StartCoroutine(LoadOneBundleFromQueue(curData));
			}
		}

        TryUnloadUnuseBundle();
	}

    public static IEnumerator LoadCommonShader()
    {
        if (!m_bLoadModelCommonShader)
        {

            UnityEngine.Object[] bundleObjs;
            m_bLoadModelCommonShader = true;

            string modelShaderPath = GetBundleLoadUrl(BundleManager.PathModelPrefab, "model_shader_common.data");
            WWW wwwModelShader = new WWW(modelShaderPath);
            yield return wwwModelShader;
            if (null != wwwModelShader.assetBundle)
            {
                bundleObjs = wwwModelShader.assetBundle.LoadAllAssets();
                for (int i = 0; i < bundleObjs.Length; i++)
                {
                    if (bundleObjs[i] is Shader)
                    {
                        m_CommonShaderList.Add(bundleObjs[i] as Shader);
                    }
                }
            }
            else
            {
                LogModule.ErrorLog("can not find model shader");
            }

            string effectShaderPath = GetBundleLoadUrl(BundleManager.PathEffectPrefab, "effect_shader_common.data");
            WWW wwwEffectShader = new WWW(effectShaderPath);
            yield return wwwEffectShader;
            if (null != wwwEffectShader.assetBundle)
            {
                bundleObjs = wwwEffectShader.assetBundle.LoadAllAssets();
                for (int i = 0; i < bundleObjs.Length; i++)
                {
                    if (bundleObjs[i] is Shader)
                    {
                        m_CommonShaderList.Add(bundleObjs[i] as Shader);
                    }
                }
            }
            else
            {
                LogModule.ErrorLog("can not find effect shader");
            }
        }		
    }

    public static IEnumerator LoadCommonShaderEx()
	{
		if (!m_bLoadModelCommonShader) 
		{
			UnityEngine.Object[] bundleObjs;
			m_bLoadModelCommonShader = true;
			
			string modelShaderPath = GetBundleLoadUrl(BundleManager.PathModelPrefab, "model_shader_common.data");
            WWW wwwModelShader = WWW.LoadFromCacheOrDownload(modelShaderPath, m_cacheResVersion);
			yield return wwwModelShader;
			if (null != wwwModelShader.assetBundle)
			{
				bundleObjs = wwwModelShader.assetBundle.LoadAllAssets();
				for (int i = 0; i < bundleObjs.Length; i++)
				{
					if (bundleObjs[i] is Shader)
					{
						m_CommonShaderList.Add(bundleObjs[i] as Shader);
					}
				}
			}
			else
			{
				LogModule.ErrorLog("can not find model shader");
			}
			
			string effectShaderPath = GetBundleLoadUrl(BundleManager.PathEffectPrefab, "effect_shader_common.data");
			WWW wwwEffectShader = WWW.LoadFromCacheOrDownload(effectShaderPath, m_cacheResVersion);
			yield return wwwEffectShader;
			if (null != wwwEffectShader.assetBundle)
			{
				bundleObjs = wwwEffectShader.assetBundle.LoadAllAssets();
				for (int i = 0; i < bundleObjs.Length; i++)
				{
					if (bundleObjs[i] is Shader)
					{
						m_CommonShaderList.Add(bundleObjs[i] as Shader);
					}
				}
			}
			else
			{
				LogModule.ErrorLog("can not find effect shader");
			}
		}		
	}



	private static IEnumerator LoadOneBundleFromQueue(ModelLoadData curData)
	{			
			string bundlePath =curData.GetLoadUrl();
			if(!LoadFromCache(bundlePath, curData.m_modelName, curData.m_delFinish, curData.m_param1, curData.m_param2, curData.m_param3))
			{
#if UNITY_WP8
                while (m_SingleBundleLoadingList.Contains(bundlePath))
                {
                    yield return null;
                }

                if (m_dicSingleBundleCache.ContainsKey(bundlePath))
                {
                    if (null != curData.m_delFinish)
                    {
                        curData.m_delFinish(bundlePath, m_dicSingleBundleCache[bundlePath], curData.m_param1, curData.m_param2, curData.m_param3);
                    }

                    yield break;
                }

                if (!m_SingleBundleLoadingList.Contains(bundlePath))
                {
                    m_SingleBundleLoadingList.Add(bundlePath);

                    WWW www = new WWW(bundlePath);
                    yield return www;
                    ProcessLoad(www, bundlePath, curData.m_modelName, curData.m_delFinish, curData.m_param1, curData.m_param2, curData.m_param3);

                    m_SingleBundleLoadingList.Remove(bundlePath);
                }

#else
                WWW www = new WWW(bundlePath);
                yield return www;
                ProcessLoad(www, bundlePath, curData.m_modelName, curData.m_delFinish, curData.m_param1, curData.m_param2, curData.m_param3);
#endif

			}

	}
	#endregion
}
