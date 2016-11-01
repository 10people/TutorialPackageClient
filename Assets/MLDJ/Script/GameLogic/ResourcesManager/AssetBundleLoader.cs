#region
/*************************************************************************************
   * filename:          AssetBundleLoader
   * date:              5/14/2015 11:11:10 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System;
using GameRes;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    [Serializable]
    public class AssetBundleLoader : AssetLoader
    {
        #region 变量

        [SerializeField]
        private ELoadingState _loadingState;

        #endregion

        #region 属性

        #endregion

        #region 方法

        public AssetBundleLoader(string path, EResourceType type)
        {
            _path = path;
            _loadingState = ELoadingState.Waiting;
            _type = type;
            if (type == EResourceType.Effect || EResourceType.CharacterModel == type)
            {
                _isAlwaysInMemory = false;
            }   
        }

        public override void Start()
        {
            string url = _path;
            try
            {
                _startTime = Time.realtimeSinceStartup;
                //_www = WWW.LoadFromCacheOrDownload(url,0);
                _www = new WWW(url);
            }
            catch (Exception e)
            {
                LogModule.ErrorLog(url + e);
                throw;
            }
            _loadingState = ELoadingState.Loading;
        }

        public override bool IsWaiting()
        {
            return _loadingState == ELoadingState.Waiting;
        }
        /// <summary>
        /// 增加一个状态判断 让 bundle解压 的操作 和 函数回调的操作 分成两帧进行 
        /// 加载好 以后 等待下一次调用Update 时  进行回调操作 将WaitToCallback 视作仍在加载
        /// </summary>
        /// <returns></returns>
        public override bool IsLoading()
        {
            return _loadingState == ELoadingState.Loading || _loadingState == ELoadingState.WaitToCallback;
        }

        public override bool IsLoadFailed()
        {
            return _loadingState == ELoadingState.LoadedFailed;
        }

        public override bool IsLoaded()
        {
            return _loadingState == ELoadingState.Loaded;
        }
        /// <summary>
        /// 暂时不可用
        /// </summary>
        /// <returns></returns>
        public override float GetLoadingProgress()
        {
            if (IsLoaded())
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        public override void Unload(bool unloadAllLoadedObjects)
        {
            if (_loadingState == ELoadingState.UnLoaded)
            {
                LogModule.ErrorLog("Unload Failed,has unloaded!");
                return;
            }
            if (_assetBundle != null)
            {
                _assetBundle.Unload(unloadAllLoadedObjects);
            }
            if (_www != null)
            {
                _www.Dispose();
            }
            _www = null;
            _assetBundle = null;
            _loadingState = ELoadingState.UnLoaded;
        }

        public override void Update()
        {
            if (_loadingState == ELoadingState.Loading)
            {
                if (_www == null)
                {
                    _loadingState = ELoadingState.LoadedFailed;
                }
                else if (_www.isDone)
                {
                    if (_www.error != null || _www.assetBundle == null)
                    {
                        _loadingState = ELoadingState.LoadedFailed;
                    }
                    else
                    {
                        _assetBundle = _www.assetBundle;
                        if (_assetBundle == null)
                        {
                            _loadingState = ELoadingState.LoadedFailed;
                        }
                        else
                        {
                            _loadingState = ELoadingState.WaitToCallback;
                        }
                    }
                }
            }
            else if (_loadingState == ELoadingState.WaitToCallback)
            {
                _loadingState = ELoadingState.Loaded;
#if UNITY_EDITOR
                //if (IsNeedToChangeShader)
                {
                    GameObject go = _assetBundle.mainAsset as GameObject;
                    if (go != null)
                    {
                        BundleManager.ChangeShader(go.transform);                                            
                    }
                }
#endif
                OnLoadingComplete();
                if (_www != null)
                {
                    _www.Dispose();
                    _www = null;
                }
            }
            else if (_loadingState == ELoadingState.LoadedFailed)
            {
                OnLoadingFailed();
                if (_www != null)
                {
                    _www.Dispose();
                    _www = null;
                }
            }
        }

        #endregion

        public enum ELoadingState
        {
            Null,
            Waiting,
            Loading,
            WaitToCallback,
            Loaded,
            LoadedFailed,
            UnLoaded
        }
    }

}
