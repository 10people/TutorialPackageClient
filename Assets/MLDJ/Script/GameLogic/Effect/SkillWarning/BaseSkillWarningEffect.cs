#region
/*************************************************************************************
   * filename:          BaseSkillWarningEffect
   * date:              4/22/2015 7:57:48 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using Games.SkillModle;
using Module.Log;
using UnityEngine;


public struct SkillWarningEffectStruct
{
    public SKILLRANGEEFFECTTYPE WarnIngShapeType;
    /// <summary>
    /// 长 或者半径
    /// </summary>
    public float RangeEffectSize01;
    /// <summary>
    /// 宽
    /// </summary>
    public float RangeEffectSize02;
    /// <summary>
    /// 效果填充时间秒
    /// </summary>
    public float ShowWarningTime;
}

public abstract class BaseSkillWarningEffect :MonoBehaviour
{
    #region 变量

    protected float m_startFillTime;

    /// <summary>
    /// 填充时间
    /// </summary>
    protected float m_duringTime;

    protected Transform m_cachedTrans;
    protected Material m_cachedMat;

    /// <summary>
    /// 是否走update
    /// </summary>
    protected bool m_run = false;

    /// <summary>
    /// 材质 填充字段 float 
    /// </summary>
    protected string MatFillPropertyName = "_CurFill";
    /// <summary>
    /// 材质 外圈颜色 vec4
    /// </summary>
    protected string MatColorOutPropertyName = "_ColorOut";
    /// <summary>
    /// 材质 内圈颜色 vec4
    /// </summary>
    protected string MatColorInPropertyName = "_ColorIn";

    protected const float HeightOffset = 0.2f;

    #endregion

    #region 属性

    #endregion

    #region 方法

    public virtual void InitComponent()
    {
        m_cachedTrans = transform;
        Renderer render = GetComponent<Renderer>();
        if (render != null)
        {
            m_cachedMat = render.material;
        }
        else
        {
            LogModule.ErrorLog("SkillWarningEffect.Awake called but Projector is null");
        }
    }

    protected virtual void Update()
    {
        if (!m_run)
        {
            return;
        }
        float process = (Time.realtimeSinceStartup - m_startFillTime)/m_duringTime;
        if (process >= 1)
        {
            SetFillValue(1);
            EndFill();
        }
        else
        {
            SetFillValue(process);
        }
    }

    public virtual void StartFill(SkillWarningEffectStruct data)
    {
        if (m_cachedTrans == null)
        {
            return;
        }
        m_startFillTime = Time.realtimeSinceStartup;
        m_duringTime = data.ShowWarningTime;
        //错误数据判断
        if (m_duringTime <= 0)
        {
            m_duringTime = 1;
        }
        m_cachedTrans.localPosition = Vector3.up * HeightOffset;
        InitEffect(data.RangeEffectSize01, data.RangeEffectSize02);
        m_run = true;
    }

    public virtual void EndFill()
    {
        m_run = false;
        DestroySelfData();
        ResourceManager.DestroyResource(this.gameObject);
    }

    protected abstract void ResetFill();

    protected abstract void SetFillValue(float value);

    protected abstract void InitEffect(float rangeSize1, float rangeSize2);

    protected abstract void DestroySelfData();

    #endregion
}
