#region
/*************************************************************************************
   * filename:          AssetManager
   * date:              5/14/2015 10:48:27 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    public class AssetManager
    {
        public delegate void LoadingHandler(float process, string assetUrl);

        public delegate void LoadingStartedHandler(AssetLoader loader);

        #region 常量与字段

        private const int MaxLoadingCount = 6;
        private Dictionary<string, AssetLoader> _caches;
        [SerializeField]
        private List<AssetLoader> _loadings;
        [SerializeField]
        private List<AssetLoader> _waitings;
        public event LoadingStartedHandler LoadingStarted;
        public event LoadingHandler LoadingEvent;

        #endregion

        #region 属性

        #endregion

        #region 方法

        public AssetManager()
        {
            _caches = new Dictionary<string, AssetLoader>();
            _loadings = new List<AssetLoader>();
            _waitings = new List<AssetLoader>();
        }

        protected void OnLoadingStarted(AssetLoader loader)
        {
            if (LoadingStarted != null)
            {
                LoadingStarted(loader);
            }
        }
        public AssetLoader LoadFromCacheOrDownload(EResourceType type, string path)
        {
            if (string.IsNullOrEmpty(path))
            {
                return null;
            }

            AssetLoader target = null;
            if (!_caches.TryGetValue(path, out target))
            {
                target = new AssetBundleLoader(path, type);
                if (!_waitings.Contains(target))
                {
                    _waitings.Add(target);
                    OnLoadingStarted(target);
                }
                _caches.Add(path, target);
            }
            else
            {
                OnLoadingStarted(target);
            }
            return target;
        }

        public AssetLoader Retrieve(EResourceType type, string path)
        {
            if (string.IsNullOrEmpty(path))
            {
                LogModule.DebugLog("string.IsNullOrEmpty(path)    " + path);
                return null;
            }
            AssetLoader loader = null;
            if (!_caches.TryGetValue(path, out loader))
            {
                //LogModule.DebugLog("loaders.TryGetValue(path, out loader) Failed,path:{0} " + path);
            }
            return loader;
        }

        public void Unload(string path, bool unloadAllLoadedObjects)
        {
            for (int i = _waitings.Count - 1; i >= 0; i--)
            {
                AssetLoader waiting = _waitings[i];
                if (waiting.Path == path)
                {
                    _waitings.RemoveAt(i);
                    break;
                }
            }
            for (int i = _loadings.Count - 1; i >= 0; i--)
            {
                AssetLoader loading = _loadings[i];
                if (loading.Path == path)
                {
                    _loadings.RemoveAt(i);
                    break;
                }
            }
            AssetLoader loader = null;
            if (_caches.TryGetValue(path, out loader))
            {
                loader.Unload(unloadAllLoadedObjects);
                _caches.Remove(path);
            }
        }

        public void Update()
        {
            if (_loadings.Count == 0 && _waitings.Count == 0)
            {
                return;
            }
            while ((_loadings.Count < MaxLoadingCount) && (_waitings.Count > 0))
            {
                AssetLoader loader = _waitings[0];
                _waitings.Remove(loader);
                _loadings.Add(loader);
                loader.Start();
            }
            for (int i = _loadings.Count - 1; i >= 0; i--)
            {
                AssetLoader loading = _loadings[i];
                if (loading.IsLoading())
                {
                    if (LoadingEvent != null && loading.GetLoadingProgress() <= 1f)
                    {
                        LoadingEvent(loading.GetLoadingProgress(), loading.Path);
                    }
                    loading.Update();
                }
                else
                {
                    _loadings.Remove(loading);
                    if (!loading.IsAlwaysInMemory)
                    {
                        Unload(loading.Path, false);
                    }
                }
            }
        }

        public void OnDestroy()
        {
            UnloadAllAssets();
            _waitings.Clear();
            _waitings = null;
            _loadings.Clear();
            _loadings = null;
            _caches.Clear();
            _caches = null;
            Resources.UnloadUnusedAssets();
        }

        public AsyncOperation UnloadAllAssets()
        {
            //ResourcesManager.Instance.UnloadAssets();
            //MapManager.Instance.UnLoad();
            var removeAssets = new List<string>();
            var cachesEnumerator = _caches.GetEnumerator();
            while (cachesEnumerator.MoveNext())
            {
                if (!removeAssets.Contains(cachesEnumerator.Current.Key))
                {
                    removeAssets.Add(cachesEnumerator.Current.Key);
                }
            }
             
            for (int i = 0; i < removeAssets.Count; i++)
            {
                var path = removeAssets[i];
                if (string.IsNullOrEmpty(path))
                {
                    Unload(path,true);
                }
            }
            removeAssets.Clear();

            //while (cachesEnumerator.MoveNext())
            //{
            //    var cache = cachesEnumerator.Current;
            //    EResourceType type = cache.Key;
            //    Dictionary<string, AssetLoader> loaders = cache.Value;
            //    if (!removeAssets.ContainsKey(type))
            //    {
            //        removeAssets.Add(type, new List<string>());
            //    }
            //    List<string> urls = removeAssets[type];
            //    var loadersEnumerator = loaders.GetEnumerator();
            //    while (loadersEnumerator.MoveNext())
            //    {
            //        var loader = loadersEnumerator.Current;
            //        urls.Add(loader.Key);
            //    }
            //}

            //var removeAssetsEnumErator = removeAssets.GetEnumerator();
            //while (removeAssetsEnumErator.MoveNext())
            //{
            //    var removeAsset = removeAssetsEnumErator.Current;
            //    EResourceType type = removeAsset.Key;
            //    List<string> urls = removeAsset.Value;
            //    var urlsEnumerator = urls.GetEnumerator();
            //    while (urlsEnumerator.MoveNext())
            //    {
            //        var path = urlsEnumerator.Current;
            //        Unload(type, path, true);
            //    }
            //}
            _caches.Clear();
            _loadings.Clear();
            _waitings.Clear();
            return Resources.UnloadUnusedAssets();
        }
        #endregion
    }

}