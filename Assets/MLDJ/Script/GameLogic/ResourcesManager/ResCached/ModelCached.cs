#region
/*************************************************************************************
   * filename:          ModelCached
   * date:              5/20/2015 2:20:32 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

namespace GameRes
{
    public class ModelCached:BaseResCached
    {
        #region 变量

        private const int ModelMaxClearCountPreFrame = 2;

        private const float ModelMaxClearTime = 10;

        #endregion

        #region 属性

        #endregion

        #region 方法

        protected override void InitResCachedData()
        {
            _cachedResType = EResourceType.CharacterModel;
            _maxClearCountPreFrame = ModelMaxClearCountPreFrame;
            _maxClearTime = ModelMaxClearTime;
            _cachedParentName = "ModelCached";
            _tickTime = 2f;
        }
        #endregion
    }

}