/********************************************************************************
 *	文件名：	CameraManager.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraManager.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-26
 *
 *	功能说明：摄像机管理器，管理当前摄像机的行为与状态
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.LogicObj;

public class CameraManager : Singleton<CameraManager>
{
    #region Fields
    /// <summary>
    /// 摄像机控件缓存
    /// </summary>
    private Camera m_CameraComponent;
    /// <summary>
    /// 摄像机Transform缓存
    /// </summary>
    private Transform m_MainCameraTrans;

    private GameObject m_MainCameraGo;

    private int m_cullingMask;
    private Color m_BackgroundColor;
    /// <summary>
    /// 各种类型的摄像机实例
    /// </summary>
    private ThirdPersonCamera m_ThirdPersonCamera;

    /// <summary>
    /// 当前使用的摄像机
    /// </summary>
    private CameraBase m_CurrentCamera;

//    private bool m_bDirty = false;

    //main camera effect
    private FastBloom m_FastBloom;
    private MotionBlur m_MotionBlur;
    
    //private SynRenderTexture m_EffectRenderTexture;

    #endregion
    #region Properties

    /// <summary>
    /// 摄像机Transform
    /// </summary>
    public Transform MainCameraTrans
    {
        get
        {
            return m_MainCameraTrans;
        }
    }
	private bool m_IsDuang = false ;
	public bool IsDuangCamera
	{
		get { return m_IsDuang; }
		set { m_IsDuang = value; }
	}
    /// <summary>
    /// 摄像机控件
    /// </summary>
    public Camera CameraComponent
    {
        get
        {
            return m_CameraComponent;
        }
    }

    public GameObject CachedGo
    {
        get { return m_MainCameraGo; }
    }
    #endregion
    #region Methods
    /// <summary>
    /// 初始
    /// </summary>
    public void Init()
    {
		Messenger.AddListener(MessengerConst.OnCutsceneMovieBegin, OnCutsceneMovieBegin);

        LinkCamera();
//        m_bDirty = true;
        
        m_ThirdPersonCamera = new ThirdPersonCamera();
        m_ThirdPersonCamera.Init();
        m_CurrentCamera = m_ThirdPersonCamera;
       // m_EffectRenderTexture = new SynRenderTexture();
      //  m_EffectRenderTexture.Init();
    }

    /// <summary>
    /// 初始化MainCamera效果
    /// </summary>
    private void InitMainCameraEffect()
    {
        if (m_CameraComponent == null) return;

        if (MobileHardwareInfo.Instance.HardwareLevel != Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
        {
            return;
        }
        
        //Bloom 效果添加
        if (m_FastBloom == null)
        {
            m_FastBloom = m_CameraComponent.GetComponent<FastBloom>();

            //不再主动挂FastBloom，改为场景制作完成之后，美术确定MainCamera挂还是不挂，挂的话参数是多少
            //if (m_FastBloom == null)
            //{
            //    m_FastBloom = m_CameraComponent.gameObject.AddComponent<FastBloom>();
            //}
            //m_FastBloom.enabled = false;

            //m_FastBloom.threshhold = 0.4f;
            //m_FastBloom.intensity = 0.45f;

            if (m_FastBloom && m_FastBloom.fastBloomShader == null)
            {
                m_FastBloom.fastBloomShader = Shader.Find("Hidden/FastBloom");
            }
#if UNITY_EDITOR
            //因为打包格式的问题，编辑器模式下直接打包完毕是看不出来Bloom效果的。FastBloom会被禁掉。这里新加一个FastBloom,为了在编辑器情况下预览。
            if (m_FastBloom)
            {
                FastBloom temp = m_CameraComponent.gameObject.AddComponent<FastBloom>();
                temp.enabled = true;
                temp.threshhold = m_FastBloom.threshhold;
                temp.intensity = m_FastBloom.intensity;
                temp.blurSize = m_FastBloom.blurSize;
                temp.resolution = m_FastBloom.resolution;
                temp.blurIterations = m_FastBloom.blurIterations;
                temp.blurType = m_FastBloom.blurType;
                temp.fastBloomShader = Shader.Find("Hidden/FastBloom");
            }
#endif

        }

        if (m_MotionBlur == null)
        {
            m_MotionBlur = m_CameraComponent.GetComponent<MotionBlur>();
            if (m_MotionBlur == null)
            {
                m_MotionBlur = m_CameraComponent.gameObject.AddComponent<MotionBlur>();
            }
            m_MotionBlur.enabled = false;

            if (m_MotionBlur.shader == null)
            {
                m_MotionBlur.shader = Shader.Find("Hidden/MotionBlur");
            }
        }
    }

    /// <summary>
    /// 打开、关闭 FastBloom 效果
    /// </summary>
    public bool OpenAndCloseFastBloom
    {
        get
        {
            if (m_FastBloom == null) return false;

            return m_FastBloom.enabled;
        }

        set
        {
            if (m_FastBloom == null) return;

            m_FastBloom.enabled = value;
        }
    }

    /// <summary>
    /// 打开、关闭 Motion Blur 效果
    /// </summary>
    public bool OpenAndCloseMotionBlur
    {
        get
        {
            if (m_MotionBlur == null) return false;

            return m_MotionBlur.enabled;
        }
        set
        {
            if (m_MotionBlur == null) return;

            m_MotionBlur.enabled = value;
        }
    }

    /// <summary>
    /// 清理
    /// </summary>
    public void Clear()
    {
		if (m_ThirdPersonCamera != null)
		{
        	m_ThirdPersonCamera.Clear();
		}

		Messenger.RemoveListener(MessengerConst.OnCutsceneMovieBegin, OnCutsceneMovieBegin);
    }
    /// <summary>
    /// 更新
    /// </summary>
    public void Update(float deltaTime)
    {
        if (m_CameraComponent == null || m_MainCameraTrans == null)
        {
            LinkCamera();
        }
        if (m_CameraComponent == null) return;

        if (m_CurrentCamera != null)
        {
            m_CurrentCamera.Update(deltaTime);
        }
    }

    /// <summary>
    /// 重新设置CullingMask效果
    /// </summary>
    /// <param name="tagColor"></param>
    /// <param name="tagCullingMask"></param>
    public void CameraCullingMask(Color tagColor, int tagCullingMask)
    {
        if (m_CameraComponent == null) return;

        m_CameraComponent.cullingMask = tagCullingMask;
        m_CameraComponent.backgroundColor = tagColor;
    }

    /// <summary>
    /// 重置CullingMash效果
    /// </summary>
    public void ResetCameraCullingMash()
    {
        if (m_CameraComponent == null) return;

        m_CameraComponent.cullingMask = m_cullingMask;
        m_CameraComponent.backgroundColor = m_BackgroundColor;
    }

    /// <summary>
	/// 重新寻找MainCamera
	/// </summary>
    private void LinkCamera()
    {
        m_CameraComponent = Camera.main;
        if (m_CameraComponent != null)
        {
            m_MainCameraTrans = m_CameraComponent.transform;
            m_MainCameraGo = m_CameraComponent.gameObject;
            //if( GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            m_MainCameraGo.AddComponent<ScreenCopySDK.Maincamera>();
            //远裁剪面 先硬编码成30
            //m_CameraComponent.farClipPlane = 40;
			if (m_CameraComponent.gameObject.GetComponent<SceneEffectBehaviourController>() == null)
			{
				SceneEffectBehaviourController sceneEffecLogic = m_CameraComponent.gameObject.AddComponent<SceneEffectBehaviourController>();
				if (sceneEffecLogic != null)
				{
					sceneEffecLogic.InitEffect(m_CameraComponent.gameObject);
				}
			}
            //if (m_EffectRenderTexture != null)
            //{
            //    m_EffectRenderTexture.LinkCamera(m_CameraComponent);
            //}

            m_cullingMask = m_CameraComponent.cullingMask;
            m_BackgroundColor = m_CameraComponent.backgroundColor;
        }

	    InitMainCameraEffect();
    }
    public void AddMainCamera()
    {
        m_MainCameraGo.AddComponent<ScreenCopySDK.Maincamera>();
    }
    public void UpdateDistance(float deltaDistance)
    {
        if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
        {
            m_ThirdPersonCamera.UpdateDistance(deltaDistance * -0.1f);
        }
    }

	public void ResetThirdPersonCamera (float time = 0)
	{
		if (m_ThirdPersonCamera != null)
		{
			m_ThirdPersonCamera.ResetToDefault(time);
		}
	}

	/// <summary>
	/// 外部调用摄像机震屏的接口
	/// </summary>
	/// <returns>总时长</returns>
	/// <param name="nRockId">N rock identifier.</param>
	public float StartRock(int nRockId, Callback finishCallback = null)
    {
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			return m_ThirdPersonCamera.InitCameraRock(nRockId, finishCallback);
        }
		return 0;
    }

    /// <summary>
    /// 是否正在进行ID为nRockId的震屏
    /// </summary>
	/// <param name="nRockId">CameraShock表中的ID</param>
    /// <returns></returns>
    public bool IsRocking(int nRockId)
    {
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			return m_ThirdPersonCamera.IsHaveRockInfoById(nRockId);
        }
        return false;
    }

    /// <summary>
    /// 停止ID为nRockId的震屏
    /// </summary>
	/// <param name="nRockId">CameraShock表中的ID</param>
    public void StopRock(int nRockId)
    {
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			m_ThirdPersonCamera.CleanUpRockInfoById(nRockId);
        }
    }

	/// <summary>
	/// 外部调用摄像机动画的接口
	/// </summary>
	/// <returns>总时长</returns>
	/// <param name="nRockId">N rock identifier.</param>
	public float StartAnim(int nAnimId, Callback finishCallback = null)
	{
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			return m_ThirdPersonCamera.StartCameraAnim(nAnimId, finishCallback);
		}
		return 0;
	}
	
	/// <summary>
	/// 是否正在进行ID为nRockId的动画
	/// </summary>
	/// <param name="nRockId">CameraShock表中的ID</param>
	/// <returns></returns>
	public bool IsPlayingAnim(int nAnimId)
	{
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			return m_ThirdPersonCamera.IsPlayingAnim(nAnimId);
		}
		return false;
	}
	
	/// <summary>
	/// 停止ID为nRockId的动画
	/// </summary>
	/// <param name="nRockId">CameraShock表中的ID</param>
	public void StopAnim(int nAnimId)
	{
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			m_ThirdPersonCamera.StopCameraAnim(nAnimId);
		}
	}
	
	/// <summary>
	/// 让摄像机看向某个固定位置，fDuration为0则不做移动动画
	/// </summary>
    /// <param name="targetPos"></param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">移动动画时长</param>
    public void LookPos(Vector3 targetPos, CameraDefine.CameraMoveDoneCallback onCameraMoveDone = null, float fDuration = CameraDefine.m_fDefaultCameraMoveTime)
    {
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			m_ThirdPersonCamera.LookPos(targetPos, onCameraMoveDone, fDuration);
        }       
    }

    /// <summary>
    /// 让摄像机看向某个Obj，fDuration为0则不做移动动画
    /// </summary>
    /// <param name="target"></param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">移动动画时长</param>
    public void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone = null, float fDuration = CameraDefine.m_fDefaultCameraMoveTime)
    {
		if (m_CurrentCamera == m_ThirdPersonCamera && m_ThirdPersonCamera != null)
		{
			m_ThirdPersonCamera.LookTarget(target, onCameraMoveDone, fDuration);
        }
    }

	private void OnCutsceneMovieBegin()
	{
		CameraManager.Instance.ResetThirdPersonCamera(0.2f);
	}

    #endregion
}
