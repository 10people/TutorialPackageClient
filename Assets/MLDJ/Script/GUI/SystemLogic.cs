/********************************************************************
	filename:	SystemLogic.cs
	date:		2014-7-14  10-40
	author:		
	purpose:	系统设置界面
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;
using Games.LogicObj;
using Games.GlobeDefine;
using Games.UserCommonData;

using GCGame.Table;

public class SystemLogic : MonoBehaviour {

    public GameObject SystemStupWindow;
    public GameObject QuestionWindow;
    public GameObject CustomerWindow;
    public GameObject UserCenterButton;
    public GameObject BtnCustomServiceCN;       // 联系客服
    public GameObject GuestBindButton;   //游客绑定账号（韩国专用）
    
    public GameObject[] BtnTWGroup;

    public TabController m_TabTableau;
    public UIToggle m_NameEdition;  //名字板
    //public UIToggle m_Music;        //音乐
    //public UIToggle m_SoundEffect;  //音效
    public UIToggle m_Floodlight;  //全屏泛光
    public UIToggle m_ScreenMove;  //屏幕移动
    public UIToggle m_NewPlayerGuide;  //新手指引开关
    public UIToggle m_DeathPushEnable; //打开死亡推送
    public UIToggle m_KillNpcExp; //NPCEXP
    public UIToggle m_SkillEffect;  //技能特效
    public UIToggle m_DamageBoard;  //伤害板
    public UIToggle m_WallVision;   //透明遮挡
    public UIToggle m_RefuseAllAddFriend; //拒绝所有好友请求
	public UIToggle m_RefuseDuel; //拒绝切磋

    //子Window
    public TabController m_TabQuestion;
    public UIToggle m_Bug;          //bug
    public UIToggle m_Complain;     //投诉
    public UIToggle m_propose;      //建议

    private static int m_ShowPlayerNumMax = 30;
    private int m_curShowPlayerNum = 0;
    public UILabel m_LabelHideOtherPlayerNum;
    public UISlider m_SliderHideOtherPlayer;
    private bool m_bSystemTableau = false;
//    Obj_MainPlayer m_User = null;
	// Use this for initialization
    public UIGrid gridSystenButtons;

	void Awake ()
    {
        UserCenterButton.SetActive(false);
        BtnCustomServiceCN.SetActive(false);
        if (PlatformHelper.IsChannelTW())
        {
            for (int i = 0; i < BtnTWGroup.Length; i++)
            {
                BtnTWGroup[i].SetActive(true);
            }
        }
    }

    void OnEnable()
    {
        if (PlatformHelper.IsGuest() && PlatformHelper.IsChannelKO())
        {
            if (GuestBindButton)
            {
                GuestBindButton.SetActive(true);
            }
        }
        else
        {
            if (GuestBindButton)
            {
                GuestBindButton.SetActive(false);
            }
        }
        if (AutoFightLogic.Instance())
        {
            AutoFightLogic.Instance().AutoFightOK(); //切UI的时候存储挂机设置
        }
#if UNITY_ANDROID
        if (UserCenterButton)
        {
            UserCenterButton.SetActive(true);
        }
#endif
        m_bSystemTableau = false;
        if (PlayerPreferenceData.SystemTableau == 1)
        {
            m_TabTableau.ChangeTab("Tab_High");
        }
        else if (PlayerPreferenceData.SystemTableau == 2)
        {
            m_TabTableau.ChangeTab("Tab_Centre");
        }
        else if (PlayerPreferenceData.SystemTableau == 3)
        {
            m_TabTableau.ChangeTab("Tab_Low");
        }
#if UNITY_WP8
        else
        {
            PlayerPreferenceData.SystemShowOtherPlayerCount = 15;
        }
#endif
        //        m_User = Singleton<ObjManager>.Instance.MainPlayer;
        
        m_TabTableau.delTabChanged = OnTabChangeTableau;   //Start时不要调用到delTabChanged
       // m_Music.value = PlayerPreferenceData.SystemMusic == 1 ? true : false;
       // m_SoundEffect.value = PlayerPreferenceData.SystemSoundEffect == 1 ? true : false;
        m_NameEdition.value = PlayerPreferenceData.SystemNameBoard == 1 ? true : false;
        m_ScreenMove.value = PlayerPreferenceData.SystemScreenMove == 1 ? true : false;
        m_NewPlayerGuide.value = !PlayerPreferenceData.NewPlayerGuideClose;
        m_DeathPushEnable.value = PlayerPreferenceData.DeathPushDisable;
        m_KillNpcExp.value = PlayerPreferenceData.KillNpcExp;
        m_SkillEffect.value = PlayerPreferenceData.SystemSkillEffectEnable;
        m_DamageBoard.value = PlayerPreferenceData.SystemDamageBoardEnable;
        m_WallVision.value = PlayerPreferenceData.SystemWallVisionEnable;
        if (m_RefuseAllAddFriend != null) m_RefuseAllAddFriend.value = PlayerPreferenceData.RefuseAllAddFriend;
		if (m_RefuseDuel != null)
						m_RefuseDuel.value = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag ((int)USER_COMMONFLAG.CF_DISABLE_DUEL);
        if (PlayerPreferenceData.SystemShowOtherPlayerCount > m_ShowPlayerNumMax)
        {
            m_SliderHideOtherPlayer.value = 1;
        }
        else
        {
            m_SliderHideOtherPlayer.value = (float)PlayerPreferenceData.SystemShowOtherPlayerCount / (float)(m_ShowPlayerNumMax);
        }

        //m_HideOtherPlayer.value = PlayerPreferenceData.SystemHideOtherPlayer;

        if (PlayerPreferenceData.SystemFloodlight == 0)
        {
            m_Floodlight.value = false;
        }
        else
        {
            m_Floodlight.value = true;
        }

        SystemStupWindow.SetActive(true);
        QuestionWindow.SetActive(false);
        CustomerWindow.SetActive(false);

        if (PlayerPreferenceData.SystemTableau == 0)   //未初始化
        {
            if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_LOW)
            {
                m_TabTableau.ChangeTab("Tab_Low");
                TabChangeTableauEx("Tab_Low");
            }
            else
            {
                m_TabTableau.ChangeTab("Tab_Centre");
                TabChangeTableauEx("Tab_Centre");
            }
        }
        m_bSystemTableau = true;
        gridSystenButtons.Reposition();
    }

    void OnTabChangeTableau(TabButton button)
    {
        TabChangeTableauEx(button.name);
    }
    public void TabChangeTableauEx(string str)
    {
        if (m_bSystemTableau == false)
        {
            return;
        }
        if (str == "Tab_High")
        {
            PlayerPreferenceData.SystemTableau = 1;
           // m_Music.value = true;               //打开 音乐
            //m_SoundEffect.value = true;         //打开 音效
            m_NameEdition.value = true;         //打开 名字板
            m_ScreenMove.value = true;          //打开 屏幕移动
            m_NewPlayerGuide.value = true;      //打开 新手指引
            m_DeathPushEnable.value = true;     //打开 死亡推送
            m_KillNpcExp.value = true;          //打开 杀怪经验
            m_SkillEffect.value = true;         //打开 技能特效
            m_DamageBoard.value = true;         //打开 伤害板
            m_WallVision.value = true;          //打开 透明遮挡
            m_Floodlight.value = true;          //打开 全屏泛光
            m_SliderHideOtherPlayer.value = (float)30 / (float)m_ShowPlayerNumMax;  //玩家数量 30
            OnNameEdition();
            OnMusic();
            OnSoundEffect();
            OnFloodlight();
            OnScreenMove();
            OnNewPlayerGuideClose();
            OnDeathPushClick();
            OnIsKillNpcExp();
            OnSkillEffect();
            OnDamageBoard();
            OnWallVision();
        }
        else if (str == "Tab_Centre")
        {
            PlayerPreferenceData.SystemTableau = 2;
           // m_Music.value = true;               //打开 音乐
          //  m_SoundEffect.value = true;         //打开 音效
#if UNITY_ANDROID && !UNITY_EDITOR	
			string ret = AndroidHelper.platformHelper("shouldShowWarnning");
			if(ret.EndsWith("1")||ret.EndsWith("2"))
				m_NameEdition.value = false;
			else
            	m_NameEdition.value = true;     //打开 名字板
#else
			m_NameEdition.value = true;     	//打开 名字板
#endif
            m_ScreenMove.value = true;          //打开 屏幕移动
            m_NewPlayerGuide.value = true;      //打开 新手指引
            m_DeathPushEnable.value = true;     //打开 死亡推送
            m_KillNpcExp.value = true;          //打开 杀怪经验
            m_SkillEffect.value = true;         //打开 技能特效
            m_DamageBoard.value = true;         //打开 伤害板
            m_WallVision.value = false;         //关闭 透明遮挡
            m_Floodlight.value = false;         //关闭 全屏泛光
            m_SliderHideOtherPlayer.value = (float)15 / (float)m_ShowPlayerNumMax;  //玩家数量 15
            OnNameEdition();
            OnMusic();
            OnSoundEffect();
            OnFloodlight();
            OnScreenMove();
            OnNewPlayerGuideClose();
            OnDeathPushClick();
            OnIsKillNpcExp();
            OnSkillEffect();
            OnDamageBoard();
            OnWallVision();
        }
        else if (str == "Tab_Low")
        {
            PlayerPreferenceData.SystemTableau = 3;
           // m_Music.value = false;              //关闭 音乐
            //m_SoundEffect.value = false;        //关闭 音效
            m_NameEdition.value = false;        //关闭 名字板
            m_ScreenMove.value = true;          //打开 屏幕移动
            m_NewPlayerGuide.value = true;      //打开 新手指引
			m_DeathPushEnable.value = true;    // 打开 死亡推送
            m_KillNpcExp.value = true;          //打开 杀怪经验
			m_SkillEffect.value = true;        //打开 技能特效
            m_DamageBoard.value = false;        //关闭 伤害板
            m_WallVision.value = false;         //关闭 透明遮挡
            m_Floodlight.value = false;         //关闭 全屏泛光
            m_SliderHideOtherPlayer.value = (float)4 / (float)m_ShowPlayerNumMax;  //玩家数量 1
            OnNameEdition();
            OnMusic();
            OnSoundEffect();
            OnFloodlight();
            OnScreenMove();
            OnNewPlayerGuideClose();
            OnDeathPushClick();
            OnIsKillNpcExp();
            OnSkillEffect();
            OnDamageBoard();
            OnWallVision();
        }        
    }
//     public UIToggle m_NameEdition;  //名字板
//     public UIToggle m_Music;        //音乐
//     public UIToggle m_SoundEffect;  //音效
    public void OnNameEdition()
    {
        PlayerPreferenceData.SystemNameBoard = m_NameEdition.value ? 1 : 0;
        UpdateNameBoard();

		if (m_NameEdition.value == true)
			m_NameEdition_Lab.color = m_ChooseColor;
		else if( m_NameEdition.value == false)
			m_NameEdition_Lab.color = m_NoChooseColor;
    }

    public void OnMusic()
    {
       // GameManager.gameManager.SoundManager.EnableBGM = m_Music.value;
       // PlayerPreferenceData.SystemMusic = m_Music.value ? 1 : 0;
    }

    public void OnSoundEffect()
    {
       // GameManager.gameManager.SoundManager.EnableSFX = m_SoundEffect.value;
       // PlayerPreferenceData.SystemSoundEffect = m_SoundEffect.value ? 1 : 0;

       // if (GameManager.gameManager.ActiveScene != null)
        {
        //    GameManager.gameManager.ActiveScene.SetSceneSoundEffect(m_SoundEffect.value);
        }
    }

    public void OnFloodlight()
    {
        FastBloom curCompont = (FastBloom)Camera.main.gameObject.GetComponent("FastBloom");
        if (m_Floodlight.value == false)
        {
            PlayerPreferenceData.SystemFloodlight = 0;
            if (curCompont != null)
            {
                curCompont.enabled = false;
#if  UNITY_WP8 && !UNITY_EDITOR
                //彻底删除FastBloom
                GameObject.Destroy(curCompont);
#endif
            }

			m_Floodlight_Lab.color = m_NoChooseColor ;
        }
        else
        {
            PlayerPreferenceData.SystemFloodlight = 1;
            if (curCompont != null)
            {
                curCompont.enabled = true;
            }

			m_Floodlight_Lab.color = m_ChooseColor ;
#if  UNITY_WP8 && !UNITY_EDITOR
            else
            {
                //重新添加特效，设置参数
                Games.Scene.ActiveScene.FloodInfo floodinfo = GameManager.gameManager.ActiveScene.floodinfo;
                curCompont = (FastBloom)Camera.main.gameObject.AddComponent("FastBloom");
                curCompont.blurIterations = floodinfo.blurIterations;
                curCompont.blurSize = floodinfo.blurSize;
                curCompont.blurType = (FastBloom.BlurType)floodinfo.blurType;
                curCompont.fastBloomShader = Shader.Find(floodinfo.fastBloomShader);
                curCompont.intensity = floodinfo.intensity;
                curCompont.threshhold = floodinfo.threshhold;
                curCompont.enabled = true;

            }
#endif
        }
    }
    public void OnScreenMove()
    {
        PlayerPreferenceData.SystemScreenMove = m_ScreenMove.value ? 1 : 0;

		if (m_ScreenMove.value == true)
			m_ScreenMove_Lab.color = m_ChooseColor;
		else if( m_ScreenMove.value == false)
			m_ScreenMove_Lab.color = m_NoChooseColor;
     }

    public void OnNewPlayerGuideClose()
    {
        PlayerPreferenceData.NewPlayerGuideClose = !m_NewPlayerGuide.value;

		if (m_NewPlayerGuide.value == true)
			m_NewPlayerGuide_Lab.color = m_ChooseColor;
		else if (m_NewPlayerGuide.value == false)
			m_NewPlayerGuide_Lab.color = m_NoChooseColor;
    }

    public void OnDeathPushClick()
    {
        //
        PlayerPreferenceData.DeathPushDisable = m_DeathPushEnable.value;
        CG_SET_DEATH_PUSH packet = (CG_SET_DEATH_PUSH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SET_DEATH_PUSH);
        packet.Enable = m_DeathPushEnable.value ? 1 : 0;        
        packet.SendPacket();

		if (m_DeathPushEnable.value == true)
			m_DeathPushEnable_Lab.color = m_ChooseColor;
		else if (m_DeathPushEnable.value == false)
			m_DeathPushEnable_Lab.color = m_NoChooseColor;
    }

    public void OnRefuseAllAddFriendClick()
    {
        if (m_RefuseAllAddFriend != null)
        {
            PlayerPreferenceData.RefuseAllAddFriend = m_RefuseAllAddFriend.value;
            GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_REFUSE_ADD_FRIEND, m_RefuseAllAddFriend.value);

			if (m_RefuseAllAddFriend.value == true)
				m_RefuseAllAddFriend_Lab.color = m_ChooseColor;
			else if (m_RefuseAllAddFriend.value == false)
				m_RefuseAllAddFriend_Lab.color = m_NoChooseColor;
        }
    }

    public void OnIsKillNpcExp()
    {
        PlayerPreferenceData.KillNpcExp = m_KillNpcExp.value;
        GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag( (int)USER_COMMONFLAG.CF_ISOPENKILLNPCEXP, !m_KillNpcExp.value);

		if (m_KillNpcExp.value == true)
			m_KillNpcExp_Lab.color = m_ChooseColor;
		else if (m_KillNpcExp.value == false)
			m_KillNpcExp_Lab.color = m_NoChooseColor;
    }

    //技能特效
    public void OnSkillEffect()
    {
        PlayerPreferenceData.SystemSkillEffectEnable = m_SkillEffect.value;

		if (m_SkillEffect.value == true)
			m_SkillEffect_Lab.color = m_ChooseColor;
		else if (m_SkillEffect.value == false)
			m_SkillEffect_Lab.color = m_NoChooseColor;
    }

    //伤害板
    public void OnDamageBoard()
    {
        PlayerPreferenceData.SystemDamageBoardEnable = m_DamageBoard.value;

		if (m_DamageBoard.value == true)
			m_DamageBoard_Lab.color = m_ChooseColor;
		else if (m_DamageBoard.value == false)
			m_DamageBoard_Lab.color = m_NoChooseColor;
    }

    //遮挡半透
    public void OnWallVision()
    {
        PlayerPreferenceData.SystemWallVisionEnable = m_WallVision.value;
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        { 
            if (m_WallVision.value)
            {
                ObjManager.AddOutLineMaterial(Singleton<ObjManager>.Instance.MainPlayer.gameObject);
            }
            else
            {
                ObjManager.RemoveOutLineMaerial(Singleton<ObjManager>.Instance.MainPlayer.gameObject);
            }
        }

		if (m_WallVision.value == true)
			m_WallVision_Lab.color = m_ChooseColor;
		else if (m_WallVision.value == false)
			m_WallVision_Lab.color = m_NoChooseColor;
      
    }
     
    //关闭
    public void OnCloseClick()
    {
        PlayerPreferenceData.SystemShowOtherPlayerCount = m_curShowPlayerNum;
        Singleton<ObjManager>.Instance.UpdateHidePlayers();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);
    }
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
        string dicStr = StrDictionary.GetClientDictionaryString("#{2899}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnBlindOK, OnMessageBoxNO);      
    }
    public void OnBlindOK()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            Singleton<ObjManager>.Instance.MainPlayer.StopMove();
            if (null != Singleton<ObjManager>.Instance.MainPlayer.NavAgent)
            {
                Destroy(Singleton<ObjManager>.Instance.MainPlayer.NavAgent);
            }
        }       
        GameManager.gameManager.AutoSearch.Stop();
       

        CG_CHANGE_MAJORCITY packet = (CG_CHANGE_MAJORCITY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHANGE_MAJORCITY);
        packet.SetType(2);
        packet.SendPacket();
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
        SystemStupWindow.SetActive(false);
        CustomerWindow.SetActive(true);
    }
    //问题反馈
    public void OnQuestionClick()
    {
        SystemStupWindow.SetActive(false);
        QuestionWindow.SetActive(true);
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

    public void OnGuestBindClick()
    {
        if (PlatformHelper.IsChannelKO())
        {
            PlatformHelper.guestBind();
        }
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
        SystemStupWindow.SetActive(true);
        QuestionWindow.SetActive(false);
        CustomerWindow.SetActive(false);
//     public GameObject SystemStupWindow;
//     public GameObject QuestionWindow;
//     public GameObject CustomerWindow;
    }

    void OnUserCenter()
    {
        PlatformHelper.EnterUserCenter();
    }

    //更新名字板
    private void UpdateNameBoard()
    {
        Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
        foreach (Obj targetObj in targets.Values)
        {
            if (targetObj != null)
            {
                Obj_Character ObjChar = targetObj.gameObject.GetComponent<Obj_Character>();
                if (ObjChar == null)
                {
                    continue;
                }
                if (ObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                {
                    if (PlayerPreferenceData.SystemNameBoard == 0)
                    {
                        ObjChar.CloseNameBoard();
                    }
                    else
                    {
                        ObjChar.ShowNameBoard();
                    }
                }
            }
        }
    }

    public void OnHideOtherPlayerSliderChange()
    {
        m_curShowPlayerNum = (int)(m_SliderHideOtherPlayer.value * m_ShowPlayerNumMax);
        if (m_curShowPlayerNum >= m_ShowPlayerNumMax)
        {
            //m_LabelHideOtherPlayerNum.text = "全部";
            m_LabelHideOtherPlayerNum.text = StrDictionary.GetClientDictionaryString("#{2901}");
        }
        else
        {
            m_LabelHideOtherPlayerNum.text = m_curShowPlayerNum.ToString();
        }

		PlayerPreferenceData.SystemShowOtherPlayerCount = m_curShowPlayerNum;
    }
    //充值异常
    private float m_fSendCYpay = 0; //判断发送异常充值
    public void OnRechargeAnomalyClick()
    {
        if (Time.realtimeSinceStartup - m_fSendCYpay > 2.0f)
        {
            m_fSendCYpay = Time.realtimeSinceStartup;
            PlatformListener.SendCYPay(2);
        }       
    }

    void OnCallCenterClick()
    {
         PlatformHelper.ShowCallCenter();
    }

    void OnCallCenterTWClick()
    {
        Application.OpenURL("http://www.efuntw.com/service.html");
    }

    void OnBBSTWClick()
    {
        Application.OpenURL("http://t.efuntw.com");
    }

    void OnForumTWClick()
    {
        Application.OpenURL("http://t.efuntw.com/forum/");
    }

    void OnEFunFBClick()
    {
        Application.OpenURL("https://www.facebook.com/t.efuntw");
    }

	//========================================================
	public void OnRefuseDuelClick()
	{
		if (m_RefuseDuel != null)
		{
			PlayerPreferenceData.DuelDisable = m_RefuseDuel.value  ;
			GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_DISABLE_DUEL,m_RefuseDuel.value);

			if (m_RefuseDuel.value == true)
				m_RefuseDuel_Lab.color = m_ChooseColor;
			else if (m_RefuseDuel.value == false)
				m_RefuseDuel_Lab.color = m_NoChooseColor;
		}
	}
	private Color m_ChooseColor = new Color(0/255f,247/255f,235/255f);
	private Color m_NoChooseColor = new Color(10/255f,125/255f,123/255f);
	public UILabel m_NameEdition_Lab;  //名字板
	//public UILabel m_Music_Lab;        //音乐
	//public UILabel m_SoundEffect_Lab;  //音效
	public UILabel m_Floodlight_Lab;  //全屏泛光
	public UILabel m_ScreenMove_Lab;  //屏幕移动
	public UILabel m_NewPlayerGuide_Lab;  //新手指引开关
	public UILabel m_DeathPushEnable_Lab; //打开死亡推送
	public UILabel m_KillNpcExp_Lab; //NPCEXP
	public UILabel m_SkillEffect_Lab;  //技能特效
	public UILabel m_DamageBoard_Lab;  //伤害板
	public UILabel m_WallVision_Lab;   //透明遮挡
	public UILabel m_RefuseAllAddFriend_Lab; //拒绝所有好友请求
	public UILabel m_RefuseDuel_Lab; //拒绝所有好友请求

	public void onResetSystem()
	{
		PlayerPreferenceData.SystemTableau = 2;   
		m_TabTableau.ChangeTab("Tab_Centre");
		TabChangeTableauEx("Tab_Centre");
		
		// 改需求了。。。
		if (PlayerPreferenceData.SystemTableau == 1)
		{
			m_NameEdition.value = true;         //打开 名字板
			m_ScreenMove.value = true;          //打开 屏幕移动
			m_NewPlayerGuide.value = true;      //打开 新手指引
			m_DeathPushEnable.value = true;     //打开 死亡推送
			m_KillNpcExp.value = true;          //打开 杀怪经验
			m_SkillEffect.value = true;         //打开 技能特效
			m_DamageBoard.value = true;         //打开 伤害板
			m_WallVision.value = true;          //打开 透明遮挡
			m_Floodlight.value = true;          //打开 全屏泛光
			m_RefuseAllAddFriend.value = false ;   
			m_SliderHideOtherPlayer.value = (float)30 / (float)m_ShowPlayerNumMax;  //玩家数量 30
			m_RefuseDuel.value = false ;
			OnNameEdition();
			OnMusic();
			OnSoundEffect();
			OnFloodlight();
			OnScreenMove();
			OnNewPlayerGuideClose();
			OnDeathPushClick();
			OnIsKillNpcExp();
			OnSkillEffect();
			OnDamageBoard();
			OnWallVision();
			OnRefuseAllAddFriendClick();
			OnRefuseDuelClick();
		}
		else if (PlayerPreferenceData.SystemTableau == 2)
		{
			// m_Music.value = true;               //打开 音乐
			//  m_SoundEffect.value = true;         //打开 音效
			#if UNITY_ANDROID && !UNITY_EDITOR	
			string ret = AndroidHelper.platformHelper("shouldShowWarnning");
			if(ret.EndsWith("1")||ret.EndsWith("2"))
				m_NameEdition.value = false;
			else
				m_NameEdition.value = true;     //打开 名字板
			#else
			m_NameEdition.value = true;     	//打开 名字板
			#endif
			m_ScreenMove.value = true;          //打开 屏幕移动
			m_NewPlayerGuide.value = true;      //打开 新手指引
			m_DeathPushEnable.value = true;     //打开 死亡推送
			m_KillNpcExp.value = true;          //打开 杀怪经验
			m_SkillEffect.value = true;         //打开 技能特效
			m_DamageBoard.value = true;         //打开 伤害板
			m_WallVision.value = false;         //关闭 透明遮挡
			m_Floodlight.value = false;         //关闭 全屏泛光
			m_RefuseAllAddFriend.value = false ;
			m_SliderHideOtherPlayer.value = (float)15 / (float)m_ShowPlayerNumMax;  //玩家数量 15
			m_RefuseDuel.value = false ; 
			OnNameEdition();
			OnMusic();
			OnSoundEffect();
			OnFloodlight();
			OnScreenMove();
			OnNewPlayerGuideClose();
			OnDeathPushClick();
			OnIsKillNpcExp();
			OnSkillEffect();
			OnDamageBoard();
			OnWallVision();
			OnRefuseAllAddFriendClick();
			OnRefuseDuelClick();
		}
		else if (PlayerPreferenceData.SystemTableau == 3)
		{
			PlayerPreferenceData.SystemTableau = 3;
			// m_Music.value = false;              //关闭 音乐
			//m_SoundEffect.value = false;        //关闭 音效
			m_NameEdition.value = false;        //关闭 名字板
			m_ScreenMove.value = true;          //打开 屏幕移动
			m_NewPlayerGuide.value = true;      //打开 新手指引
			m_DeathPushEnable.value = true;    // 打开 死亡推送
			m_KillNpcExp.value = true;          //打开 杀怪经验
			m_SkillEffect.value = true;        //打开 技能特效
			m_DamageBoard.value = false;        //关闭 伤害板
			m_WallVision.value = false;         //关闭 透明遮挡
			m_Floodlight.value = false;         //关闭 全屏泛光
			m_RefuseAllAddFriend.value = false ;
			m_RefuseDuel.value = false ;
			m_SliderHideOtherPlayer.value = (float)4 / (float)m_ShowPlayerNumMax;  //玩家数量 1
			OnNameEdition();
			OnMusic();
			OnSoundEffect();
			OnFloodlight();
			OnScreenMove();
			OnNewPlayerGuideClose();
			OnDeathPushClick();
			OnIsKillNpcExp();
			OnSkillEffect();
			OnDamageBoard();
			OnWallVision();
			OnRefuseAllAddFriendClick();
			OnRefuseDuelClick();
		}
	}

	//void onDisable()
	//{
	//	Debug.Log ("LuYou OnDisable");
	//}
}
