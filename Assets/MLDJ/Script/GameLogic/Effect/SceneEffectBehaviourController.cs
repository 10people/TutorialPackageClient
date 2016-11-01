#region
/*************************************************************************************
   * filename:          SceneEffectBehaviourController
   * date:              4/17/2015 5:34:13 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using GCGame;
using GCGame.Table;
using UnityEngine;

public class SceneEffectBehaviourController : BaseEffectBehaviourController
{
    #region 变量

    #endregion

    #region 属性

    #endregion

    #region 方法

    protected override void LoadEffect(Tab_Effect effectData, PlayEffectDelegate delPlayEffect, object param)
    {
        if (effectData == null)
        {
            return;
        }
        if (m_BaseEffectBindPoint != null)
        {
            AddEffect(m_BaseEffectBindPoint.gameObject, effectData, delPlayEffect, param);
        }
    }

    public override void InitBindPointInfo()
    {
        base.InitBindPointInfo();
        GameObject bindPoint = new GameObject("EffectPoint");
        m_BaseEffectBindPoint = bindPoint.transform;
        Utils.SetParent(m_BaseEffectBindPoint,m_CachedTrans);
    }

    #endregion
}