/********************************************************************
	created:	2013/12/24
	created:	24:12:2013   14:01
	filename: 	ServerChooseController.cs
	author:		王迪
	
	purpose:	服务器选择UI控制器
*********************************************************************/

using UnityEngine;
using System.Collections;
using Module.Log;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class ServerChooseController : UIControllerBase<ServerChooseController> {

    public enum Window
    {
        ServerTop,              // 简洁服务器选择界面
        ServerList,             // 复杂服务器选择界面
    }

    public ServerTopWindow m_ServerTopWindow;

    public GameObject m_ForceEnterTip;

    private float m_connnectTimer = 0;

    private bool m_bShowConnectResult = false;

	//  add back pic
	public GameObject m_ServerGround;
    void Awake()
    {
        SetInstance(this);
    }

	public void hideGroundPic()
	{
		ServerBackGround.Instance ().setMyPicShow (false);
	}

	public void showGroundPic()
	{
		ServerBackGround.Instance ().setMyPicShow (true);
	}

	void Start () 
    {
        
        SwitchWindow((int)Window.ServerTop);
        //GCGame.Utils.PlaySceneMusic(181);    //scene_login

#if BOBJOYSTICK
        if (PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.ANDROID_MITV)
        {
            // 盒子的时候提示按键
            JoystickTipInfo.ShowTip();
        }
#else
        if (LoginUpdateInfo.m_IsShow)
        {
            LoginUpdateInfo.OpenUI(true);

            //if (m_ForceGengXin != null)
            //{
            //    m_ForceGengXin.SetActive(true);

            //    LoginUpdateInfo loginUpdateInfo = m_ForceGengXin.GetComponent<LoginUpdateInfo>();
            //    if (loginUpdateInfo != null)
            //    {
            //        m_ServerTopWindow.gameObject.SetActive(false);

            //        loginUpdateInfo.ShowUpdateInfo();
            //        loginUpdateInfo = null;
            //    }
            //    else
            //    {
            //        m_ForceGengXin.SetActive(false);
            //    }
            //}
        }
#endif




#if BOBJOYSTICK
        MapForceEnterTipUI();
#endif
    }
#if BOBJOYSTICK
    void Attachfirstui()
    {
        JoyStickCursor.Instance.AttachCursor(btnokui);
    }
    JoyUIButton btnokui;
    void MapForceEnterTipUI()
    {
        Transform transbtn = null;
        GameObject btnOK = null;
        GameObject btnCancel = null;
        btnCancel = JoyControllerLogic.FindChild(m_ForceEnterTip.transform, "CancelButton").gameObject;
        btnOK = JoyControllerLogic.FindChild(m_ForceEnterTip.transform, "MessageBoxOPButton").gameObject;
        btnokui = JoyUIButtonFactory.Instance.MapUI(btnOK);
        JoyUIButton btncancelui = JoyUIButtonFactory.Instance.MapUI(btnCancel);
        btnokui.Left = btncancelui;
        btncancelui.Right = btnokui;
    }
#endif
    void OnEnable()
    {
        m_connnectTimer = 0;
    }

    void Update()
    {
        if (m_connnectTimer > 0)
        {
            m_connnectTimer -= Time.deltaTime;
        }
    }

    public void ConnectToServer(string szIp, int nPort)
    {
        if (m_connnectTimer > 0)
        {
            return;
        }

        m_connnectTimer = 3.0f;
        m_bShowConnectResult = false;
        NetManager.Instance().ConnectToServer(szIp, nPort, OnConnectResult);
        // 连接服务器，请等待
        MessageBoxLogic.OpenWaitBox(1003, 20, 0, OnConnectTimeOut);
    }

    void OnConnectResult(bool bSuccess, string result)
    {

        if (bSuccess)
        {
            MessageBoxLogic.CloseBox();
            if (LoginUILogic.Instance() != null)
            {
                LoginUILogic.Instance().EnterAccount();
            }
        }
        else
        {
            if (!m_bShowConnectResult)
            {
                StartCoroutine(RequestServerState(PlayerPreferenceData.LastServer));
                m_bShowConnectResult = true;
            }
            LogModule.WarningLog("connect fail");
            m_connnectTimer = 0;
        }
    }

    void OnConnectTimeOut()
    {

        if (!m_bShowConnectResult)
        {
            StartCoroutine(RequestServerState(PlayerPreferenceData.LastServer));
            m_bShowConnectResult = true;
        }

        LogModule.WarningLog("connect fail");
        m_connnectTimer = 0;

    }

    void OnEnterAccount()
    {
        GameManager.gameManager.OnLineState = false;
        LoginUILogic.Instance().EnterAccount();
    }

    public void SelectServerListItem(LoginData.ServerListData curListData)
    {
        SwitchWindow((int)ServerChooseController.Window.ServerTop);
        m_ServerTopWindow.SetCurServerInfo(curListData);
    }


    public void ShowForceEnterTip(bool bShow)
    {
        m_ForceEnterTip.SetActive(bShow);
#if BOBJOYSTICK
        Attachfirstui();
#endif
    }

    void OnForceLogin()
    {
        NetManager.SendUserLogin(LoginData.Ret_Login, true);
        ShowForceEnterTip(false);
    }

    void OnUpdateApp()
    {
        if (PlatformHelper.GetNetworkState() == PlatformHelper.NetworkState.STATE_WIFI)
        {
#if UNITY_ANDROID
			LoginUILogic.DoUpdateApp();
#else
			Application.OpenURL(PlatformHelper.GetUpdateAppUrl());
			ShowForceEnterTip(false);
#endif
        }
        else
        {
            ShowForceEnterTip(false);
            MessageBoxLogic.OpenOKCancelBox(2622, 1000, OnDoUpdateApp);
        }
        
    }

    void OnDoUpdateApp()
    {
		LoginUILogic.DoUpdateApp();
    }

    IEnumerator RequestServerState(int serverID)
    {
        string sNoticeUrl = "http://mrd.changyou.com/tianlong3D/conf/notice/";
        string urlNotice = sNoticeUrl + serverID.ToString() + ".txt";
        WWW wwwData = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(urlNotice, value => wwwData = value));
        if (string.IsNullOrEmpty(wwwData.error) && wwwData.text != "None")
        {
            MessageBoxLogic.OpenOKBox(wwwData.text);
            LogModule.DebugLog(wwwData.text);
        }
        else
        {
            LogModule.ErrorLog(wwwData.error);
            //提示： 无法连接服务器
            MessageBoxLogic.OpenOKBox(1005, 1000);
        }
        
    }

}
