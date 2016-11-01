#region
/*************************************************************************************
   * filename:          RectSkillWarningEffect
   * date:              4/23/2015 10:09:59 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using Games.GlobeDefine;
using Module.Log;
using UnityEngine;

public class RectSkillWarningEffect : BaseSkillWarningEffect
{
    #region 变量


    protected static Vector3 ProjectorEulerAngles = new Vector3(90,270,0);

    #endregion

    #region 属性

    #endregion

    #region 方法

    protected override void ResetFill()
    {
        if (m_cachedMat != null)
        {
            m_cachedMat.SetFloat(MatFillPropertyName,0);
        }
    }

    protected override void SetFillValue(float value)
    {
        if (m_cachedMat != null)
        {
            m_cachedMat.SetFloat(MatFillPropertyName, value);
        }
    }

    protected override void InitEffect(float rangeSize1, float rangeSize2)
    {
        if (m_cachedTrans == null || m_cachedMat == null)
        {
            LogModule.ErrorLog("RectSkillWarningEffect.InitEffect called but m_cachedProjector is null!! || m_cachedTrans is null!");
            return;
        }
        //在这里进行颜色的填充 大小的设置
        float length = Mathf.Max(rangeSize1, 1);
        float width = Mathf.Max(rangeSize2, 1);
        m_cachedTrans.localEulerAngles = ProjectorEulerAngles;
        Vector3 scaleSize = Vector3.one;
        scaleSize.x = length;
        scaleSize.y = width;
        m_cachedTrans.localScale = scaleSize;
        m_cachedTrans.localPosition += Vector3.forward * (length/2);
    }

    protected override void DestroySelfData()
    {
        //Dictionary<>
    }

    #endregion


}