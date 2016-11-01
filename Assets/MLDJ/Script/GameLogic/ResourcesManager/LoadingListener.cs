#region
/*************************************************************************************
* filename:          LoadingListener
* date:              5/14/2015 3:38:49 PM
* author:            ake

* 修改时间:
* 修 改 人:
* 
************************************************************************************/
#endregion

using System;
using System.Collections.Generic;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    [Serializable]
    public class LoadingListener
    {
        #region 常量与字段

        [SerializeField]
        private List<AssetLoader> _listeningAssetBundles;

        [SerializeField] private int _totalSize = 0;

        #endregion

        #region 属性

        #endregion

        #region 方法

        public LoadingListener()
        {
            _listeningAssetBundles = new List<AssetLoader>();
        }

        public void BeginSources()
        {
            ClearSources();
            ResourcesManager.Instance.AssetManager.LoadingStarted += HandleAssetBundleLoadingStarted;
        }

        public void EndSources()
        {
            var count = _listeningAssetBundles.Count;
            for (int i = 0; i < count; i++)
            {
                var loader = _listeningAssetBundles[i];
                _totalSize += loader.GetAssetSize();
            }
            ResourcesManager.Instance.AssetManager.LoadingStarted -= HandleAssetBundleLoadingStarted;
        }

        public void ClearSources()
        {
            _totalSize = 0;
            _listeningAssetBundles.Clear();
        }

        public float GetProgress()
        {
            if (_listeningAssetBundles.Count <= 0)
            {
                return 1f;
            }
            if (_totalSize == 0)
            {
                LogModule.WarningLog("totalSize = 0,_listeningAssetBundles count:{0}", _listeningAssetBundles.Count);
                return 1f;
            }
            float loadedSize = 0;
            for (int i = 0; i < _listeningAssetBundles.Count; i++)
            {
                AssetLoader loader = _listeningAssetBundles[i];
                loadedSize += loader.GetLoadingProgress() * loader.GetAssetSize();
            }
            return (loadedSize / _totalSize);
        }

        protected void HandleAssetBundleLoadingStarted(AssetLoader loader)
        {
            if (!_listeningAssetBundles.Contains(loader))
            {
                _listeningAssetBundles.Add(loader);
            }
        }

        public bool IsCompleted()
        {
            var count = _listeningAssetBundles.Count;
            for (int i = 0; i < count; i++)
            {
                var loader = _listeningAssetBundles[i];
                if (!loader.IsCompleted())
                {
                    return false;
                }
            }
            return true;
        }

        public bool IsLoadFailed()
        {
            var count = _listeningAssetBundles.Count;
            for (int i = 0; i < count; i++)
            {
                var loader = _listeningAssetBundles[i];
                if (loader.IsLoadFailed())
                {
                    return true;
                }
            }
            return true;
        }

        #endregion
    }

}