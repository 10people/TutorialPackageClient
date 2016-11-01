#region
/*************************************************************************************
   * filename:          UIEffectBehaviourController
   * date:              4/17/2015 10:54:15 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using GCGame.Table;
using UnityEngine;

public class UIEffectBehaviourController : BaseEffectBehaviourController
{
    #region 变量



    #endregion

    #region 属性

    #endregion

    #region 方法


    public void Play(int effectId, Vector2 pos)
    {
        
    }

    //目前UI特效直接挂在指定gameobj上面
    protected override void LoadEffect(Tab_Effect effectData, PlayEffectDelegate delPlayEffect, object param)
    {
        if (effectData == null)
        {
            return;
        }
        if (m_EffectGameObj != null)
        {
            AddEffect(m_EffectGameObj, effectData, delPlayEffect, param);
        }
    }

    #endregion
}