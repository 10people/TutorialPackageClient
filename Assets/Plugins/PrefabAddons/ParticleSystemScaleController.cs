#region
/*************************************************************************************
   * filename:          ParticleSystemScaleController
   * date:              4/17/2015 10:27:45 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System;
using System.Collections.Generic;
using UnityEngine;


[Serializable]
public class ParticleSystemScalerData
{
    [SerializeField]
    public ParticleSystem m_CachedParticle;
    [SerializeField]
    public float m_BaseStartSize;
    /// <summary>
    /// 
    /// </summary>
    public float m_StartSizeEffectIntensity = 0;
    [SerializeField]
    /// <summary>
    /// 
    /// </summary>
    public float m_BaseStartSpeed;

    public float m_StartSpeedEffectIntensity = 0;

    public Vector3 m_BaseLocalPostion;
    public float m_LocalPostionEffectIntensityX = 0;
    public float m_LocalPostionEffectIntensityY = 0;
    public float m_LocalPostionEffectIntensityZ = 0;

}
[ExecuteInEditMode]
public class ParticleSystemScaleController : MonoBehaviour
{
    #region 变量
    [SerializeField]
    /// <summary>
    /// 可控制的特效列表
    /// </summary>
    public List<ParticleSystemScalerData> m_ControllableParticle;

    private float m_curScaleValue = 1;

    public const float ChangeDuringTime = 2;

    private bool _needToChange = false;

    private float _startChangeTime;

   
#if UNITY_EDITOR

    public bool m_InitAllScalerData = false;

    public float TestValue = 1.0f;

#endif

    #endregion

    #region 属性

    #endregion

    #region 方法



    void Update()
    {
#if UNITY_EDITOR
        if (m_InitAllScalerData)
        {
            InitAllScalerData();
            m_InitAllScalerData = false;
        }
        if (Input.GetKeyDown(KeyCode.H))
        {
            SetParticleScaler(TestValue);
        }
#endif
        if (_needToChange)
        {
            float process = (Time.realtimeSinceStartup - _startChangeTime)/ChangeDuringTime;
            if (process >= 1)
            {
                ApplyPosChange(1);
                _needToChange = false;
            }
            else
            {
                ApplyPosChange(process);
            }
        }
    }
#if UNITY_EDITOR
    void InitAllScalerData()
    {
        if (m_ControllableParticle != null)
        {
            for (int i = 0; i < m_ControllableParticle.Count; i++)
            {
                var item = m_ControllableParticle[i];
                if (item == null || item.m_CachedParticle == null)
                {
                    continue;
                }
                item.m_BaseStartSize = item.m_CachedParticle.startSize;
                item.m_BaseStartSpeed = item.m_CachedParticle.startSpeed;
                item.m_BaseLocalPostion = item.m_CachedParticle.transform.localPosition;
            }
        }
    }

#endif

    /// <summary>
    /// 设置特效缩放
    /// </summary>
    public void SetParticleScaler(float value)
    {
        if (Mathf.Abs(m_curScaleValue - value) > 0.01f)
        {
            m_curScaleValue = value;
            ApplyScaleValue();
            _needToChange = true;
            _startChangeTime = Time.realtimeSinceStartup;
        }
    }

    private void ApplyScaleValue()
    {
        if (m_ControllableParticle == null)
        {
            return;
        }
            
        for (int i = 0; i < m_ControllableParticle.Count; i++)
        {
            var item = m_ControllableParticle[i];
            if (item == null || item.m_CachedParticle == null)
            {
                continue;
            }
            {
                item.m_CachedParticle.startSize = item.m_BaseStartSize +
                    ( m_curScaleValue - 1) * item.m_BaseStartSize * item.m_StartSizeEffectIntensity;
            }
            {
                item.m_CachedParticle.startSpeed = item.m_BaseStartSpeed +
                    (m_curScaleValue - 1) * item.m_BaseStartSpeed * item.m_StartSpeedEffectIntensity;
            }

        }
    }

    private void ApplyPosChange(float process)
    {
        if (m_ControllableParticle == null)
        {
            return;
        }
        for (int i = 0; i < m_ControllableParticle.Count; i++)
        {
            var item = m_ControllableParticle[i];
            if (item == null || item.m_CachedParticle == null)
            {
                continue;
            }
            Vector3 pos;
            pos.x = (m_curScaleValue - 1) * item.m_BaseLocalPostion.x * item.m_LocalPostionEffectIntensityX * process;
            pos.y = (m_curScaleValue - 1) * item.m_BaseLocalPostion.y * item.m_LocalPostionEffectIntensityY * process;
            pos.z = (m_curScaleValue - 1) * item.m_BaseLocalPostion.z * item.m_LocalPostionEffectIntensityZ * process;

            item.m_CachedParticle.transform.localPosition = item.m_BaseLocalPostion
                    + pos;
        }
    }


    #endregion
}