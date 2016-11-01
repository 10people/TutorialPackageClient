#region
/*************************************************************************************
   * filename:          EffectCached
   * date:              5/19/2015 10:26:36 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

namespace GameRes
{

    public class EffectCached:BaseResCached
    {
        #region 变量

        private const int EffectMaxClearCountPreFrame = 5;

        private const float EffectMaxClearTime = 5;

        #endregion

        #region 属性


        #endregion

        #region 方法

        protected override void InitResCachedData()
        {
            _cachedResType = EResourceType.Effect;
            _maxClearCountPreFrame = EffectMaxClearCountPreFrame;
            _maxClearTime = EffectMaxClearTime;
            _cachedParentName = "EffectCached";
            _tickTime = 0.5f;
        }

        #endregion
    }
}
