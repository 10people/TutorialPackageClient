/************************************************************************/
/* 文件名：AwardLogic.cs    
 * 创建日期：2014.03.21
 * 创建人：贺文鹏
 * 功能说明：奖励整合界面
/************************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using Games.UserCommonData;
using Games.GlobeDefine;

public class AwardLogic : UIControllerBase<AwardLogic>
{
    public TabController m_TabButton;
    private enum TabIndex
    {
        Tab_Denglu = 0,
        Tab_YueDu,
        Tab_TianDao
    }
    public GameObject[] m_objTitles;
    // 每日奖励
    public TabButton m_TabDayAward;
    public DayAwardLogic m_DayAwardRoot;
    public GameObject m_DayAwardTip;
    public UILabel m_DayAwardTipText;
    private int m_WeekDay;
    private bool m_DayAwardFlag;

    // 在线奖励
    public TabButton m_TabOnlineAward;
    public OnlineAwardLogic m_OnlineAwardRoot;
    public GameObject m_OnlineAwardTip;
    public UILabel m_OnlineAwardTipText;
    private int m_OnlineAwardID;
    private int m_LeftTime;
    public int LeftTime
    {
        set {
            m_LeftTime = value;
            if (m_OnlineAwardRoot != null && m_OnlineAwardRoot.gameObject.activeSelf)
            {
                m_OnlineAwardRoot.LeftTime = m_LeftTime;
				float vlue = m_OnlineAwardRoot.getSliderVlue();
				m_OnlineAwardRoot.UpdateSlider(vlue);
            }
        }
    }

    //
    public GameObject m_SNSTab;     //SNS分页按钮
    public GameObject m_SNSAwardRoot;
    public GameObject m_SNSAwardTip;
    public UILabel m_SNSAwardTipText;
    public GameObject m_SNSShareBtnTip;
    public delegate void AfterCallDelegate();
    public AfterCallDelegate delegateAfterCall;
    public SignRewardPopUpBox m_PopUpBox;
    public AccumulateSignRewardPopUpBox m_AccSignPopUpBox;
    
    public void SetAfterStartDelegateSNS()
    {
        delegateAfterCall += ShowSNSWindow;
    }

    void ShowSNSWindow()
    {
        m_TabButton.ChangeTab("Button5-SNS-Award");
//         m_DayAwardRoot.gameObject.SetActive(false);
//         m_OnlineAwardRoot.gameObject.SetActive(false);
//         m_NewServerAwardRoot.gameObject.SetActive(false);
//         m_NewOnlineAwardRoot.gameObject.SetActive(false);
//         m_CDkeyWindow.SetActive(false);
// 
//         m_SNSAwardRoot.SetActive(true);
    }

	// 每日签到奖励   begin
	public TabButton m_TabEveryDaySignInAward;
	public DaySignAwardLogic m_DaySignInAwardRoot;
	public GameObject m_NewSignInAwardTip;
	//public UILabel m_NewServerAwardTipText;

	// 每日签到奖励   end


    // 首周奖励
    public TabButton m_TabNewServerAward;
    //public NewServerAwardLogic m_NewServerAwardRoot;
    public SignReward_LoginController m_NewServerAwardRoot;
    public GameObject m_NewServerAwardTip;
    public UILabel m_NewServerAwardTipText;
//    private int m_NewServerDays;

    // 天道酬勤
    public GameObject m_ContinueLoginAwardTip;
    public TabButton m_TabTianDao;
    public SignReward_ContinueLogin m_TianDaoRoot;
    private int m_ContinueDay;
    
    public UIGrid m_ButtonGrid;
    
    // 新开服在线奖励
    public TabButton m_TabNewOnlineAward;
    public NewOnlineAwardLogic m_NewOnlineAwardRoot;
    public GameObject m_NewOnlineAwardTip;
    public UILabel m_NewOnlineAwardTipText;
    private int m_NewOnlineAwardID;
    private int m_NewLeftTime;
    private bool m_IsShowNewOnlineAward;
    private bool m_IsNewOnlineAwardStart;

	private bool m_IsOpenSignInReward;
	private bool m_IsOpenOldLoginReward;
    public int NewLeftTime
    {
        set
        {
            m_NewLeftTime = value;
            if (m_NewOnlineAwardRoot != null && m_NewOnlineAwardRoot.gameObject.activeSelf)
            {
                m_NewOnlineAwardRoot.LeftTime = m_NewLeftTime;
            }
        }
    }
    //cdkey//////////////////////////////////
    public TabButton m_TabCDkey;
    public GameObject m_CDkeyWindow;
    public UIInput m_CDKeyInput;
    // 限时在线奖励
    public TabButton m_TabNew7DayOnlineAward;
    public New7DayOnlineAwardLogic m_New7DayOnlineAwardRoot;
    public GameObject m_New7DayOnlineAwardTip;
    public UILabel m_New7DayOnlineAwardTipText;
    private int m_New7DayOnlineAwardID;
    private int m_New7DayLeftTime;
    private bool m_IsShowNew7DayOnlineAward;
    private bool m_IsNew7DayOnlineAwardStart;
    public int New7DayLeftTime
    {
        set
        {
            m_New7DayLeftTime = value;
            if (m_New7DayOnlineAwardRoot != null && m_New7DayOnlineAwardRoot.gameObject.activeSelf)
            {
                m_New7DayOnlineAwardRoot.LeftTime = m_New7DayLeftTime;
            }
        }
    }
    //app评价奖励
    public GameObject m_ReviewPanel;
    public TabButton m_ReviewTab;
    public GameObject m_ReviewNumTip;//评价上面的小红点点
    public UILabel m_RewardNotice;//评价界面上的一行文字提示

    //登录好礼
    public GameObject NweServerAward;
    public enum TabType
    {
        NewServerAward = 0,
        EveryDaySignInAward,
        TianDao,
        Num
    }

    #region 新加功能
    #region UI事件
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.SignReward);
    }
    #endregion
 /*   void OnTabChange(TabButton button)
    {
        if (button.name == "Button1_Denglu")
        {
            UpdateTitles(0);
        }
        else if (button.name == "Button2_Meiri")
        {
            UpdateTitles(1);
        }
        else if (button.name == "Button3_Tiandaochouqin")
        {
            UpdateTitles(2);
        }
    }*/
    private void UpdateTitles(int index)
    {
        for (int i = 0; i < m_objTitles.Length; i++)
        {
            if (i == index)
            {
                m_objTitles[i].SetActive(true);
            }
            else
            {
                m_objTitles[i].SetActive(false);
            }
        }
    }
    #endregion

    public void HideReviewTab()
    {
        if (null != m_ReviewTab)
            m_ReviewTab.gameObject.active = false;
    }

    void ShowCDkey()
    {
        m_CDkeyWindow.SetActive(true);
        m_CDKeyInput.value = "";
        m_CDKeyInput.defaultText = StrDictionary.GetClientDictionaryString("#{4309}");
    }
    void SendCDkey()
    {
        if (m_CDKeyInput.value.Length > 0)
        {
            CG_REQUEST_CDKEY packet = (CG_REQUEST_CDKEY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQUEST_CDKEY);
            packet.Cdkeystr = m_CDKeyInput.value;
            packet.SendPacket();
            CloseWindow();
        }
        else
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2922}");
            }
        }
    }
    void PasteCDkey()
    {

    }

    //现在去评价按钮
    void ReviewNow()
    {
        //先把客户端的状态给改了
        PlayerPreferenceData.ReviewRefuseType = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE;
        GameManager.gameManager.PlayerDataPool.ReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE;

        //notice gameserver
        CG_REVIEW_RESULT pPacket = (CG_REVIEW_RESULT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REVIEW_RESULT);
        if (null != pPacket)
        {
            pPacket.SetResult(GameManager.gameManager.PlayerDataPool.ReviewResult);//It is the most effective way that encourages us programming.
            pPacket.SendPacket();
        }

        Application.OpenURL(PlatformHelper.GetAppDetailUrl());

        //隐藏tab
       CloseWindow();
       HideReviewTab();            
    }
    
    //////////////////////////////////
    void Awake()
    {
        SetInstance(this);
        m_TabButton.delTabChanged = OnTabChange;
        m_TianDaoRoot.gameObject.SetActive(false);
        m_NewServerAwardRoot.gameObject.SetActive(false);
        #region UnUsed
        //根据标记位确认是否显示按钮
        //分享功能
       /* if (false == GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SNS) ||
            false ==PlatformHelper.IsEnableShareCenter())
        {
            m_SNSTab.SetActive(false);
        }

        //激活功能
        if (false == GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_ACTIVATION))
        {
            m_TabCDkey.gameObject.SetActive(false);
        }
        SetInstance(this);
        m_TabButton.delTabChanged = OnTabChange;

        //如果玩家已经欣然接受评价，隐藏评价Tab
        //如果评价结果为-1，表示未开启该功能
        if ( (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE == GameManager.gameManager.PlayerDataPool.ReviewResult ||
            (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.RT_INVALID == GameManager.gameManager.PlayerDataPool.ReviewResult)
        {
            HideReviewTab();
        }
        //add by zhangdongai 2014-12-17
        //默认先不显示评价界面的提示lable，后续按照各个渠道的需求来定。
        if (0 == GameManager.gameManager.PlayerDataPool.ReviewRewardEnable)
        {
            if (null != m_RewardNotice)
            {
                m_RewardNotice.gameObject.SetActive(false);
            }
        }       

        if ( null != m_ReviewNumTip )
        {
            if (1 == PlayerPreferenceData.ClientClickReview)
            {
                m_ReviewNumTip.SetActive(false);
            }
            else
            {
                m_ReviewNumTip.SetActive(true);
            }
        }*/
        #endregion
    }

	// Use this for initialization
	void Start () {
	}

    void OnEnable()
    {
#if UNITY_IPHONE || UNITY_WP8 || UNITY_BLACKBERRY   //|| UNITY_ANDROID
		TouchScreenKeyboard.hideInput = false;		
#endif
        CleanUp();
        UpdateTip();
        ShowWindow();
        if (delegateAfterCall != null)
        {
            delegateAfterCall();
            delegateAfterCall = null;
        }
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.LINGJIANG_UI);
#endif
	}

    void OnDestroy()
    {
        SetInstance(null);
    }


    void CloseWindow()
    {
		if (LoverFlowerWindow.IsOpenAward)
		{
			LoverFlowerWindow.IsOpenAward = false;
			UIManager.ShowUI(UIInfo.FestivalController);
			return;
		}

		if(m_DaySignInAwardRoot)
		{
			m_DaySignInAwardRoot.ClearCurChooseState ();
		}

        //更新主界面上的领奖按钮的显示状态
        if (FunctionButtonLogic.Instance() != null)
        {
            FunctionButtonLogic.Instance().UpdateButtonAwardTips();
        }
        
        UIManager.CloseUI(UIInfo.AwardRoot);
    }

    void OnTabChange(TabButton button)
    {
       // if (button.name == "Button1-Award")
        if (button.name == "Button1_Denglu")
        {
            UpdateTitles(0);
           // ShowNewServerAward();
        }
        else if (button.name == "Button2_Meiri")
        //else if(button.name == "Button09-AwardSign")
        {
            UpdateTitles(1);
            //ShowEveryDaySignInAward();
        }
        else if (button.name == "Button3_Tiandaochouqin")
        {
            UpdateTitles(2);
            //ShowTianDao();
        }
        else if (button.name == "Button2-Award")
        {
            ShowOnlineAward();
        }
        else if (button.name == "Button3-Award")
        {
            ShowDayAward();
        }
        else if (button.name == "Button4-Award")
        {
            ShowNewOnlineAward();
        }
        else if (button.name == "Button7-Jihuo-Award")
        {
            ShowCDkey();
        }
        else if (button.name == "Button8-Award")
        {
            Show7DayNewOnlineAward();
        }
        
        else if ( button.name == "Button9-Pingjia" )
        {
            if (null != m_ReviewNumTip)
            {
                m_ReviewNumTip.SetActive(false);
                PlayerPreferenceData.ClientClickReview = 1;
            }
        }
    }
   
    void ShowWindow()
    {
        if (null == m_TabButton)
        {
            return;
        }

        if (m_TabNewServerAward != null)
        {
            m_TabNewServerAward.gameObject.SetActive(false);
            UpdateTabButton(TabType.NewServerAward,GlobalData.IsOpenNewServerAwardFlag);
            //return;
//            if ((LoverFlowerWindow.IsOpenAward || GameManager.gameManager.PlayerDataPool.m_IsOpenBaiNian)
//                && m_NewOnlineAwardTip.activeInHierarchy)//如果是情人节点击，显示活动分页
//            {
//                m_TabButton.ChangeTab("Button4-Award");
//                GameManager.gameManager.PlayerDataPool.m_IsOpenBaiNian = false;
//            }
//            // 有签到的情况下优先显示签到
//            else if (m_IsOpenSignInReward && GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw ()) 
//            {
//                if(m_DaySignInAwardRoot != null && m_TabEveryDaySignInAward.gameObject.activeInHierarchy)
//                {
//                    //m_TabButton.ChangeTab("Button09-AwardSign");
//                    m_TabButton.ChangeTab("Button2_Meiri");
                    
//                }
//            }
//            else if (m_NewServerAwardTip.activeInHierarchy)
//            {
//                //ShowNewServerAward();
//                m_TabButton.ChangeTab("Button1-Award");
//            }
//            else if(m_OnlineAwardTip.activeInHierarchy)
//            {
//                //ShowOnlineAward();
//                m_TabButton.ChangeTab("Button2-Award");
//            }
//            else if (m_DayAwardTip.activeInHierarchy && m_IsOpenOldLoginReward)
//            {
//                //ShowDayAward();
//                m_TabButton.ChangeTab("Button3-Award");
//            }
//            else if (m_NewOnlineAwardTip.activeInHierarchy)
//            {
//                m_TabButton.ChangeTab("Button4-Award");
//            }
//            else if (m_New7DayOnlineAwardTip.activeInHierarchy)
//            {
//                m_TabButton.ChangeTab("Button8-Award");
//            }
//            else if ( m_ReviewNumTip.activeInHierarchy )
//            {
//                //显示评价界面
//                m_TabButton.ChangeTab("Button9-Pingjia");
//            }
//            else
//            {
//                // 无提醒 处理
////                if (m_TabNewServerAward.gameObject.activeInHierarchy)
////                {
////                    //ShowNewServerAward();
////                    m_TabButton.ChangeTab("Button1-Award");
////                }
////                else
////                {
//                    //ShowOnlineAward();
//                    //m_TabButton.ChangeTab("Button2-Award");
//                if(m_IsOpenSignInReward)
//                {
//                    m_TabButton.ChangeTab("Button09-AwardSign");
//                }
//                else
//                {
//                    m_TabButton.ChangeTab("Button2-Award");
//                }
					
////                }
//            }

//            if (m_ButtonGrid != null)
//            {
//                m_ButtonGrid.repositionNow = true;
//            }
        }
        if (m_TabNewOnlineAward != null)
        {           
            if (m_IsShowNewOnlineAward)
            {
                m_TabNewOnlineAward.gameObject.SetActive(true);
            }
            else
            {
                m_TabNewOnlineAward.gameObject.SetActive(false);
            }
            if (m_ButtonGrid != null)
            {
                m_ButtonGrid.repositionNow = true;
            }
            if (m_IsShowNew7DayOnlineAward)
            {
                m_TabNew7DayOnlineAward.gameObject.SetActive(true);
            }
            else
            {
                m_TabNew7DayOnlineAward.gameObject.SetActive(false);
            }
        }
        
        if (m_TabCDkey != null)
        {
            if ( GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_ACTIVATION))
            {
                m_TabCDkey.gameObject.SetActive(true);
                if (m_ButtonGrid != null)
                {
                    m_ButtonGrid.repositionNow = true;
                }
            }
            else
            {
                m_TabCDkey.gameObject.SetActive(false);
            }
        }

		if(m_TabEveryDaySignInAward != null)
		{
			m_TabEveryDaySignInAward.gameObject.SetActive(m_IsOpenSignInReward);
			if(!m_IsOpenSignInReward)
			{
				m_NewSignInAwardTip.SetActive(m_IsOpenSignInReward);
			}
		}

		if(m_TabDayAward != null)
		{
			m_TabDayAward.gameObject.SetActive(m_IsOpenOldLoginReward);
			if(!m_IsOpenOldLoginReward)
			{
				m_DayAwardRoot.gameObject.SetActive(false);
			}
		}
        if (m_TabTianDao != null)
        {

            UpdateTabButton(TabType.TianDao, GlobalData.IsOpenContinueLoginAwardFlag);
        }


        m_TabButton.GetComponent<UIGrid>().repositionNow = true;
    }

    void ShowDayAward()
    {
        if (m_DayAwardRoot != null)
        {
            m_DayAwardRoot.ButtonDayAward();
        }
    }

    public void ShowOnlineAward()
    {
        if (m_OnlineAwardRoot != null)
        {
            m_OnlineAwardRoot.ButtonOnlineAward();
        }
    }

    void ShowNewServerAward()
    {
        if (m_NewServerAwardRoot != null)
        {
            m_NewServerAwardRoot.ButtonNewServerAward();
            //if (m_NewServerAwardRoot.YellowDotVisibal())
            //{
            //}
            
        }
    }

    void ShowTianDao()
    {
        if (m_TianDaoRoot != null)
        {
            m_TianDaoRoot.ButtonNewServerAward();
        }
    }

    public void ShowNewOnlineAward()
    {
        if (m_NewOnlineAwardRoot != null)
        {
            m_NewOnlineAwardRoot.ButtonOnlineAward();
        }
    }
    public void Show7DayNewOnlineAward()
    {
        if (m_New7DayOnlineAwardRoot != null)
        {
            m_New7DayOnlineAwardRoot.ButtonOnlineAward();
        }
    }

	public void ShowEveryDaySignInAward()
	{
		if(m_DaySignInAwardRoot != null)
		{
			m_DaySignInAwardRoot.ButtonShowSignInAward();
		}
	}

	public void RefreshDaySignInUI()
	{
		if(m_DaySignInAwardRoot != null)
		{
			m_DaySignInAwardRoot.ClearCurChooseState();
			m_DaySignInAwardRoot.InitAllItems();
		}
	}
    // 初始化数据
    void InitData()
    {
        m_WeekDay = GameManager.gameManager.PlayerDataPool.AwardActivityData.WeekDay;
        m_DayAwardFlag = GameManager.gameManager.PlayerDataPool.AwardActivityData.DayAwardFlag;

        m_OnlineAwardID = GameManager.gameManager.PlayerDataPool.AwardActivityData.OnlineAwardID;
        m_LeftTime = GameManager.gameManager.PlayerDataPool.AwardActivityData.LeftTime;

        //m_NewServerDays = GameManager.gameManager.PlayerDataPool.AwardActivityData.NewServerDays;

        // 开服在线奖励
        m_IsShowNewOnlineAward = GameManager.gameManager.PlayerDataPool.ShouNowOnlineAwardWindow;
        m_NewOnlineAwardID = GameManager.gameManager.PlayerDataPool.AwardActivityData.NewOnlineAwardID;
        m_NewLeftTime = GameManager.gameManager.PlayerDataPool.AwardActivityData.NewLeftTime;
        m_IsNewOnlineAwardStart = GameManager.gameManager.PlayerDataPool.AwardActivityData.NewOnlineAwardStart;

        m_IsShowNew7DayOnlineAward = GameManager.gameManager.PlayerDataPool.AwardActivityData.ShowNew7DayOnlineAwardWindow;
        m_New7DayOnlineAwardID = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardID;
        m_New7DayLeftTime = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayLeftTime;
        m_IsNew7DayOnlineAwardStart = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardStart;

		m_IsOpenSignInReward = GameManager.gameManager.PlayerDataPool.IsOpenSignInReward;
		m_IsOpenOldLoginReward = GameManager.gameManager.PlayerDataPool.IsOpenOldLoginReward;
    }

    void CleanUp()
    {
        // 每日奖励
        m_WeekDay = -1;
        m_DayAwardFlag = false;
        if (m_DayAwardTip != null && m_DayAwardTipText != null)
        {
            m_DayAwardTipText.text = "";
            m_DayAwardTip.SetActive(false);
        }

        // 在线奖励
        m_OnlineAwardID = -1;
        m_LeftTime = -1;

        if (m_OnlineAwardTip != null && m_OnlineAwardTipText != null)
        {
            m_OnlineAwardTipText.text = "";
            m_OnlineAwardTip.SetActive(false);
        }

        // 首周奖励
        //m_NewServerDays = -1;

        if (m_NewServerAwardTip != null && m_NewServerAwardTipText != null)
        {
            m_NewServerAwardTipText.text = "";
            m_NewServerAwardTip.SetActive(false);
        }

        // 开服在线奖励
        m_NewOnlineAwardID = -1;
        m_NewLeftTime = -1;
        m_IsNewOnlineAwardStart = false;
        if (m_NewOnlineAwardTip != null && m_NewOnlineAwardTipText != null)
        {
            m_NewOnlineAwardTipText.text = "";
            m_NewOnlineAwardTip.SetActive(false);
        }


        //SNS
        if (m_SNSAwardTip != null && m_SNSAwardTipText != null)
        {
            m_SNSAwardTipText.text = "";
            m_SNSAwardTip.SetActive(false);
        }
        if (m_SNSShareBtnTip != null)
        {
            m_SNSShareBtnTip.SetActive(false);
        }

        //cdkey
        if (m_CDkeyWindow!=null)
        m_CDkeyWindow.SetActive(false);

        // 开服7天在线奖励
        m_New7DayOnlineAwardID = -1;
        m_New7DayLeftTime = -1;
        m_IsNew7DayOnlineAwardStart = false;
        if (m_New7DayOnlineAwardTip != null && m_New7DayOnlineAwardTipText != null)
        {
            m_New7DayOnlineAwardTipText.text = "";
            m_New7DayOnlineAwardTip.SetActive(false);
        }
    }

    public void UpdateTip()
    {
        InitData();

        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            //if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 5)
            //{
                //UpdateDayAwardTip();
                //UpdateOnlineAwardTip();
                //UpdateNewOnlineAwardTip();
                //UpdateNew7DayOnlineAwardTip();
				UpdateSignAwardTip();
                UpdateNewServerAwardTip();
                UpdateContinueLoginAwardTip();
            //}
        }

        UpdateSNSAwardTip();
        //m_TabNewServerAward.enabled = false;
        //m_TabTianDao.enabled = false;
    }

    // 每日奖励提醒
    void UpdateDayAwardTip()
    {
        if (m_DayAwardTip == null || m_DayAwardTipText == null)
        {
            return;
        }
        if (m_WeekDay >= 0 && m_DayAwardFlag == false)
        {
            m_DayAwardTip.SetActive(true);
            m_DayAwardTipText.text = "1";
        }
        else
        {
            m_DayAwardTipText.text = "";
            m_DayAwardTip.SetActive(false);
        }
    }

    // 在线领奖提醒
    void UpdateOnlineAwardTip()
    {
        if (m_OnlineAwardTip == null || m_OnlineAwardTipText == null)
        {
            return;
        }
        if (m_OnlineAwardID >= 0 && m_LeftTime <= 0)
        {
            m_OnlineAwardTip.SetActive(true);
            m_OnlineAwardTipText.text = "1";
        }
        else
        {
            m_OnlineAwardTipText.text = "";
            m_OnlineAwardTip.SetActive(false);
        }
    }

    // 新开服在线领奖提醒
    void UpdateNewOnlineAwardTip()
    {
        if (m_NewOnlineAwardTip == null || m_NewOnlineAwardTipText == null)
        {
            return;
        }
        if (m_NewOnlineAwardID >= 0 && m_NewLeftTime <= 0 && m_IsNewOnlineAwardStart)
        {
            m_NewOnlineAwardTip.SetActive(true);
            m_NewOnlineAwardTipText.text = "1";
        }
        else
        {
            m_NewOnlineAwardTipText.text = "";
            m_NewOnlineAwardTip.SetActive(false);
        }
    }
    // 新开服在线领奖提醒
    void UpdateNew7DayOnlineAwardTip()
    {
        if (m_New7DayOnlineAwardTip == null || m_New7DayOnlineAwardTipText == null)
        {
            return;
        }
        if (m_New7DayOnlineAwardID >= 0 && m_New7DayLeftTime <= 0 && m_IsNew7DayOnlineAwardStart)
        {
            m_New7DayOnlineAwardTip.SetActive(true);
            m_New7DayOnlineAwardTipText.text = "1";
        }
        else
        {
            m_New7DayOnlineAwardTipText.text = "";
            m_New7DayOnlineAwardTip.SetActive(false);
        }
    }
    //SNS
    void UpdateSNSAwardTip()
    {
        if (m_SNSAwardTip == null || m_SNSAwardTipText == null || m_SNSShareBtnTip == null)
        {
            return;
        }

        int nLevel = 0;
        if (Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            nLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        }

        if (nLevel < 16)
        {
            return;
        }

        bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_SNS_DAILY_REWARD);
        if(!bRet)
        {
            m_SNSAwardTip.SetActive(true);
            m_SNSAwardTipText.text = "1";
            m_SNSShareBtnTip.SetActive(true);
        }
        else
        {
            m_SNSAwardTipText.text = "";
            m_SNSAwardTip.SetActive(false);
            m_SNSShareBtnTip.SetActive(false);
        }

        if (m_ButtonGrid != null)
        {
            m_ButtonGrid.repositionNow = true;
        }
    }

	// 签到
	void UpdateSignAwardTip()
	{
        if (m_NewSignInAwardTip == null)
        {
            return;
        }
        if (GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw())
		{
			m_NewSignInAwardTip.SetActive(true);
		}
		else
		{
			m_NewSignInAwardTip.SetActive(false);
		}
	}
    //天道酬勤
    void UpdateContinueLoginAwardTip()
    {
        if (m_ContinueLoginAwardTip == null)
        {
            return;
        }
        if (GameManager.gameManager.PlayerDataPool.IsCONTINUELOGINAWARD())
        {
            m_ContinueLoginAwardTip.SetActive(true);
        }
        else
        {
            m_ContinueLoginAwardTip.SetActive(false);
        }
    }
    void UpdateNewServerAwardTip()
    {
        if (NweServerAward == null)
        {
            return;
        }
        if (GameManager.gameManager.PlayerDataPool.IsHaveNewServerAward())
        {
            NweServerAward.SetActive(true);
        }
        else
        {
            NweServerAward.SetActive(false);
        }
    }

    public void UpdateTabButton(TabType type,bool visibal)
    {
        switch(type)
        {
            case TabType.NewServerAward:
                if (!visibal)
                {
                    m_TabNewServerAward.gameObject.SetActive(false);
                    m_NewServerAwardRoot.gameObject.SetActive(false);
                }else
                {
                    m_TabNewServerAward.gameObject.SetActive(true);
                    UpdateTitles(0);
                }
                
                break;
            case TabType.TianDao:
                if (!visibal)
                {
                    m_TabTianDao.gameObject.SetActive(false);
                    m_TianDaoRoot.gameObject.SetActive(false);
                }
                else
                {
                    m_TabTianDao.gameObject.SetActive(true);
                }
                break;
            default:
                break;
        }
        if (!m_TabNewServerAward.gameObject.activeSelf)
        {
            m_TabButton.ChangeTab("Button2_Meiri");
        }
    }
}