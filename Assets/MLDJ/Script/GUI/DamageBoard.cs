//********************************************************************
// 文件名: DamageBoard.cs
// 描述: 玩家伤害信息板具体逻辑
// 作者: Lijia
// 创建时间: 2014-05-21
//
// 修改历史:
// 2014-05-21 李嘉创建
//********************************************************************
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;

public class DamageBoard : MonoBehaviour 
{

    private Transform m_DamageBoardRootTransform;    //所在GameObject的Transform
    private UILabel m_DamageBoardLabel;              //字体

    private UniformAcceleratedMotion m_UAMotion;     //UA
    private TweenScale m_TweenScalePlus;             //缩放
    private TweenScale m_TweenScaleMinus;            //缩放
    private TweenAlpha m_TweenAlpha;

    private float m_ShowTime = 0.0f;                //显示时间


    public UIFont m_PlayerSkillDamageFont;
    public UIFont m_OtherSkillDamageFont;

    private float m_totalShowTime = 0;

    private bool m_run = false;


    #region 属性

    public bool Run
    {
        get { return m_run; }
    }
    public UILabel DamageBoardLabel
    {
        get { return m_DamageBoardLabel; }
    }
    public float ShowTime
    {
        get { return m_ShowTime; }
        set { m_ShowTime = value; }
    }

    public float TotalShowTime
    {
        get { return m_totalShowTime; }
    }

    #endregion

    // Use this for initialization
    void Start()
    {

    }


    /// <summary>
	/// 背景图片
	/// </summary>
	public UISprite m_BG;

    public void Awake()
    {
        if (null == m_DamageBoardRootTransform)
        {
            m_DamageBoardRootTransform = gameObject.transform;
        }

        if (null == m_DamageBoardLabel)
        {
            m_DamageBoardLabel = gameObject.GetComponent<UILabel>();
            if (null != m_DamageBoardLabel)
            {
                m_DamageBoardLabel.effectStyle = UILabel.Effect.None;
                m_DamageBoardLabel.color = Color.white;
            }
        }

        if (null == m_UAMotion)
        {
            m_UAMotion = gameObject.AddComponent<UniformAcceleratedMotion>();
        }

        if (null == m_TweenScalePlus)
        {
            m_TweenScalePlus = gameObject.AddComponent<TweenScale>();
        }

        if (null == m_TweenScaleMinus)
        {
            m_TweenScaleMinus = gameObject.AddComponent<TweenScale>();
        }
    }

    public void Reuse(Vector3 position)
    {
        if (null != m_DamageBoardLabel)
        {
            m_DamageBoardLabel.color = Color.white;
        }
    }

    public void Remove()
    {
        m_DamageBoardLabel.color = GlobeVar.TRANSPARENT_COLOR;
		m_BG.enabled = false;
        m_totalShowTime = 0;
        m_run = false;
        if (m_TweenAlpha != null)
        {
            m_TweenAlpha.enabled = false;
        }
    }

    //在创建或者复用完成后，调用该接口，显示伤害信息
    public bool ActiveDamageBoard(int nType, string strValue, Vector3 pos, bool isPlayerSkill = true)
    {
//		bool isCriticalDamage = nType == (int)(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL) ||
//			nType == (int)(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL_PARTNER) ||
//				nType == (int)(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_ATTACK_CRITICAL);


        Tab_DamageBoardType tabDamageBoardType = DamageBoardManager.DamageBoardType[nType][0];
        if (tabDamageBoardType == null)
        {
            tabDamageBoardType = DamageBoardManager.DamageBoardType[0][0];
        }
        m_run = true;
        // 读取该类型的表格项 
        // 初始位置 初速度 加速度
        //Vector3 vecOrigin = new Vector3(tabDamageBoardType.OriginX, tabDamageBoardType.OriginY, 0);
        Vector3 vecVelocity = new Vector3(tabDamageBoardType.VelocityX, tabDamageBoardType.VelocityY, 0);
        Vector3 vecAcceleration = new Vector3(tabDamageBoardType.AccelerationX, tabDamageBoardType.AccelerationY, 0);
        float fShowTime = tabDamageBoardType.ShowTime;              // 正常显示时间
        float fFadeTime = tabDamageBoardType.FadeTime;               // 渐变消失时间
        m_totalShowTime = fShowTime + fFadeTime;                       // 总运动时间
        string strTextColor = tabDamageBoardType.TextColor;          // 字体颜色
        //string strOutlineColor = tabDamageBoardType.OutlineColor;   // 描边颜色
        float fTextSize = tabDamageBoardType.TextSize;                // 文字大小
        float fScaleDelayTime = tabDamageBoardType.ScaleDelayTime;     // 尺寸变化延迟时间
        float fTextSizeMax = tabDamageBoardType.TextSizeMax;            // 最大尺寸
        float fScalePlusTime = tabDamageBoardType.ScalePlusTime;          // 放大时间
        float fTextSizeOver = tabDamageBoardType.TextSizeOver;          // 结束尺寸
        float fScaleMinusTime = tabDamageBoardType.ScaleMinusTime;    // 缩小时间

        if (null == m_DamageBoardRootTransform)
        {
            m_DamageBoardRootTransform = gameObject.transform;
        }

        if (null == m_DamageBoardLabel)
        {
            m_DamageBoardLabel = gameObject.GetComponent<UILabel>();
            if (null != m_DamageBoardLabel)
            {
                m_DamageBoardLabel.effectStyle = UILabel.Effect.None;
                m_DamageBoardLabel.color = Color.white;
            }
        }

        if (null == m_UAMotion)
        {
            m_UAMotion = gameObject.AddComponent<UniformAcceleratedMotion>();
        }

        if (null == m_TweenScalePlus)
        {
            m_TweenScalePlus = gameObject.AddComponent<TweenScale>();
        }

        if (null == m_TweenScaleMinus)
        {
            m_TweenScaleMinus = gameObject.AddComponent<TweenScale>();
        }
        if (m_TweenAlpha == null)
        {
            m_TweenAlpha = gameObject.AddComponent<TweenAlpha>();
        }

        // 使用旧的TweenAlpha需要Reset
        m_TweenAlpha.Reset();
        m_TweenScalePlus.Reset();
        m_TweenScaleMinus.Reset();
        //LogModule.ErrorLog(fFadeTime+"_" + fShowTime);
        if (fFadeTime > 0)
        {
            m_TweenAlpha.from = 1;
            m_TweenAlpha.to = 0.001f;
            m_TweenAlpha.delay = fShowTime;
            m_TweenAlpha.duration = fFadeTime;
            m_TweenAlpha.Play();
        }

        // 设置Label控件
//         string strText = "[" + strTextColor + "]";
//         strText += strValue;
//         m_DamageBoardLabel.text = strText;
		m_DamageBoardLabel.text = StrDictionary.GetClientDictionaryString("#{10003}", strTextColor, strValue);
        if (isPlayerSkill)
        {
            m_DamageBoardLabel.font = m_PlayerSkillDamageFont;
        }
        else
        {
            m_DamageBoardLabel.font = m_OtherSkillDamageFont;
        }
        //damageBoardLabel.effectColor = Utils.GetColorByString(strOutlineColor);

        // 匀变速运动 传入初速度 加速度 运动时间
        m_UAMotion.Init(vecVelocity, vecAcceleration, m_totalShowTime);

        // TweenScale动画
        m_TweenScalePlus.from = fTextSize * Vector3.one;
        m_TweenScalePlus.to = fTextSizeMax * Vector3.one;
        m_TweenScalePlus.delay = fScaleDelayTime;
        m_TweenScalePlus.duration = fScalePlusTime;

        m_TweenScaleMinus.from = fTextSizeMax * Vector3.one;
        m_TweenScaleMinus.to = fTextSizeOver * Vector3.one;
        m_TweenScaleMinus.delay = fScalePlusTime;
        m_TweenScaleMinus.duration = fScaleMinusTime;

        // 两个动作开始播放
        m_UAMotion.Go();
        if (fScaleDelayTime >= 0 && fTextSizeMax > 0 && fScalePlusTime >= 0 && fTextSizeOver > 0 && fScaleMinusTime >= 0)
        {
            m_TweenScalePlus.enabled = true;
            m_TweenScaleMinus.enabled = true;
            m_TweenScalePlus.Play();
            m_TweenScaleMinus.Play();
        }
        else
        {
            m_TweenScalePlus.enabled = false;
            m_TweenScaleMinus.enabled = false;
        }

        //  最后设置位置 大小
        //Add by Lijia,伤害数字高度统一进行2.0的修正，如果以后发现有非2.0的情况，可以找我协商
        pos.y += 2.0f;
        m_DamageBoardRootTransform.position = pos;
        m_DamageBoardRootTransform.localScale = fTextSize * Vector3.one;
        m_DamageBoardRootTransform.localRotation = Quaternion.LookRotation(Vector3.forward, Vector3.up);

        //伤害板面向当前摄像机
        Vector3 vecUp = Camera.main.transform.rotation * Vector3.up;
        m_DamageBoardRootTransform.LookAt(m_DamageBoardRootTransform.position + Camera.main.transform.rotation * Vector3.back, vecUp);
        m_DamageBoardRootTransform.Rotate(Vector3.up * 180);

        ShowTime = Time.time;
        m_DamageBoardLabel.color = Color.white;	

        return true;
    }
}