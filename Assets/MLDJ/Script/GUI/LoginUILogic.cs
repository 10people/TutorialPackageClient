//********************************************************************
// 文件名: LoginUILogic.cs
// 描述: 登录界面逻辑
// 作者: WangZhe
// 创建时间: 2013-11-1
//
// 修改历史:
// 2013-11-1 王喆创建
//********************************************************************

using System;
using Games.Item;
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.Events;
using Games.LogicObj;
using GCGame;
using GCGame.Table;
using Module.Log;
using System.Collections.Generic;
using Games.Animation_Modle;
using Random = UnityEngine.Random;

public class LoginUILogic : MonoBehaviour
{
    public GameObject Camera3D;
    //public GameObject m_Camera3DUI;
    public UpdateLoadingBar m_UpdateLoadingBar;
    public GameObject m_ResDownloadTip;
    public UILabel m_LabelResDownloadTip;

    public GameObject m_CameraUI;
    public GameObject m_CameraChooseRole;
    //public GameObject m_CameraCreateRole;
    //public GameObject m_ObjCreateRoleBack;

    public GameObject[] m_ModelChooseRole;
    public GameObject[] m_ClickEffect;
    private int curRoleIndex = -1;

    private GameObject m_curController;
    private UpdateHelper m_curUpdateHelper;
    private bool m_bUpdating = false;
    private UpdateHelper.UpdateStep m_lastUpateStep = UpdateHelper.UpdateStep.NONE;
    
    public GameObject m_BackgroundTex;
    //public Animation m_CameraAni;
    //public List<BoxCollider> m_RoleCollider = new List<BoxCollider>();

    //public GameObject m_OpeningScene;
    //public GameObject m_XiaoYaoModel;
    //public GameObject m_TianShanModel;
    //public GameObject m_ShaoLinModel;
    //public GameObject m_DaLiModel;
    //public GameObject m_GaiBangModel;

    //public EffectLogic m_XiaoYaoEffect;
    //public EffectLogic m_TianShanEffect;
    //public EffectLogic m_ShaoLinEffect;
    //public EffectLogic m_DaLiEffect;
    //public EffectLogic m_GaiBangEffect;

    //public GameObject m_XiaoYaoSpecialEffect;
    //public MeshRenderer m_RoleCreateShader;

    //public TweenPosition[] m_ArrayLoadingBackGround;
    //public GameObject m_RoleProfessionEffect;

    //public GameObject[] CreateRoleHideObjs;

    public static int m_LoginSelect = 0;    //正常登陆：0，账号:1,角色2

    private int m_RoleType = GlobeVar.INVALID_ID;
    private int m_RoleModelVisualID = GlobeVar.INVALID_ID;
    private int m_RoleWeaponID = GlobeVar.INVALID_ID;
    private int m_RoleWeaponEffectGem = GlobeVar.INVALID_ID;
    private bool m_RoleClick = false;
    private bool m_BeginChangeBlack = false;
    private bool m_bDonwloadFile = false;

#if UNITY_ANDROID
    private bool m_bShowWarnning = false;
#endif

    private static bool m_bFirstEnterGame = true;
    private static LoginUILogic m_instance;
    public static LoginUILogic Instance()
    {
        return m_instance;
    }

    void Awake()
    {
        m_instance = this;

#if !UNITY_EDITOR && UNITY_ANDROID 
        //关闭垂直同步
        QualitySettings.vSyncCount = 0;
#endif
        // 禁止屏幕自动黑屏
        PlatformHelper.SetScreenCanAutoLock(false);
        // 限制帧率30帧
        Application.targetFrameRate = 30;

#if UNITY_EDITOR
        LoginData.m_bEnableTestAccount = true;
        LoginData.m_strTestAccount = PlayerPreferenceData.LastAccount;
        if (string.IsNullOrEmpty(LoginData.m_strTestAccount))
        {
            LoginData.m_strTestAccount = Random.Range(0, 10000).ToString();
        }
#endif

#if UNITY_ANDROID
        if (PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.TEST)
        {
            LoginData.m_bEnableTestAccount = true;
            LoginData.m_strTestAccount = PlayerPreferenceData.LastAccount;
            if (string.IsNullOrEmpty(LoginData.m_strTestAccount))
            {
                LoginData.m_strTestAccount = Random.Range(0, 10000).ToString();
            }
        }

        //安卓下由于点登录的时候会卡住，所以屏蔽掉输帐号界面的动画
        //if (null != m_ArrayLoadingBackGround)
        //{
        //    for (int i = 0; i < m_ArrayLoadingBackGround.Length; ++i)
        //    {
        //        m_ArrayLoadingBackGround[i].enabled = false;
        //    }
        //}
#endif
    }

    void Start()
    {
#if !UNITY_WP8
        StartCoroutine(BeginInitGame());
#else
        WPBeginInitGame();
#endif
	}

    void OnDestroy()
    {
        m_instance = null;
    }

    // 初始化游戏
	IEnumerator BeginInitGame()
	{
        if (m_bFirstEnterGame)
        {
            Caching.CleanCache();
            m_bFirstEnterGame = false;
        }

        // 第一次启动播放CG
        if (PlayerPreferenceData.IsAppFirstRun)
        {
            PlayerPreferenceData.IsAppFirstRun = false;
//#if !UNITY_EDITOR && !UNITY_STANDALONE_WIN
//            if(PlatformHelper.GetChannelType() != PlatformHelper.ChannelType.IOS_91)
//            {
//                Handheld.PlayFullScreenMovie("CG_TLBB.mp4", Color.black, FullScreenMovieControlMode.CancelOnInput);
//                yield return new WaitForSeconds(0.1f);
//            }
//#endif
            //UserConfigData.SetSystemDefault();
        }

		PlatformHelper.AppStart();
        PlatformHelper.SendUserAction(UserBehaviorDefine.AppStart);

        m_CameraUI.SetActive(true);

        m_UpdateLoadingBar.gameObject.SetActive(true);
        m_UpdateLoadingBar.SetLoadingPrecent(0);
        m_UpdateLoadingBar.SetStateString("");

		BeginCheckRes();

        yield return null;
	}
	
    //void OnDoDownload()
    //{
    //    m_bDonwloadFile = true;
    //    m_ResDownloadTip.SetActive(false);
    //    m_curUpdateHelper.DownloadCurFileList();
    //}

    //void OnCancelDownload()
    //{
    //    m_ResDownloadTip.SetActive(false);
    //    //  更新失败 : 用户取消下载
    //    m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(19));
    //}

    //IEnumerator RequestiADFlag()
    //{
    //    WWW wwwiADFlag = new WWW(DownloadHelper.AddTimestampToUrl(GameDefines.FlagiADUrl));
    //    yield return wwwiADFlag;
    //    if (string.IsNullOrEmpty(wwwiADFlag.error))
    //    {

    //        string iadFlag = wwwiADFlag.text;
    //        string[] strCol = iadFlag.Split('\t');
    //        int nFlag = 0;
    //        int nGameVersion = 0;
    //        int nProgramVersion = 0;
    //        LogModule.DebugLog("load iad flag success:" + iadFlag);
    //        if (strCol.Length >= 3 && int.TryParse(strCol[0], out nFlag) && int.TryParse(strCol[1], out nGameVersion) && int.TryParse(strCol[2], out nProgramVersion))
    //        {
    //            if (nFlag == 1 && nGameVersion == PlatformHelper.GetGameVersion() && nProgramVersion == PlatformHelper.GetProgramVersion())
    //            {
    //                PlatformHelper.StartAD();
    //            }
    //        }

    //    }
    //}


    IEnumerator RequestServerList()
    {
        PlatformHelper.SendUserAction(UserBehaviorDefine.RequestServerList);
        // 请求服务器列表
        m_UpdateLoadingBar.SetLoadingPrecent(0);
        // 正在请求服务器列表
        m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(20));

        if (LoginData.serverListData.Count > 0)
        {
            // 读取服务器列表，保存服务器信息
            m_UpdateLoadingBar.SetLoadingPrecent(0.5f);
            //请求列表成功，正在准备资源;
            m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(21));
            yield return StartCoroutine(BeignLoadRes());
            yield break;
        }

        bool bLoadServerListSuccess = false;
        int nTryLoadServerListTime = 3;

        WWW wwwServerList = null;
        while (nTryLoadServerListTime > 0)
        {
            wwwServerList = null;
            yield return StartCoroutine(DownloadHelper.GetCDNWWW(PlatformHelper.GetServerListUrl(), value => wwwServerList = value, false));
            if(!string.IsNullOrEmpty(wwwServerList.error))
            {
                nTryLoadServerListTime--;
            }
            else
            {
                bLoadServerListSuccess = true;
                break;
            }
        }

        if (!bLoadServerListSuccess || null == wwwServerList)
        {
            //服务器列表请求失败
            m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(22));
            LogModule.ErrorLog("update server list fail " + wwwServerList.error);
        }
        else
        {
            // 读取服务器列表，保存服务器信息
            m_UpdateLoadingBar.SetLoadingPrecent(0.5f);
            //  请求列表成功，正在准备资源
            m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(23));
            LoginData.serverListData.Clear();
            LoginData.serverPageData.Clear();

            string serverListTxt = wwwServerList.text;
            string[] rowDatas = serverListTxt.Split('\n');
            int jumpLineCount = 4; // IPList表格跳过前4行
            foreach (string curLine in rowDatas)
            {
                if (jumpLineCount > 0)
                {
                    jumpLineCount--;
                    continue;
                }
                if (string.IsNullOrEmpty(curLine))
                    continue;

                string[] strCols = curLine.Split('\t');
                bool bAddCurData = false;
                if (strCols.Length != 8)
                {
                    // 特殊判断，测试服务器,判定版本号
                    if (strCols.Length == 12)
                    {
                        int gameVersion = 0;
                        int programVersion = 0;
                        int publicVersion = 0;
                        int resVersion = 0;

                        if (int.TryParse(strCols[8], out gameVersion) &&
                            int.TryParse(strCols[9], out programVersion) &&
                            int.TryParse(strCols[10], out publicVersion) &&
                            int.TryParse(strCols[11], out resVersion))
                        {
                            if (gameVersion == PlatformHelper.GetGameVersion() &&
                                programVersion == PlatformHelper.GetProgramVersion() &&
                                resVersion == UserConfigData.ClientResVersion)
                            {
                                bAddCurData = true;
                            }
                        }
                        else
                        {
                            LogModule.ErrorLog("special server data col error");
                        }
                    }
                    else
                    {
                        LogModule.ErrorLog("server data col error");
                    }

                }
                else
                {
                    bAddCurData = true;
                }

                if (bAddCurData)
                {
                    LoginData.ServerListData newData = new LoginData.ServerListData(strCols[0], strCols[2], strCols[3], strCols[4], strCols[5], strCols[6]);
                    LoginData.serverListData.Insert(0, newData);
                    if (strCols[7].Length > 2)
                    {
                        LogModule.DebugLog(strCols[7]);
                        LoginData.serverPageData.Add(new LoginData.ServerPageData(LoginData.serverListData.Count-1, strCols[7]));
                    }
                }
            }

            yield return StartCoroutine(BeignLoadRes());
        }
    }

    IEnumerator BeignLoadRes()
    {
        PlatformHelper.SendUserAction(UserBehaviorDefine.BeginLoadingRes);
        // 按照ID大小从小到大排列
       // LoginData.serverListData.Sort();
        LogModule.DebugLog("begin loading");
        // 载入资源

        //m_CameraCreateRole.SetActive(true);

        m_UpdateLoadingBar.SetLoadingPrecent(0.85f);
        //  载入字体资源
        m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(24));

        yield return StartCoroutine(BundleManager.LoadFontUI());
        m_UpdateLoadingBar.SetLoadingPrecent(0.9f);
        //载入通用资源
        m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(25));

        yield return StartCoroutine(BundleManager.LoadCommonUI());
        m_UpdateLoadingBar.SetLoadingPrecent(0.95f);
        yield return StartCoroutine(BundleManager.LoadLoginUI());
        m_UpdateLoadingBar.SetLoadingPrecent(0.99f);
        //正在准备资源，即将进入游戏
        m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(26));

        yield return new WaitForSeconds(1.0f);

        GameManager.gameManager.InitGame();

        // 初始化UI
        InitUI();
    }

    void InitUI()
    {

#if UNITY_ANDROID
		if(m_bShowWarnning)
		{
			m_bShowWarnning = false;
			string ret = AndroidHelper.platformHelper("shouldShowWarnning");
			if(ret.EndsWith("1"))
			{
				//MessageBoxLogic.OpenOKBox("您的机型目前我们还未做优化处理，游戏过程中可能会遇到一些小问题，请谅解");
				MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{3065}"), "");
			}
		}
#endif
        GameManager.gameManager.SceneLogic.PlaySceneMusic();

        if (m_LoginSelect == 1)
        {
#if UNITY_ANDROID && !UNITY_EDITOR
            if (PlatformHelper.GetChannelType() != PlatformHelper.ChannelType.TEST)
            {
                LoginData.accountData.CleanData();
                PlatformHelper.ChangeAccount();
            }
#else
            LoginData.accountData.CleanData();
            PlatformHelper.UserLogout();
#endif
            EnterServerChoose();
        }
        else if (m_LoginSelect == 2)
        {
            EnterChooseRole();
        }
        else
        {
            PlatformHelper.SendUserAction(UserBehaviorDefine.ServerChoose_Show);
            EnterServerChoose();
        }
        UIManager.ShowUI(UIInfo.CentreNotice);

        m_LoginSelect = 0;
    }

    void Update()
    {
        //if (m_bUpdating  && null != m_curUpdateHelper)
        //{
        //    if (m_curUpdateHelper.CurUpdateStep != m_lastUpateStep)
        //    {
        //        switch (m_curUpdateHelper.CurUpdateStep)
        //        {
        //            case UpdateHelper.UpdateStep.CheckVersion:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0);
        //                // 正在检查资源版本信息
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(0));
        //                break;
        //            case UpdateHelper.UpdateStep.GetFileList:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.1f);
        //                // 正在获取文件列表
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(1));
        //                break;
        //            case UpdateHelper.UpdateStep.CompareRes:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.2f);
        //                // 正在比对资源
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(2));

        //                break;
        //            case UpdateHelper.UpdateStep.AskIsDonwload:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.3f);
        //                // 正在下载资源
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(3));
        //                int totleNeedDownload = (int)(m_curUpdateHelper.DownloadTotalSize / 1024.0f) + 1;

        //                // 大于2M询问是否下载，小于直接进入下载流程
        //                if (totleNeedDownload > 2048)
        //                {
        //                    m_ResDownloadTip.SetActive(true);
        //                    // "需要下载" + ((int)(m_curUpdateHelper.DownloadTotalSize / 1024.0f) + 1).ToString()+ "K, 是否下载?"
        //                    m_LabelResDownloadTip.text = string.Format(UpdateTips.GetTipByID(4), totleNeedDownload);           
        //                }
        //                else
        //                {
        //                    OnDoDownload();
        //                }
                        
        //                break;
        //            case UpdateHelper.UpdateStep.DownloadRes:
        //                break;
        //            case UpdateHelper.UpdateStep.CheckRes:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.9f);
        //                // 正在验证资源
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(5));

        //                break;
        //            case UpdateHelper.UpdateStep.CopyRes:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.95f);
        //                // 正在准备资源
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(6));
        //                break;
        //            case UpdateHelper.UpdateStep.CleanCache:
        //                m_UpdateLoadingBar.SetLoadingPrecent(0.98f);
        //                // 正在清理缓存
        //                m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(7));
        //                break;
        //            case UpdateHelper.UpdateStep.FINISH:
        //                if (m_curUpdateHelper.CurUpdateResult == UpdateHelper.UpdateResult.Success)
        //                {
        //                    m_UpdateLoadingBar.SetLoadingPrecent(1);
        //                    // 资源更新完成
        //                    m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(8));
        //                    FinishCheckRes(true);
        //                }
        //                else
        //                {
        //                    FinishCheckRes(false);
        //                    // 更新失败 ：详细信息
        //                    m_UpdateLoadingBar.SetStateString(UpdateTips.GetTipByID(9) + " : " + UpdateTips.GetUpdateErrorTip(m_curUpdateHelper.CurUpdateResult));
        //                }
                        
        //                break;
        //        }
        //        //Debug.LogError(m_curUpdateHelper.CurUpdateStep.ToString());
        //        m_lastUpateStep = m_curUpdateHelper.CurUpdateStep;
        //    }

        //    if (m_lastUpateStep == UpdateHelper.UpdateStep.DownloadRes)
        //    {
        //        m_UpdateLoadingBar.SetLoadingPrecent(0.3f + 0.6f * ((float)m_curUpdateHelper.CurDownloadSize/(float)m_curUpdateHelper.DownloadTotalSize));
        //        //m_UpdateLoadingBar.SetStateString("正在下载资源 " + m_curUpdateHelper.CurDownloadSize / 1024 + "KB/" + m_curUpdateHelper.DownloadTotalSize / 1024 + " KB");
        //        m_UpdateLoadingBar.SetStateString(string.Format(UpdateTips.GetTipByID(10), m_curUpdateHelper.CurDownloadSize / 1024, m_curUpdateHelper.DownloadTotalSize / 1024));
           
        //    } 
        //}

        //if (m_CameraAni.IsPlaying("shexiangji_huangdong"))
        //{
        //    if (!m_BeginChangeBlack)
        //    {
        //        m_BeginChangeBlack = true;
        //    }
        //}

        //if (m_BeginChangeBlack)
        //{
        //    if (!m_RoleClick)
        //    {
        //        if (m_RoleCreateShader.material.color.a < 1)
        //        {
        //            m_RoleCreateShader.material.color += new Color(0, 0, 0, 0.02f);
        //        }
        //    }
        //    else
        //    {
        //        if (m_RoleCreateShader.material.color.a > 0.12f)
        //        {
        //            m_RoleCreateShader.material.color -= new Color(0, 0, 0, 0.02f);
        //        }
        //    }
        //}
    }

    //public void EnterGame()
    //{

    //}

	public void BeginCheckRes()
	{
		FinishCheckRes(true);
	}
	
	public void LoginSuccess ()
	{
		//m_CameraCreateRole.SetActive(false);
		PlatformHelper.ShowAD(false);
		m_UpdateLoadingBar.gameObject.SetActive(false);
		if (m_bDonwloadFile)
		{
			// 重新加载表格
			GameManager.gameManager.TableManager.InitTable();
		}

        if ( LoginUILogic.Instance() )
        {
            if (LoginData.loginRoleList.Count > 0)
            {
                LoginUILogic.Instance().EnterChooseRole();
            }
            else
            {
                LoginUILogic.Instance().EnterCreateRole();
            }
        }

        //LoginUILogic.Instance().EnterChooseRole();

        PlatformHelper.SendUserAction(UserBehaviorDefine.UserID + LoginData.accountData.m_userID);
        PlatformHelper.SendUserAction(UserBehaviorDefine.AccountLogin);		
		PlatformHelper.OnAccountLogin(PlayerPreferenceData.LastServer.ToString(), LoginData.accountData.m_userID);
	}
	
	public void FinishCheckRes(bool bSuccess)
    {
		if(bSuccess)
		{
            //if (PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_APPSTORE)
            //{
            //    StartCoroutine(RequestiADFlag());
            //}

			// 获取公告信息
            //LoginUpdateInfo.m_IsShow = false;
            //string strDate = PlatformHelper.getCurrentDate();
            //if (PlayerPreferenceData.LastTime != strDate)
            //{
            //    PlayerPreferenceData.LastTime = strDate;
            //    LoginUpdateInfo.m_IsShow = true;
            //    LoginUpdateInfo.m_bRequesting = true;

            //    if (string.IsNullOrEmpty(PlatformHelper.GetGengxinInfoURL()))
            //    {
            //        StartCoroutine(RequestCommonGengxinInfo());
            //    }
            //    else
            //    {
            //        StartCoroutine(RequestGengxinInfo());
            //    }
            //}
            //strDate = null;
            LoginUpdateInfo.m_IsShow = false;
            string strDate = PlatformHelper.getCurrentDate();
            if (PlayerPreferenceData.LastTime != strDate)
            {
                PlayerPreferenceData.LastTime = strDate;
                LoginUpdateInfo.m_IsShow = true;
                LoginUpdateInfo.m_bRequesting = true;

                if (string.IsNullOrEmpty(PlatformHelper.GetGengxinInfoURL()))
                {
                    StartCoroutine(RequestCommonGengxinInfo());
                }
                else
                {
                    StartCoroutine(RequestGengxinInfo());
                }
            }
			strDate = null;

			StartCoroutine(RequestServerList());
		}

	}

    public void EnterServerChoose()
    {
        UIManager.ShowUI(UIInfo.ServerChoose, OnShowServerChoose);
        UIManager.CloseUI(UIInfo.QueueWindow);
    }

    void OnShowServerChoose(bool bSucces, object param)
    {
        ShowFirstUI();

		if (ServerChooseController.Instance())
			ServerChooseController.Instance().showGroundPic();
    }

    public void EnterAccount()  
    {
        if (PlatformHelper.GetChannelType() != PlatformHelper.ChannelType.TEST && !LoginData.m_bEnableTestAccount)
		{
			PlatformHelper.SendUserAction(UserBehaviorDefine.LoginGetToken);
			if (PlatformListener.m_bReceiveNewLoginData)
			{
				PlatformListener.SendLoginInfo();
			}
			else
			{
				PlatformHelper.UserLogin();
			}
		}
		else
		{
			LoginData.accountData.SetTestData(LoginData.m_strTestAccount);
			NetManager.SendUserLogin(LoginData.Ret_Login, false);
		}

    }

    public void EnterChooseRole()//角色选择
    {
    ////    PlaneBack.SetActive(true);
        UIManager.CloseUI(UIInfo.QueueWindow);
        UIManager.ShowUI(UIInfo.RoleChoose, OnShowServerChoose);
        PlatformHelper.SendUserAction(UserBehaviorDefine.EnterChooseRole);
    }
	
    //void OnShowChooseRole(bool bSucces, object param)
    //{
    //    m_UpdateLoadingBar.gameObject.SetActive(false);
		
    //}

    public void EnterCreateRole()
    {
        PlatformHelper.SendUserAction(UserBehaviorDefine.RoleCreateShow);
        UIManager.ShowUI(UIInfo.RoleCreate);
//         if (m_Camera3DUI != null)
//         {
//             m_Camera3DUI.SetActive(true);
//             m_CameraUI.SetActive(false);
//         }
    }


    //public float PlayCameraAni(string name)
    //{
    //    m_CameraAni.Play(name);
    //    return m_CameraAni[name].length;
    //}

    //public bool IsPlayingCameraAni()
    //{
    //    return m_CameraAni.isPlaying && !m_CameraAni.IsPlaying("shexiangji_huangdong");
    //}

    //public bool IsPlayingCameraAni(string aniname)
    //{
    //    return m_CameraAni.isPlaying && m_CameraAni.IsPlaying(aniname);
    //}

    public void CreateRoleClick(string strChooseRole)
    {
        //for (int i = 0; i < m_RoleCollider.Count; ++i)
        //{
        //    m_RoleCollider[i].enabled = false;
        //}

        //m_OpeningScene.SetActive(false);
        //m_ObjCreateRoleBack.SetActive(true);
        //m_RoleClick = true;

        //for(int i=0; i<CreateRoleHideObjs.Length; i++)
        //{
        //    CreateRoleHideObjs[i].SetActive(true);
        //}
        //if (strChooseRole.Contains("XiaoYao"))
        //{
        //    m_XiaoYaoModel.SetActive(true);
        //    m_TianShanModel.SetActive(false);
        //    m_ShaoLinModel.SetActive(false);
        //    m_DaLiModel.SetActive(false);
        //    m_GaiBangModel.SetActive(false);
        //    m_XiaoYaoModel.GetComponent<Animation>().Play("Xiaoyao_Selected");
        //    GameManager.gameManager.SoundManager.PlaySoundEffect(116);  //login_xiaoyao
        //    m_XiaoYaoModel.GetComponent<Animation>().PlayQueued("Xiaoyao_Selected_Loop");

        //    //m_XiaoYaoEffect.ClearEffect();
        //    //m_TianShanEffect.ClearEffect();
        //    //m_ShaoLinEffect.ClearEffect();
        //    //m_DaLiEffect.ClearEffect();
        //    //m_GaiBangEffect.ClearEffect();

        //    //m_XiaoYaoEffect.InitEffect(m_XiaoYaoEffect.gameObject);
        //    //m_XiaoYaoEffect.PlayEffect(236);
        //    m_XiaoYaoSpecialEffect.SetActive(true);
        //}
        //else if (strChooseRole.Contains("Tianshan"))
        //{
        //    m_XiaoYaoModel.SetActive(false);
        //    m_TianShanModel.SetActive(true);
        //    m_ShaoLinModel.SetActive(false);
        //    m_DaLiModel.SetActive(false);
        //    m_GaiBangModel.SetActive(false);
        //    m_TianShanModel.GetComponent<Animation>().Play("Tianshan_Selected");
        //    GameManager.gameManager.SoundManager.PlaySoundEffect(114);  //login_tianshan
        //    m_TianShanModel.GetComponent<Animation>().PlayQueued("Tianshan_Selected_Loop");

        //    //m_XiaoYaoEffect.ClearEffect();
        //    //m_TianShanEffect.ClearEffect();
        //    //m_ShaoLinEffect.ClearEffect();
        //    //m_DaLiEffect.ClearEffect();
        //    //m_GaiBangEffect.ClearEffect();

        //    //m_TianShanEffect.InitEffect(m_TianShanEffect.gameObject);
        //    //m_TianShanEffect.PlayEffect(232);
        //    //m_TianShanEffect.PlayEffect(233);
        //    m_XiaoYaoSpecialEffect.SetActive(false);
        //}
        //else if (strChooseRole.Contains("ShaoLin"))
        //{
        //    m_XiaoYaoModel.SetActive(false);
        //    m_TianShanModel.SetActive(false);
        //    m_ShaoLinModel.SetActive(true);
        //    m_DaLiModel.SetActive(false);
        //    m_GaiBangModel.SetActive(false);
        //    m_ShaoLinModel.GetComponent<Animation>().Play("Shaolin_Selected");
        //    GameManager.gameManager.SoundManager.PlaySoundEffect(113);  //login_shaolin
        //    m_ShaoLinModel.GetComponent<Animation>().PlayQueued("Shaolin_Selected_Loop");

        //    //m_XiaoYaoEffect.ClearEffect();
        //    //m_TianShanEffect.ClearEffect();
        //    //m_ShaoLinEffect.ClearEffect();
        //    //m_DaLiEffect.ClearEffect();
        //    //m_GaiBangEffect.ClearEffect();

        //    //m_ShaoLinEffect.InitEffect(m_ShaoLinEffect.gameObject);
        //    //m_ShaoLinEffect.PlayEffect(230);
        //    //m_ShaoLinEffect.PlayEffect(231);
        //    m_XiaoYaoSpecialEffect.SetActive(false);
        //}
        //else if (strChooseRole.Contains("DaLi"))
        //{
        //    m_XiaoYaoModel.SetActive(false);
        //    m_TianShanModel.SetActive(false);
        //    m_ShaoLinModel.SetActive(false);
        //    m_DaLiModel.SetActive(true);
        //    m_GaiBangModel.SetActive(false);
        //    m_DaLiModel.GetComponent<Animation>().Play("Dali_Selected");
        //    GameManager.gameManager.SoundManager.PlaySoundEffect(115);  //login_dali
        //    m_DaLiModel.GetComponent<Animation>().PlayQueued("Dali_Selected_Loop");

        //    //m_XiaoYaoEffect.ClearEffect();
        //    //m_TianShanEffect.ClearEffect();
        //    //m_ShaoLinEffect.ClearEffect();
        //    //m_DaLiEffect.ClearEffect();
        //    //m_GaiBangEffect.ClearEffect();

        //    //m_DaLiEffect.InitEffect(m_DaLiEffect.gameObject);
        //    //m_DaLiEffect.PlayEffect(234);
        //    //m_DaLiEffect.PlayEffect(235);
        //    m_XiaoYaoSpecialEffect.SetActive(false);
        //}
        //else if (strChooseRole.Contains("GaiBang"))
        //{
        //    m_XiaoYaoModel.SetActive(false);
        //    m_TianShanModel.SetActive(false);
        //    m_ShaoLinModel.SetActive(false);
        //    m_DaLiModel.SetActive(false);
        //    m_GaiBangModel.SetActive(true);
        //    m_GaiBangModel.GetComponent<Animation>().Play("Gaibang_Selected");
        //    GameManager.gameManager.SoundManager.PlaySoundEffect(151);  //login_gaibang
        //    m_GaiBangModel.GetComponent<Animation>().PlayQueued("Gaibang_Selected_Loop");

        //    //m_XiaoYaoEffect.ClearEffect();
        //    //m_TianShanEffect.ClearEffect();
        //    //m_ShaoLinEffect.ClearEffect();
        //    //m_DaLiEffect.ClearEffect();
        //    //m_GaiBangEffect.ClearEffect();

        //    //m_GaiBangEffect.InitEffect(m_GaiBangEffect.gameObject);
        //    //m_GaiBangEffect.PlayEffect(338);
        //    m_XiaoYaoSpecialEffect.SetActive(false);
        //}
    }

    public void PlayRoleCreateOtherAni(string strChooseRole)
    {
        //if (strChooseRole.Contains("XiaoYao"))
        //{
        //    if (!m_XiaoYaoModel.GetComponent<Animation>().IsPlaying("Xiaoyao_Selected") &&
        //        !m_XiaoYaoModel.GetComponent<Animation>().IsPlaying("Xiaoyao_Selected_Click"))
        //    {
        //        m_XiaoYaoModel.GetComponent<Animation>().Play("Xiaoyao_Selected_Click");
        //        GameManager.gameManager.SoundManager.PlaySoundEffect(127);
        //        m_XiaoYaoModel.GetComponent<Animation>().PlayQueued("Xiaoyao_Selected_Loop");
        //    }
        //}
        //else if (strChooseRole.Contains("Tianshan"))
        //{
        //    if (!m_TianShanModel.GetComponent<Animation>().IsPlaying("Tianshan_Selected") &&
        //        !m_TianShanModel.GetComponent<Animation>().IsPlaying("Tianshan_Selected_Click"))
        //    {
        //        m_TianShanModel.GetComponent<Animation>().Play("Tianshan_Selected_Click");
        //        GameManager.gameManager.SoundManager.PlaySoundEffect(125);
        //        m_TianShanModel.GetComponent<Animation>().PlayQueued("Tianshan_Selected_Loop");
        //    }
        //}
        //else if (strChooseRole.Contains("ShaoLin"))
        //{
        //    if (!m_ShaoLinModel.GetComponent<Animation>().IsPlaying("Shaolin_Selected") &&
        //        !m_ShaoLinModel.GetComponent<Animation>().IsPlaying("Shaolin_Selected_Click"))
        //    {
        //        m_ShaoLinModel.GetComponent<Animation>().Play("Shaolin_Selected_Click");
        //        GameManager.gameManager.SoundManager.PlaySoundEffect(124);
        //        m_ShaoLinModel.GetComponent<Animation>().PlayQueued("Shaolin_Selected_Loop");
        //    }
        //}
        //else if (strChooseRole.Contains("DaLi"))
        //{
        //    if (!m_DaLiModel.GetComponent<Animation>().IsPlaying("Dali_Selected") &&
        //        !m_DaLiModel.GetComponent<Animation>().IsPlaying("Dali_Selected_Click"))
        //    {
        //        m_DaLiModel.GetComponent<Animation>().Play("Dali_Selected_Click");
        //        GameManager.gameManager.SoundManager.PlaySoundEffect(126);
        //        m_DaLiModel.GetComponent<Animation>().PlayQueued("Dali_Selected_Loop");
        //    }
        //}
        //else if (strChooseRole.Contains("GaiBang"))
        //{
        //    if (!m_GaiBangModel.GetComponent<Animation>().IsPlaying("Gaibang_Selected") &&
        //        !m_GaiBangModel.GetComponent<Animation>().IsPlaying("Gaibang_Selected_Click"))
        //    {
        //        m_GaiBangModel.GetComponent<Animation>().Play("Gaibang_Selected_Click");
        //        GameManager.gameManager.SoundManager.PlaySoundEffect(152);
        //        //m_GaiBangEffect.ClearEffect();
        //        //m_GaiBangEffect.InitEffect(m_GaiBangEffect.gameObject);
        //        //m_GaiBangEffect.PlayEffect(339);
        //        m_GaiBangModel.GetComponent<Animation>().PlayQueued("Gaibang_Selected_Loop");
        //    }
        //}
    }

    public void CreateRoleReChoose(bool isstart = false)
    {
        //for (int i = 0; i < m_RoleCollider.Count; ++i)
        //{
        //    m_RoleCollider[i].enabled = true;
        //}

        //for (int i = 0; i < CreateRoleHideObjs.Length; i++)
        //{
        //    CreateRoleHideObjs[i].SetActive(false);
        //}

        //m_OpeningScene.SetActive(true);
        //m_ObjCreateRoleBack.SetActive(false);
        //m_RoleClick = false;

        //if (!isstart)
        //{
        //    m_XiaoYaoModel.SetActive(true);
        //    m_XiaoYaoModel.GetComponent<Animation>().Play("Xiaoyao_Newpose_Loop");
        //    m_TianShanModel.SetActive(true);
        //    m_TianShanModel.GetComponent<Animation>().Play("Tianshan_Newpose_Loop");
        //    m_ShaoLinModel.SetActive(true);
        //    m_ShaoLinModel.GetComponent<Animation>().Play("Shaolin_Newpose_Loop");
        //    m_DaLiModel.SetActive(true);
        //    m_DaLiModel.GetComponent<Animation>().Play("Dali_Newpose_Loop");
        //    m_GaiBangModel.SetActive(true);
        //    m_GaiBangModel.GetComponent<Animation>().Play("Gaibang_Newpose_Loop");
        //}
        //else
        //{
        //    m_XiaoYaoModel.GetComponent<Animation>().PlayQueued("Xiaoyao_Newpose_Loop");
        //    m_TianShanModel.GetComponent<Animation>().PlayQueued("Tianshan_Newpose_Loop");
        //    m_ShaoLinModel.GetComponent<Animation>().PlayQueued("Shaolin_Newpose_Loop");
        //    m_DaLiModel.GetComponent<Animation>().PlayQueued("Dali_Newpose_Loop");
        //    m_GaiBangModel.GetComponent<Animation>().PlayQueued("Gaibang_Newpose_Loop");
        //}
        

        ////m_XiaoYaoEffect.ClearEffect();
        ////m_TianShanEffect.ClearEffect();
        ////m_ShaoLinEffect.ClearEffect();
        ////m_DaLiEffect.ClearEffect();
        ////m_GaiBangEffect.ClearEffect();
        //m_XiaoYaoSpecialEffect.SetActive(false);
    }

    public void ShowChooseRoleCamera()
    {
        m_BackgroundTex.SetActive(false);
        //m_CameraCreateRole.SetActive(false);
        m_CameraChooseRole.SetActive(true);
    }

    public void ShowCreateRoleCamera()
    {
        //m_BackgroundTex.SetActive(false);
        //m_CameraCreateRole.SetActive(true);
        //m_CameraChooseRole.SetActive(false);
        //m_RoleCreateShader.material.color = new Color(
        //    m_RoleCreateShader.material.color.r, 
        //    m_RoleCreateShader.material.color.g, 
        //    m_RoleCreateShader.material.color.b, 
        //    0.12f);
        //m_BeginChangeBlack = false;
        //m_CameraAni.Play("shexiangji");
        ////m_CameraAni.PlayQueued("shexiangji_huangdong");
    }

    public void ShowFirstUI()
    {
        //m_CameraChooseRole.SetActive(false);
		m_UpdateLoadingBar.gameObject.SetActive(false);
        m_BackgroundTex.SetActive(true);
    }


    public void CloseBackGroundTexUI()
    {
        NGUITools.SetActive(m_BackgroundTex, false);
    }

    public void ShowModel(int nType, int nModelVisualID, int nWeaponID, int nWeaponEffectGem,int nRoleindex)
    {
        m_RoleType = nType;
        m_RoleModelVisualID = nModelVisualID;
        m_RoleWeaponID = nWeaponID;
        m_RoleWeaponEffectGem = nWeaponEffectGem;

        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(m_RoleModelVisualID, 0);
        if (tabItemVisual == null)
        {
            tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
            if (tabItemVisual == null)
            {
                return;
            }
        }

        int nCharModelID = GlobeVar.INVALID_ID;
        if (m_RoleType == (int)CharacterDefine.PROFESSION.SHAOLIN)
        {
            nCharModelID = tabItemVisual.CharModelIDShaoLin;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.TIANSHAN)
        {
            nCharModelID = tabItemVisual.CharModelIDTianShan;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.DALI)
        {
            nCharModelID = tabItemVisual.CharModelIDDaLi;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.XIAOYAO)
        {
            nCharModelID = tabItemVisual.CharModelIDXiaoYao;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.GAIBANG)
        {
            nCharModelID = tabItemVisual.CharModelIDGaiBang;
        }

        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }
        curRoleIndex = nRoleindex;
        Singleton<ObjManager>.Instance.ReloadModel(m_ModelChooseRole[nRoleindex], tabCharModel.ResPath, OnLoadModel, tabCharModel.AnimPath);
    }

    public void OnLoadModel(string modelName, GameObject resObj, object param1, object param2, object param3 = null)
    {
        if (null == resObj)
        {
            return;
        }

        if (null == param1 || null == param2)
        {
            return;
        }

        GameObject objRoot = (GameObject)param1;
        string animationPath = (string)param2;

        if (null == objRoot)
        {
            return;
        }

        GameObject model = (GameObject)GameObject.Instantiate(resObj);
        if (null == model)
        {
            return;
        }
        else
        {
            model.name = "Model";
        }

        Obj_Character curCharacter = objRoot.GetComponent<Obj_Character>();
        if (curCharacter == null)
        {
            curCharacter = objRoot.AddComponent<Obj_Character>();
        }

        AnimationLogic curAnimLogic = objRoot.GetComponent<AnimationLogic>();
        if (curAnimLogic == null)
        {
            curAnimLogic = objRoot.AddComponent<AnimationLogic>();
        }
        curCharacter.AnimLogic = curAnimLogic;

        Singleton<ObjManager>.Instance.ReloadModel(objRoot, model, animationPath);
//         objRoot.transform.localRotation = Quaternion.Euler(new Vector3(0, 180.0f, 0));
//         objRoot.transform.localPosition = new Vector3(0, 0.65f, 0);
        m_ModelChooseRole[0].transform.localRotation = Quaternion.Euler(new Vector3(0, 180.0f, 0));
        m_ModelChooseRole[1].transform.localRotation = Quaternion.Euler(new Vector3(0, 180.0f, 0));
        m_ModelChooseRole[2].transform.localRotation = Quaternion.Euler(new Vector3(0, 165.0f, 0));

        m_ModelChooseRole[0].transform.localPosition = new Vector3(0, 0.65f, 0);
        m_ModelChooseRole[1].transform.localPosition = new Vector3(1.49f, 0.68f, 0.72f);
        m_ModelChooseRole[2].transform.localPosition = new Vector3(-1.54f, 0.68f, 0.87f);

        curAnimLogic.Play(0);

        ShowWeapon();
    }

    public void ShowWeapon()
    {
        bool defaultVisual = false;
        Tab_ItemVisual tabItemVisual = null;

        Tab_EquipAttr tabEquipAttr = TableManager.GetEquipAttrByID(m_RoleWeaponID, 0);
        if (tabEquipAttr == null)
        {
            defaultVisual = true;
        }
        else
        {
            tabItemVisual = TableManager.GetItemVisualByID(tabEquipAttr.ModelId, 0);
            if (tabItemVisual == null)
            {
                defaultVisual = true;
            }
        }

        if (defaultVisual)
        {
            tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
            if (tabItemVisual == null)
            {
                return;
            }
        }

        int nWeaponModelID = GlobeVar.INVALID_ID;
        if (m_RoleType == (int)CharacterDefine.PROFESSION.SHAOLIN)
        {
            nWeaponModelID = tabItemVisual.WeaponModelIDShaoLin;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.TIANSHAN)
        {
            nWeaponModelID = tabItemVisual.WeaponModelIDTianShan;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.DALI)
        {
            nWeaponModelID = tabItemVisual.WeaponModelIDDaLi;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.XIAOYAO)
        {
            nWeaponModelID = tabItemVisual.WeaponModelIDXiaoYao;
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.GAIBANG)
        {
            nWeaponModelID = tabItemVisual.WeaponModelIDGaiBang;
        }

        Tab_WeaponModel tabWeaponModel = TableManager.GetWeaponModelByID(nWeaponModelID, 0);
        if (tabWeaponModel == null)
        {
            return;
        }

        if (m_RoleType == (int)CharacterDefine.PROFESSION.TIANSHAN ||
            m_RoleType == (int)CharacterDefine.PROFESSION.GAIBANG)
        {
            string resWeaponLeft = tabWeaponModel.ResPath + "_L";
            string resWeaponRight = tabWeaponModel.ResPath + "_R";

            Singleton<ObjManager>.GetInstance().ReloadWeapon(m_ModelChooseRole[curRoleIndex],
                resWeaponLeft,
                OnLoadWeapon,
                "Weapon_L", tabWeaponModel);

            Singleton<ObjManager>.GetInstance().ReloadWeapon(m_ModelChooseRole[curRoleIndex],
                resWeaponRight,
                OnLoadWeapon,
                "Weapon_R", tabWeaponModel);
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.XIAOYAO)
        {
            string resWeaponRight = tabWeaponModel.ResPath + "_R";
            Singleton<ObjManager>.GetInstance().ReloadWeapon(m_ModelChooseRole[curRoleIndex],
                resWeaponRight,
                OnLoadWeapon,
                "Weapon_R");
        }
        else if (m_RoleType == (int)CharacterDefine.PROFESSION.SHAOLIN)
        {
            string resWeaponRight = tabWeaponModel.ResPath + "_R";
            Singleton<ObjManager>.GetInstance().ReloadWeapon(m_ModelChooseRole[curRoleIndex],
                resWeaponRight,
                OnLoadWeapon,
                "Weapon_R", tabWeaponModel);
        }
        else
        {
            string resWeaponLeft = tabWeaponModel.ResPath + "_L";
            Singleton<ObjManager>.GetInstance().ReloadWeapon(m_ModelChooseRole[curRoleIndex],
                resWeaponLeft,
                OnLoadWeapon,
                "Weapon_L");
        }
    }

    public void OnLoadWeapon(string modelName, GameObject resObj, object param1, object param2, object param3 = null)
    {
        if (param1 == null || param2 == null)
        {
            return;
        }

        GameObject objRoot = (GameObject)param1;
        string strWeaponPoint = (string)param2;

        if (null == objRoot)
        {
            return;
        }
        GameObject weaponModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == weaponModel)
        {
            return;
        }

        Transform modelTrans = objRoot.transform.FindChild("Model");
        if (modelTrans == null)
        {
            return;
        }

        Transform modelallTrans = modelTrans.FindChild("all");
        if (modelallTrans == null)
        {
            return;
        }

        Transform weaponParent = modelallTrans.FindChild(strWeaponPoint);
        if (weaponParent == null)
        {
            return;
        }

        Transform effectParent;
        if (m_RoleType == (int)CharacterDefine.PROFESSION.XIAOYAO)
        {
//             effectParent = weaponParent.FindChild("Weapon_R");
//             if (effectParent == null)
//             {
//                 return;
//             }
            effectParent = weaponParent;
        }
        else
        {
            effectParent = weaponParent;
        }

        for (int i = 0; i < effectParent.childCount; ++i)
        {
            Transform child = effectParent.GetChild(i);
            if (null != child && null != child.gameObject && child.gameObject.name != "EffectPoint")
            {
                GameObject.Destroy(child.gameObject);
            }
        }

        Quaternion weaponRotation = weaponModel.transform.localRotation;
        weaponModel.transform.parent = weaponParent;
        weaponModel.transform.localPosition = Vector3.zero;
        weaponModel.transform.localScale = Vector3.one;
        
        Tab_WeaponModel tabWeaponModel = (Tab_WeaponModel)param3;
        if (param3 != null && tabWeaponModel != null)
        {
            if (weaponParent.name == "Weapon_L")
            {
                weaponModel.transform.localEulerAngles = new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ);
            }
            else if (weaponParent.name == "Weapon_R")
            {
                weaponModel.transform.localEulerAngles = new Vector3(tabWeaponModel.RightRotX, tabWeaponModel.RightRotY, tabWeaponModel.RightRotZ);
            }
            
        }
        else
        {
            weaponModel.transform.localRotation = weaponRotation;
        }
        

        weaponModel.layer = objRoot.layer;

        if (m_RoleType != (int)CharacterDefine.PROFESSION.GAIBANG || weaponParent.name == "Weapon_R")
        {
            // 加载武器宝石特效
            //EffectLogic effectLogic = effectParent.gameObject.GetComponent<EffectLogic>();
            //if (null == effectLogic)
            //{
            //    effectLogic = effectParent.gameObject.AddComponent<EffectLogic>();
            //    effectLogic.InitEffect(effectParent.gameObject);
            //}
            //if (null != effectLogic)
            //{
            //    Tab_GemAttr tabGemAttr = TableManager.GetGemAttrByID(m_RoleWeaponEffectGem, 0);
            //    if (tabGemAttr != null)
            //    {
            //        Tab_Effect tabEffect = TableManager.GetEffectByID(tabGemAttr.EffectID, 0);
            //        if (tabEffect != null)
            //        {
            //            effectLogic.PlayEffect(tabGemAttr.EffectID);
            //        }
            //    }
            //    //加载神器特效
            //    Tab_CommonItem _ItemInfo = TableManager.GetCommonItemByID(m_RoleWeaponID, 0);
            //    if (_ItemInfo != null &&
            //        _ItemInfo.ClassID == (int)ItemClass.EQUIP &&
            //        _ItemInfo.SubClassID == (int)EquipSubClass.WEAPON &&
            //        _ItemInfo.ThirdClassID == (int)EquipThirdClass.SHENQI)
            //    {
            //        Tab_ShenQiInfo _shenQiInfo = TableManager.GetShenQiInfoByID(m_RoleWeaponID, 0);
            //        if (_shenQiInfo != null)
            //        {
            //            effectLogic.PlayEffect(_shenQiInfo.ShenQiEffctId);
            //        }
            //    }
            //}
        }
        InitLoginUserShader();
        SetLoadModelMark(true); //加载完模型
        //Debug.LogWarning("222");
    }

    private bool bLoadModelFinished = false;

    public void SetLoadModelMark(bool bFinished)
    {
        if (bFinished)
        {
            //Debug.LogWarning("333");
        }
        bLoadModelFinished = bFinished;
    }

    public bool GetLoadModelMark()
    {
        return bLoadModelFinished;
    }

    public static void RequestRandomName(int nSex)
    {
        CG_REQ_RANDOMNAME packet = (CG_REQ_RANDOMNAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_RANDOMNAME);
        packet.SetSex(nSex);
        packet.SendPacket();
    }

    public void DestroyRoleModeObj()
    {
        for (int i = 0; i < m_ModelChooseRole.Length; i++)
        {
            for (int j = 0; j < m_ModelChooseRole[i].transform.childCount; j++)
            {
                NGUITools.Destroy(m_ModelChooseRole[i].transform.GetChild(j).gameObject);
            }
        }
    }

    public void InitLoginUserShader()
    {
        for (int j = 1; j < m_ModelChooseRole.Length; j++) // j 从1开始，0位置默认选中
        {
            Renderer[] m_Render = m_ModelChooseRole[j].GetComponentsInChildren<Renderer>();
            for (int i = 0; i < m_Render.Length; i++)
            {
                Renderer m_r = m_Render[i];
                m_r.gameObject.layer = LayerMask.NameToLayer("edgelayer");
                m_r.material.shader = Shader.Find("Cabal/Player/PlayerHighLightOverride");
                //m_r.material.shader = Shader.Find("Cabal/Outline");
            }
        }
    }

    public void OnClickChangeShader()
    {
        int choosePlace = 0;
        if (RoleChooseLogic.Instance() != null)
        {
            choosePlace = RoleChooseLogic.Instance().GetChoosePlace();
        }
        for (int j = 0; j < m_ModelChooseRole.Length; j++) // j 从1开始，0位置默认选中
        {
            if (choosePlace == j)
            {
                Renderer[] m_Render = m_ModelChooseRole[j].GetComponentsInChildren<Renderer>();
                for (int i = 0; i < m_Render.Length; i++)
                {
                    Renderer m_r = m_Render[i];
                    if (m_r.transform.name.Contains("texiao"))
                    {
                        m_r.gameObject.layer = LayerMask.NameToLayer("Default");
                        m_r.material.shader = Shader.Find("Particles/Additive (Soft)");
                    }
                    else if (m_r.transform.parent.parent.name.Contains("Weapon") ||
                        m_r.transform.parent.name.Contains("Weapon"))
                    {
                        m_r.gameObject.layer = LayerMask.NameToLayer("Default");
                        m_r.material.shader = Shader.Find("Cabal/Weapon");
                    }
                    else
                    {
                        m_r.gameObject.layer = LayerMask.NameToLayer("Default");
                        m_r.material.shader = Shader.Find("Cabal/Player/PlayerHighLightUVFlow");
                    }
                }
            }
            else
            {
                Renderer[] m_Render = m_ModelChooseRole[j].GetComponentsInChildren<Renderer>();
                for (int i = 0; i < m_Render.Length; i++)
                {
                    Renderer m_r = m_Render[i];
                    if (m_r.transform.parent.parent.name.Contains("Weapon") ||
                        m_r.transform.parent.name.Contains("Weapon"))
                    {
                        m_r.gameObject.layer = LayerMask.NameToLayer("edgelayer");
                        m_r.material.shader = Shader.Find("Cabal/Outline");
                    }
                    else
                    {
                        m_r.gameObject.layer = LayerMask.NameToLayer("edgelayer");
                        m_r.material.shader = Shader.Find("Cabal/Player/PlayerHighLightOverride");
                    }
                }
            }

        }
    }

    public void OnClickChangeEffect()
    {
        int choosePlace = 0;
        if (RoleChooseLogic.Instance() != null)
        {
            choosePlace = RoleChooseLogic.Instance().GetChoosePlace();
        }
        for (int j = 0; j < m_ClickEffect.Length; j++ ) // j 从1开始，0位置默认选中
        {
            if (choosePlace == j)
            {
                NGUITools.SetActive(m_ClickEffect[j], true);
            }
            else
            {
                NGUITools.SetActive(m_ClickEffect[j], false);
            }

        }
    }


    /// <summary>
    /// 5次更新失败容错
    /// </summary>
    private int m_GengxinError = 5;
    private int m_GengxinNum = 0;
    

    /// <summary>
    /// 更新公告信息_默认优先读
    /// </summary>
    /// <returns></returns>
    private IEnumerator RequestGengxinInfo()
    {
        m_GengxinNum++;
        WWW wwwNotice = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(PlatformHelper.GetGengxinInfoURL(), value => wwwNotice = value));

        Debug.Log("notice =====   " + Application.persistentDataPath);

        if (null == wwwNotice || !string.IsNullOrEmpty(wwwNotice.error))
        {
            wwwNotice = null;
            if (m_GengxinNum <= 1)
            {
                StartCoroutine(RequestGengxinInfo());
            }
            else
            {
                LoginUpdateInfo.m_bRequesting = false;

                //整体获取失败后，读取公用的
                m_GengxinNum = 0;
                StartCoroutine(RequestCommonGengxinInfo());
            }
        }
        else
        {
            if (wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
            {
                //关闭更新公告提示
                LoginUpdateInfo.m_IsShow = false;

                LoginUpdateInfo.m_UpdateInofText = wwwNotice.text.Replace(LoginUpdateInfo.m_OnOffString, "");
                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_bReceiveData = true;
               // UIManager.ShowUI(UIInfo.Notice);
                Debug.Log("wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) " + wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString));
               // LoginUpdateInfo.
            }
            else if (string.IsNullOrEmpty(wwwNotice.text))
            {
                //整体获取失败后，读取公用的
                LoginUpdateInfo.m_bRequesting = false;
                m_GengxinNum = 0;
                StartCoroutine(RequestCommonGengxinInfo());
            }
            else
            {
                LoginUpdateInfo.m_UpdateInofText = wwwNotice.text;
                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_bReceiveData = true;
            }
            Debug.Log("notice =====   " + wwwNotice.text);
        }
    }

    /// <summary>
    /// 
    /// </summary>
    /// <returns></returns>
    private IEnumerator RequestCommonGengxinInfo()
    {
        m_GengxinNum++;
        WWW wwwNotice = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(PlatformHelper.GetCommonGengxinInfoURL(), value => wwwNotice = value));
        if (!string.IsNullOrEmpty(wwwNotice.error))
        {
            wwwNotice = null;
            if (m_GengxinNum <= m_GengxinError)
            {
                StartCoroutine(RequestCommonGengxinInfo());
            }
            else
            {
                //关闭主动提示公告
                LoginUpdateInfo.m_IsShow = false;

                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_UpdateInofText = null;
            }
        }
        else
        {
            if (wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
            {
                //关闭主动提示公告
                LoginUpdateInfo.m_IsShow = false;

                LoginUpdateInfo.m_bRequesting = false;
                LoginUpdateInfo.m_UpdateInofText = wwwNotice.text.Replace(LoginUpdateInfo.m_OnOffString, "");
            }
            else
            {
                if (wwwNotice.text.IndexOf(LoginUpdateInfo.m_OnOffString) > -1)
                {
                    //关闭主动提示公告
                    LoginUpdateInfo.m_IsShow = false;

                    LoginUpdateInfo.m_UpdateInofText = wwwNotice.text.Replace(LoginUpdateInfo.m_OnOffString, "");
                }
                else
                {
                    LoginUpdateInfo.m_UpdateInofText = wwwNotice.text;
                }
            }

            LoginUpdateInfo.m_bRequesting = false;
            LoginUpdateInfo.m_bReceiveData = true;
        }
    }

    //public void ShowProfessionEffect(bool bShow)
    //{
    //    m_RoleProfessionEffect.SetActive(bShow);
    //}
	public static void DoUpdateApp()
	{
//#if UNITY_ANDROID
//        LoginUILogic.Instance().StartCoroutine(RequstUpdateAppUrl(PlatformHelper.GetUpdateAppUrl()));
//#else
//        Application.OpenURL(PlatformHelper.GetUpdateAppUrl());
//#endif
    }
}
