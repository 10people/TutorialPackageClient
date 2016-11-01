using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.UserCommonData;
using Module.Log;
using GCGame.Table;

public class ActivityController : UIControllerBase<ActivityController>
{
	public GameObject m_HuodongRedPoint_TopTab;
	public GameObject m_HuodongRedPoint_LeftTab;

    // 新手指引
    public GameObject m_ButtonFight;
    //For Tab Tips
    private enum TabIndex
    {
        Tab_Normal, //1日常任务
        Tab_JHMRL,  //2江湖名人录
        Tab_JXZ,    //3聚贤庄11
        Tab_HSLJ,   //4华山论剑
        Tab_CJG,    //5藏经阁14
        Tab_YZW,    //6燕子坞19
        Tab_ZLQJ,   //7珍珑棋局28
        Tab_YWGM,   //8燕王古墓27
        Tab_TJQJ,   //9天降奇珍        
        Tab_SSS,    //10少室山31
        Tab_Guild,  //11帮战
        Tab_Boss,   //12世界BOSS
        Tab_NHCJ,   //13怒海锄奸7
        Tab_WULIN,  //14武林大会
        Tab_VILLAIN, //15四大恶人
        Tab_SHOUWEIYMG, //16守卫雁门关
        Tab_BAYBACKCS,  //17回购次数
    };
    public List<UISprite> m_TabCounts = new List<UISprite>();
    public List<UISprite> m_TabTeam = new List<UISprite>();
    public GameObject m_PVPWindow;
    public DungeonWindow m_DungeonWindow;
    public DailyMissionActiveWindow m_DailyMissionActiveWindow;
    public UISprite m_DailyTip;
    public UISprite m_AwardTip;
    public GameObject m_MonthMultipleTip;
    public HuaShanPvPWindow m_HuaShanWindow;
    public TabController m_TabDungeon;      // 副本选项
    public TabController m_TabController;
    public TeamPlatformWindow m_TeamPlatformWindow;
    public CangJingGeWindow CangJingGeWindow;
    //public UITopGrid m_TabUITopGrid;
    public UICabalGrid m_TabUITopGrid;
    public WuLinWindow m_WuLinWindow;
    public VillainWindow m_VillainWindow;
    public RebuyWindow m_RebuyWindow;
    public BuyCopySceneNumWindow m_BuyCopySceneNumWindow;
    public JuQingWindow m_JuQingWindow;
    public GameObject m_TabRebuyObject;

    public GameObject m_WolrdBossInfo;
    public GameObject m_WorldBossEnableButton;
    public GameObject m_WorldBossUnEnableButton;

    private int m_WorldBossSceneID = 34;

    private int m_NewPlayerGuide_Step = -1;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }
    public TabController m_HuoDongControl;  // cabel新加

    private static bool m_bHasStartTab = false;     // 是否需要在初始化时显示一个指定Tab
    private static string m_strStartTabName = "";   // 初始化指定Tab名称
    private static bool m_bShouldOpenPVP = false;
	private const int m_nPVPMissionID = 76;
    public static bool BShouldOpenPVP
    {
        get { return ActivityController.m_bShouldOpenPVP; }
        set { ActivityController.m_bShouldOpenPVP = value; }
    }
    public static void SetStartTab(string tabName)
    {
        m_bHasStartTab = true;
        m_strStartTabName = tabName;
    }

    public static void TestStartTab(TabController activityControl ,TabController curTabController)
    {
        if (BShouldOpenPVP)
        {
            return;
        }
       // if (!m_bHasStartTab)
       // {
     //       return;
      //  }
        m_bHasStartTab = false;
        if (null != curTabController)
        {
            activityControl.ChangeTab("Button1-HuoDong");
            if (!string.IsNullOrEmpty(m_strStartTabName))
            {
                curTabController.ChangeTab(m_strStartTabName);
            }
        }
    }
    /// <summary>
    /// OnDisable的时候Instance居然置为了NULL，只能定义成静态了。 gzq
    /// </summary>
    public static void RequireOpenPVPTab()
    {
        BShouldOpenPVP = true;
    }
    public void OpenPVPTab(TabController activityControl)
    {
        if (BShouldOpenPVP)
        {
            activityControl.ChangeTab("Button1-TiaoZhan");
            BShouldOpenPVP = false;
        }
    }
    
    void Awake()
    {
        SetInstance(this);
        if (m_TabDungeon != null)
        {
            m_TabDungeon.delTabChanged = OnTabDungeonTableau;
        }

        if (m_HuoDongControl != null)
        {
            m_HuoDongControl.delTabChanged = OnTabHuoDong;
        }
    }

    // Use this for initialization
    void OnEnable()
    {
        //         if (null != m_TabController)
        //         {
        //             m_TabController.ChangeTab("Tab1");
        //         }
        SetInstance(this);

        InitData();


        UpdateTabTips();
        UpdateAutoTeam();

        Check_OnChangeTab();

        TestStartTab(m_HuoDongControl,m_TabController);
        OpenPVPTab(m_HuoDongControl);

        HideFeatureByLv();
        
        Check_NewPlayerGuide();

        AskVillainTimeAndOpenFlag();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.ACTIVITY_UI);
#endif

        //暂时隐藏
        m_DailyMissionActiveWindow.gameObject.SetActive(false);
        _clearTabFunction();
        setTabFunction();
        _showTabFunction();

        //m_PVPWindow.SetActive(false);
        if (NewFunctionLogic.Instance().NewPlayerGuideIndex == 18 ||
        NewFunctionLogic.Instance().NewPlayerGuideIndex == 20 ||
        NewFunctionLogic.Instance().NewPlayerGuideIndex == 22 ||
        NewFunctionLogic.Instance().NewPlayerGuideIndex == 24 ||
        NewFunctionLogic.Instance().NewPlayerGuideIndex == 25)
        {
            if (null != m_HuoDongControl)
            {
                m_HuoDongControl.ChangeTab("Button2-JuQing");
            }
        }

		// 剧情黄点
		HuodongRedPoint();

		Messenger.AddListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
    }

    /// <summary>
    /// 根据玩家等级隐藏功能
    /// </summary>
    void HideFeatureByLv()
    {
		bool bPVP = GameManager.gameManager.MissionManager.IsMissionHaveDone(m_nPVPMissionID);
		if(!bPVP)
		{
			bPVP = GameManager.gameManager.MissionManager.IsHaveMission(m_nPVPMissionID);
		}
		m_HuoDongControl.GetTabButtonObj("Button1-TiaoZhan").SetActive(bPVP);
    }

    void OnDisable()
    {
        SetInstance(null);
		Messenger.RemoveListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
    }

    void InitData()
    {
        if (m_TabController != null)
        {
            m_TabController.InitData();
            if (m_TabUITopGrid)
            {
                //m_TabUITopGrid.transform.parent.GetComponent<UIDraggablePanel>().scale = new Vector3(0, 1, 0);
            }
        }
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_BUYBACKCSN))
        {
            m_TabRebuyObject.SetActive(true);
        }
        else
        {
            m_TabRebuyObject.SetActive(false);
        }

        if (m_HuoDongControl)
        {
            m_HuoDongControl.InitData();
        }
    }

	private string tabBigRedName = "RemindBackGround";
    public void UpdateTabTips(bool isRecenterTopNow = true)
    {
        if (isRecenterTopNow)
        {
            if (m_TabUITopGrid)
            {
                // m_TabUITopGrid.recenterTopNow = true;
            }
        }

        string temp = "";
        for (int nindex = 0; nindex < m_TabCounts.Count; ++nindex)
        {
            m_TabCounts[nindex].spriteName = "";
        }
        //1日常
        {
            m_DailyTip.spriteName = "";
            m_AwardTip.spriteName = "";
            if (Utils.GetActivityAwardBonusLeft() > 0)
            {
				m_TabCounts[(int)TabIndex.Tab_Normal].spriteName =  tabBigRedName;
				m_AwardTip.spriteName = tabBigRedName;
            }
            m_MonthMultipleTip.SetActive(GameManager.gameManager.PlayerDataPool.IsShowMonthMultipleTip);
        }

        //等级显示限制
        int nLevel = 0;
        if (Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            nLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        }

        //2江湖名人录
        {
            if (PVPData.LeftFightTime > 0 && nLevel >= 40)
            {
				m_TabCounts[(int)TabIndex.Tab_JHMRL].spriteName = tabBigRedName;
            }
        }

        // 华山论剑
        {
            if (nLevel >= 35)
            {
                if (HuaShanPVPData.IsHuaShanPvPOpen())
                {
					m_TabCounts[(int)TabIndex.Tab_HSLJ].spriteName = tabBigRedName;
                }
            }
        }

		// 没用啊 ，。。。
		//if (nLevel < 40)  
		//   return;

        if (GlobalData.IsWuLinOpen())
        {
			m_TabCounts[(int)TabIndex.Tab_WULIN].spriteName = tabBigRedName;
        }

        //3聚贤庄11
	
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCountsAll(15, ref nCur, ref nMax);
            nCount += nCur;
            temp += " Tab_JXZ:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[(int)TabIndex.Tab_JXZ].spriteName = tabBigRedName;
        }
        //5藏经阁14
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCounts(6, 1, 1, ref nCur, ref nMax);
            nCount += nCur;
            //Utils.GetSweepCounts(ref nCur, ref nMax);
            nCount += nCur;

            temp += " Tab_CJG:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[1].spriteName = tabBigRedName;    // 坑，之前的已经乱了。。就这么做吧，，
				//m_TabCounts[(int)TabIndex.Tab_CJG].spriteName = tabBigRedName;
        }
        //6燕子坞19
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCountsAll(16, ref nCur, ref nMax);
            nCount += nCur;
            temp += " Tab_YZW:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[(int)TabIndex.Tab_YZW].spriteName = tabBigRedName;
        }
        //7珍珑棋局28
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCountsAll(14, ref nCur, ref nMax);
            nCount += nCur;
            temp += " Tab_ZLQJ:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[(int)TabIndex.Tab_ZLQJ].spriteName = tabBigRedName;
        }
        //8燕王古墓27
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCountsAll(35, ref nCur, ref nMax);
            nCount += nCur;
            temp += " Tab_YWGM:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[(int)TabIndex.Tab_YWGM].spriteName = tabBigRedName;
        }
        //9 天降奇珍
        {
            bool bFlag = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GUILDACTIVITY_FLAG);
            if (bFlag)
            {
				m_TabCounts[(int)TabIndex.Tab_TJQJ].spriteName = tabBigRedName;
            }
        }
        //13怒海锄奸7
        {
            int nCount = 0;
            int nCur = 0;
            int nMax = 0;
            Utils.GetCopySceneCounts(13, 1, 1, ref nCur, ref nMax);
            nCount += nCur;
            temp += " Tab_NHCJ:" + nCount.ToString();
            if (nCount > 0)
				m_TabCounts[(int)TabIndex.Tab_NHCJ].spriteName = tabBigRedName;
        }
        //10少室山31
        {
            // 少室山等级要求
            if (null != Singleton<ObjManager>.Instance.MainPlayer &&
                Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 70)
            {
                int nCount = 0;
                int nCur = 0;
                int nMax = 0;
                Utils.GetCopySceneCounts(31, 2, 1, ref nCur, ref nMax);
                nCount += nCur;
                temp += " Tab_SSS:" + nCount.ToString();
                if (nCount > 0)
					m_TabCounts[(int)TabIndex.Tab_SSS].spriteName = tabBigRedName;
            }
        }
        //四大恶人
        {
            if (nLevel >= VillainData.m_nLevelLimit && GlobalData.IsVillainOpen())
            {
				m_TabCounts[(int)TabIndex.Tab_VILLAIN].spriteName = tabBigRedName;
            }
        }
        //守卫雁门关
        {
            if (null != Singleton<ObjManager>.Instance.MainPlayer &&
                Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 80)
            {
                int nCount = 0;
                int nCur = 0;
                int nMax = 0;
                Utils.GetCopySceneCounts(41, 2, 1, ref nCur, ref nMax);
                nCount += nCur;
                temp += " Tab_ShouWeiYMG:" + nCount.ToString();
                if (nCount > 0)
					m_TabCounts[(int)TabIndex.Tab_SHOUWEIYMG].spriteName = tabBigRedName;
            }
        }
        //副本回购

        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN; i <= (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN; i++)
        {
            if (GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(i, true) > 0
                || GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(i, false) > 0)
            {
				m_TabCounts[(int)TabIndex.Tab_BAYBACKCS].spriteName = tabBigRedName;
                break;
            }
        }

        // LogModule.DebugLog(temp);

    }
    public void UpdateAutoTeam()
    {
        //做自动组队处理
        if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG)
            {
                m_TabCounts[(int)TabIndex.Tab_JXZ].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_JXZ].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
            {
                m_TabCounts[(int)TabIndex.Tab_YZW].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_YZW].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU)
            {
                m_TabCounts[(int)TabIndex.Tab_YWGM].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_YWGM].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU)
            {
                m_TabCounts[(int)TabIndex.Tab_ZLQJ].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_ZLQJ].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN)
            {
                m_TabCounts[(int)TabIndex.Tab_SSS].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_SSS].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FOURVILLAIN)
            {
                m_TabCounts[(int)TabIndex.Tab_VILLAIN].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_VILLAIN].gameObject.SetActive(true);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
            {
                m_TabCounts[(int)TabIndex.Tab_SHOUWEIYMG].gameObject.SetActive(false);
                m_TabTeam[(int)TabIndex.Tab_SHOUWEIYMG].gameObject.SetActive(true);
            }
        }
        else
        {
            if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG)
            {
                m_TabCounts[(int)TabIndex.Tab_JXZ].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_JXZ].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
            {
                m_TabCounts[(int)TabIndex.Tab_YZW].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_YZW].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU)
            {
                m_TabCounts[(int)TabIndex.Tab_YWGM].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_YWGM].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU)
            {
                m_TabCounts[(int)TabIndex.Tab_ZLQJ].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_ZLQJ].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN)
            {
                m_TabCounts[(int)TabIndex.Tab_SSS].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_SSS].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FOURVILLAIN)
            {
                m_TabCounts[(int)TabIndex.Tab_VILLAIN].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_VILLAIN].gameObject.SetActive(false);
            }
            else if (GameManager.gameManager.PlayerDataPool.AutoTeamCopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
            {
                m_TabCounts[(int)TabIndex.Tab_SHOUWEIYMG].gameObject.SetActive(true);
                m_TabTeam[(int)TabIndex.Tab_SHOUWEIYMG].gameObject.SetActive(false);
            }
        }

        if (m_VillainWindow != null && m_VillainWindow.gameObject != null && m_VillainWindow.gameObject.activeSelf)
        {
            m_VillainWindow.OnButtonAutoTeamLabel();
        }
    }
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.Activity);
    }

    // 新手指引
    void Check_NewPlayerGuide()
    {
        if (NewFunctionLogic.Instance())
        {
            int nStep = NewFunctionLogic.Instance().NewPlayerGuideIndex;
            if (nStep == 11)
            {
                NewPlayerGuide(7);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            else if (nStep == 26)
            {
                NewPlayerGuide(8);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }

            // 黄昏要塞
            else if (nStep == 30)
            {
                NewPlayerGuide(30);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            // 机械研究所
            else if (nStep == 31)
            {
                NewPlayerGuide(31);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            // 雷纳包
            else if (nStep == 32)
            {
                NewPlayerGuide(32);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            // 冰冻地下 
            else if (nStep == 33)
            {
                NewPlayerGuide(33);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            // 废弃都市 
            else if (nStep == 34)
            {
                NewPlayerGuide(34);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
            // pvp 
            else if (nStep == 35)
            {
                NewPlayerGuide(35);
                NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            }
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 0:
                TabButton tabFight = m_TabController.GetTabButton("Tab2");
                if (tabFight)
                {
                    NewPlayerGuidLogic.OpenWindow(tabFight.gameObject, 240, 70, "", "right", 0, true, true);
                }
                break;
            case 1:
                //NewPlayerGuidLogic.OpenWindow(m_ButtonFight, 280, 110, "请点此处", "right", 0,true, true);
                break;
            case 2:
                //TabButton tabButton3 = m_TabController.GetTabButton("Tab1");
                //if (tabButton3)
                //{
                //    NewPlayerGuidLogic.OpenWindow(tabButton3.gameObject, 280, 110, "", "right", 0, true, true);
                //}
                break;
            case 3:// 藏经阁
                TabButton tabButton5 = m_TabController.GetTabButton("Tab5");
                if (tabButton5)
                {
                    NewPlayerGuidLogic.OpenWindow(tabButton5.gameObject, 240, 70, "", "right", 0, true, true);
                }
                break;
            case 4:// 燕子坞
                TabButton tabButton6 = m_TabController.GetTabButton("Tab6");
                if (tabButton6)
                {
                    NewPlayerGuidLogic.OpenWindow(tabButton6.gameObject, 240, 70, "", "right", 0, true, true);
                }
                break;
            case 5:// 聚贤庄
                TabButton tabButton2 = m_TabController.GetTabButton("Tab3");
                if (tabButton2)
                {
                    NewPlayerGuidLogic.OpenWindow(tabButton2.gameObject, 240, 70, "", "right", 0, true, true);
                }
                break;
            case 6:// 珍珑棋局
                TabButton tabButton7 = m_TabController.GetTabButton("Tab7");
                if (tabButton7)
                {
                    NewPlayerGuidLogic.OpenWindow(tabButton7.gameObject, 240, 70, "", "right", 0, true, true);
                }
                break;

            case 7: // 活动界面按钮
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(3);
                        }
                    }
                }
                break;
            case 8:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(9);
                        }
                    }
                }
                break;
            case 9:
                {
                    TabButton tabButtonHunDunZhiDi = m_TabController.GetTabButton("Tab2");
                    if (tabButtonHunDunZhiDi)
                    {
                        NewPlayerGuidLogic.OpenWindow(tabButtonHunDunZhiDi.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break;
                // 黄昏
            case 30:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(40);
                        }
                    }
                }
                break;
            case 40 :
                {
                    TabButton huanghunyaosai = m_TabController.GetTabButton("Tab6");
                    if (huanghunyaosai)
                    {
                        NewPlayerGuidLogic.OpenWindow(huanghunyaosai.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break;
                // 机械研究所
            case 31:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(41);
                        }
                    }
                }
                break;
            case 41:
                {
                    TabButton jixieyanjiusuo = m_TabController.GetTabButton("Tab7");
                    if (jixieyanjiusuo)
                    {
                        NewPlayerGuidLogic.OpenWindow(jixieyanjiusuo.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break;
                // 雷纳包
            case 32:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(42);
                        }
                    }
                }
                break;
            case 42:
                {
                    TabButton leinabao = m_TabController.GetTabButton("Tab3");
                    if (leinabao)
                    {
                        NewPlayerGuidLogic.OpenWindow(leinabao.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break;
                // 冰冻地下
            case 33:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(43);
                        }
                    }
                }
                break;
            case 43:
                {
                    TabButton bingdongdixia = m_TabController.GetTabButton("Tab8");
                    if (bingdongdixia)
                    {
                        NewPlayerGuidLogic.OpenWindow(bingdongdixia.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break; 
                // 废弃都市
            case 34:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-HuoDong");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-HuoDong");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            NewPlayerGuide(44);
                        }
                    }
                }
                break;
            case 44:
                {
                    TabButton bingdongdixia = m_TabController.GetTabButton("Tab13");
                    if (bingdongdixia)
                    {
						Vector3 vOffset = Vector3.zero;
						vOffset.y = 60;
						m_TabController.GetComponentInParent<UIDraggablePanel>().MoveRelative(vOffset);

						NewPlayerGuidLogic.OpenWindow(bingdongdixia.gameObject, 240, 70, "", "right", 0, true, true);
                    }
                }
                break;
                // pvp
            case 35:
                {
                    TabButton tabHuoDong = m_HuoDongControl.GetTabButton("Button1-TiaoZhan");
					if(tabHuoDong)
						m_HuoDongControl.ChangeTab("Button1-TiaoZhan");
                    if (tabHuoDong && tabHuoDong.objHighLight)
                    {
                        if (tabHuoDong.objHighLight.activeInHierarchy == false)
                        {
                            NewPlayerGuidLogic.OpenWindow(tabHuoDong.gameObject, 240, 70, "", "right", 0, true, true);
                        }
                        else
                        {
                            //NewPlayerGuide(44);
                        }
                    }
                }
                break;
        }

        if (m_TabUITopGrid)
        {
            //m_TabUITopGrid.transform.parent.GetComponent<UIDraggablePanel>().scale = Vector3.zero;
        }

    }

    #region 武林大会
    //public TabController m_WuLinTabController;

    public void ChangeToWuLinShowMemberList()
    {
        //if (null != m_WuLinTabController)
        //m_WuLinTabController.ChangeTab("Tab2");
    }

    public void ChangeToWuLinShowDefault()
    {
        //if (null != m_HuaShanTabController)
        // m_WuLinTabController.ChangeTab("Tab1");
    }
    public void ChangeToWuLinShowOppoentView()
    {
        //if (null != m_HuaShanTabController)
        //  m_WuLinTabController.ChangeTab("Tab3");
    }

    public void ChangeToWuLinShowPKInfo()
    {
        //  if (null != m_HuaShanTabController)
        //  m_WuLinTabController.ChangeTab("Tab4");
    }

    public void ChangeToWuLinTab()
    {
        //  if (null != m_TabController)
        //  m_TabController.ChangeTab("Tab14");
    }

    public bool IsShowWuLinTab()
    {
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (curTab.name == "Tab4")
        {
            return true;
        }
        return false;
    }
    #endregion

    #region 华山论贱
    public TabController m_HuaShanTabController;

    public void ChangeToHSPvPShowMemberList()
    {
        //   if (null != m_HuaShanTabController)
        //    m_HuaShanTabController.ChangeTab("Tab2");
    }

    public void ChangeToHSPvPShowDefault()
    {
        //  if (null != m_HuaShanTabController)
        //    m_HuaShanTabController.ChangeTab("Tab1");
    }
    public void ChangeToHSPvPShowOppoentView()
    {
        //   if (null != m_HuaShanTabController)
        //     m_HuaShanTabController.ChangeTab("Tab3");
    }

    public void ChangeToHSPvPShowPKInfo()
    {
        //  if (null != m_HuaShanTabController)
        //    m_HuaShanTabController.ChangeTab("Tab4");
    }

    public void ChangeToHuaShanTab()
    {
        //  if (null != m_TabController)
        //     m_TabController.ChangeTab("Tab4");
    }

    public bool IsShowHuaShanTab()
    {
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (curTab.name == "Tab4")
        {
            return true;
        }
        return false;
    }
    #endregion

    public void ChangeToPvP()
    {
        //  if (null != m_TabController)
        //      m_TabController.ChangeTab("Tab2");

        if (NewFunctionLogic.Instance() != null)
        {
            ActivityController.RequireOpenPVPTab();
          //  NewFunctionLogic.Instance().OpenActivityWithIndex(3);
        }
    }
    public GameObject m_EnterCopyScene;
    void OnTabDungeonTableau(TabButton button)
    {
        if (null != m_TeamPlatformWindow)
        {
            m_TeamPlatformWindow.gameObject.SetActive(false);
        }

        if (button.name == "Tab2")
        {
            CangJingGeWindow.gameObject.SetActive(true);
            if (m_NewPlayerGuide_Step == 9)
            {
                NewPlayerGuidLogic.CloseWindow();
                m_NewPlayerGuide_Step = -1;
                CangJingGeWindow.NewPlayerGuide(1);
            }
            CangJingGeWindow.OnOpenCopyScene((int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI);
        }
        else if (button.name == "Tab3")
        {
			m_DungeonWindow.gameObject.SetActive(true);
			m_DungeonWindow.OnOpenCopyScene(15);

			if( m_NewPlayerGuide_Step == 42 )
			{
				NewPlayerGuidLogic.CloseWindow();
				m_NewPlayerGuide_Step = -1;
                m_DungeonWindow.NewPlayerGuide(1);
				//NewPlayerGuidLogic.OpenWindow(m_EnterCopyScene, 200, 80, "", "right", 0, true, true);
			}
        
        }
        else if (button.name == "Tab1")
        {
            //             if (m_NewPlayerGuide_Step == 2)
            //             {
            //                 NewPlayerGuidLogic.CloseWindow();
            //                 m_DailyMissionActiveWindow.NewPlayerGuide(1);
            //                 m_NewPlayerGuide_Step = -1;
            //             }
        }
        else if (button.name == "Tab4")
        {
            m_HuaShanWindow.gameObject.SetActive(true);
            CG_ASK_HUASHANPVP_STATE packet = (CG_ASK_HUASHANPVP_STATE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HUASHANPVP_STATE);
            packet.None = 0;
            packet.SendPacket();
            //.. 请求数据
        }
        else if (button.name == "Tab5")
        {
            if (m_NewPlayerGuide_Step == 3)
            {
                CangJingGeWindow.NewPlayerGuide(1);
                m_NewPlayerGuide_Step = -1;
            }
            CangJingGeWindow.OnOpenCopyScene((int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI);
        }
        else if (button.name == "Tab6")
        {
			m_DungeonWindow.OnOpenCopyScene(16);
			if( m_NewPlayerGuide_Step == 40 )
			{
				NewPlayerGuidLogic.CloseWindow();
				m_NewPlayerGuide_Step = -1;
                m_DungeonWindow.NewPlayerGuide(1);
			}
        }
        else if (button.name == "Tab7")
        {
			m_DungeonWindow.OnOpenCopyScene(14);
			if( m_NewPlayerGuide_Step == 41 )
			{
				NewPlayerGuidLogic.CloseWindow();
				m_NewPlayerGuide_Step = -1;
                m_DungeonWindow.NewPlayerGuide(1);
			}
        }
        else if (button.name == "Tab8")
        {
			m_DungeonWindow.OnOpenCopyScene(35);
			if( m_NewPlayerGuide_Step == 43 )
			{
				NewPlayerGuidLogic.CloseWindow();
				m_NewPlayerGuide_Step = -1;
                m_DungeonWindow.NewPlayerGuide(1);
			}
        }
        else if (button.name == "Tab10")
        {
            m_DungeonWindow.OnOpenCopyScene(31);
        }
        else if (button.name == "Tab13")
        {
			m_DungeonWindow.OnOpenCopyScene(13);
			if( m_NewPlayerGuide_Step == 44 )
			{
				NewPlayerGuidLogic.CloseWindow();
				m_NewPlayerGuide_Step = -1;
                m_DungeonWindow.NewPlayerGuide(1);
			}
        }
        else if (button.name == "Tab14")
        {
            //m_WuLinWindow.gameObject.SetActive(true);
            WuLinData.HerosInHistoryList.Clear();
            if (WuLinData.delegateShowWuLinHeroesInHistory != null)
            {
                WuLinData.delegateShowWuLinHeroesInHistory();
            }
            CG_ASK_WULIN_STATE packet = (CG_ASK_WULIN_STATE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_WULIN_STATE);
            packet.None = 0;
            packet.SendPacket();
            //.. 请求数据
        }
        else if (button.name == "Tab15")
        {
            if (m_VillainWindow != null && m_VillainWindow.gameObject != null)
            {
                m_VillainWindow.gameObject.SetActive(true);
                CG_ASK_VILLAIN_INFO packet = (CG_ASK_VILLAIN_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_VILLAIN_INFO);
                packet.Ndata = 1;
                packet.SendPacket();
            }
            else
            {
                LogModule.ErrorLog("m_VillainWindow.gameObject is null");
            }
        }
        else if (button.name == "Tab16")
        {
            m_DungeonWindow.OnOpenCopyScene(41);
        }
        else if (button.name == "Tab17")
        {
            m_RebuyWindow.gameObject.SetActive(true);
        }
        else if (button.name == "Tab18")
        {
            UpdateWorldBossState();
        }
    }

    public void UpdateWorldBossState()
    {
        if (1 == WorldMapWindow.WorldBossOpen)
        {
            NGUITools.SetActive(m_WorldBossEnableButton, true);
            NGUITools.SetActive(m_WorldBossUnEnableButton, false);
        }
        else
        {
            NGUITools.SetActive(m_WorldBossEnableButton, false);
            NGUITools.SetActive(m_WorldBossUnEnableButton, true);
        }
        NGUITools.SetActive(m_WolrdBossInfo, false);
    }

    void OnTabHuoDong(TabButton button)
    {
        /* if (button.name == "Button2-HuoDong")
         {
             if (NewPlayerGuide_Step == 7)
             {
                 NewPlayerGuide(3);
             }
         } */

        if (button.name == "Button1-HuoDong")
        {
            if (NewPlayerGuide_Step == 8)
            {
                NewPlayerGuide(9);
            }
            else
            {
                m_TabController.ChangeTab("Tab2");
            }
        }
    }

    // 日常任务界面相关
    public void UpdateDailyMissionState(int nMissionID)
    {
        if (m_DailyMissionActiveWindow.IsDailyMissionActive() == true)
        {
            m_DailyMissionActiveWindow.UpDateDailyMissionState(nMissionID);
        }
    }
    public void UpDateDoneCount(int nDoneCount)
    {
        if (m_DailyMissionActiveWindow.IsDailyMissionActive() == true)
        {
            m_DailyMissionActiveWindow.UpDateDoneCount(nDoneCount);
        }
    }
    public void UpDateActiveness(int nActiveness)
    {
        if (m_DailyMissionActiveWindow.IsDailyMissionActive() == true)
        {
            m_DailyMissionActiveWindow.UpDateActiveness(nActiveness);
        }
        //about active
        UpdateTabTips();
    }
    public void UpdateDailyMissionList()
    {
        if (m_DailyMissionActiveWindow.IsDailyMissionActive() == true)
        {
            m_DailyMissionActiveWindow.UpdateMissionList();
        }
    }
    public void UpdateMissionItemByKind(int nKind)
    {
        if (m_DailyMissionActiveWindow.IsDailyMissionActive() == true)
        {
            m_DailyMissionActiveWindow.UpdateMissionItemByKind(nKind);
        }
    }

    // 活跃度领奖界面
    public void UpdateAwardItemState(int nTurnID)
    {
        if (m_DailyMissionActiveWindow.IsActivenessWindowActive() == true)
        {
            m_DailyMissionActiveWindow.UpdateAwardItemState(nTurnID);
        }
    }

    // 打开日常任务界面
    public void ChangeToDailyMissionTab()
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab1");
            TabButton tabButton = m_TabController.GetTabButton("Tab1");
            if (tabButton)
            {
                OnTabDungeonTableau(tabButton);
            }

            if (PlayerPreferenceData.DailyMissionGuideFlag != 1)
            {
                m_DailyMissionActiveWindow.NewPlayerGuide(1);
            }
        }
    }

    private string m_StrTabName = "Tab5";
    public string StrTabName
    {
        get { return m_StrTabName; }
        set
        {
            m_StrTabName = value;
            Check_OnChangeTab();
        }
    }

    void Check_OnChangeTab()
    {
        if (m_StrTabName != "")
        {
            if (null != m_TabController)
            {
                m_TabController.ChangeTab(m_StrTabName);
            }
            m_StrTabName = "Tab5";
        }
    }

    // 燕子坞界面
    public void ChangeToYanziwuTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab6");
        }
    }
    // 燕王古墓界面
    public void ChangeToYanWanggumuTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab8");
        }
    }
    // 珍珑棋局界面
    public void ChangeToZhenLongQiJuTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab7");
        }
    }
    // 聚贤庄界面
    public void ChangeToJuXianZhuangTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab3");
        }
    }
    // 少室山界面
    public void ChangeToShaoShiShanTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab10");
        }
    }
    // 藏经阁
    public void ChangeToCangJingGeTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab5");
        }
    }
    // 名人录
    public void ChangeToMingRenLuTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab2");
        }
    }

    // 守卫雁门关界面
    public void ChangeToShouWeiYMGTab(bool bSuccess, object param)
    {
        if (null != m_TabController)
        {
            m_TabController.ChangeTab("Tab16");
        }
    }

    public void UpdateGuildActivityWindow()
    {
        UpdateTabTips();

        if (GuildDailyWindow.Instance())
        {
            GuildDailyWindow.Instance().UpdateActivityInfo();
        }
    }

    public void UpdateVillainTime()
    {
        if (m_VillainWindow != null && m_VillainWindow.gameObject != null)
        {
            if (m_VillainWindow.gameObject.activeSelf)
            {
                m_VillainWindow.UpdateActivityTime();
            }
        }

        //等级显示限制
        int nLevel = 0;
        if (Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            nLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        }
        if (nLevel >= VillainData.m_nLevelLimit && GlobalData.IsVillainOpen())
        {
            m_TabCounts[(int)TabIndex.Tab_VILLAIN].spriteName = "count";
        }
        else
        {
            m_TabCounts[(int)TabIndex.Tab_VILLAIN].spriteName = "";
        }
    }

    void AskVillainTimeAndOpenFlag()
    {
        CG_ASK_VILLAIN_INFO packet = (CG_ASK_VILLAIN_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_VILLAIN_INFO);
        packet.Ndata = 0;
        packet.SendPacket();
    }

    private Dictionary<TabIndex, string> m_tableIndexList = new Dictionary<TabIndex, string>();
    private void _clearTabFunction()
    {
        m_tableIndexList.Clear();
    }
    private void setTabFunction()
    {
        /*机械研究所-----珍珑棋局、
            雷纳堡----------聚贤庄
            冰冻墓地-------燕王古墓
            混沌之地-------藏经阁
            黄昏要塞-------燕子坞
            废弃都市-------怒海锄奸
            堕落精英-------四大恶人
            策划-刘潇潇 2015/8/19 15:17:07
            遗忘废墟--------少室山
*/
        m_tableIndexList.Add(TabIndex.Tab_CJG, "Tab2");   

        // m_tableIndexList.Add(TabIndex.Tab_VILLAIN, "Tab5");  这个有问题的   

        m_tableIndexList.Add(TabIndex.Tab_NHCJ, "Tab13");
        m_tableIndexList.Add(TabIndex.Tab_ZLQJ, "Tab7");
		m_tableIndexList.Add(TabIndex.Tab_YZW, "Tab6");    
        m_tableIndexList.Add(TabIndex.Tab_JXZ, "Tab3");
		m_tableIndexList.Add(TabIndex.Tab_YWGM, "Tab8");
    }

    private void _showTabFunction()
    {
        if (m_TabUITopGrid)
        {
            for (int i = 1; i <= 17; ++i)
            {
                Transform obj0 = m_TabUITopGrid.transform.Find("Tab" + i.ToString());
                if (obj0 != null)
                    obj0.gameObject.SetActive(false);
            }

            foreach (TabIndex key in m_tableIndexList.Keys)
            {
                Transform obj1 = m_TabUITopGrid.transform.FindChild(m_tableIndexList[key]);
                if (obj1 != null)
                {
                    obj1.gameObject.SetActive(true);
                }
            }
        }
    }
	//=======================================
	public void ChangToCopyStory(int missionId)
	{
		if (m_HuoDongControl)
		{
			m_HuoDongControl.ChangeTab("Button2-JuQing");
		}
	}

    void CloseWorldBossBonusInfo(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnOpenWorldBossBonusInfo()
    {
        NGUITools.SetActive(m_WolrdBossInfo, true);
    }

    void DoTelePortWorldBoss()
    {
        Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(m_WorldBossSceneID, 0);
        if (null == tabSceneClass)
        {
            return;
        }
        SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.WORLDMAP, 0, m_WorldBossSceneID, 0);
        UIManager.CloseUI(UIInfo.Activity);
    }

	void HuodongRedPoint()
	{
		bool bHaveUngotAwardCJG = GameManager.gameManager.PlayerDataPool.CommonData.IsHaveCanGotRewardCangjingge(0);
		if( bHaveUngotAwardCJG )
		{
			m_HuodongRedPoint_TopTab.SetActive(true);
			m_HuodongRedPoint_LeftTab.SetActive(true);
		}
		else
		{
			m_HuodongRedPoint_TopTab.SetActive(false);
			m_HuodongRedPoint_LeftTab.SetActive(false);
		}
	}

	void OnUpdateCangjinggeAward()
	{
		HuodongRedPoint();
	}

}
