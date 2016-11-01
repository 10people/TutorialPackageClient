#region
/*************************************************************************************
   * filename:          AssetLoader
   * date:              5/14/2015 10:52:17 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using Module.Log;
using UnityEngine;


namespace GameRes
{
    public delegate void LoadingCompleteDelegate(AssetLoader loader);

    public delegate void LoadingFailedDelegate(AssetLoader loader);
    public abstract class AssetLoader
    {
        #region 变量

        public event LoadingCompleteDelegate EventLoadingComplete;
        public event LoadingFailedDelegate EventLoadingFailed;

        protected AssetBundle _assetBundle;
        protected float _contrastSize;
      
        protected float _startTime;
        [SerializeField]
        protected EResourceType _type;
        [SerializeField]
        protected string _path;
        protected WWW _www;
        /// <summary>
        /// 是否常驻内存
        /// </summary>
        protected bool _isAlwaysInMemory = true;
        /// <summary>
        /// 不常驻内存的资源 通过这个来访问下载好的物体
        /// </summary>
        private Object _cachedGo;

        #endregion

        #region 属性
        public WWW WWW
        {
            get { return _www; }
        }

        public string Path
        {
            get { return _path; }
        }

        public AssetBundle AssetBundle
        {
            get { return _assetBundle; }
        }
        /// <summary>
        /// 是否常驻内存
        /// </summary>
        public bool IsAlwaysInMemory
        {
            get { return _isAlwaysInMemory; }
        }
        /// <summary>
        /// 资源类型
        /// </summary>
        public EResourceType ResType
        {
            get { return _type; }
        }

        protected bool IsNeedToChangeShader
        {
            get { return _type == EResourceType.CharacterModel; }
        }

        #endregion

        #region 方法

        protected void OnLoadingComplete()
        {
            _cachedGo = ResourcesManager.Instance.CachedRes(this);
            if (EventLoadingComplete != null)
            {
                EventLoadingComplete(this);
                EventLoadingComplete = null;
            }
        }
        
        protected virtual void OnLoadingFailed()
        {
            LogModule.ErrorLog(_path + "  LoadingFailed");
            if (EventLoadingFailed != null)
            {
                EventLoadingFailed(this);
                EventLoadingFailed = null;
            }
        }


        public bool IsCompleted()
        {
            if (IsWaiting() || IsLoading())
            {
                return false;
            }
            if (IsLoadFailed())
            {
                return false;
            }
            return true;
        }

        public int GetAssetSize()
        {
            return 1;
        }

        public abstract void Start();
        public abstract float GetLoadingProgress();
        public abstract bool IsWaiting();
        public abstract bool IsLoading();
        public abstract bool IsLoadFailed();
        public abstract bool IsLoaded();
        public abstract void Unload(bool unloadAllLoadedObjects);
        public abstract void Update();

        #endregion
    }

}