/********************************************************************************
 *	文件名：	UpdateEdgeGlow.cs
 *	全路径：	\Script\Shader\Obj_MainPlayer.cs
 *	创建人：	liuwei
 *	创建时间：2015-04-21
 *
 *	功能说明：NPC 透明渐变、受击特效。此类只支持 Cabal/EdgeGlow.shader; 如果要用其他shader必须满足里面的参数
 *	修改记录：
 *	2016-01-04 Boss用Cabal/Light Probes Rim Alpha Test shader来实现新的效果。 by guanzhenqing
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.GlobeDefine;

public class UpdateEdgeGlow : MonoBehaviour {

    public Renderer[] _renderers = null;

    //private string m_ShaderName = "Cabal/EdgeGlow";
    private string m_ShaderName = "Cabal/Light Probes Rim Alpha Test";
    private const string m_nBossShaderName = "Cabal/Light Probes Rim Alpha Test";
//    private float _updateIntervalTime = 1.0f; //间隔时间
    
    // 闪光
    private float _updateTime = 0.2f; //持续时间
    private float _updateMax = 1f; //最大值
    private float _updateValue = 0.0f; //每次刷新值
    private float _useTime = 0.0f; //进行时间
    private bool _isUser = false;
    private float _curUpdateValue = 0.0f;
  

    // 透明渐变
    private float m_GradientTime = 0.8f;
    private bool m_IsGradienting = false;
    private float m_GradientValue = 0.0f;
    private float m_CurValue = 0.0f;
    private bool m_IsDie = true;


    //外边线
    private float m_useOutlineTime = 0.0f;  //使用时间
    private bool m_isBoss = false;
    private float m_defaultValue = 0f;      //默认值
    private float m_continueTime = 0.2f;    //持续时间
    private Color m_hitStartColor = new Color(1, 1, 1, 0.776f);
    private Color m_hitEndColor = new Color(1, 1, 1, 0f);
	// Use this for initialization

    //通用
    private const float m_fContinueTimeForBoss = 0.2f;
    private const float m_fContinueTimeForNPC = 0.1f;

	void Start ()
	{
	    _updateValue = _updateMax/_updateTime;
        _renderers = this.GetComponentsInChildren<Renderer>();
        m_GradientValue = 1.0f / m_GradientTime;
        m_IsGradienting = false;
    }
    /// <summary>
    /// NPC闪白
    /// </summary>
    public void UpdateRimPow_NPC()
    {
        m_continueTime = m_fContinueTimeForNPC;
        m_useOutlineTime = Time.time;
        m_isBoss = true;
        //UpdateOutlineColor(GlobeVar.BOSS_OUTLINE_WIDTH);
        UpdateRimPowerValue(GlobeVar.BOSS_RIM_POWER, true);
    }

    public void UpdateOutLine()
    {
        m_useOutlineTime = Time.time;
        m_isBoss = true;
        UpdateOutlineColor(GlobeVar.BOSS_OUTLINE_WIDTH);
    }
    /// <summary>
    /// BOSS闪白
    /// </summary>
    public void UpdateRimPower()
    {
        m_continueTime = m_fContinueTimeForBoss;
        m_useOutlineTime = Time.time;
        m_isBoss = true;
        //UpdateOutlineColor(GlobeVar.BOSS_OUTLINE_WIDTH);
        UpdateRimPowerValue(GlobeVar.BOSS_RIM_POWER,true);
    }

    /// <summary>
    /// 直接设置透明值
    /// </summary>
    /// <param name="fTag"></param>
    public void SetGradientAlpha(float fTag)
    {
        if (fTag > 1) fTag = 1;
        if (fTag < 0) fTag = 0;

        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_ShaderName)
                {
                    _renderers[i].material.SetFloat("_Alpha", fTag);
                }
            }
        }
    }

    /// <summary>
    /// 渐变透明度
    /// </summary>
    public void GradientAlpha(bool isDie = true)
    {
        if (!isDie)
        {
            m_IsGradienting = false;
        }
        if (m_IsGradienting)
        {
            return;
        }
        m_IsDie = isDie;
        m_CurValue = m_IsDie ? 1.0f : 0.0f;
        m_IsGradienting = true;
    }

    private void UpdateColor(float tagValue)
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_ShaderName)
                {
                    _renderers[i].material.SetFloat("_RimA", tagValue);
                }
            }
        }
    }
    private void UpdateRimPowerValue(float fValue,bool hitStart)
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_nBossShaderName)
                {
                    if (hitStart)
                    {
                        _renderers[i].material.SetColor("_RimColor",m_hitStartColor);
                    }
                    else
                    {
                        _renderers[i].material.SetColor("_RimColor", m_hitEndColor);
                    }
                    _renderers[i].material.SetFloat("_RimPower", fValue);
                }
            }
        }
    }
    private void UpdateOutlineColor(float fValue)
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_ShaderName)
                {
                    _renderers[i].material.SetFloat("_Outline", fValue);
                }
            }
        }
    }

    public void GradientEffect()
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        if (m_IsDie)
        {
            m_CurValue -= m_GradientValue * Time.deltaTime;
            if (m_CurValue < 0) m_CurValue = 0.0f;
        }
        else
        {
            m_CurValue += m_GradientValue * Time.deltaTime;
            if (m_CurValue > 1) m_CurValue = 1.0f;
        }

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_ShaderName)
                {
                    _renderers[i].material.SetFloat("_Alpha", m_CurValue);
                }
            }
        }

        if ((m_CurValue <= 0 && m_IsDie) || (m_CurValue >= 1 && !m_IsDie))
        {
            m_IsGradienting = false;
        }
    }

    //设置外边框的宽度
    public void SetBossOutLineWidth(float fWidth)
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

         for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                if (_renderers[i].material.shader.name == m_ShaderName)
                {
                    _renderers[i].material.SetFloat("_Outline", fWidth);
                }
            }
        }
    }
    /// <summary>
    /// 受击效果
    /// </summary>
    private void HitUpdateColor()
    {
        if (Time.time - _useTime > _updateTime)
        {
            //结束循环
            _isUser = false;
            _useTime = Time.time;
            UpdateColor(0f);
            return;
        }

        if (_curUpdateValue > 0)
        {
            _curUpdateValue -= _updateValue * Time.deltaTime;
        }
        if (_curUpdateValue < 0) _curUpdateValue = 0;

        UpdateColor(_curUpdateValue);
    }

    private void HitUpdateOutline()
    {
        if (Time.time - m_useOutlineTime > m_continueTime)
        {
            m_isBoss = false;
            m_useOutlineTime = Time.time;
            UpdateOutlineColor(m_defaultValue);
        }
    }
    private void HitUpdateRimColor()
    {
        if (Time.time - m_useOutlineTime > m_continueTime)
        {
            m_isBoss = false;
            m_useOutlineTime = Time.time;
            //UpdateOutlineColor(m_defaultValue);
            UpdateRimPowerValue(m_defaultValue,false);
        }
    }
    // Update is called once per frame
	void Update ()
	{
	    if (_isUser)
	    {
	        HitUpdateColor();
	    }

        if (m_isBoss)
        {
           // HitUpdateOutline();
            HitUpdateRimColor();
        }
	    if (m_IsGradienting)
	    {
	        GradientEffect();
	    }
	}
}
