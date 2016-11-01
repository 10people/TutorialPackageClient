/********************************************************************
	created:	2013/12/24
	created:	24:12:2013   14:10
	filename: 	ServerTopWindow.cs
	author:		王迪
	
	purpose:	选服务器初级界面
*********************************************************************/

using UnityEngine;
using System.Collections;
using Games.Events;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class ServerTopWindow : MonoBehaviour {

    public UILabel labelCurServer;
    public UILabel labelVersion;

    public UILabel labelMore;
    public UISprite curServerState;
    public UISprite sprRecommand;
    public LoginNotice loginNotice;
    public GameObject objHelpButton;

    void Awake()
    {
        objHelpButton.SetActive(PlatformHelper.GetChannelType() == PlatformHelper.ChannelType.IOS_APPSTORE);
    }
	// Use this for initialization
	void Start ()
    {
        //curTabController.delTabChanged = OnTabChange;
        //labelMore.text = Utils.GetDicByID(1184);

#if BOBJOYSTICK
        RefreshJoyGUI();
#endif

        LoginData.ServerListData lastServerData = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer);
        if (null != lastServerData)
        {
            SetCurServerInfo(lastServerData);
        }


        if (null == lastServerData && LoginData.serverListData.Count > 0)
        {
            PlayerPreferenceData.LastServer = LoginData.GetRecommandServerID();
            lastServerData = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer);
            SetCurServerInfo(lastServerData);
        }

        // 版本号：x.x.x.x
        labelVersion.text = Utils.GetDicByID(3276) + string.Format("{0}.{1}.{2}.{3}", PlatformHelper.GetGameVersion(), PlatformHelper.GetProgramVersion(), TableManager.GetPublicConfigByID(GameDefines.PublicResVersionKey, 0).IntValue, UserConfigData.ClientResVersion);
    }

#if BOBJOYSTICK
    private System.Collections.Generic.List<GameObject> m_uiItems = new System.Collections.Generic.List<GameObject>();
    private Engine.JoyUI.BobJoyUINavigator m_JoyUINav;
    void RefreshJoyGUI()
    {
        m_JoyUINav = Engine.JoyUI.BobJoyUINavigator.FindOrAddUINav(gameObject);

        GameObject btnOK = JoyControllerLogic.FindChild(transform, "BtnOk").gameObject;
        GameObject btnother = JoyControllerLogic.FindChild(transform, "BtnServerOther").gameObject;
        m_uiItems.Add(btnOK);
        m_uiItems.Add(btnother);

        for (int i = 0; i < m_uiItems.Count; i++)
        {
            m_JoyUINav.AddItem(m_uiItems[i].AddComponent<BobJoyUIItem>());
        }
    }
#endif

    void OnBtnServerOther()
    {
        //PlayerPreferenceData.ClientLoginCount = PlayerPreferenceData.ClientLoginCount + 1;
        UIControllerBase<ServerChooseController>.Instance().SwitchWindow((int)ServerChooseController.Window.ServerList);
		ServerChooseController.Instance().hideGroundPic();
    }

    void OnBtnOkClick()
    {
        //GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_TOUCH_UI);
       // Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);

        PlatformHelper.SendUserAction(UserBehaviorDefine.ServerChoose_Enter);
        LoginData.ServerListData curServerListData = LoginData.GetServerListDataByID(PlayerPreferenceData.LastServer);
        if (null != curServerListData)
        {
            ServerChooseController.Instance().ConnectToServer(curServerListData.m_ip, curServerListData.m_port);
        }
        else
        {
            // 提示，无法找到服务器信息
            MessageBoxLogic.OpenOKBox(1002, 1000);
        }
    }

    void OnBtnHelpClick()
    {
        loginNotice.ShowNotice();
    }
    public void SetCurServerInfo(LoginData.ServerListData curListData)
    {
        if (null == curListData)
        {
            return;
        }
        labelCurServer.text = curListData.m_name;
        //curServerState.gameObject.SetActive(true);
        PlayerPreferenceData.LastServer = curListData.m_id;
        curServerState.spriteName = GetServerStateSprite((ServerListItem.State)curListData.m_state);
        sprRecommand.gameObject.SetActive(curListData.m_type > 0);
        
    }

    public string GetServerStateSprite(ServerListItem.State serverState)
    {
        switch (serverState)
        {
            case ServerListItem.State.HOT:
                return "YanChi03";
            case ServerListItem.State.NEW:
                return "YanChi01";
            case ServerListItem.State.NORAML:
                return "YanChi02";
            case ServerListItem.State.STOP:
                return "YanChi04";
        }

        return "YanChi01";
    }
}
