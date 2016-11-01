/********************************************************************************
 *	文件名：NetManager.cs
 *	全路径：	\Script\LogicCore\NetManager.cs
 *	创建人：	王华
 *	创建时间：2013-12-05
 *
 *	功能说明： 网络管理器
 *	       
 *	修改记录：王迪 2014.02.14 增加一些登陆用的消息包发送协议，用于断线重连
*********************************************************************************/

using System;
using UnityEngine;
using Module.Log;
using System.IO;
using SPacket.SocketInstance;
using System.Collections.Generic;
using GCGame.Table;

public class NetManager : MonoBehaviour
{
   
    public static bool IsReconnecting = false;

    static public NetManager m_netManager;
   
    private static NetManager m_instance = null;
    public static NetManager Instance()
    {
        return m_instance;
    }

    public static bool m_IsAskConnecting = false;
    private bool m_bAskConnecting = false;      // 是否正处于询问断线状态

    private string m_connectIP;
    private int m_connectPort;
    private NetWorkLogic.ConnectDelegate m_delConnect;

#if UNITY_WP8
    private bool m_DeviceLost = false;
#endif

    void Awake()
    {
        if (m_netManager != null)
        {
            Destroy(this.gameObject);
        }

        m_netManager = this;
        DontDestroyOnLoad(this.gameObject);

        //项目只能唯一一个地方使用RegisterLogCallback
        //Application.RegisterLogCallback(LogModule.Log);
        NetWorkLogic.SetConnectLostDelegate(ConnectLost);
        m_instance = this;
    }

    void OnEnable()
    {
        m_bAskConnecting = false;
        m_IsAskConnecting = false;
    }

    void Update()
    {
        NetWorkLogic.GetMe().Update();
    }
    
    public void ConnectToServer(string _ip, int _port, NetWorkLogic.ConnectDelegate delConnect)
    {
        m_connectIP = _ip;
        m_connectPort = _port;
        m_delConnect = delConnect;
        if (PlatformHelper.IsEnableUpdate())
        {
            StartCoroutine(UpdateHelper.CheckResVersion(OnConnectCheckResVersion, this));
        }
        else
        {
            DoConnectToServer();
        }
       
    }
    private void OnConnectCheckResVersion(UpdateHelper.CheckVersionResult result)
    {
        if (result == UpdateHelper.CheckVersionResult.NEEDUPDATE)
        {
            MessageBoxLogic.OpenOKBox(4647, 1000, OnQuitGameClick);
        }
        else if (result == UpdateHelper.CheckVersionResult.NONEEDUPDATE)
        {
            DoConnectToServer();
        }
        else
        {
            if (null != m_delConnect) m_delConnect(false, "request res fail");
        }
    }
    private void DoConnectToServer()
    {
        LogModule.DebugLog("Connect to Server... ip:" + m_connectIP + " port :" + m_connectPort.ToString());
        NetWorkLogic.SetConcnectDelegate(m_delConnect);
        NetWorkLogic.GetMe().ConnectToServer(m_connectIP, m_connectPort, 500);
    }


    public static void SendUserLogin(LoginData.LoginRet retFun, bool bForce, bool bReconnect = false)
    {
        if (!LoginData.accountData.m_bInit)
        {
            LogModule.ErrorLog("account data is not init");
            return;
        }

        LogModule.DebugLog("begin login");
        //帐户和密码
        LoginData.retLogin = retFun;
        CG_LOGIN accountInfo = (CG_LOGIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LOGIN);

        if (LoginData.accountData.m_connectType == LoginData.AccountData.ConnnectType.CYOU)
        {
            accountInfo.SetVtype((int)CG_LOGIN.VALIDATETYPE.CYOU);
            LogModule.DebugLog("begin cy login");
        }
        else
        {
            accountInfo.SetVtype((int)CG_LOGIN.VALIDATETYPE.TEST);
            LogModule.DebugLog("begin test login");
        }
		accountInfo.SetGameversion((int)PlatformHelper.GetGameVersion());
        accountInfo.SetProgramversion((int)PlatformHelper.GetProgramVersion());
        accountInfo.SetPublicresourceversion(TableManager.GetPublicConfigByID(GameDefines.PublicResVersionKey, 0).IntValue);
        accountInfo.SetMaxpacketid((int)MessageID.PACKET_SIZE);
        accountInfo.SetForceenter(bForce ? 1 : 0);
        accountInfo.SetDeviceid(PlatformHelper.GetDeviceUDID());
        accountInfo.SetDevicetype(PlatformHelper.GetDeviceType());
        accountInfo.SetDeviceversion(PlatformHelper.GetDeviceVersion());

        accountInfo.SetAccount(LoginData.accountData.m_account);
        accountInfo.SetValidateinfo(LoginData.accountData.m_validateInfo);
        accountInfo.SetChannelid(PlatformHelper.GetChannelID());
        accountInfo.SetMediachannel(PlatformHelper.GetMediaChannel());

        accountInfo.SetRapidvalidatecode(bReconnect ?  LoginData.accountData.m_gameServerValidateInfo : 0);
        accountInfo.SetReservedint1(0);
        accountInfo.SetReservedint2(0);
        accountInfo.SetReservedint3(0);
        accountInfo.SetReservedint4(0);
        accountInfo.SetReservedstring1("");
        accountInfo.SetReservedstring2("");
        accountInfo.SetReservedstring3("");
        accountInfo.SetReservedstring4("");

        accountInfo.SendPacket();
    }

    public static void SendChooseRole(ulong roleGUID, GC_SELECTROLE_RETHandler.SelectRoleFailRet funRet)
    {
        /*
        CG_SELECTROLE selectRolePacket = (CG_SELECTROLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SELECTROLE);
        selectRolePacket.SetRoleGUID(roleGUID);
        selectRolePacket.SendPacket();
         * */
        GC_SELECTROLE_RETHandler.retSelectRoleFail = funRet;
        CG_SELECTROLE createRolePacket = (CG_SELECTROLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SELECTROLE);
        createRolePacket.SetRoleGUID(roleGUID);
        createRolePacket.SendPacket();
    }

    public static void SendUserLogout()
    {
        CG_ASK_QUIT_GAME packet = (CG_ASK_QUIT_GAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_QUIT_GAME);
        packet.Type = (int)CG_ASK_QUIT_GAME.GameSelecTType.GAMESELECTTYPE_ACCOUNT;
        packet.SendPacket();
    }
   
    public void ConnectLost()
    {
        if (!GameManager.gameManager.OnLineState)
        {
            return;
        }
        if (LoginUILogic.Instance() != null)
        {
            LoginUILogic.Instance().EnterServerChoose();
            // 连接丢失，请重新登录
#if !UNITY_WP8
            MessageBoxLogic.OpenOKBox(1292, 1000);
#else
            if (!m_DeviceLost)
            {
                MessageBoxLogic.OpenOKBox(1292, 1000);
            }
#endif

            return;
        }
        else if (MainUILogic.Instance() != null)
        {
            if(!m_bAskConnecting || null != MessageBoxLogic.Instance())
            {
                LogModule.DebugLog("reconnecting....");
                // 连接丢失，正在重新连接。。。
#if UNITY_WP8
                if (!m_DeviceLost)
                {
                    MessageBoxLogic.OpenOKBox(1293, 1000, OnReconnect);
                }
                else
                {
                    WP8ConnectingLostLogic();
                }
#else
                MessageBoxLogic.OpenOKBox(1293, 1000, OnReconnect);
#endif

                m_bAskConnecting = true;
                m_IsAskConnecting = true;
                if (BackCamerControll.Instance() != null && BackCamerControll.Instance().gameObject.activeInHierarchy)
                {
                    BackCamerControll.Instance().gameObject.SetActive(false);
                }
                WorldMapWindow.OnDisConnect();
                HuaShanPVPData.OnDisconnect();
            }
        }
        else
        {
            // 有可能在loading不处理，等UI起来后检测
        }
    }

    public void WP8ConnectingLostLogic()
    {
        if(GameManager.gameManager.PlayerDataPool.WP8ChargeMode)
        {
            OnReconnect();
            //GameManager.gameManager.PlayerDataPool.WP8ChargeMode = false;
            return;
        }

        GameManager.gameManager.PlayerDataPool.WP8chageBackTime = Time.time; 
    }

    public void WP8ComeBackFromBack()
    {
        //WPSDKHelperScript.Instance().SetIsLoginStatus(false);
        
        //if (GameManager.gameManager.PlayerDataPool.WP8ChargeMode)
        //{
        //    GameManager.gameManager.PlayerDataPool.WP8ChargeMode = false;
        //    return;
        //}
            
        ////GameManager.gameManager.PlayerDataPool.WP8chageBackTime
        //if (Time.time - GameManager.gameManager.PlayerDataPool.WP8chageBackTime >= 120)
        //{
        //    MessageBoxLogic.OpenOKBox(1293, 1000, OnReconnect);
        //    return;
        //}
        //else
        //{
        //    OnReconnect();
        //}
    }

    public static void OnWaitPacketTimeOut()
    {
        MessageBoxLogic.OpenOKBox(1292, 1000, OnReturnServerChoose);
    }

    private static void OnReturnServerChoose()
    {
        NetWorkLogic.GetMe().DisconnectServer();
        LoginUILogic.Instance().EnterServerChoose();
    }

    void OnReconnect()
    {
        if (PlatformHelper.IsEnableUpdate())
        {

            StartCoroutine(UpdateHelper.CheckResVersion(OnReConnectCheckResVersion, this));
        }
        else
        {
            DoReconnect();
        }

        
    }

    private void OnReConnectCheckResVersion(UpdateHelper.CheckVersionResult result)
    {
        if (result == UpdateHelper.CheckVersionResult.NEEDUPDATE)
        {
            // 请重启客户端完成更新
            MessageBoxLogic.OpenOKBox(4647, 1000, OnQuitGameClick);
        }
        else if (result == UpdateHelper.CheckVersionResult.NONEEDUPDATE)
        {
            DoReconnect();
        }
        else
        {
            // 连接失败，点解确定重连
            MessageBoxLogic.OpenOKBox(4655, 1000, OnReconnect);
        }
    }

    void DoReconnect()
    {
        m_IsAskConnecting = false;
        m_bAskConnecting = false;
        NetWorkLogic.SetConcnectDelegate(Ret_Reconnect);
        NetWorkLogic.GetMe().ReConnectToServer();
    }
    void Ret_Reconnect(bool bSuccess, string strResult)
    {
        if (bSuccess)
        {
            // 重新登录
            LogModule.DebugLog("relogining....");
            NetManager.SendUserLogin(Ret_Login, true, true);
            //NetManager.SendUserLogin(PlayerPreferenceData.LastAccount, PlayerPreferenceData.LastPsw, Ret_Login);
        }
        else
        {
            // 重连失败，点击确定重新登录
            MessageBoxLogic.OpenOKBox(1295,1000, EnterLoginScene);
            
        }
    }

    void Ret_Login(GC_LOGIN_RET.LOGINRESULT result, int validateResult)
    {
        if (result == GC_LOGIN_RET.LOGINRESULT.SUCCESS)
        {
            LogModule.DebugLog("choose role....");
            MessageBoxLogic.CloseBox();
            MessageBoxLogic.OpenWaitBox(1366, 1, 0, OnChooseRole);
        }
        else
        {
            // 重新连接失败，点击确定返回登录界面
            MessageBoxLogic.OpenOKBox(1295,1000, EnterLoginScene);
        }
    }

    void OnChooseRole()
    {
        // 正在等待进入场景
        MessageBoxLogic.OpenWaitBox(2352, GameDefines.CONNECT_TIMEOUT, 0, OnWaitPacketTimeOut);
        NetManager.SendChooseRole(PlayerPreferenceData.LastRoleGUID, RetSelectRoleFail);
    }

    void EnterLoginScene()
    {
        LoadingWindow.LoadScene(Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN);
    }

    void EnterOffline()
    {
        GameManager.gameManager.OnLineState = false;
    }

    void RetSelectRoleFail(GC_SELECTROLE_RET.SELECTROLE_RESULT result)
    {
        // 重新连接获取角色失败，点击确定重新登录
        MessageBoxLogic.OpenOKBox(1294, 1000, OnSelectRoleFail);
    }

    void OnSelectRoleFail()
    {
        if (null != LoginUILogic.Instance())
        {
            LoginUILogic.Instance().EnterServerChoose();
        }
        else
        {
            LoadingWindow.LoadScene(Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN);
        }
    }

    private void OnQuitGameClick()
    {
        Application.Quit();
    }



#if UNITY_WP8
    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {
            m_DeviceLost = true;
            ConnectLost();
        }
        else
        {
            m_DeviceLost = false;
            WP8ComeBackFromBack();
        }
    }
#endif
}
