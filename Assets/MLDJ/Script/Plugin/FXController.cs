/********************************************************************
	created:	2013/12/24
	created:	24:12:2013   14:14
	filename: 	FXController.cs
	author:		王迪
	
	purpose:	特效控制器，绑定在特效上，控制生命周期与释放
*********************************************************************/

using System;
using GameRes;
using UnityEngine;
using System.Collections;
using Module.Log;
public class FXController : MonoBehaviour
{
    public string m_Path = "";
	private float m_fDuration = 0f;              // 特效持续时间
	public float Duration
	{
		get { return m_fDuration; }
		set { m_fDuration = value; }
	}
	private bool m_bOnlyDeactivate = false;     // 播放结束后是否只失效：true 播放完成后特效并不销毁，只是禁用。false 播放完成后，销毁特效
	public bool OnlyDeactivate
	{
		get { return m_bOnlyDeactivate; }
		set { m_bOnlyDeactivate = value; }
	}
	private int m_nEffectID = 0;                // EffectLogic分配ID 用于识别单个特效
	public int EffectID
	{
		get { return m_nEffectID; }
		set { m_nEffectID = value; }
	}
	private float m_fDelay = 0f;                 // 播放延迟
	public float Delay
	{
		get { return m_fDelay; }
		set { m_fDelay = value; }
	}

	private float m_fRemainduration = 0f;
    public float Remainduration
    {
        get { return m_fRemainduration; }
        set { m_fRemainduration = value; }
    }
	private float m_fRemaindelay = 0f;
    public float Remaindelay
    {
        get { return m_fRemaindelay; }
    }
	private GameObject m_fxObject = null;

    private GameObject m_EffectGameObj = null;
    Vector3 m_StartFXPos =new Vector3(0,0,0);
    Quaternion m_StartRotation =new Quaternion();
    private bool m_bIsFellowOwner = false;
    public bool IsFellowOwner
    {
        get { return m_bIsFellowOwner; }
        set { m_bIsFellowOwner = value; }
    }
    public UnityEngine.GameObject EffectGameObj
    {
        get { return m_EffectGameObj; }
        set { m_EffectGameObj = value; }
    }

    /// <summary>
    /// 替换EffectLogic的脚本 在未全部改完时部分替换EffectLogic的逻辑
    /// </summary>
    private BaseEffectBehaviourController m_curEffectController;
    public GameObject m_FirstChild;             // 第一个结点，通常绑定逻辑脚本\

    public float PlayerFinishTime = 0f;

    private Transform m_cachedTransform;

    private bool m_bAreaEffect = false;//add 区域特效
    private Vector3 m_AreaEffectPos = Vector3.zero;//add 区域特效的世界坐标
    private Transform CachedTransform
    {
        get
        {
            if (m_cachedTransform == null)
            {
                m_cachedTransform = transform;
            }
            return m_cachedTransform;
        }
    }

    void Awake()
    {
        m_cachedTransform = transform;
    }
    public void ChangePositionForAreaEffect(Vector3 position)
    {
        m_bAreaEffect = true;
        if (m_FirstChild != null)
        {
            m_AreaEffectPos = position;
            m_FirstChild.transform.position = position;
        }
    }
    public void ResetAreaEffect()
    {
        m_bAreaEffect = false;
    }
    public Vector3 GetPosition()
    {
        if (m_FirstChild != null)
        {
            return m_FirstChild.transform.position;
        }
        else
        {
            return CachedTransform.position;
        }
    }

    public void Play(BaseEffectBehaviourController curEffectHandle)
    {
        if (transform == null)
        {
            return;
        }
        Transform child = transform.GetChild(0);
        if (null == child)
        {
            LogModule.ErrorLog("can not find effect in fxController");
            ResourceManager.DestroyResource(this.gameObject);
            return;
        }

        // 高低中配机器以不同方式显示空气扰动
        /*if (MobileHardwareInfo.Instance.HardwareLevel != Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
        {
            for (int i = 0; i < child.childCount; i++)
            {
                Transform particle = child.GetChild(i);
                if (particle == null || particle.particleSystem == null || particle.particleSystem.renderer == null)
                {
                    continue;
                }

                for (int j = 0; j < particle.particleSystem.renderer.materials.Length; j++)
                {
                    Shader tempShader = particle.particleSystem.renderer.materials[j].shader;
                    if (tempShader == null)
                    {
                        continue;
                    }

                    if (tempShader.name.Contains("Distortion"))
                    {
                        particle.gameObject.SetActive(false);
                    }
                }
            }
        }*/

        m_FirstChild = child.gameObject;
        m_fRemainduration = m_fDuration;
        m_fRemaindelay = m_fDelay;
        m_fxObject = child.gameObject;
        m_curEffectController = curEffectHandle;
        PlayerFinishTime = 0f;
        gameObject.SetActive(true);
    }

	public void Stop()
	{
		RemoveParticle();
	}

	void DoPlay()
	{
        if (null == m_fxObject)
            return;
		m_fxObject.SetActive(true);
        //记录下播放时候的位置
        m_StartFXPos = CachedTransform.position;
        m_StartRotation = CachedTransform.rotation;
	}

	void OnEnable()
	{
	    Transform parent = CachedTransform.parent;
        if (parent != null)
        {
            CachedTransform.position = parent.position;
            CachedTransform.rotation = parent.rotation;
        }
		m_fRemaindelay = m_fDelay;

		m_fRemainduration = m_fDuration;

        if (m_fRemaindelay <= 0f)
        {
            DoPlay();
        }
	}

	void Update()
	{
		if (m_fRemaindelay > 0f)
		{
			m_fRemaindelay -= Time.deltaTime;

            if (m_fRemaindelay <= 0f)
			{
				DoPlay();
			}
			return;
		}
		if (m_fRemainduration > 0f)
		{
            //如果不随主人移动 则 修正坐标为 播放时的坐标
		    if (IsFellowOwner ==false)
		    {
                CachedTransform.position = m_StartFXPos;
                CachedTransform.rotation = m_StartRotation;
		    }
            if (m_bAreaEffect)
            {
                if (m_FirstChild != null)
                {
                    m_FirstChild.transform.position = m_AreaEffectPos;
                }

            }
			m_fRemainduration -= Time.deltaTime;
			if (m_fRemainduration <= 0f)
			{
				Stop();
			}
		}
	}

	void RemoveParticle()
	{
        PlayerFinishTime = Time.time;

        if (m_bOnlyDeactivate)
        {
            if (null != m_fxObject)
            {
                m_fxObject.SetActive(false);
                gameObject.SetActive(false);
            }
            if (m_curEffectController != null)
            {
                m_curEffectController.EffectDeactive(this);
            }
        }
        else
        {
            if (m_curEffectController != null)
            {
                m_curEffectController.EffectDestroyed(EffectID);
            }
            ResourceManager.DestroyResource(this.gameObject);
        }
	}

    void OnDestroy()
    {
        ResourcesManager.Instance.ReduceCachedRef(m_Path,EResourceType.Effect);
    }
}
