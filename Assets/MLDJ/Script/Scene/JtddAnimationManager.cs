using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using Module.Log;
using System.Collections;

public class JtddAnimationManager : MonoBehaviour
{
    struct CameraEffectTime
    {
        public float BeginTime;
        public float EndTime;
    }

    public GameObject[] ScGameObject;
    public float[] ScGameObjTime;
    public GameObject SuidaoDongHuaGameObject;
    public float[] SuiDaoTime;
    public GameObject[] ScCameraGameObjects;
    public GameObject[] RiderObjs;      // 保存骑乘节点，用于查找角色，设置角色的显示和隐藏

    // 由于资源中节点层次结构不统一，无法使用动态加载的方式加载对应资源，故在此写死
    string[] m_PlayerNodePath = new string[]
    {
        "all/Bone11/Ride_Point01/Zy_kuangzhanshi_002_001",      // 狂战士
        "all/Bone11/Ride_Point01/Zy_shuangjianshi_002_001",      // 双剑士 
        "all/Bone11/Ride_Point01/Zy_gongjianshou_002_001",       // 弓箭手
        "all/Bone11/Ride_Point01/Zy_modaoshi_002_001",          // 魔斗士
        "all/Bone11/Ride_Point01/null",
        "all/Bone11/Ride_Point01/null",
    };
    //视频播放相关控制
    private int m_OldIndex = 0;
    private int m_CurIndex = 0;
    private float m_CurPlayerTime = 0.0f;
    private float m_CurAllTime = 0.0f;

    private float m_BlurBeginTime = 0.0f;
    private float m_BlurEndTime = 0.0f;

    private Dictionary<int, CameraEffectTime> m_CameraEffectTimeList;

    private MotionBlur m_CurMotionBlur;

    //音频播放相关控制
    public int[] ScSoundID;

    private TrackMoveControl m_TrackMoveControl;

    private static JtddAnimationManager m_Instance;
    public static JtddAnimationManager Instance
    {
        get
        {
            return m_Instance;
        }
    }

    private bool m_IsAllAnimation = false;
    public bool IsAnimation {
        get { return m_IsAllAnimation; }
    }

    private void Awake()
    {
        m_Instance = this;
    }

    // Use this for initialization
	void Start ()
	{
	    m_TrackMoveControl = SuidaoDongHuaGameObject.GetComponent<TrackMoveControl>();

		ScGameObjTime = new float[4];
		ScGameObjTime.SetValue(7f, 0);
		ScGameObjTime.SetValue(2.22f, 1);
		ScGameObjTime.SetValue(6.14f, 2);
		ScGameObjTime.SetValue(5.1f, 3);
		
		SuiDaoTime = new float[4];
		SuiDaoTime.SetValue(45f, 0);
		SuiDaoTime.SetValue(0f, 1);
		SuiDaoTime.SetValue(25f, 2);
		SuiDaoTime.SetValue(25f, 3);

		ScSoundID = new int[4];
		ScSoundID.SetValue (210, 0);
		ScSoundID.SetValue (211, 1);
		ScSoundID.SetValue (212, 2);
		ScSoundID.SetValue (213, 3);

	    m_OldIndex = 0;
        m_CurIndex = 0;

        InitCameraEffect();

	    PlayerAnimation();
    }

    /// <summary>
    /// 初始化效果相关时间
    /// </summary>
    private void InitCameraEffectTime()
    {
        m_CameraEffectTimeList = new Dictionary<int, CameraEffectTime>();

        CameraEffectTime effectTime = new CameraEffectTime();
        effectTime.BeginTime = 3.37f;
        effectTime.EndTime = 4.58f;
        m_CameraEffectTimeList.Add(0, effectTime);

        effectTime = new CameraEffectTime();
        effectTime.BeginTime = 0.23f;
        effectTime.EndTime = 1.19f;
        m_CameraEffectTimeList.Add(2, effectTime);

        effectTime = new CameraEffectTime();
        effectTime.BeginTime = 1.38f;
        effectTime.EndTime = 2.43f;
        m_CameraEffectTimeList.Add(3, effectTime);
    }

    /// <summary>
    /// 初始化摄像机效果
    /// </summary>
    private void InitCameraEffect()
    {
        if (ScCameraGameObjects == null) return;

        if (MobileHardwareInfo.Instance.HardwareLevel != Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
        {
            return;
        }

        InitCameraEffectTime();//初始化效果时间

        for (int i = 0; i < ScCameraGameObjects.Length; i++)
        {
            if (ScCameraGameObjects[i] != null)
            {
                AddCameraEffect(ScCameraGameObjects[i]);
            }
        }
    }

    /// <summary>
    /// 添加、设置摄像机效果
    /// </summary>
    /// <param name="cameraObj"></param>
    private void AddCameraEffect(GameObject cameraObj)
    {
        MotionBlur blur = cameraObj.GetComponent<MotionBlur>();
        if (blur == null)
        {
            blur = cameraObj.AddComponent<MotionBlur>();
            blur.blurAmount = 0.4f;
            if (blur.shader == null)
            {
                blur.shader = Shader.Find("Hidden/MotionBlur");
            }

            blur.enabled = false;
        }

        FastBloom bloom = cameraObj.GetComponent<FastBloom>();
        if (bloom == null)
        {
            bloom = cameraObj.AddComponent<FastBloom>();
            bloom.threshhold = 0.1f;
            bloom.intensity = 0.35f;
            bloom.blurSize = 1.79f;
            bloom.resolution = FastBloom.Resolution.Low;
            bloom.blurIterations = 1;
            bloom.blurType = FastBloom.BlurType.Standard;

            if (bloom.fastBloomShader == null)
            {
                bloom.fastBloomShader = Shader.Find("Hidden/FastBloom");
            }

            bloom.enabled = true;
        }
    }

    /// <summary>
    /// 介绍动画
    /// </summary>
    public void OverAnimation()
    {
        m_IsAllAnimation = false;

        if (m_CurIndex < ScGameObject.Length)
        {
            if (ScGameObject[m_CurIndex] != null)
            {
                ScGameObject[m_CurIndex].SetActive(false);
            }
        }

        this.gameObject.SetActive(false);

        OnOverAnimation();
    }

    /// <summary>
    /// 动画完成
    /// </summary>
    public void OnOverAnimation()
    {
        CameraManager.Instance.CameraCullingMask(Color.black, 0);

        if (JtddSceneControl.Instance() != null)
        {
            JtddSceneControl.Instance().ShowSceneObject("SceneModel/Suidao");
        }

        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().InitBlackScreenTween(Color.black, 1.0f, 1.0f, 0.0f);
            BackCamerControll.Instance().PlayBlackScreenTween();
            BackCamerControll.Instance().SetAutoClose(true);
        }

        if (Singleton<ObjManager>.GetInstance() != null)
        {
            Singleton<ObjManager>.GetInstance().CreateMainPlayer();
        }

        ProcessInput.IsProcessInput = true;
		if (null != GameManager.gameManager.SceneLogic)
		{
			GameManager.gameManager.SceneLogic.CharacterDisplayFilter = Games.Scene.SceneLogic.ECharacterDisplayFilter.ShowAll;
		}
        Time.timeScale = 1;

        if (PlayerFrameLogic.Instance() != null)
        {
            PlayerFrameLogic.Instance().HideHPAndMPText();
        }
        if (SkillBarLogic.Instance() != null)
        {
            SkillBarLogic.Instance().HideTransformButtonInDemo();
        }

        GameManager.gameManager.SoundManager.StopSoundEffect(210);
        GameManager.gameManager.SoundManager.StopSoundEffect(211);
        GameManager.gameManager.SoundManager.StopSoundEffect(212);
        GameManager.gameManager.SoundManager.StopSoundEffect(213);

        GameManager.gameManager.SoundManager.PlayBGMusic(248, 0.5f, 0.5f);

        //删除该物体
        Destroy(this.gameObject);
        Resources.UnloadUnusedAssets();
        GC.Collect();
    }

    /// <summary>
    /// 设置摄像机效果时间
    /// </summary>
    private void SetCameraEffectTime(int iTag)
    {
        if (m_CameraEffectTimeList == null) return;
        if (MobileHardwareInfo.Instance.HardwareLevel != Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH) return;
        
        if (m_CameraEffectTimeList.ContainsKey(iTag))
        {
            CameraEffectTime effectTime = m_CameraEffectTimeList[iTag];
            m_BlurBeginTime = effectTime.BeginTime;
            m_BlurEndTime = effectTime.EndTime;
        }
        else
        {
            m_BlurBeginTime = m_BlurEndTime = 0.0f;
        }

        if (ScCameraGameObjects.Length > iTag)
        {
            if (ScCameraGameObjects[iTag] != null)
            {
                m_CurMotionBlur = ScCameraGameObjects[iTag].GetComponent<MotionBlur>();
            }
        }
    }

    /// <summary>
    /// 播放动画
    /// </summary>
    private void PlayerAnimation()
    {
        m_CurMotionBlur = null;

        if (m_CurIndex >= ScGameObject.Length)
        {
            //动画整体介绍
            m_IsAllAnimation = false;
 
            OnOverAnimation();

            if (ScGameObject[ScGameObject.Length - 1] != null)
            {
                ScGameObject[ScGameObject.Length - 1].SetActive(false);
            }

            this.gameObject.SetActive(false);
            return;
        }
        
        for (int i = 0; i < ScGameObject.Length; i++)
        {
            if (m_CurIndex == i && ScGameObject[i] != null)
            {
                if (RiderObjs[m_CurIndex] != null)
                {
                    int profession = GameManager.gameManager.PlayerDataPool.EnterSceneCache.Profession;
                    Debug.Log("Profession:" + profession);
                    // 隐藏非本职业的节点
                    for (int j = 0; j < m_PlayerNodePath.Length; j++)
                    {
                        if (profession != j)
                        {
                            Transform trans = RiderObjs[m_CurIndex].transform.Find(m_PlayerNodePath[j]);
                            if (trans != null)
                            {
                                trans.gameObject.SetActive(false);
                            }
                        }
                    }
                }
                
                if (m_CurIndex != 0)
                {
                    ScGameObject[m_OldIndex].SetActive(false);
                }
                if (m_TrackMoveControl != null)
                {
                    m_TrackMoveControl.MoveValue = SuiDaoTime[i];
                }
                m_CurPlayerTime = Time.time;
                m_CurAllTime = ScGameObjTime[i];

                SetCameraEffectTime(i);
                //播放当前音乐
                if (null != GameManager.gameManager.SoundManager)
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(ScSoundID[i]);
                }
                ScGameObject[i].SetActive(true);

                if (m_CurIndex == 0)
                {
                    m_IsAllAnimation = true;
                    ProcessInput.IsProcessInput = false;
					if (null != GameManager.gameManager.SceneLogic)
					{
						GameManager.gameManager.SceneLogic.CharacterDisplayFilter = Games.Scene.SceneLogic.ECharacterDisplayFilter.ShowNothing;
					}
                }

                break;
            }
        }
    }

    // Update is called once per frame
	void Update ()
	{
	    if (m_IsAllAnimation) //播放动画中...
	    {
	        if (m_CurMotionBlur != null)
	        {
                if (m_BlurBeginTime != 0.0f && m_BlurEndTime != 0.0f)
                {
                    if (Time.time - m_CurPlayerTime >= m_BlurBeginTime) //打开
                    {
                        m_CurMotionBlur.enabled = true;
                    }

                    if (Time.time - m_CurPlayerTime >= m_BlurEndTime) //关闭
                    {
                        m_CurMotionBlur.enabled = false;
                    }
                }
	        }

	        if (Time.time - m_CurPlayerTime >= m_CurAllTime) //一次动画播放完成
            {
                m_OldIndex = m_CurIndex;

                m_CurIndex++;
                PlayerAnimation();
                return;
            }
	    }
	}
}
