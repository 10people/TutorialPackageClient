#region
/*************************************************************************************
   * filename:          ResourcesManager
   * date:              5/14/2015 3:28:23 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System;
using Games.GlobeDefine;
using Games.LogicObj;
using Module.Log;
using UnityEngine;
using Object = UnityEngine.Object;


namespace GameRes
{

    public struct LoadCompleteCallBackParameter
    {
        public object Parameter1;
        public object Parameter2;
        public object Parameter3;

        public static LoadCompleteCallBackParameter Default
        {
            get
            {
                LoadCompleteCallBackParameter data;
                data.Parameter1 = null;
                data.Parameter2 = null;
                data.Parameter3 = null;
                return data;
            }
        }
    }

    public struct LoadedObjData
    {
        public string Url;
        public Object LoadedObj;
    }

    public delegate void LoadFinishCallback(LoadedObjData loadedObject, LoadCompleteCallBackParameter parameter);
    public class ResourcesManager:MonoBase
    {
        #region 变量

        private static ResourcesManager _instance;
        private AssetManager _assetManager;
        private PathManager _pathManager;
        private BaseResCached _effectCached;
        private BaseResCached _modelCached;

        private LoadingListener _loadingListener;
        private float _process;
        private Action<float> _processAction;
        private Action _successAction;
        private EState _state;

        private bool _enable = false;

        #endregion

        #region 属性

        public static ResourcesManager Instance
        {
            get { return _instance ?? (_instance = new ResourcesManager()); }
        }

        public AssetManager AssetManager
        {
            get { return _assetManager; }
        }

        public BaseResCached EffectCachedData
        {
            get { return _effectCached; }
        }

        #endregion

        #region  private

        private void UpdateCachedData()
        {
            bool hasUnloadedEffect = false;
            bool hasUnloadedModel = false;
            if (_effectCached.CheckCanDoTick)
            {
                hasUnloadedEffect = _effectCached.Update();
            }
            if (_modelCached.CheckCanDoTick)
            {
                hasUnloadedModel = _modelCached.Update();
            }
            if (hasUnloadedEffect || hasUnloadedModel)
            {
                LogModule.DebugLog("UnloadUnusedAssets called!!");
                Resources.UnloadUnusedAssets();
            }
        }

        #endregion

        #region 方法
        public override bool Init()
        {
            _assetManager = new AssetManager();
            _pathManager = new PathManager();
            _effectCached = new EffectCached();
            _effectCached.Init(GameManager.gameManager.gameObject);
            _modelCached = new ModelCached();
            _modelCached.Init(GameManager.gameManager.gameObject);

            _loadingListener = new LoadingListener();
            _state = EState.Processing;
            _process = 0;
            _enable = true;
            return false;
        }

        public override void Update()
        {
            if (!_enable)
            {
                return;
            }
            _assetManager.Update();
            UpdateCachedData();
            if (_state == EState.Processing)
            {
                return;
            }
            if (_processAction != null)
            {
                _processAction(_process);
            }
            if (_loadingListener.IsCompleted())
            {
                _process = 0;
                _loadingListener.ClearSources();
                _state = EState.Processing;
                if (_successAction != null)
                {
                    _successAction();
                }
            }
            else
            {
                _process = _loadingListener.GetProgress();
            }
        }

        public override void Clear()
        {
            if (_loadingListener != null)
            {
                _loadingListener.ClearSources();
                _loadingListener = null;
            }
        }

        public bool Begin(Action successAction = null, Action<float> processAction = null)
        {
            if (!_loadingListener.IsCompleted())
            {
                LogModule.ErrorLog("last loadingListener is not completed!");
                return false;
            }
            _loadingListener.BeginSources();
            _successAction = successAction;
            _processAction = processAction;
            _state = EState.Loading;
            return true;
        }

        public void End()
        {
            _loadingListener.EndSources();
        }

        /// <summary>
        /// 加载资源 在begin  end 之间写 会受到监听 替换之前的 携程 流式顺序加载 
        /// </summary>
        /// <param name="id"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public AssetLoader LoadFromCacheOrDownload(string path, EResourceType type)
        {
            if (string.IsNullOrEmpty(path))
            {
                return null;
            }
            //return _assetManager.LoadFromCacheOrDownload(type, _pathManager.GetPath(id, type));
            return _assetManager.LoadFromCacheOrDownload(type, path);
        }
        /// <summary>
        /// 加载完成有回调
        /// </summary>
        /// <param name="id"></param>
        /// <param name="type"></param>
        /// <param name="condition"></param>
        /// <param name="loadComplete"></param>
        /// <param name="loadFailed"></param>
        /// <returns></returns>
        public void Load(int id, EResourceType type, LoadCompleteCallBackParameter parameter, LoadFinishCallback loadComplete = null, Func<bool> condition = null, Action<string> loadFailed = null)
        {
            string url = _pathManager.GetPath(id, type);

            if (condition == null)
            {
                condition = () => true;
            }
            if (string.IsNullOrEmpty(url))
            {
                LogModule.ErrorLog("Retrive Failed Because url is null or empty : {0}  And ResourceType: {1}", url, type);
                if (loadFailed != null)
                {
                    if (condition())
                    {
                        loadFailed("Load Failed");
                    }
                }
                return;
            }
            Object obj = GetCached(url, type);
            if (obj != null)
            {
                if (loadComplete !=null && condition())
                {
                    LoadedObjData callBackData;
                    callBackData.Url = url;
                    callBackData.LoadedObj = obj;
                    loadComplete(callBackData, parameter);
                }
                return;
            }

            //var loader = _assetManager.Retrieve(type, _pathManager.GetPath(id, type)) ?? LoadFromCacheOrDownload(id, type);
            var loader = _assetManager.Retrieve(type, url) ?? LoadFromCacheOrDownload(url, type);
            if (loader.IsWaiting() || loader.IsLoading())
            {
                if (loadComplete != null)
                {
                    loader.EventLoadingComplete += (e) =>
                    {
                        if (condition())
                        {
                            LoadedObjData callBackData;
                            callBackData.Url = url;
                            callBackData.LoadedObj = e.AssetBundle.mainAsset;
                            loadComplete(callBackData, parameter);
                        }
                        else
                        {
                            LogModule.WarningLog("Cancel Callback cause Condition is false: " + e.Path);
                        }
                    };
                }
                if (loadFailed != null)
                {
                    loader.EventLoadingFailed += (e) =>
                    {
                        if (condition())
                        {
                            loadFailed("Load Failed");
                        }
                    };
                }
            }
            else if (loader.IsLoaded())
            {
                if (loadComplete != null)
                {
                    if (condition())
                    {
                        LoadedObjData callBackData;
                        callBackData.Url = url;
                        callBackData.LoadedObj = loader.AssetBundle.mainAsset;
                        loadComplete(callBackData, parameter);
                    }
                }
                if (loadFailed != null)
                {
                    if (condition())
                    {
                        loader.EventLoadingFailed += e => loadFailed(null);
                    }
                }
            }
            return;
        }

        public void UnLoad(string url, EResourceType type, bool unloadAllLoadedObjects)
        {
            //if (id == 0)
            if (string.IsNullOrEmpty(url))
            {
                return;
            }
            //string url = _pathManager.GetPath(id, type);
            if (string.IsNullOrEmpty(url))
            {
                LogModule.ErrorLog("UnLoad Failed Because url is null or empty");
                return;
            }
            _assetManager.Unload(url, unloadAllLoadedObjects);
        }

        /// <summary>
        /// 清理所有资源
        /// </summary>
        /// <returns></returns>
        public AsyncOperation UnLoadAll()
        {
            if (_effectCached != null)
            {
                _effectCached.ClearAll();
            }
            if (_modelCached != null)
            {
                _modelCached.ClearAll();
            }
            return _assetManager.UnloadAllAssets();
        }

        public Object CachedRes(AssetLoader loader)
        {
            if (loader == null)
            {
                return null;
            }
            switch (loader.ResType)
            {
                case EResourceType.Effect:
                {
                    return _effectCached.CachedAsset(loader); 
                }
                case EResourceType.CharacterModel:
                {
                    return _modelCached.CachedAsset(loader); 
                }
            }
            return null;
        }

        public Object GetCached(string url,EResourceType type)
        {
            if (string.IsNullOrEmpty(url))
            {
                return null;
            }
            switch (type)
            {
                case EResourceType.Effect:
                {
                    return _effectCached.GetCached(url);
                }
                case EResourceType.CharacterModel:
                {
                    return _modelCached.GetCached(url);
                }
            }
            return null;
        }

        public void AddCachedRef(string url, EResourceType resType, Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE objType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ)
        {
            if (string.IsNullOrEmpty(url))
            {
                return;
            }
            switch (resType)
            {
                case EResourceType.Effect:
                {
                    _effectCached.AddRef(url);
                    break;
                }
                case EResourceType.CharacterModel:
                {
                    if (objType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC ||
                        objType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                    {
                        _modelCached.AddRef(url);
                    }
                    break;
                }
            }
        }

        public void ReduceCachedRef(string url, EResourceType resType,Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE objType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ)
        {
            if (string.IsNullOrEmpty(url))
            {
                return;
            }
            switch (resType)
            {
                case EResourceType.Effect:
                    {
                        _effectCached.ReduceRef(url);
                        break;
                    }
                case EResourceType.CharacterModel:
                    {
                        if (objType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC ||
                            objType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                        {
                            _modelCached.ReduceRef(url);
                        }
                        break;
                    }
            }
        }

        #endregion

        public enum EState
        {
            Loading,
            Processing,
        }
    }

}
