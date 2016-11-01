using UnityEngine;
using System.Collections;
using GCGame.Table;

public class OpenSystemLogic : MonoBehaviour {


	public GameObject m_SystemInfo ;
	public GameObject m_MusicInfo ;

	// Use this for initialization
	void Start () {
	
		onSystemClick ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnEnable()
	{
		onSystemClick ();
		m_ChooseObj.SetActive (true);
	}

	public void onSystemClick()
	{
		m_SystemInfo.SetActive (true);
		m_MusicInfo.SetActive (false);

		m_LeftIcon.gameObject.SetActive (true);
		m_RightIcon.gameObject.SetActive (false);
	}
	public void onMusicClick()
	{
		m_SystemInfo.SetActive (false);
		m_MusicInfo.SetActive (true);

		m_LeftIcon.gameObject.SetActive (false);
		m_RightIcon.gameObject.SetActive (true);
	}
	//============================================================
	public UISprite m_LeftIcon ;
	public UISprite m_RightIcon ;

	//=============================================================
	public GameObject m_ChooseObj ;

    //切换账号
    public void OnAccountClick()
    {
        //Application.LoadLevel((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN);
        //string dicStr = "确定切换账号";
        string dicStr = StrDictionary.GetClientDictionaryString("#{2897}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnAccountOK, OnMessageBoxNO);
    }
    public void OnAccountOK()
    {
        NetManager.SendUserLogout();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);
    }
    public void OnMessageBoxNO()
    {

    }
    //切换角色
    public void OnPlayerClick()
    {
        //string dicStr = "确定切换角色";
        string dicStr = StrDictionary.GetClientDictionaryString("#{2898}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnPlayerOK, OnMessageBoxNO);
    }
    public void OnPlayerOK()
    {
        CG_ASK_QUIT_GAME packet = (CG_ASK_QUIT_GAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_QUIT_GAME);
        packet.Type = (int)CG_ASK_QUIT_GAME.GameSelecTType.GAMESELECTTYPE_ROLE;
        packet.SendPacket();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);
    }
    //卡死处理
    public void OnBlindClick()
    {
        //string dicStr = "确定回到场景入口";
        string dicStr = StrDictionary.GetClientDictionaryString("#{11335}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnBlindOK, OnMessageBoxNO);
    }
    public void OnBlindOK()
    {
      if (Singleton<ObjManager>.Instance.MainPlayer != null) {
        Singleton<ObjManager>.Instance.MainPlayer.StopMove();
        if (null != Singleton<ObjManager>.Instance.MainPlayer.NavAgent) {
          Destroy(Singleton<ObjManager>.Instance.MainPlayer.NavAgent);
        }
      }
      GameManager.gameManager.AutoSearch.Stop();


      CG_CHANGE_MAJORCITY packet = (CG_CHANGE_MAJORCITY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHANGE_MAJORCITY);
      packet.SetType(2);
      packet.SendPacket();
      if (NetManager.Instance() != null) {
        NetManager.Instance().ConnectLost();
      }
      UIManager.CloseUI(UIInfo.SystemAndAutoFight);
    }
    //游戏帮助
    public void OnHelpClick()
    {
        //UIManager.ShowUI(UIInfo.CheckPowerRoot);
        CG_REQ_POWERUP packet = (CG_REQ_POWERUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_POWERUP);
        packet.Type = (int)BePowerData.BePowerType.BPTDEFINE_GEM;
        packet.Flag = 1;
        packet.SendPacket();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);

        //string dicStr = "目前没有实现";
        // MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnAccountOK, OnMessageBoxNO);
    }
    //联系客服
    public void OnCustomServiceClick()
    {
        // 无sdk 暂时 不实现
        //SystemStupWindow.SetActive(false);
      //  CustomerWindow.SetActive(true);
    }
    //问题反馈
    public void OnQuestionClick()
    {
        // 无sdk 暂时 不实现
        //SystemStupWindow.SetActive(false);
        //QuestionWindow.SetActive(true);
    }
    //退出游戏
    public void OnQuitClick()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        if (PlatformHelper.GetChannelType() != PlatformHelper.ChannelType.TEST)
        { 
            PlatformHelper.UserLogout();
        }
        else
        {
            CG_ASK_QUIT_GAME packet = (CG_ASK_QUIT_GAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_QUIT_GAME);
            packet.Type = (int)CG_ASK_QUIT_GAME.GameSelecTType.GAMESELECTTYPE_QUIT;
            packet.SendPacket();
            UIManager.CloseUI(UIInfo.SystemAndAutoFight);
            Application.Quit();
        }
#else
        CG_ASK_QUIT_GAME packet = (CG_ASK_QUIT_GAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_QUIT_GAME);
        packet.Type = (int)CG_ASK_QUIT_GAME.GameSelecTType.GAMESELECTTYPE_QUIT;
        packet.SendPacket();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);
        Application.Quit();
#endif
    }


    //提交
    public void OnReferClick()
    {
        //string dicStr = "目前没有实现";
        string dicStr = StrDictionary.GetClientDictionaryString("#{2900}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnAccountOK, OnMessageBoxNO);
    }
    //返回
    public void OnRetuenClick()
    {
        // 无sdk 暂时 不实现
        //SystemStupWindow.SetActive(true);
        //QuestionWindow.SetActive(false);
       // CustomerWindow.SetActive(false);
    }

    void OnUserCenter()
    {
        PlatformHelper.EnterUserCenter();
    }

}
