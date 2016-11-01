#region
/*************************************************************************************
   * filename:          BaseResCached
   * date:              5/19/2015 11:42:36 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using GameRes;
using GCGame;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    /// <summary>
    /// 最后需要放到 EffectCached 类中
    /// </summary>
    public struct SCachedBundleData
    {
        public int RefCount;
        public GameObject CachedGo;
        public float LastAccessTime;
    }
    public abstract class BaseResCached
    {
        #region 变量

        protected EResourceType _cachedResType;

        protected Transform _cachedParent;

        protected string _cachedParentName = "'";

        /// <summary>
        /// 缓存的资源列表
        /// </summary>
        protected Dictionary<string, SCachedBundleData> _cachedBundleDic;


        protected string[] _needToRemoveArray;
        protected int _curIndex = 0;
        protected bool _needToUnloadUnusedAssetNextFrame = false;

        /// <summary>
        /// 每一帧 最多清理的缓存数量
        /// </summary>
        protected int _maxClearCountPreFrame = 5;
        /// <summary>
        /// 索引数为0且无人访问MaxClearTime 时间后 会进行缓存的清理
        /// </summary>
        protected float _maxClearTime = 5;

        /// <summary>
        /// 心跳间隔时间
        /// </summary>
        protected float _tickTime = 1;

        protected float _lastTickTime = 0;

        #endregion

        #region 属性


        public Dictionary<string, SCachedBundleData> CachedData
        {
            get { return _cachedBundleDic; }
        }

        protected int MaxClearCountPreFrame
        {
            get { return _maxClearCountPreFrame; }
        }

        protected float MaxClearTime
        {
            get { return _maxClearTime; }
        }

        /// <summary>
        /// 检查是否能执行心跳
        /// </summary>
        /// <param name="curTime"></param>
        /// <returns></returns>
        public bool CheckCanDoTick
        {
            get
            {
                return Time.realtimeSinceStartup - _lastTickTime > _tickTime;
            }
        }

        #endregion

        #region 方法



        protected abstract void InitResCachedData();
        public void Init(GameObject parent)
        {
            if (parent == null)
            {
                LogModule.ErrorLog("{0}.Init called but parameter parent is null!",GetType());
                return;
            }
            InitResCachedData();
            _lastTickTime = Time.realtimeSinceStartup;
            _cachedParent = new GameObject(_cachedParentName).transform;
            Utils.SetParent(_cachedParent.transform, parent.transform);
            _cachedBundleDic = new Dictionary<string, SCachedBundleData>();
            _needToRemoveArray = new string[MaxClearCountPreFrame];
            ClearArray();
        }

        public Object CachedAsset(AssetLoader loader)
        {
            if (_cachedParent == null)
            {
                LogModule.ErrorLog("BaseResCached.CachedAsset called but parameter _cachedParent is null!");
                return null;
            }
            if (loader == null || loader.AssetBundle == null || loader.AssetBundle.mainAsset == null)
            {
                LogModule.ErrorLog("BaseResCached.CachedAsset called but parameter loader is null || loader.AssetBundle == null || loader.AssetBundle.mainAsset == null!");
                return null;
            }
            if (_cachedBundleDic.ContainsKey(loader.Path))
            {
                LogModule.ErrorLog("BaseResCached.CachedAsset called but {0} duplicated!", loader.Path);
                return null;
            }
            if (loader.ResType != _cachedResType)
            {
                LogModule.ErrorLog("BaseResCached.CachedAsset called but loader.ResType is {0}! cached type is {1}.", loader.ResType,_cachedResType);
                return null;
            }
            GameObject go;
            bool isEditor = Application.isEditor;
            //方便编辑器下查看 缓存文件个数
            if (isEditor)
            {
                go = Object.Instantiate(loader.AssetBundle.mainAsset) as GameObject;
            }
            else
            {
                go = loader.AssetBundle.mainAsset as GameObject;
            }

            if (go == null)
            {
                LogModule.ErrorLog("GameObject.Instantiate(loader.AssetBundle.mainAsset) as GameObject is null! path is {0}", loader.Path);
                return null;
            }
            Utils.SetParent(go.transform, _cachedParent);
            
            if (isEditor)
            {
                Utils.SetActive(go, false);
            }
            SCachedBundleData data;
            data.CachedGo = go;
            data.RefCount = 0;
            data.LastAccessTime = Time.realtimeSinceStartup;
            _cachedBundleDic.Add(loader.Path, data);
            return go;
        }

        /// <summary>
        /// 获取缓存对象
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        public Object GetCached(string url)
        {
            if (string.IsNullOrEmpty(url))
            {
                LogModule.ErrorLog("BaseResCached.GetCached called but parameter url is nullorempty!");
                return null;
            }
            if (!_cachedBundleDic.ContainsKey(url))
            {
                return null;
            }
            return _cachedBundleDic[url].CachedGo;
        }

        public bool Update()
        {
            float curTime = Time.realtimeSinceStartup;
            var enumerator = _cachedBundleDic.GetEnumerator();
            while (enumerator.MoveNext())
            {
                if (_curIndex >= MaxClearCountPreFrame)
                {
                    break;
                }
                SCachedBundleData data = enumerator.Current.Value;
                if (data.RefCount <= 0 && curTime - data.LastAccessTime > MaxClearTime)
                {
                    _needToRemoveArray[_curIndex] = enumerator.Current.Key;
                    _curIndex++;
                }
            }
            bool res = _needToUnloadUnusedAssetNextFrame;
            _needToUnloadUnusedAssetNextFrame = ClearCurFrameCache();
            _lastTickTime = Time.realtimeSinceStartup;
            return res;
        }

        /// <summary>
        /// 增加引用
        /// </summary>
        /// <param name="url"></param>
        public void AddRef(string url)
        {
            if (string.IsNullOrEmpty(url))
            {
                LogModule.ErrorLog("BaseResCached.AddRef called but url is IsNullOrEmpty!");
                return;
            }
            if (!_cachedBundleDic.ContainsKey(url))
            {
                LogModule.ErrorLog("BaseResCached.AddRef called but url {0} is not in cached!!", url);
                return;
            }
            SCachedBundleData data = _cachedBundleDic[url];
            data.RefCount++;
            data.LastAccessTime = Time.realtimeSinceStartup;
            _cachedBundleDic[url] = data;
        }

        public void ReduceRef(string url)
        {
            if (string.IsNullOrEmpty(url))
            {
                LogModule.ErrorLog("BaseResCached.ReduceRef called but url is IsNullOrEmpty!");
                return;
            }
            if (!_cachedBundleDic.ContainsKey(url))
            {
                LogModule.ErrorLog("BaseResCached.ReduceRef called but url {0} is not in cached!!", url);
                return;
            }
            SCachedBundleData data = _cachedBundleDic[url];
            data.RefCount--;
            _cachedBundleDic[url] = data;
        }

        public void ClearAll()
        {
            var enumerator = _cachedBundleDic.GetEnumerator();
            while (enumerator.MoveNext())
            {
                var data = enumerator.Current.Value;
                if (data.CachedGo != null)
                {
                    Object.Destroy(data.CachedGo);
                }
            }
            _cachedBundleDic.Clear();
        }

        #region private

        protected void ClearArray()
        {
            _curIndex = 0;
            for (int i = 0; i < MaxClearCountPreFrame; i++)
            {
                _needToRemoveArray[i] = null;
            }
        }
        /// <summary>
        /// 返回值 为当前帧 是否有进行缓存清理的行为
        /// </summary>
        /// <returns></returns>
        protected bool ClearCurFrameCache()
        {
            if (_curIndex == 0)
            {
                return false;
            }
            for (int i = 0; i < MaxClearCountPreFrame; i++)
            {
                if (i >= _curIndex)
                {
                    break;
                }
                ClearCache(_needToRemoveArray[i]);
            }
            ClearArray();
            return true;
        }

        protected void ClearCache(string url)
        {
            if (string.IsNullOrEmpty(url))
            {
                return;
            }
            if (!_cachedBundleDic.ContainsKey(url))
            {
                return;
            }
            var data = _cachedBundleDic[url];
            if (data.CachedGo != null)
            {
                Object.Destroy(data.CachedGo);
            }
            _cachedBundleDic.Remove(url);
        }



        #endregion


        #endregion
    }

}