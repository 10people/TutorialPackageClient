using UnityEngine;
using System.Collections;
using GCGame;
using Games.AwardActivity;
using System.Collections.Generic;
using Module.Log;
using Games.LogicObj;
using Games.GlobeDefine;
using GCGame.Table;
using Games.UserCommonData;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class FunctionButtonLogic : MonoBehaviour
{
    private static FunctionButtonLogic m_Instance = null;
    public static FunctionButtonLogic Instance()
    {
        return m_Instance;
    }

    private static bool m_bShowDetailButtons = false;
    private int m_LeftTimeInt;                      //第二天机车奖励的剩余时间

    public GameObject m_FirstChild;
	public GameObject m_CopySceneChild;
    //public GameObject m_FunctionButtonOffset;
    //public UILabel LabelDoubleExpTimer;     // 双倍经验倒计时
    //public GameObject m_PKNormalBt;
    //public GameObject m_PKKillBt;
    //public GameObject m_FunctionButtonGrid;
    public GameObject m_BtnOpenDetail;      // 打开详细界面
    public GameObject m_BtnCloseDetail;
    //public GameObject m_BtnCloseDetail;     // 关闭详细界面
    public GameObject m_BtnAutoBegin;   
    public GameObject m_BtnAutoStop;
    //public GameObject m_RadarWindow;
    // 台湾google play使用的成就按钮
    //public GameObject m_BtnAchievement;
    // 台湾google play使用的排行榜按钮
    //public GameObject m_BtnRank;
    //public UIGrid     m_DynamicBtnGrid;

    // 动态按钮，所有添加的动态按钮都应该和下边的枚举对应上。
    // 显示和隐藏调用ShowDynamicButton
    //public GameObject[] m_DynamicButtons;

    //public GameObject m_FestivalTip;
    #region
    //对应右上角第二排按钮
    public GameObject[] m_NewFunctionWindowButtons;
    public UIGrid m_NewFunctionWindowButtonsGrid;//对应右上角第二排按钮的父节点的UIGrid
    public enum DynamicLogo
    {
      SevenDays = 0,
      ActivityAward,
      RankList,
      GangWars,
      Mail,
      PKModel,
      NormalModel,
      OnlineAward,
      WorldBoss,
      Num
    }
    #endregion
    enum DynamicButton
    {
        MAIL,           // 邮件
        EXISTFB,        // 退出副本
        FESTIVAL,       // 节日
        HUASHAN,        // 华山论剑
        PRECIOUS,       // 聚宝盆
        WAR,            // 
        WORLDBOSS,      // 世界BOSS
        ZHENQI,         // 真气
        PRESENT,        // 元宝商店赠送
        WULIN,          // 武林大会
		FESTIVAL1,  	//节日活动，春节，情人节
    }
    //public GameObject m_BtnOpenRadar;
    //public GameObject m_BtnCloseRadar;
    //public TweenPosition m_FunctionWindowTween;

    public UILabel m_LabelTotalAimTips;
    public UILabel m_LabelTotalAimTips2;

    public GameObject m_LabelDaliyLuckyTip;
    //public UIImageButton m_ButtonDailyLuckyDraw;

    // 奖励活动相关
    public UILabel AwardTipsText;

    private float m_updateTimer = 1.0f;
    
    // 新手指引相关
    private int m_NewPlayerGuide_Step = 0;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }
    private bool m_Direction = false;
    private GameObject m_NewButton = null;
    private int m_nExitTime = -1;
    public int ExitTime
    {
        get { return m_nExitTime; }
        set { m_nExitTime = value; }
    }

    public UILabel m_ExitTime;
    //public GameObject m_AuotTeamCue;

    private Vector3 m_DetailButtonOrgPos = new Vector3(-280, -39, 0);
    private Vector3 m_DetailButtonDisablePos = new Vector3(10000, 10000, 0);

    public GameObject m_ButtonSecondDayAward;
    public GameObject m_ButtonSecondDayAwardEffect;
    public UILabel m_SecondDayAwardTime;
    public UILabel m_SecondDayAwardText;
    public UISprite m_RemindRedPoint;
    public GameObject m_PurchaseButton;
    public GameObject m_NaverCafeButton;
    public GameObject m_LinkIDButton;

	// 离开副本按钮
	public GameObject m_ButtonExitFB;

    void Awake()
    {
        m_Instance = this;

        ShowFunctionButtons(m_bShowDetailButtons);
        //UpdateChristmasButton();
		//UpdateFestivalButton();
        ShowSevenDaysRewardBtn();
        //InvokeRepeating("TickOnMinute", 3, 60.0f);
        InvokeRepeating("TickOnSecond", 3, 1);
        //m_FunctionWindowTween.transform.localPosition = m_bShowRadarWindow ? m_FunctionWindowTween.from : m_FunctionWindowTween.to;
    }

    // Use this for initialization
    void Start()
    {
		if (GameManager.gameManager.ActiveScene.IsCopyScene())
		{
			if(GameManager.gameManager.RunningScene==30 || GameManager.gameManager.RunningScene==31)
			{// 试水和再试不显示小地图和退出按钮
				m_CopySceneChild.SetActive(false);
			}
			else
			{
				m_CopySceneChild.SetActive(true);
			}
			m_FirstChild.SetActive(false);

		}
		else
		{
			m_FirstChild.SetActive(true);
			m_CopySceneChild.SetActive(false);
		}
        MailData.delMailUpdate += OnMailUpdate;
        InitUITweenerWhenChangeScene();
        initAwardActivityTips();
        UpdateMoneyTreeButton();
        UpdateAutoFightBtnState();
        UpdateDaliyLuckNum();
        //m_FirstChild.SetActive(true);
        m_ExitTime.text = "";
//        ShowDynamicButton(DynamicButton.EXISTFB, GameManager.gameManager.ActiveScene.IsCopyScene());
        TeamMember[] member = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember;
        bool haveteam = (member != null && member.Length > 0);
        ShowDynamicButton(DynamicLogo.WorldBoss, HuaShanPVPData.WorldBossOpen == 1 && haveteam);

        InitButtonActive();
        UpdateActionButtonTip();
        UpdateAutoTeamCue();
        UpdateDynamicState();
        OnMailUpdate(MailData.MailUpdateType.ADD, 0);
        UpdateFestivalTip(); // 节日 Tip显示

		// 退出副本按钮
		if (GameManager.gameManager.RunningScene != (int)GameDefine_Globe.SCENE_DEFINE.SCENE_SHISHUI &&
		    GameManager.gameManager.RunningScene != (int)GameDefine_Globe.SCENE_DEFINE.SCENE_ZAISHI) {
			m_ButtonExitFB.SetActive (GameManager.gameManager.ActiveScene.IsCopyScene ());
		} else {
			m_ButtonExitFB.SetActive (false);
		}

        if (Utils.GetCommonData((int)USER_COMMONDATA.CD_NEWSERVERACTIVITY) > 0)
        {
            m_LeftTimeInt = GameManager.gameManager.PlayerDataPool.NewServerMountBonusNextTime;
            if (m_LeftTimeInt > 0) {
              UpdateSecondDayAwardTime();
              InvokeRepeating("UpdateSecondDayAwardTime", 0, 1);
            } else {
              m_RemindRedPoint.gameObject.SetActive(true);
              m_SecondDayAwardText.gameObject.SetActive(true);
              m_SecondDayAwardTime.gameObject.SetActive(false);
            }
        }
        
		showHideGuaJi ();
    int count = (int)DynamicLogo.Num;
    for (int i = 0; i < count; ++i) {
      UpdateNewFunctionButtonState((DynamicLogo)i);
    }
    }

    // Update is called once per frame

    void TickOnMinute()
    {
        UpdateDynamicState();
    }

    void TickOnSecond()
    {
        // 元宝商店赠送
        //UpdatePresentButtonShow();
        // 开服机车
        ShowNewServerActivity();
    }

    void FixedUpdate()
    {
        //UpdateDoubleExpTimer();
        UpdateExitTime();
    }

    void OnDestroy()
    {
        MailData.delMailUpdate -= OnMailUpdate;
        m_Instance = null;
    }

    public static float m_fTimeSecond = Time.realtimeSinceStartup;
    public void UpdateExitTime()
    {
        float ftimeSec = Time.realtimeSinceStartup;
        int nTimeData = (int)(ftimeSec - m_fTimeSecond);
        if (nTimeData > 0)
        {
            if (m_nExitTime > 0 )
            {
                m_nExitTime = m_nExitTime - nTimeData;
                //m_ExitTime.text = "距离副本结束时间:" + m_nExitTime.ToString() + "秒";
                m_ExitTime.text = StrDictionary.GetClientDictionaryString("#{2835}", m_nExitTime);
                if (m_nExitTime <= 0)
                {
//                     CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
//                     packet.NoParam = 1;
//                     packet.SendPacket();
                    m_ExitTime.text = "";
                    m_nExitTime = 0;
                }              
               
            }
            m_fTimeSecond = ftimeSec;
        }
    }
    public void PlayTween(bool nDirection)
    {
        //BeforeClickPlayerFrame(nDirection);
        gameObject.SetActive(!nDirection);
        //foreach(TweenAlpha tween in m_FoldTween)
        //{
        //    tween.Play(nDirection);
        //}

        m_Direction = nDirection;
    }
    
    /// <summary>
    /// 应对切换场景时UI异常消失 重新初始化Tween动画
    /// </summary>
    void InitUITweenerWhenChangeScene()
    {
        //curTween.Reset();
        //curTween.alpha = 1;
        //foreach(TweenAlpha tween in m_FoldTween)
        //{
        //    tween.Reset();
        //    tween.alpha = 1;
        //}
    }

    //public void BeforeClickPlayerFrame(bool nDirection)
    //{
    //    foreach (BoxCollider box in gameObject.GetComponentsInChildren<BoxCollider>())
    //    {
    //        UIImageButton button = box.gameObject.GetComponent<UIImageButton>();
    //        if (button != null)
    //        {
    //            button.isEnabled = !nDirection;
    //        }
    //        else
    //        {
    //            box.enabled = !nDirection;
    //        }
    //    }
    //}

    void ShowSceneMap()
    {
        if (MainUILogic.Instance() != null)
        {
            UIManager.ShowUI(UIInfo.SceneMapRoot);
        }
    }

    public void UpdateActionButtonTip()
    {
        ////等级显示限制
        //int nLevel = 0;
        //if (Singleton<ObjManager>.GetInstance().MainPlayer)
        //{
        //    nLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        //}


        //bool bGuildFlag = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GUILDACTIVITY_FLAG);

        ////默认不显示圆点，只要有一个条件满足的时候就显示圆点并返回。
        //m_ButtonActTip.spriteName = "";

        ////1日常
        //{
        //    if (Utils.GetActivityAwardBonusLeft() > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";

        //        return;
        //    }
        //}

        ////2江湖名人录
        //{
        //    if (PVPData.LeftFightTime > 0 && nLevel >= 40)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //       return;
        //    }
        //}

        //// 华山论剑
        //{
        //    if (nLevel >= 35)
        //    {
        //        if (HuaShanPVPData.IsHuaShanPvPOpen())
        //        {
        //            m_ButtonActTip.spriteName = "count";
        //            return;
        //        }
        //    }
        //}

        //if (nLevel < 40)
        //    return;

        //if(GlobalData.IsWuLinOpen())
        //{
        //    m_ButtonActTip.spriteName = "count";
        //    return;
        //}

        ////3聚贤庄11
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCountsAll(11, ref nCur, ref nMax);
        //    nCount += nCur;
        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////5藏经阁14
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCounts(14, 1, 1, ref nCur, ref nMax);
        //    nCount += nCur;
        //    Utils.GetSweepCounts(ref nCur, ref nMax);
        //    nCount += nCur;

        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////6燕子坞19
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCountsAll(19, ref nCur, ref nMax);
        //    nCount += nCur;

        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////7珍珑棋局28
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCountsAll(28, ref nCur, ref nMax);
        //    nCount += nCur;
            
        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////8燕王古墓27
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCountsAll(27, ref nCur, ref nMax);
        //    nCount += nCur;
            
        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        //// 9 天降奇珍
        //{
        //    bool bFlag = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GUILDACTIVITY_FLAG);
        //    if (bFlag)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////13怒海锄奸7
        //{
        //    int nCount = 0;
        //    int nCur = 0;
        //    int nMax = 0;
        //    Utils.GetCopySceneCounts(7, 1, 1, ref nCur, ref nMax);
        //    nCount += nCur;
            
        //    if (nCount > 0)
        //    {
        //        m_ButtonActTip.spriteName = "count";
        //        return;
        //    }
        //}
        ////10少室山31
        //{
        //    // 少室山等级要求
        //    if (null != Singleton<ObjManager>.Instance.MainPlayer &&
        //        Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 70)
        //    {
        //        int nCount = 0;
        //        int nCur = 0;
        //        int nMax = 0;
        //        Utils.GetCopySceneCounts(31, 2, 1, ref nCur, ref nMax);
        //        nCount += nCur;

        //        if (nCount > 0)
        //        {
        //            m_ButtonActTip.spriteName = "count";
        //            return;
        //        }
        //    }
        //}
        ////16守卫雁门关41
        //{
        //    // 雁门关等级要求
        //    if (null != Singleton<ObjManager>.Instance.MainPlayer &&
        //        Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 80)
        //    {
        //        int nCount = 0;
        //        int nCur = 0;
        //        int nMax = 0;
        //        Utils.GetCopySceneCounts(41, 2, 1, ref nCur, ref nMax);
        //        nCount += nCur;

        //        if (nCount > 0)
        //        {
        //            m_ButtonActTip.spriteName = "count";
        //            return;
        //        }
        //    }
        //}
        // 17回购副本
        /*
        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN; i <= (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN; i++)
        {
            if (GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(i, true) > 0
                || GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(i, false) > 0)
            {
                m_ButtonActTip.spriteName = "count";
                return;
            }
        }*/
        
    }
    void OnShopClick()
    {
        //UIManager.ShowUI(UIInfo.SysShop);
        //UIManager.ShowUI(UIInfo.YuanBaoShop);
        // 需要看元宝商店是否开启
        CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
        packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_FUNCTION_BUTTON;
        packet.SendPacket();
    }

    void OnAchievementClick()
    {
        PlatformHelper.ShowAchievement();
    }

    void OnRankClick()
    {
      //PlatformHelper.ShowRank();
      RankWindow.ShowRankWindow((int)GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK);
    }

    void UpdateDoubleExpTimer()
    {
        //if (null == LabelDoubleExpTimer)
        //{
        //    // label不小心被删时，防止抛异常
        //    return;
        //}
        //m_updateTimer -= Time.deltaTime;
        //if (m_updateTimer <= 0)
        //{
        //    m_updateTimer = 1.0f;
        //    int doubleExpLeftTime = AdditionData.doubleExpDisableTime - (int)Time.realtimeSinceStartup;
        //    if (doubleExpLeftTime > 0)
        //    {
        //        if (!LabelDoubleExpTimer.gameObject.activeSelf)
        //        {
        //            LabelDoubleExpTimer.gameObject.SetActive(true);
        //        }
        //        Utils.SetTimeDiffToLabel(LabelDoubleExpTimer, doubleExpLeftTime);
        //    }
        //    else if (LabelDoubleExpTimer.gameObject.activeSelf)
        //    {
        //        LabelDoubleExpTimer.gameObject.SetActive(false);
        //    }
        //}
    }

   

    public void initAwardActivityTips()
    {
        CleanUpAwardActivityTips();
        UpdateButtonAwardTips();
    }

    public void CleanUpAwardActivityTips()
    {
        if ( AwardTipsText == null)
        {
            LogModule.DebugLog("AwardTips or AwardTipsText GameObject if null");
            return;
        }
        AwardTipsText.text = "";
        AwardTipsText.gameObject.SetActive(false);
    }

    public void UpdateButtonAwardTips()
    {
        if (AwardTipsText == null)
        {
            return;
        }
        if (m_LabelTotalAimTips == null)
        {
            return;
        }
        if (m_LabelTotalAimTips2 == null)
        {
            return;
        }
        AwardActivityData Data = GameManager.gameManager.PlayerDataPool.AwardActivityData;
        int TipCount = 0;
        int dayAward = 0;

        // 策划要求 加等级限制 5级
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            int nLevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
            if ( nLevel >= 5)
            {
                // 每日奖励
				if(GameManager.gameManager.PlayerDataPool.IsOpenOldLoginReward)
				{
					int nWeekDay = Data.WeekDay;
					bool bDayAwardFlag = Data.DayAwardFlag;
					if (nWeekDay > -1 && bDayAwardFlag == false) // 未领取
					{
						dayAward += 1;
					}
				}
                
                // 在线奖励
                int nOnlineAwardID = Data.OnlineAwardID;
                int nLeftTime = Data.LeftTime;
                if (nOnlineAwardID > -1 && nLeftTime <= 0)
                {
                    dayAward += 1;
                }
                // 首周奖励
                int nDays = Data.NewServerDays;
                bool bCanAward = Data.IsCanGetAward(nDays);
                if (nDays > -1 && bCanAward == true) // 未领取
                {
                    dayAward += 1;
                }
                // 在线奖励
                int nNewOnlineAwardID = Data.NewOnlineAwardID;
                int nNewLeftTime = Data.NewLeftTime;
                if (nNewOnlineAwardID > -1 && nNewLeftTime <= 0 && Data.NewOnlineAwardStart)
                {
                    dayAward += 1;
                }

                // 在线7天奖励
                int nNew7DayOnlineAwardID = Data.New7DayOnlineAwardID;
                int nNew7DayLeftTime = Data.New7DayLeftTime;
                if (nNew7DayOnlineAwardID > -1 && nNew7DayLeftTime <= 0 && Data.New7DayOnlineAwardStart)
                {
                    dayAward += 1;
                }

				// 每日签到
				if(GameManager.gameManager.PlayerDataPool.IsOpenSignInReward && GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw())
				{
					dayAward += 1;
				}

                //如果app评价的结果是DO_NOTHING,说明玩家还未评价，那么显示评价的小红点
                if ((int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING == GameManager.gameManager.PlayerDataPool.ReviewResult)
                {
                    if (0 == PlayerPreferenceData.ClientClickReview)
                    {
                        dayAward += 1;
                    }
                }
            }

            if (nLevel >= 15)
            {
                int nTurnID = GameManager.gameManager.PlayerDataPool.MoneyTreeData.MoneyTreeID;
                int nTime = GameManager.gameManager.PlayerDataPool.MoneyTreeData.CDTime;
                int nMaxFreeCount = Games.MoneyTree.MoneyTreeData.MaxFreeAwardNum;
                if (nTime <= 0 && nTurnID > GlobeVar.INVALID_ID && nTurnID < nMaxFreeCount)
                {
                    TipCount += 1;
                }
            }

            if (nLevel >= 16)
            {
                if (true == GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SNS))
                {
                    bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_SNS_DAILY_REWARD);
                    if (!bRet)
                    {
                        dayAward += 1;
                    }
                }
            }

            if (nLevel >= 10)
            {
                int nDrawFreeCDTime = GameManager.gameManager.PlayerDataPool.DailyLuckyDrawData.DrawFreeCDTime;
                int nDrawFreeTimes = GameManager.gameManager.PlayerDataPool.DailyLuckyDrawData.DrawFreeTimes;
                if (nDrawFreeCDTime <= 0 && nDrawFreeTimes > 0)
                {
                    TipCount += 1;
                }
            }
        }

        TipCount += dayAward;

        if (dayAward > 0)
        {
            // 提醒 为 1
            AwardTipsText.gameObject.SetActive(true);
            AwardTipsText.text = dayAward.ToString();
        }
        else
        {
            AwardTipsText.text = "";
            AwardTipsText.gameObject.SetActive(false);
        }

        if (TipCount > 0)
        {
            m_LabelTotalAimTips.text = TipCount.ToString();
            m_LabelTotalAimTips2.text = TipCount.ToString();
            m_LabelTotalAimTips.gameObject.SetActive(true);
            m_LabelTotalAimTips2.gameObject.SetActive(true);
        }
        else
        {
            m_LabelTotalAimTips.text = "";
            m_LabelTotalAimTips2.text = "";
            m_LabelTotalAimTips.gameObject.SetActive(false);
            m_LabelTotalAimTips2.gameObject.SetActive(false);
        }
        UpdateRedPointInit();
    }

    void ShowAwardUI()
    {
        if ( null != Singleton<ObjManager>.Instance.MainPlayer )
        {
            if (5 > Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level)
            {
                GUIData.AddNotifyData("#{3188}");
                //string dicStr = StrDictionary.GetClientDictionaryString("#{3188}");
                //MessageBoxLogic.OpenOKBox(dicStr);
                return;
            }

            if (MainUILogic.Instance() != null)
            {
                UIManager.ShowUI(UIInfo.AwardRoot);
            }
        }       
    }


	void OnActivityClick(GameObject value)
    {
        if (NewPlayerGuidLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }
        if (m_NewButton != null && m_NewButton == value)
        {
            StopNewButtonEffect();
        }
        
        UIManager.ShowUI(UIInfo.Activity);
	}

    public void OnPKClick()
    {
        UIManager.ShowUI(UIInfo.PKSetInfo);
    }

    public void DoNewPlayerGuide(int nIndex)
    {
        if (m_Direction == true)
        {
            return;
        }

        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1://挂机
                {
                    Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
                    if (m_BtnAutoBegin && m_BtnAutoBegin.activeSelf && User)
                    {
                        if (null != User.Controller && true == User.Controller.CombatFlag)
                        {
                            return;
                        }

                        NewPlayerGuidLogic.OpenWindow(m_BtnAutoBegin, 110, 110, Utils.GetDicByID(11397), "center", 0, true, true);
                    }
                }
                break;
            case 2:// 武道之巅
                {
//                     if (m_bShowDetailButtons)
//                     {
                        DoNewPlayerGuide(6);
//                     }
//                     else
//                     {
//                         //NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                     }
                }
                break;
            case 3:// 取消挂机
                {
                    Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
                    if (m_BtnAutoStop && m_BtnAutoStop.activeSelf && User)
                    {
                        if (false == User.Controller.CombatFlag)
                        {
                            return;
                        }
                        NewPlayerGuidLogic.OpenWindow(m_BtnAutoStop, 110, 110, "", "left", 0, true/*, true*/);
//                         if (m_bShowDetailButtons)
//                         {
//                             NewPlayerGuide(7);
//                         }
//                         else
//                         {
//                             NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 110, 110, "", "left", 0, true, true);
//                         }
                    }
                }
                break;
            case 4: // 日常任务
                {
//                     if (m_bShowDetailButtons)
//                     {
                        DoNewPlayerGuide(5);
//                     }
//                     else
//                     {
//                         NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                     }
                }
                break;
            case 5:// 日常任务
            case 6:// 武道之巅
            case 11:// 藏经阁
            case 12:// 燕子坞
            case 13:// 聚贤庄
            case 15:// 珍珑棋局
                {
                    //NewPlayerGuidLogic.OpenWindow(m_ButtonAct, 100, 100, "", "left", 0, true, true);
                }
                break;
            case 7:
                // 改界面了
                //NewPlayerGuidLogic.OpenWindow(m_ButtonAuto, 110, 110, "", "left", 0, true, true);
                break;
            case 8:// 藏经阁
//                 if (m_bShowDetailButtons)
//                 {
                    DoNewPlayerGuide(11);
//                 }
//                 else
//                 {
//                     NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                 }
                break;
            case 9:// 燕子坞
//                 if (m_bShowDetailButtons)
//                 {
                    DoNewPlayerGuide(12);
//                 }
//                 else
//                 {
//                     NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                 }
                break;
            case 10:// 聚贤庄
//                 if (m_bShowDetailButtons)
//                 {
                    DoNewPlayerGuide(13);
//                 }
//                 else
//                 {
//                     NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                 }
                break;
            case 14:// 聚贤庄
//                 if (m_bShowDetailButtons)
//                 {
                    DoNewPlayerGuide(15);
//                 }
//                 else
//                 {
//                     NewPlayerGuidLogic.OpenWindow(m_BtnOpenDetail, 90, 90, "", "left", 0, true, true);
//                 }
                    break;
            case 16:
                    if (m_NewFunctionWindowButtons.Length > 7)
                    {
                        NewPlayerGuidLogic.OpenWindow(m_NewFunctionWindowButtons[7], 180, 80, Utils.GetDicByID(11429), "center", 0, true, true);
                    }
                break;
            case 17:
                if (m_NewFunctionWindowButtons.Length > 0)
                {
                    NewPlayerGuidLogic.OpenWindow(m_NewFunctionWindowButtons[0], 180, 80, Utils.GetDicByID(11431), "center", 0, true, true);
                }
                break;
        }
    }

    void OnMailUpdate(MailData.MailUpdateType curUpdateType, System.UInt64 curKey)
    {
        if (curUpdateType == MailData.MailUpdateType.ADD && MailData.UserMailMap.Count >= MailData.MailCountMax)
        {
            GUIData.AddNotifyData2Client(false, "#{1144}");
            //ShowDynamicButton(DynamicButton.MAIL, true);
            return;
        }
        foreach (KeyValuePair<ulong, MailData.UserMail> curMail in MailData.UserMailMap)
        {
            if (!curMail.Value.bReaded )
            {
                //ShowDynamicButton(DynamicButton.MAIL, true);
                return;
            }
        }
        if (MailData.UserMailMap.Count < MailData.MailCountMax)
        {
            //ShowDynamicButton(DynamicButton.MAIL, false);
        }
       
    }

    void OnMailTipClick()
    {
        RelationLogic.OpenMailRecvWindow();
    }

    //每日幸运抽奖相关
    void OnDailyLuckyDrawClick()
    {
        if ( Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level < 10)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3187}");
            return;
        }
        if (MainUILogic.Instance() != null)
        {
            UIManager.ShowUI(UIInfo.DailyDrawRoot);
        }
    }

    public void UpdateMoneyTreeButton()
    {
        //if (Singleton<ObjManager>.Instance.MainPlayer == null
        //    || Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < 5)
        //{
        //    return;
        //}

        //if (m_MoneyTreeButton == null)
        //{
        //    return;
        //}
        //int nMoneyTreeID = GameManager.gameManager.PlayerDataPool.MoneyTreeData.MoneyTreeID;
        //if (nMoneyTreeID < 0 || nMoneyTreeID > 20)
        //{
        //    m_MoneyTreeButton.SetActive(false);
        //}
        //else if (m_MoneyTreeButton.activeSelf == false)
        //{
        //    m_MoneyTreeButton.SetActive(true);
        //}
    }
    public void OnExitFBClick()
    {
        string str = StrDictionary.GetClientDictionaryString("#{1847}");
        if ((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI == GameManager.gameManager.RunningScene)
        {
            str = StrDictionary.GetClientDictionaryString("#{2345}");
        }
        
        MessageBoxLogic.OpenOKCancelBox(str, "", OnLeaveCopySceneOK, OnLEaveCopySceneNO);
    }
    public void OnLeaveCopySceneOK()
    {
        if (GameManager.gameManager.PlayerDataPool.CopySceneChange) //正在传送中
        {
            return;
        }
        GameManager.gameManager.PlayerDataPool.CopySceneChange = true;
        CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
        packet.NoParam = 1;
        packet.SendPacket();
    }
    public void OnLEaveCopySceneNO()
    {

    }

    public void OpenFunction(int nType)
    {
        switch (nType)
        {
            case (int)Games.UserCommonData.USER_COMMONFLAG.CF_ACTIVITYFUNCTION_OPENFLAG:
                {
                    //if (!m_ButtonAct.activeSelf)
                    //{
                    //    NewItemGetLogic.InitItemInfo(m_ButtonAct.GetComponent<UIImageButton>().target.spriteName,
                    //        m_ButtonAct,
                    //        NewItemGetLogic.NEWITEMTYPE.TYPE_FUNCTION, nType);
                    //    m_NewButton = m_ButtonAct;
                    //}
                }
                break;
            case (int)Games.UserCommonData.USER_COMMONFLAG.CF_JICHE_THESECONDDAY_OPENFLAG:
                {
                    if (m_ButtonSecondDayAward!= null)
                    {
                        NewItemGetLogic.InitItemInfo(m_ButtonSecondDayAward.GetComponent<UIImageButton>().target.spriteName,
                            m_ButtonSecondDayAward,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_FUNCTION, nType, null, "", Utils.GetDicByID(10407), Utils.GetDicByID(10408));
                        m_NewButton = m_ButtonSecondDayAward;
                        //功能开启的时候获取一次时间
                        m_LeftTimeInt = GameManager.gameManager.PlayerDataPool.NewServerMountBonusNextTime;
                        if (m_LeftTimeInt > 0)
                        {
                            InvokeRepeating("UpdateSecondDayAwardTime", 0, 1);
                        }
                    }
                }
                break;
		case (int)Games.UserCommonData.USER_COMMONFLAG.CF_GUAJI_FLAG:
			{
                //UIManager.ShowUI(UIInfo.GuaJiGuild) ;
                NewItemGetLogic.InitItemInfo("", m_BtnAutoBegin,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_FUNCTION, nType, null, Utils.GetDicByID(11185), Utils.GetDicByID(11413), Utils.GetDicByID(11414));
                FunctionButtonLogic.Instance().getAutoFightObj().SetActive(true);
			}
			break ;
        }
    }

    /// <summary>
    /// 貌似已弃用
    /// </summary>
    //public void LevelUpButtonActive()
    //{
    //    if (null == Singleton<ObjManager>.Instance.MainPlayer)
    //        return;

    //    int nPlayerLevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
    //    if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.ACTIVITY)
    //    {
    //        if (!m_ButtonAct.activeSelf)
    //        {
    //            NewItemGetLogic.InitItemInfo(m_ButtonAct.GetComponent<UIImageButton>().target.spriteName,
    //                m_ButtonAct,
    //                NewItemGetLogic.NEWITEMTYPE.TYPE_FUNCTION);
    //            m_NewButton = m_ButtonAct;
    //        }
    //    }
    //    else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.AUTOFIGHT)
    //    {
    //        // 改地方了WD
    //        /*
    //        if (!m_ButtonAuto.activeSelf)
    //        {
    //            NewItemGetLogic.InitItemInfo(m_ButtonAuto.GetComponent<UIImageButton>().target.spriteName,
    //                m_ButtonAuto,
    //                NewItemGetLogic.NEWITEMTYPE.TYPE_FUNCTION);
    //            m_NewButton = m_ButtonAuto;
    //        }
    //         * */
    //    }
    //}

    public void ShowNewServerActivity()
    {
        //bOpen为true，应该显示坐骑奖励图标，表明已经有日期记录，可以打开界面查看了。bOpen为false不应该显示坐骑奖励图标，日期记录已经被清空了。
        int nValue = Utils.GetCommonData((int)USER_COMMONDATA.CD_NEWSERVERACTIVITY);
        bool bOpen = (nValue > 0);
        if (m_ButtonSecondDayAward.activeSelf != bOpen) {
          m_ButtonSecondDayAward.SetActive(bOpen);
        }
    }
    public void ShowNewServerActivityEffect(bool state)
    {
      if (m_ButtonSecondDayAwardEffect != null) {
        m_ButtonSecondDayAwardEffect.SetActive(state);
      }
    }
    public void ShowTweenPosition()
    {
      if (m_ButtonSecondDayAward != null) {
        TweenPosition tp = m_ButtonSecondDayAward.GetComponent<TweenPosition>();
        if (tp != null) {
          tp.from = m_ButtonSecondDayAward.transform.InverseTransformPoint(Vector3.zero);
          tp.to = m_ButtonSecondDayAward.transform.localPosition;
          tp.enabled = true;
        }
      }
    }
    public void InitButtonActive()
    {
        // 获得开服机车奖励，在动画播放完毕，再出现图标
        ShowNewServerActivity();
        
        //if (m_ButtonAct == null)
        //{
        //    return;
        //}

        //m_ButtonAct.SetActive(false);
        //bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_ACTIVITYFUNCTION_OPENFLAG);
        //if (bRet == true)
        //{
        //    m_ButtonAct.SetActive(true);
        //}

//         m_PKKillBt.SetActive(false);
//         m_PKNormalBt.SetActive(false);
//         if (GameManager.gameManager.PlayerDataPool.PkModle == (int)CharacterDefine.PKMODLE.NORMAL)
//         {
//             m_PKNormalBt.SetActive(true);
//         }
//         else if (GameManager.gameManager.PlayerDataPool.PkModle == (int)CharacterDefine.PKMODLE.KILL)
//         {
//             m_PKKillBt.SetActive(true);
//         }
    }

    public void UpdateDynamicState()
    {
        //int nLevel = 0;
        //if (Singleton<ObjManager>.GetInstance().MainPlayer)
        //{
        //    nLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        //}
        ////检测天降奇珍和帮战是否开启
        //ShowDynamicButton(DynamicButton.PRECIOUS, GlobalData.IsOpenPrecious());
        //ShowDynamicButton(DynamicButton.WAR, GlobalData.IsOpenWar());
        //// 是否开启华山论剑功能
        //ShowDynamicButton(DynamicButton.HUASHAN, nLevel >= 35 && HuaShanPVPData.IsHuaShanPvPOpen());
        //ShowDynamicButton(DynamicButton.WULIN, nLevel >= 40 && GlobalData.IsWuLinOpen());
        //UpdateChristmasButton();
        //UpdateFestivalButton(); // 活动按钮
    }
    public void StopNewButtonEffect()
    {
        if (m_NewButton == null)
        {
            return;
        }

        Transform effectTrans = m_NewButton.transform.FindChild("EffectPoint");
        if (effectTrans == null)
        {
            return;
        }

        Transform spriteAniTrans = effectTrans.FindChild("SpriteAni");
        if (spriteAniTrans == null)
        {
            return;
        }

        spriteAniTrans.gameObject.SetActive(false);

        m_NewButton = null;
    }

    public void PlayNewButtonEffect()
    {
        if (m_NewButton == null)
        {
            return;
        }

        Transform effectTrans = m_NewButton.transform.FindChild("EffectPoint");
        if (effectTrans == null)
        {
            return;
        }

        Transform spriteAniTrans = effectTrans.FindChild("SpriteAni");
        if (spriteAniTrans == null)
        {
            return;
        }

        spriteAniTrans.gameObject.SetActive(true);
    }

    public void OnWuLinClick()
    {
        ActivityController.SetStartTab("Tab14");
        UIManager.ShowUI(UIInfo.Activity);
    }

    public void OnWorldBossClick()
    {
        //改成所有人都可见，不再限于组队玩家了
            HuaShanPVPData.IsClickWorldBossUI = 1;
            CG_WORLDBOSS_TEAMLIST_REQ packet = (CG_WORLDBOSS_TEAMLIST_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WORLDBOSS_TEAMLIST_REQ);
            packet.Page = 0;
            packet.SendPacket();

    }

    public void OnWorldBossDead()
    {
        ShowDynamicButton(DynamicLogo.WorldBoss, false);
        HuaShanPVPData.WorldBossOpen = 0;
    }

    public void OnWorldBossStateChange(int state)
    {
        if (state != 2 && state != 3)
        {
            ShowDynamicButton(DynamicLogo.WorldBoss, false);
            HuaShanPVPData.WorldBossOpen = 0;
        }
        else
        {
          TeamMember[] member = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember;
          bool haveteam = (member != null && member.Length > 0);
            ShowDynamicButton(DynamicLogo.WorldBoss, true&&haveteam);
            HuaShanPVPData.WorldBossOpen = 1;
        }
        if (m_NewFunctionWindowButtonsGrid != null) {
          m_NewFunctionWindowButtonsGrid.repositionNow = true;
        }
    }

    public void ZhenQiAssistState(int state, int times)
    {
        //if (m_ZhenQiAssistCount != null)
        //{
        //    if (state == 0)
        //        m_ZhenQiAssistCount.text = "";
        //    else
        //    {
        //        m_ZhenQiAssistCount.text = StrDictionary.GetClientDictionaryString("#{2143}", times);
        //    }
        //}

        //ShowDynamicButton(DynamicButton.ZHENQI, state == 1);
    }

    public void ZhenQiAssistButtonClick()
    {
        /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN ||
            GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WULINDAHUI)
        {
            CG_HUASHAN_ASSIST_REQ packet = (CG_HUASHAN_ASSIST_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_HUASHAN_ASSIST_REQ);
            packet.None = 0;
            packet.SendPacket();
        }
        else*/
        {
            ZhenQiAssistState(0, 0);
        }
    }



    // 直接调用自动战斗
    void OnDoAutoFightClick()
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuidLogic.CloseWindow();
            NewPlayerGuide.NewPlayerGuideOpt("MissionDialogAndLeftTabs", 1);
            m_NewPlayerGuide_Step = -1;
        }

        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer) 
        {
            return;
        }
        mainPalyer.EnterAutoCombat();
        UpdateAutoFightBtnState();
    }

    void OnDoAutoStopFightClick()
    {
        if (m_NewPlayerGuide_Step == 3)
        {
            NewPlayerGuidLogic.CloseWindow();
            m_NewPlayerGuide_Step = -1;
        }
        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        mainPalyer.LeveAutoCombat();
        UpdateAutoFightBtnState();
    }

    void ShowFunctionButtons(bool bShow)
    {
        m_BtnCloseDetail.transform.localPosition = bShow ? m_DetailButtonOrgPos : m_DetailButtonDisablePos;
        m_BtnOpenDetail.transform.localPosition = !bShow ? m_DetailButtonOrgPos : m_DetailButtonDisablePos;
        //m_RadarWindow.SetActive(!bShow);
        m_bShowDetailButtons = bShow;
        
        if (m_NewPlayerGuide_Step >= 0)
        {
            NewPlayerGuidLogic.CloseWindow();
        }
        
        switch (m_NewPlayerGuide_Step)
        {
            case 2: 
                DoNewPlayerGuide(6);
                break;
            case 4:
                DoNewPlayerGuide(5);
                break;
            case 8:
                DoNewPlayerGuide(11);
                break;
            case 9:
                DoNewPlayerGuide(12);
                break;
            case 10:
                DoNewPlayerGuide(13);
                break;
            case 14:
                DoNewPlayerGuide(15);
                break;
            default:
                break;
        }

        //if (PlatformHelper.IsChannelTW() && Application.platform == RuntimePlatform.Android)
        //{
        //    m_BtnAchievement.SetActive(true);
        //    m_BtnRank.SetActive(true);
        //}
        //else
        //{
        //    m_BtnAchievement.SetActive(false);
        //    m_BtnRank.SetActive(false);
        //}
		#if BOBJOYSTICK
		MapFunctionButtonToJoy(bShow);
		#endif
    }


    public void UpdateAutoFightBtnState(bool ignoreCutScene=false)
    {
        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        if(!ignoreCutScene)
        {
            Cutscene.CutsceneManager.Instance.BlockAutoBattle = false;
        }
        
        m_BtnAutoStop.SetActive(mainPalyer.IsOpenAutoCombat);
        m_BtnAutoBegin.SetActive(!mainPalyer.IsOpenAutoCombat);

#if BOBJOYSTICK
        MapFunctionButtonToJoy(m_bShowDetailButtons);
#endif
    }

    public void UpdateDaliyLuckNum()
    {
        if(null != m_LabelDaliyLuckyTip)
        {
            Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
            if (null == mainPalyer)
            {
                return;
            }
            if (GameManager.gameManager.PlayerDataPool.DailyLuckyDrawData.DrawFreeCDTime > 0 ||
                GameManager.gameManager.PlayerDataPool.DailyLuckyDrawData.DrawFreeTimes == 0 ||
                mainPalyer.BaseAttr.Level < 10 ||
                (false == GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_DAILYLUCKYDRAW)))
            {
                m_LabelDaliyLuckyTip.SetActive(false);
            }
            else
            {
                m_LabelDaliyLuckyTip.SetActive(true);
            }          
        }        
    }
    public void UpdateDailyLuckyButton()
    {
        //if (null != m_ButtonDailyLuckyDraw)
        //{
        //    if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_DAILYLUCKYDRAW))
        //    {
        //        m_ButtonDailyLuckyDraw.gameObject.SetActive(true);
        //        UpdateDaliyLuckNum();
        //    }
        //    else
        //    {
        //        m_ButtonDailyLuckyDraw.gameObject.SetActive(false);
        //    }
        //}
    }

    void OnShowDetailButtons()
    {
        ShowFunctionButtons(true);
    }

    void OnHideDetailButtions()
    {
        ShowFunctionButtons(false);
    }
    public void UpdateAutoTeamCue()
    {
        //if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        //{
        //    m_AuotTeamCue.SetActive(true);
        //}
        //else
        //{
        //    m_AuotTeamCue.SetActive(false);
        //}
    }

    void ShowDynamicButton(DynamicLogo id, bool bShow)
    {
        int curID = (int)id;
        if (m_NewFunctionWindowButtons.Length < curID)
        {
            LogModule.ErrorLog("dynamic button is not define " + id);
            return;
        }
        if (m_NewFunctionWindowButtons[curID].activeSelf != bShow)
        {
            m_NewFunctionWindowButtons[curID].SetActive(bShow);
            if (m_NewFunctionWindowButtonsGrid != null)
            {
                m_NewFunctionWindowButtonsGrid.repositionNow = true;
            }
        }
        
    }

    public void UpdateChristmasButton()
    {
        //ShowDynamicButton(DynamicButton.FESTIVAL, GlobalData.IsChristmasOpen());
    }

    void OnClickChristmas()
    {
        UIManager.ShowUI(UIInfo.ChristmasController);
    }

    public void OnClickHuaShan()
    {
        ActivityController.SetStartTab("Tab4");
        UIManager.ShowUI(UIInfo.Activity);
    }

    public void OnClickPrecious()
    {
        ActivityController.SetStartTab("Tab9");
        UIManager.ShowUI(UIInfo.Activity);
    }
    public void OnClickSignReward()
    {
        UIManager.ShowUI(UIInfo.SignReward);
    }
    public void OnClickWar()
    {
//        GuildWindow.SetStartTab("GuildWarButton");
//        UIManager.ShowUI(UIInfo.MasterAndGuildRoot);
        //ActivityController.SetStartTab("Tab11");
        //UIManager.ShowUI(UIInfo.Activity);
    }

    void UpdatePresentButtonShow()
    {
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_PRESENT))
        {
            GameManager.gameManager.PlayerDataPool.ShoppingCart.TickCountDown();
            //ShowDynamicButton(DynamicButton.PRESENT, GameManager.gameManager.PlayerDataPool.IsPresentButtonShow());
        }
    }

    void PresentRemindOnClick()
    {
        PresentRootLogic.OpenWithTab(PresentRootLogic.TAB_INDEX.TAB_INVALID);
    }

    // 节日活动相关
	void UpdateFestivalButton()
	{
		//ShowDynamicButton(DynamicButton.FESTIVAL1, GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER));

//        bool bRetShow = false;
//        if (GlobalData.IsHongBaoOpen()) // 红包
//        {
//            bRetShow = true;
//        }
//		if (GlobalData.IsNianShouOpen()) // 年兽
//		{
//			bRetShow = true;
//		}
//		if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER)) // 玫瑰传情
//		{
//			bRetShow = true;
//		}
//		if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING)) // 玫瑰定情
//		{
//			bRetShow = true;
//		}
//        if (GlobalData.IsHeroReturnOpen())
//        {
//            bRetShow = true;
//        }
        //ShowDynamicButton(DynamicButton.FESTIVAL1, bRetShow);
	}
	void OnClickFestival()
    {
        bool bRetShow = false;
        if (GlobalData.IsHongBaoOpen()) // 红包
        {
            bRetShow = true;
        }
        if (GlobalData.IsNianShouOpen()) // 年兽
        {
            bRetShow = true;
        }
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER)) // 玫瑰传情
        {
            bRetShow = true;
        }
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING)) // 玫瑰定情
        {
            bRetShow = true;
        }
        if (GlobalData.IsHeroReturnOpen())
        {
            bRetShow = true;
        }        
        
        if (bRetShow == false)
        {
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (mainPlayer)
            {
                mainPlayer.SendNoticMsg(false, "#{5138}");
            }
            return;
        }

        UIManager.ShowUI(UIInfo.FestivalController);
	}
	//==============================================
	public GameObject m_AutoFightObj ;
	public GameObject getAutoFightObj()
	{
		return m_AutoFightObj;
	}
	private void showHideGuaJi()
	{
		bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GUAJI_FLAG);

		if (m_AutoFightObj) 
		{
			if( bRet == false  )
			{
				m_AutoFightObj.SetActive(false);
			}

			else
			{
				m_AutoFightObj.SetActive(true);
			}
		}
	}
	//==============================================
    public void UpdateFestivalTip()
    {
//        bool bRetRed = false;
//        if (GameManager.gameManager.PlayerDataPool.IsShowHongBaoTip == true)
//        {
//            bRetRed = true;
//        }
//
//		if (GameManager.gameManager.PlayerDataPool.IsShowLoverFlowerTip == true)
//		{
//			bRetRed = true;
//		}
//
//		if (GameManager.gameManager.PlayerDataPool.IsShowLoverThingTip == true)
//		{
//			bRetRed = true;
//		}


        //if (m_FestivalTip)
        //{
        //    m_FestivalTip.SetActive(bRetRed);
        //}
    }

    public void UpdateSecondDayAwardTime()
    {
        if (m_LeftTimeInt > 0)
        {
            
            int Seconds = m_LeftTimeInt % 60;
            int Minutes = (m_LeftTimeInt - Seconds) / 60 % 60;
            int Hours = ((m_LeftTimeInt - Seconds) / 60 - Minutes) / 60;

            string hourStr = Hours >= 10 ? Hours.ToString() : "0" + Hours;
            string MinutesStr = Minutes >= 10 ? Minutes.ToString() : "0" + Minutes;
            string SecondsStr = Seconds >= 10 ? Seconds.ToString() : "0" + Seconds;

            string timestr = string.Format("{0}:{1}:{2}", hourStr, MinutesStr, SecondsStr);
            if (m_SecondDayAwardTime != null)
            {
                m_SecondDayAwardTime.text = timestr;
                m_SecondDayAwardTime.color = new Color(255f/255f, 148f/255f, 9f/255f);
            }
            if (NewServerActivityLogic.Instance() != null)
            {
                NewServerActivityLogic.Instance().m_ButtonText.text = timestr;
            }

            GameManager.gameManager.PlayerDataPool.NewServerMountBonusNextTime = m_LeftTimeInt;
            m_LeftTimeInt--;
            

            if (m_LeftTimeInt <= 0)
            {
                m_RemindRedPoint.gameObject.SetActive(true);
                m_SecondDayAwardText.gameObject.SetActive(true);
                m_SecondDayAwardTime.gameObject.SetActive(false);
                CancelInvoke("UpdateSecondDayAwardTime");
            }
        }
    }

    public void OnOpenShop()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SYSTEMSHOP))
        {
            return;
        }
        UIManager.ShowUI(UIInfo.SysShop);
    }

    public void OnOpenVip()
    {
        Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (obj != null)
        {
            if (obj.VipCost >= 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
            {
                UIManager.ShowUI(UIInfo.VipRoot);
            }
        }
    }

    public GameObject btnSevenDays;
    public GameObject btnSevenDays2;
    /// <summary>
    /// 七日狂欢
    /// </summary>
    public void OpenSevenDaysReward()
    {
        GameManager.gameManager.PlayerDataPool.SevenDaysRewardProxy.ReqData(() =>
        {
            UIManager.ShowUI(UIInfo.SevenDaysReward);
        });
        Obj_MainPlayer.IsFirstOpenSevenDay = false;
        UpdateSevenDayAwardRedPoint();
    }

    public void OnOpenActivityReward()
    {
		UIManager.LoadItem(UIInfo.ActivityRewardItem, LoadSingleItemOver);
    }

	private void LoadSingleItemOver(GameObject resItem, object param)
	{
		if (ActivityRewardsController.Instance() == null) 
		{
			UIManager.ShowUI(UIInfo.HuoDongJiangLi);
		}
	}

    void ShowSevenDaysRewardBtn()
    {
        btnSevenDays.SetActive(GlobalData.IsOpenSevenDaysRewardFlag);
        btnSevenDays2.SetActive(GlobalData.IsOpenSevenDaysRewardFlag);
        UIGrid parentGrid = btnSevenDays2.GetComponentInParent<UIGrid>();
        if (parentGrid != null)
        {
            parentGrid.repositionNow = true;
        }
    }
  //在线领奖
    public void ShowRewardOnlineClick()
    {
		UIManager.LoadItem(UIInfo.RewardOnlineItem, LoadSingleItemOverOnline);
    }

	private void LoadSingleItemOverOnline(GameObject resItem, object param)
	{
		UIManager.ShowUI(UIInfo.RewardOnline);
	}


	#if BOBJOYSTICK
	JoyUIButton defaultbtn;
	JoyUIButton uiShowDetail;
	JoyUIButton uiCloseDetail;
	JoyUIButton uiShop;
	JoyUIButton uiAutoBegin;
	JoyUIButton uiAutoEnd;
	JoyUIButton uiPKMode;
	JoyUIButton uiAward;
	JoyUIButton uiLingjiang;
	JoyUIButton uiMoneyTree;
	JoyUIButton uiFestival;
	JoyUIButton uiMail;
	JoyUIButton uiAct;
    JoyUIButton uiMiniMap;
	public void MapFunctionButtonToJoy(bool bShow)
	{
        if (null == JoyControllerLogic.FindChild(transform, "ButtonShop") ||
            null == JoyControllerLogic.FindChild(transform, "ButtonLingJiang") ||
            null == JoyControllerLogic.FindChild(transform, "FestivalButton1") || 
            null == JoyControllerLogic.FindChild(m_RadarWindow.transform, "bg"))
        {
            return;
        }

		GameObject btnShop = JoyControllerLogic.FindChild(transform, "ButtonShop").gameObject;
		GameObject btnLingjiang = JoyControllerLogic.FindChild(transform, "ButtonLingJiang").gameObject;
		GameObject btnFestival = JoyControllerLogic.FindChild(transform, "FestivalButton1").gameObject;
		//GameObject btnMail = JoyControllerLogic.FindChild(transform, "").gameObject;
        GameObject btnMiniMap = JoyControllerLogic.FindChild(m_RadarWindow.transform, "bg").gameObject;

        if (null == JoyUIButtonFactory.Instance)
            return;

		if(uiShowDetail == null)
		{
			uiShowDetail = JoyUIButtonFactory.Instance.MapUI(m_BtnOpenDetail);
		}
		if(uiCloseDetail == null)
		{
			uiCloseDetail = JoyUIButtonFactory.Instance.MapUI(m_BtnCloseDetail);
		}
		if (uiShop == null)
		{
			uiShop = JoyUIButtonFactory.Instance.MapUI(btnShop);
		}
		if (uiAct == null)
		{
			uiAct = JoyUIButtonFactory.Instance.MapUI(m_ButtonAct);
		}
		
		if (m_PKNormalBt != null)
		{
            if (uiPKMode != null)
            {
                Destroy(uiPKMode.gameObject);
                uiPKMode = null;
            }
                uiPKMode = JoyUIButtonFactory.Instance.MapUI(m_PKNormalBt);
		}
		else if(m_PKKillBt != null)
        {
            if (uiPKMode != null)
            {
                Destroy(uiPKMode.gameObject);
                uiPKMode = null;
            }
			uiPKMode = JoyUIButtonFactory.Instance.MapUI(m_PKKillBt);
		}

        if (uiMoneyTree == null)
        {
            if (null != JoyControllerLogic.FindChild(m_MoneyTreeButton.transform, "Button"))
			{
				GameObject treeButton = JoyControllerLogic.FindChild(m_MoneyTreeButton.transform, "Button").gameObject;
				uiMoneyTree = JoyUIButtonFactory.Instance.MapUI(treeButton);
			}
        }

        if (uiAward == null)
        {
            uiAward = JoyUIButtonFactory.Instance.MapUI(m_ButtonDailyLuckyDraw.gameObject);
        }

        if (uiLingjiang == null)
        {
            uiLingjiang = JoyUIButtonFactory.Instance.MapUI(btnLingjiang);
        }

        if (uiFestival == null)
        {
            uiFestival = JoyUIButtonFactory.Instance.MapUI(btnFestival);
        }

        //uiMail = JoyUIButtonFactory.Instance.MapUI(mail)
        if (uiAutoBegin == null)
        {
            uiAutoBegin = JoyUIButtonFactory.Instance.MapUI(m_BtnAutoBegin);
        }
        if (uiAutoEnd == null)
        {
            uiAutoEnd = JoyUIButtonFactory.Instance.MapUI(m_BtnAutoStop);
        }
        if (uiMiniMap == null) 
        {
            uiMiniMap = JoyUIButtonFactory.Instance.MapUI(btnMiniMap);
        }

		if (RechargeBarLogic.Instance() != null)
		{
			if (bShow)
			{
				RechargeBarLogic.Instance().UiVIP.Right = uiCloseDetail;
				uiCloseDetail.Left = RechargeBarLogic.Instance().UiVIP;
				uiCloseDetail.Right = uiShop;
				uiShop.Left = uiCloseDetail;
				if (m_ButtonAct.activeInHierarchy)
				{
					uiCloseDetail.Down = uiAct;
					
					uiAct.Up = uiCloseDetail;
				}
				uiShop.Right = uiPKMode;
				uiPKMode.Left = uiShop;
				uiPKMode.Down = uiMoneyTree;
				uiPKMode.Right = uiAward;
				uiAward.Left = uiPKMode;
				uiAward.Down = uiLingjiang;
				
				uiMoneyTree.Up = uiPKMode;
				uiMoneyTree.Down = uiFestival;
				uiMoneyTree.Right = uiLingjiang;
				
				uiLingjiang.Up = uiAward;
				uiLingjiang.Left = uiMoneyTree;
				//uiLingjiang.Down = uiMail;
				
				uiFestival.Up = uiMoneyTree;
				//uiFestival.Right = uiMail;
				//uiMail.Up = uiLingjiang;
				//uiMail.Left = uiFestival;
				
                //绑定挂机键
                if (m_BtnAutoBegin.activeInHierarchy)
                {
                    uiAutoBegin.Up = uiShop;
                    uiAutoBegin.Down = uiFestival;
                    uiAutoBegin.Left = uiAct;
                    uiAutoBegin.Right = uiMoneyTree;
                    uiMoneyTree.Left = uiAutoBegin;
                }
                else if (m_BtnAutoStop.activeInHierarchy)
                {
                    uiAutoEnd.Up = uiShop;
                    uiAutoEnd.Down = uiFestival;
                    uiAutoEnd.Left = uiAct;
                    uiAutoEnd.Right = uiMoneyTree;
                    uiMoneyTree.Left = uiAutoEnd;
                }
			}
			else
			{
				RechargeBarLogic.Instance().UiVIP.Right = uiShowDetail;
				
				uiShowDetail.Left = RechargeBarLogic.Instance().UiVIP;
				uiShowDetail.Right = uiShop;
                //uiShowDetail.Up = ;
                if (m_ButtonAct.activeInHierarchy)
                {
                    uiShowDetail.Down = uiAct;

                    uiAct.Up = uiShowDetail;
                }

				uiShop.Left = uiShowDetail;
                uiShop.Right = uiMiniMap;//应该是小地图
                //uiShop.Up = ;

                //绑定挂机键
                if (m_BtnAutoBegin.activeInHierarchy)
                {
                    uiAutoBegin.Up = uiShop;
                    uiAutoBegin.Down = uiFestival;
                    uiAutoBegin.Left = uiAct;
                    uiAutoBegin.Right = uiMiniMap;// 地图
                    // 地图
                    uiMiniMap.Left = uiShop;
                    uiMiniMap.Down = uiFestival;

                    uiShop.Down = uiAutoBegin;
                    uiAct.Right = uiAutoBegin;
                    
                }
                else if (m_BtnAutoStop.activeInHierarchy)
                {

                    uiAutoEnd.Up = uiShop;
                    uiAutoEnd.Down = uiFestival;
                    uiAutoEnd.Left = uiAct;
                    uiAutoEnd.Right = uiMiniMap;//TODO 地图
                    // 地图
                    uiMiniMap.Left = uiShop;
                    uiMiniMap.Down = uiFestival;


                    uiAct.Right = uiAutoEnd;
                    uiShop.Down = uiAutoEnd;
                   
                }

                uiFestival.Up = uiMiniMap;// 地图
			}
		}
	}
#endif
  //坐骑和世界Boss的button逻辑沿用之前的，并没有挪过来
    public void UpdateNewFunctionButtonState(DynamicLogo type)
    {
      if (m_NewFunctionWindowButtons.Length > (int)type) {
        switch (type) {
          case DynamicLogo.SevenDays:
            if (m_NewFunctionWindowButtons[(int)type] != null) {
              m_NewFunctionWindowButtons[(int)type].SetActive(GlobalData.IsOpenSevenDaysRewardFlag);
            }
            break;
          case DynamicLogo.ActivityAward:
            break;
          case DynamicLogo.RankList:
            break;
          case DynamicLogo.GangWars:
            break;
          case DynamicLogo.PKModel:
          case DynamicLogo.NormalModel:
              if (GameManager.gameManager.PlayerDataPool.PkModle == (int)CharacterDefine.PKMODLE.KILL) {
                m_NewFunctionWindowButtons[(int)DynamicLogo.PKModel].SetActive(true);
                m_NewFunctionWindowButtons[(int)DynamicLogo.NormalModel].SetActive(false);
              } else {
                m_NewFunctionWindowButtons[(int)DynamicLogo.PKModel].SetActive(false);
                m_NewFunctionWindowButtons[(int)DynamicLogo.NormalModel].SetActive(true);
              }

            break;
          case DynamicLogo.Mail:
            bool sign = false;
            foreach (KeyValuePair<ulong, MailData.UserMail> curMail in MailData.UserMailMap) {
              if (!curMail.Value.bReaded || curMail.Value.itemID >= 0 || curMail.Value.moneyCount > 0) {
                sign = true;
                break;
              }
            }
            if (m_NewFunctionWindowButtons[(int)type] != null) {
              m_NewFunctionWindowButtons[(int)type].SetActive(sign);
            }
            break;
        }
        if (m_NewFunctionWindowButtonsGrid != null) {
          m_NewFunctionWindowButtonsGrid.repositionNow = true;
        }
      }
    }
#region 

    public void OnGuestBindClick()
    {
        if (PlatformHelper.IsChannelKO())
        {
            PlatformHelper.guestBind();
        }
    }

    public void OnNaverCafeClick()
    {
        if (PlatformHelper.IsChannelKO())
        {
           
        }
    }

    private void UpdateToySDK()
    {
        if (PlatformHelper.IsChannelKO())
        {
            m_NaverCafeButton.SetActive(true);
            if (PlatformHelper.IsGuest())
            {
                m_LinkIDButton.SetActive(true);
            }
            else
            {
                m_LinkIDButton.SetActive(false);
            }
           
        }
        else
        {
            m_NaverCafeButton.SetActive(false);
            m_LinkIDButton.SetActive(false);
        }
    }
    //小红点：登录有礼（登录有礼、天道酬勤、签到），七天，成长礼包（战力，等级），在线奖励。
    void OnEnable()
    {
        UpdateRedPointInit();
        UpdateToySDK();
    }
    private void UpdateRedPointInit()
    {
        UpdateRedPoint();
        UpdateSignInAwardRedPoint();
        UpdateSevenDayAwardRedPoint();
        CancelInvoke("UpdateRedPoint");
        InvokeRepeating("UpdateRedPoint", 1f, 3f);
        InitRewardOnlineRedPoint();
    }
    public void UpdateRedPoint()
    {
        UpdateRewardOnlineRedPoint();
        UpdateActivityRewardRedPoint();
    }

    private float lastTime;
    private float pastTime;
    public GameObject RewardOnlineGo;
    public GameObject GrowUpGo;
    public GameObject SevenDayGo;
    public GameObject ActivityGo;

    private void InitRewardOnlineRedPoint()
    {
        int nowCountId = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardID;
        int time = 0;
        Dictionary<int, OnlineAwardLine> dataDic = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
        OnlineAwardLine data;
        if (!dataDic.TryGetValue(nowCountId, out data))
        {
            if (nowCountId > dataDic.Count - 1)
            {
                time = dataDic[dataDic.Count - 1].LeftTime + (nowCountId - dataDic.Count) * 600;
            }
            else
            {
                return;
            }
        }
        else
        {
            time = data.LeftTime;
        }
        int datalefttime = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayLeftTime;
        lastTime = Time.realtimeSinceStartup;
        int livetime = Mathf.RoundToInt(lastTime - GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayBeginTime);
        pastTime = time - datalefttime + livetime - 1;
    }
    private void UpdateRewardOnlineRedPoint()
    {
        if (RewardOnlineGo != null)
        {
            float time = Time.realtimeSinceStartup;
            pastTime += Mathf.RoundToInt(time - lastTime);
            lastTime = time;
            Dictionary<int, OnlineAwardLine> dataDic = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
            List<int> GetList = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayGetList;
            foreach (KeyValuePair<int, OnlineAwardLine> pair in dataDic)
            {
                if (GetList[pair.Key] != 1 && pair.Value.LeftTime - pastTime < 0)
                {
                    RewardOnlineGo.SetActive(true);
                    return;
                }
            }
            RewardOnlineGo.SetActive(false);
        }
    }
    private void UpdateActivityRewardRedPoint()
    {
        bool level, fight;
        ActivityRewardsController.CalculateRedPoint(out level, out fight);
        if (GrowUpGo != null)
        {
            if (level || fight)
            {
                GrowUpGo.SetActive(true);
            }
            else
            {
                GrowUpGo.SetActive(false);
            }
        }
    }
    private void UpdateSevenDayAwardRedPoint()
    {
        if (SevenDayGo != null && Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            SevenDayGo.SetActive(Obj_MainPlayer.IsFirstOpenSevenDay);
        }
    }
    public void UpdateSignInAwardRedPoint()
    {
        if (ActivityGo != null)
        {
            ActivityGo.SetActive(GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw()
                              || GameManager.gameManager.PlayerDataPool.IsHaveNewServerAward()
                              || GameManager.gameManager.PlayerDataPool.IsCONTINUELOGINAWARD());
        }
    }
#endregion
}
