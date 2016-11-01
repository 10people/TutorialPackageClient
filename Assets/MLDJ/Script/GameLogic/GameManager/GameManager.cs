/********************************************************************************
 *	文件名：	GameManager.cs
 *	全路径：	\Script\GameManager\GameManager.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-29
 *
 *	功能说明：游戏管理器,负责游戏的状态切换和一些全局变量控制
 *	         进行整体游戏的流程控制
 *	         该管理器为单件，并且需要绑定一个不销毁的GameObject
 *	         注意：只有游戏全程存在的管理器才保留于此，以场景为基础的管理器一律采用Singleton<T>形式控制
 *	修改记录：
*********************************************************************************/

using System.IO;
using GameRes;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.Scene;
using Games.Events;
using GCGame.Table;
using Games.Mission;
using Module.Log;
using Games;
using Games.FlyWing;

public class GameManager : MonoBehaviour
{

    #region 

    public static GameManager gameManager = null;           //GameManager以单件形式存在

	// 加这个字段是为了防止多次初始化，因为初始化是在SceneLogic的Awake里调用的，而monoBehaviour的Awake是靠不住的，可能由于某些人为错误多次调用
	private static bool dataInitialized = false;
    //隐身shader
    public static Shader m_ShaderForStealth = null;
    private SceneLogic m_SceneLogic;        //当前场景SceneLogic

    public Games.Scene.SceneLogic SceneLogic
    {
        get { return m_SceneLogic; }
        set { m_SceneLogic = value; }
    }

    //由于处于在线状态还是离线状态
    //在线状态需要连接服务器
    private bool m_bOnLineState = true;
    public bool OnLineState
    {
        get { return m_bOnLineState; }
        set { m_bOnLineState = value; }
    }

    //测试选项，是否显示主角服务器位置
    private bool m_bShowMainPlayerServerTrace = false;
    public bool ShowMainPlayerServerTrace
    {
        get { return m_bShowMainPlayerServerTrace; }
        set { m_bShowMainPlayerServerTrace = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    ///场景管理器,保存全局的场景相关信息
    //////////////////////////////////////////////////////////////////////////
    private ActiveScene m_ActiveScene;
    public ActiveScene ActiveScene
    {
        get { return m_ActiveScene; }
        set { m_ActiveScene = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    ///任务管理器
    //////////////////////////////////////////////////////////////////////////
    private MissionManager m_MissionManager;
    public MissionManager MissionManager
    {
        get { return m_MissionManager; }
    }
  //////////////////////////////////////////////////////////////////////////
  ///活动奖励已领取数据
	//////////////////////////////////////////////////////////////////////////
    public Dictionary<ActivityRewardType, List<int>> ActivityRewardGetDic
    {
      get { return m_ActivityRewardGetDic; }
    }
    private Dictionary<ActivityRewardType, List<int>> m_ActivityRewardGetDic = new Dictionary<ActivityRewardType, List<int>>();
  //////////////////////////////////////////////////////////////////////////
	/// 翅膀管理器
	//////////////////////////////////////////////////////////////////////////
	private FlyWingMananger m_FlyWingMananger ;
	public FlyWingMananger FlyWingMananger 
	{
		get { return m_FlyWingMananger ;}
	}
    //////////////////////////////////////////////////////////////////////////
    ///读表器
    //////////////////////////////////////////////////////////////////////////
    private TableManager m_TableManager;
    public TableManager TableManager
    {
        get { return m_TableManager; }
    }

    //////////////////////////////////////////////////////////////////////////
    //声音管理器
    //////////////////////////////////////////////////////////////////////////
    private SoundManager m_SoundManager;
    public SoundManager SoundManager
    {
        get { return m_SoundManager; }
        set { m_SoundManager = value; }
    }


    //////////////////////////////////////////////////////////////////////////
    //网络管理器 --暂时放这里
    //////////////////////////////////////////////////////////////////////////
    private NetManager m_NetManager;
    public NetManager NetManager
    {
        get { return m_NetManager; }
        set { m_NetManager = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //主角在游戏中一直存在的数据
    //////////////////////////////////////////////////////////////////////////
    private PlayerData m_PlayerDataPool;
    public PlayerData PlayerDataPool
    {
        get { return m_PlayerDataPool; }
        set { m_PlayerDataPool = value; }
    }
    //MobileHardwareInfo
    //////////////////////////////////////////////////////////////////////////
    //其他玩家的数据
    //////////////////////////////////////////////////////////////////////////
    private OtherPlayerData m_OtherPlayerData;
    public OtherPlayerData OtherPlayerData
    {
        get { return m_OtherPlayerData; }
        set { m_OtherPlayerData = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //自动寻路数据
    //////////////////////////////////////////////////////////////////////////
    private AutoSearchAgent m_AutoSearch;
    public AutoSearchAgent AutoSearch
    {
        get { return m_AutoSearch; }
        set { m_AutoSearch = value; }
    }

    public int m_RunningScene = 0;
    public int RunningScene
    {
        get { return m_RunningScene; }
        set { 
			if (m_RunningScene != (int)GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE)
			{
				m_LastRunningScene = m_RunningScene;
			}
			m_RunningScene = value; 
		}
    }

	/// <summary>
	/// 上一个场景ID
	/// </summary>
	public int m_LastRunningScene = 0;
	/// <summary>
	/// 上一个场景ID
	/// </summary>
	public int LastRunningScene
	{
		get { return m_LastRunningScene; }
	}

    private ResourcesManager m_ResourcesManager;

    //////////////////////////////////////////////////////////////////////////
    //语音识别
    //////////////////////////////////////////////////////////////////////////
    //     private SpeechEngine m_SpeechEngineManager;
    //     public SpeechEngine SpeechEngineManager
    //     {
    //         get { return m_SpeechEngineManager; }
    //         set { m_SpeechEngineManager = value; }
    //     }

    // 本想使用异步回调， 但考虑到项目现有整体机制， 想了又想，还是先注释掉吧
    public delegate void InitDataFinishDelegate();
    public delegate void LoadRawDataFinishDelegate(byte[] bytes);

    public LoadRawDataFinishDelegate rawDataCallback;
    public InitDataFinishDelegate initDataCallback;

    private string strRawPath = "";
    public int m_MaxErrorNum = 5;//最大容错次数
    public WWW rawWWW = null;
    public int m_loadErrorNum = 0;

    #endregion

	// 不要写Monobehaviour的构造函数
	// 当这个monobehaviour被从prefab中反序列化出来的时候，构造函数会被执行两次，第一次在Resource.Load时，第二次在Instantiate时
//    private GameManager()
//    {
//        m_ActiveScene = new ActiveScene();
//        m_MissionManager = new MissionManager();
//		m_TableManager = new TableManager();
//        m_UILoadResource = new UILoadResource();
//        m_PlayerDataPool = new PlayerData();
//        m_OtherPlayerData = new OtherPlayerData();
//    }

	/// <summary>
	/// 初始化数据，代替原来的构造函数，只能由SceneLogic调用（因为GameManager实例在SceneLogic里创建）
	/// </summary>
	public void Init ()
	{
		if (dataInitialized) return;

        m_ActiveScene = new ActiveScene();
		m_FlyWingMananger = new FlyWingMananger ();
        m_MissionManager = new MissionManager();
		m_TableManager = new TableManager();
        m_PlayerDataPool = new PlayerData();
        m_OtherPlayerData = new OtherPlayerData();

		dataInitialized = true;
	}

	// Awake
	void Awake()
	{
        //为gameManager赋值，所有的其他操作都要放在后面
        if (null != gameManager)
        {
            Destroy(this.gameObject);
        }		
        gameManager = this;
        DontDestroyOnLoad(this.gameObject);
	}
	
	// Use this for initialization
	void Start ()
	{
	    m_loadErrorNum = 0;
        //如果单机版
        //if (OnLineState == false)
        //{
        //    InitGame();
        //}
        InitGame();
    }
	
	// Update is called once per frame
	void Update () 
	{
         //处理事件
        Singleton<EventSystem>.GetInstance().UpdateDelayEventQueue();
        
        //更新ActiveScene
        if (null != m_ActiveScene)
        {
            m_ActiveScene.Update();
        }

        // 更新CutSceneManager
        Singleton<Cutscene.CutsceneManager>.Instance.Update(Time.deltaTime);
        // 更新CameraManager
        Singleton<CameraManager>.Instance.Update(Time.deltaTime);
        ResourcesManager.Instance.Update();
	}

    //玩家状态改变之后全局变量清理工作，为玩家重新上线做准备
    //适用范围包括玩家掉线，切换角色，切换帐号
    public void PlayerStateChange()
    {
        //清理PlayerDataPool
        GameManager.gameManager.PlayerDataPool.CleanUp();
		GameManager.gameManager.PlayerDataPool.Init();
		//Clean Damage Board
		DamageBoardManager.ClearDamageDictionary();
        //清理邮件缓存
        MailData.CleanMailData();

        PushNotification.ClearPushNotificationInfo();

        GameManager.gameManager.SoundManager.ChangeSoundState();
    }

    void OnDestroy()
    {
        ClearGame();
    }

	public void InitGame()
	{
		if(!GlobeVar.s_FirstInitGame)
		{
			return;
		}
        if (false == InitGlobeManager())
        {
            LogModule.ErrorLog("Init Globe Manager Failed");
        }

        //初始化全局管理器
        m_SoundManager = this.gameObject.AddComponent<SoundManager>();

        //测试
        m_NetManager = this.gameObject.AddComponent<NetManager>();

        //自动寻路代理
        m_AutoSearch = this.gameObject.AddComponent<AutoSearchAgent>();
        ///初始化资源管理
	    ResourcesManager.Instance.Init();

        //语音识别
        //m_SpeechEngineManager = this.gameObject.AddComponent<SpeechEngine>();

        //默认进入Login状态
        //GameStatus = Games.GlobeDefine.GameDefine_Globe.GAMESTATUS.GAMESTATUS_LOGIN;

        //设置为非第一次进入游戏
        GlobeVar.s_FirstInitGame = false;

		//从这里开始添加其他操作
		if(null != m_TableManager)
		{
			m_TableManager.InitTable();
		}

        //加载隐身shader
        if (m_ShaderForStealth ==null)
        {
            m_ShaderForStealth = Shader.Find("Transparent/Diffuse");
        }
	}

    //初始化全局管理器
    bool InitGlobeManager()
    {
        bool bRet = true;

        ////初始化Scene Manager
        //if (null != m_ActiveScene)
        //{
        //    bRet = m_ActiveScene.Init();
        //    if (bRet)
        //    {
        //        LogModule.DebugLog("InitSceneManager OK");
        //    }
        //    else
        //    {
        //        LogModule.DebugLog("InitSceneManager Failed");
        //    }
        //}
        //else
        //{
        //    LogModule.DebugLog("New SceneManager Failed");
        //}

        //初始化EventSystem
        Singleton<EventSystem>.GetInstance().Init();

        // 初始化CutSceneManager
		Singleton<Cutscene.CutsceneManager>.Instance.Init();
        // 初始化CameraManager
        Singleton<CameraManager>.Instance.Init();

        return bRet;
    }

    /// <summary>
    /// 清理接口
    /// </summary>
    private void ClearGame()
    {
		Singleton<Cutscene.CutsceneManager>.Instance.Clear();
        Singleton<CameraManager>.Instance.Clear();
    }

#region 弃用方法
    public void GetRawData(string strPath)
    {
        m_loadErrorNum ++;
        strRawPath = strPath;
        
        StartCoroutine(GetWWWRawData());
    }

    public IEnumerator GetWWWRawData()
    {
        rawWWW = new WWW(strRawPath);
        yield return rawWWW;

        bool isError = string.IsNullOrEmpty(rawWWW.error);
        if (!isError)
        {
            //LogModule.DebugLog("Raw Data WWW Error" + rawWWW.url);
            //资源加载过程中发生错误。结束本次资源加载，重新请求资源加载。

            rawWWW.Dispose();
            rawWWW = null;

            if (m_loadErrorNum > m_MaxErrorNum)
            {
                rawDataCallback(null);
                initDataCallback();
            }
            //else
            //{
            //    if (ActiveScene != null)
            //    {
            //        //SetTerrainData
            //        ActiveScene.SetTerrainData();
            //    }
            //}
        }
        else
        {
            rawDataCallback(rawWWW.bytes);
            initDataCallback();
        }
    }
#endregion
}
