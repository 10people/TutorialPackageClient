using System;
using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using System.IO;
using System.Collections.Generic;
public class WPSDKHelperScript : MonoBehaviour {

    private static WPSDKHelperScript m_instance = null;

    public event Action<bool> WPStartLogin;

    public event Action<string> WPUserLogOut;

    public event Action<string> WPReqPayGoodsList;

    public event Action<string> WPMakePayWithGoodsInfo;

    public event Action<string> WPShowChargeRecordList;

    public event Action<string> WPShowCallCenter;

    public event Action<string> WPSendUserActionCMBI;

    public delegate string DelegateDeviceID (string str);
    public event DelegateDeviceID WPGetDeviceUDID;

    private bool IsNowLoginingIn = false;

    public enum CYMGCallbackStatus
    {
        CYMGCallbackStatus_Success = 10001,
        CYMGCallbackStatus_Fail = 10002,
        CYMGCallbackStatus_Close = 10003,
    }

    class PayInfoForWP 
    {
        public string roleID;
        public string serverID;
        public string roleName;
        public string goodID;
        public string goodName;
        public string goodNum;
        public string price;
        public string registerID;
    }

    private PayInfoForWP m_payInfoForWp = null;

    public static WPSDKHelperScript Instance()
    {
        return m_instance;
    }
    void Awake()
    {
        if (null != m_instance)
        {
            Destroy(this.gameObject);
        }

        m_instance = this;

        InitWPConfigData();

        DontDestroyOnLoad(this.gameObject);
    }

    /////////////////////////////////////////////////////////////
    ////////////////////登陆相关    start   /////////////////////
    /////////////////////////////////////////////////////////////

    public void WPStartGame()                               // 登陆时候调用此方法
    {
        if (WPStartLogin != null)
        {
            if (IsNowLoginingIn)
                return;
            WPStartLogin(true);                             // 为true时在登陆成功后保存登陆状态
            IsNowLoginingIn = true;
        }
    }
    public string appkey()
    {
        // 此处是Demo测试数据，请修改为游戏真实代码
        return "1457399010187";
    }

    public string appsecrect()
    {
        // 此处是Demo测试数据，请修改为游戏真实代码
        return "7a62c542d3574a0298dcfe1bb63367cf";
    }

    public string channelid()
    {
        string temp = GetValueFromConfigFile("CHANNEL_ID");
        return temp;
    }

    public string userid()
    {
        return LoginData.accountData.m_userID;
    }

    public string roleid()
    {
        LoginData.PlayerRoleData curRole = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
        if (null == curRole)
        {
            LogModule.ErrorLog("get role data fail");
            return "";
        }
        string roleId = string.Format("{0:X16}", curRole.guid);
        return roleId;
    }

    public string rolename()
    {
        return Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.RoleName;
    }

    public string groupid()
    {
        return PlayerPreferenceData.LastServer.ToString();
    }

    public string groupname()
    {
        return Utils.GenServerNameWithSelfGuid();
    }

    public string pushinfo()
    {
        // 此处是Demo测试数据，请修改为游戏真实代码
        return "pushinfo_test";
    }

    public void LgoinCallBack(string jsonLoginInfo)
    {
        PlatformListener.Instance().OnCYUserLogin(jsonLoginInfo);
        IsNowLoginingIn = false;
    }

    public void SetIsLoginStatus(bool bLogin)
    {
        IsNowLoginingIn = bLogin;
    }

    public void WPLogOut()
    {
        if(WPUserLogOut != null)
        {
            WPUserLogOut("");
        }
    }

    public void WPLogOutCallBack()
    {
        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
        {
            NetManager.SendUserLogout();
        }
        else
        {
            if (LoginUILogic.Instance() != null)
            {
                LoginUILogic.Instance().EnterServerChoose();
            }
            else
            {
                LoadingWindow.LoadScene(Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN);
            }
        }
    }

    /////////////////////////////////////////////////////////////
    ////////////////////登陆相关    end   ///////////////////////
    /////////////////////////////////////////////////////////////




    /////////////////////////////////////////////////////////////
    ////////////////////充值相关    start   //////////////////////
    /////////////////////////////////////////////////////////////

    // 请求商品列表
    public void WPreqPaymentGoodInfoList()                
    {
        if (WPReqPayGoodsList != null)
        {
            WPReqPayGoodsList("");
        }
    }

    // 商品列表回调
    public void WPOnReqCYPayGoodListSuccess(string goods)   
    {
        LogModule.DebugLog(goods);

        //LogModule.DebugLog("RechargeData.InitGoodInfo(goods); began");

        RechargeData.InitGoodInfo(goods);

        //LogModule.DebugLog("RechargeData.InitGoodInfo(goods); ended");

        //Invoke("ShowGoodsListUI", 0.1f);

        m_instance.StartCoroutine(ShowGoodsListUI());

        //if (null != RechargeController.Instance())
        //{
        //    //LogModule.DebugLog("RechargeController.Instance().UpdateRechargeList() began");
        //    RechargeController.Instance().UpdateRechargeList();
        //    //LogModule.DebugLog("RechargeController.Instance().UpdateRechargeList() ended");
        //}
    }

    IEnumerator ShowGoodsListUI()
    {
        yield return new WaitForEndOfFrame();
        if (null != RechargeController.Instance())
        {
            //LogModule.DebugLog("RechargeController.Instance().UpdateRechargeList() began");
            RechargeController.Instance().UpdateRechargeList();
            //LogModule.DebugLog("RechargeController.Instance().UpdateRechargeList() ended");
        }
    }

    // 充值
    public void WPmakePayWithGoodInfo(string roleID, string serverID, string roleName, string goodID, string goodName, string goodNum, string price, string registerID)
    {
        if (m_payInfoForWp == null)
        {
            m_payInfoForWp = new PayInfoForWP();
        }

        m_payInfoForWp.roleID = roleID;
        m_payInfoForWp.serverID = serverID;
        m_payInfoForWp.roleName = roleName;
        m_payInfoForWp.goodID = goodID;
        m_payInfoForWp.goodName = goodName;
        m_payInfoForWp.goodNum = goodNum;
        m_payInfoForWp.price = price;
        m_payInfoForWp.registerID = registerID;

        if (WPMakePayWithGoodsInfo != null)
        {
            WPMakePayWithGoodsInfo("");
            GameManager.gameManager.PlayerDataPool.WP8ChargeMode = true;
        }
    }

    public string GetPayInfoRoleID()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.roleID;
    }

    public string GetPayInfoRoleName()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.roleName;
    }

    public string GetPayInfoServerID()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.serverID;
    }

    public string GetPayInfoGoodID()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.goodID;
    }

    public string GetPayInfoGoodName()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.goodName;
    }

    public string GetPayInfoGoodNum()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.goodNum;
    }

    public string GetPayInfoGoodPrice()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.price;
    }

    public string GetPayInfoGoodRegisterID()
    {
        if (m_payInfoForWp == null)
        {
            return "";
        }

        return m_payInfoForWp.registerID;
    }

    // 充值回调
    public void WPOnMakePayResult(int status)
    {
        LogModule.DebugLog("--------------OnCYPayResult---------------" + status.ToString());
        switch ((CYMGCallbackStatus)status)
        {
            case CYMGCallbackStatus.CYMGCallbackStatus_Success:
                PlatformListener.SendCYPay(1);
                break;
            case CYMGCallbackStatus.CYMGCallbackStatus_Fail:
                PlatformListener.SendCYPay(2);
                break;
            case CYMGCallbackStatus.CYMGCallbackStatus_Close:
                PlatformListener.SendCYPay(2);
                break;
            default:
                break;
        }
        LogModule.DebugLog("============unity pay result :" + status.ToString());
    }

    // 订单记录
    public void WPShowChargeRecord()
    {
        if (WPShowChargeRecordList != null)
        {
            WPShowChargeRecordList("");
        }
    }


    // 客服中心
    public void WPReqShowCallCenter()
    {
        if (WPShowCallCenter != null)
        {
            WPShowCallCenter("");
        }
    }

    public void WPSendUserAction(string action)
    {
        if (WPSendUserActionCMBI != null)
        {
            WPSendUserActionCMBI(action);
        }
    }

    public string WPGetDeviceID()
    {
        if (WPGetDeviceUDID != null)
        {
            return WPGetDeviceUDID("");
        }
        return "";
    }

    /////////////////////////////////////////////////////////////
    ////////////////////充值相关    end   ///////////////////////
    /////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////
    //////////////////// 配置相关信息 //////////////////////////
    ///////////////////////////////////////////////////////////

    // 从配置文件读取账号数据，保存在Map中

#if UNITY_WP8 && UNITY_EDITOR
    private static string configPath = "Assets/StreamingAssets/WPConfig.txt";
#else
    private static string configPath = "Data/StreamingAssets/WPConfig.txt";
#endif

    private static Dictionary<string, string> m_WPConfigMap = null;
    public static void InitWPConfigData()
    {
        if (m_WPConfigMap != null)
        {
            return;
        }

        m_WPConfigMap = new Dictionary<string, string>();
        string filePath = configPath;
        if (!File.Exists(configPath))
        {
            return;
        }

        FileStream fs = new FileStream(filePath, FileMode.Open);
        StreamReader sr = new StreamReader(fs);

        string strLine = sr.ReadLine();
        while (strLine != null)
        {
            string[] codes = strLine.Split('=');
            if (codes.Length == 2)
            {
                if (m_WPConfigMap.ContainsKey(codes[0]))
                {
                    m_WPConfigMap[codes[0]] = codes[1];
                }
                else
                {
                    m_WPConfigMap.Add(codes[0], codes[1]);
                }
            }
            strLine = sr.ReadLine();
        }

        sr.Close();
        fs.Close();
    }

    private string GetValueFromConfigFile(string _key)
    {
        if (m_WPConfigMap == null)
            return "";

        if (!m_WPConfigMap.ContainsKey(_key))
            return "";

        string outvalue;
        m_WPConfigMap.TryGetValue(_key, out outvalue);

        return outvalue;
    }

    // 游戏大版本
    public int WPGetGameVersion()
    {
        string temp = GetValueFromConfigFile("GAME_VERSION");
        return System.Int32.Parse(temp);
    }

    // 程序版本
    public int WPGetProgramVersion()
    {
        string temp = GetValueFromConfigFile("PROGRAM_VERSION");
        return System.Int32.Parse(temp);
    }

    // 是否可以使用GM指令
    public bool IsEnableGM()
    {
        string temp = GetValueFromConfigFile("GM_ENABLE");
        if (temp != "0")
            return true;
        else
            return false;
        //return _isEnableGM();
    }

    // 获取包体更新地址
    public string WPgetUpdateAppUrl()
    {
        string temp = GetValueFromConfigFile("UPDATEAPP_URL");
        return temp;
    }

    //获取应用的Detail介绍Url
    public string WPgetAppDetailUrl()
    {
        return "";
    }

    // 媒体渠道ID
    public string WPgetMediaChannel()
    {
        string temp = GetValueFromConfigFile("MEIDA_CHANNEL");
        return temp;
    }

    public string WPgetResDonwloadUrl()
    {
        string temp = GetValueFromConfigFile("RES_DOWNLOAD_URL");
        return temp;
    }

    /// <summary>
    /// 公告更新路径
    /// </summary>
    /// <returns></returns>
    public string WPGetGengxinInfoURL()
    {
        return "";
    }

    public string WPGetCommonGengxinInfoURL()
    {
        return "";
    }

    // 是否开启资源更新
    public bool WPIsEnableUpdate()
    {
        string temp = GetValueFromConfigFile("UPDATE_ENABLE");
        if (temp != "0")
            return true;
        else
            return false;
    }

    public bool WPIsEnableDebugMode()
    {
        string temp = GetValueFromConfigFile("DEBUGMODE_ENABLE");
        if (temp != "0")
            return true;
        else
            return false;
    }
}
