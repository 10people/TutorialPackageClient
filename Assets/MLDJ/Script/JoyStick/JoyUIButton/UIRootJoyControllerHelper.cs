using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Module.Log;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif


public class UIRootJoyControllerHelper : MonoBehaviour {
#if BOBJOYSTICK

    public enum JoyUIState
    {
        //用来表示界面的状态
        HIDE = 0,
        NONE,//空白状态，用来中转到Hide状态
        ROOT_UI,//在根界面上

        ROLECREATE_UI,//创建人物界面

        //主UI上
        FTCHARGE_UI,//首冲
        VIP_UI,//VIP
        ACTIVITY_UI,//活动界面  
        SHOP_UI,//商城
        FESTIVAL_UI,//节日
        PK_UI,//PK
        MONEYTREE_UI,//摇钱树
        CHOUJIANG_UI,//抽奖
        LINGJIANG_UI,//领奖

        RECHARGE_UI,//充值


        //menubar上UI
        MENU_BAR_UI, //主界面

        //左
        PARTNER_UI,//伙伴界面
        //美人
        BELLE_UI,//美人界面
        BELLE_TAB_UI,//美人标签

        //一
        SOCIAL_UI,//社交
        MISSION_UI,//任务界面
        MISSION_DETAIL_UI,
        JISHOU_UI,//寄售
        GRUGSHOP_UI,//药店

        //二
        //制造
        MAKE_UI,
        MAKE_TAB_UI,
        //酒楼
        BOITE_UI,
        BANGHUI_UI,//帮会
        //乾坤袋用的是背包的UI

        //三
        //排行榜
        RANK_TAB_UI,//排行榜标签
        RANK_INFO_UI,//排行榜信息
        //秘籍
        TIPS_UI,
        SETTING_UI,//设置
        NOTICE_UI,//公告


        //右
        CHAR_UI,//角色界面
        SKILL_UI, //技能界面
        //背包
        BAG_UI,//背包界面
        ITEM_UI,
        EQUIP_UI,
        //强化
        QIANGHUA_UI,//强化
        QIANGHUA_UI_STAR,


        FUNC_UI,//功能界面


        DAILYMISSION_UI, //日常任务界面
        
        
        ZIPAI_UI, //字牌
        GAMEWIN_UI, //通关奖励
        JOYSTICKTIPINFO_UI
        

        

        

        

        

        

        
    }
    public JoyUIState m_state;



    //用来操作界面的JoyDraggablePanel
    public JoyDraggablePanel m_JoyDraggablePanel;


    #region 常见的UIRoot
    private Transform m_TransUIRoot;
    public Transform TransUIRoot
    {
        get
        {
            if (m_TransUIRoot == null)
            {
                m_TransUIRoot = GameObject.Find("UI Root").transform;
            }
            return m_TransUIRoot;
        }
    }

    private Transform m_TransMenuBarRoot;
    public Transform TransMenuBarRoot
    {
        get {
            if (m_TransMenuBarRoot == null)
            {
                m_TransMenuBarRoot = JoyControllerLogic.FindChild(TransUIRoot,"MenuBarRoot(Clone)");
            }
            return m_TransMenuBarRoot; 
        }
    }

    private Transform m_TransMissionRoot;
    public Transform TransMissionRoot
    {
        get
        {
            if (m_TransMissionRoot == null)
            {
                m_TransMissionRoot = GameObject.Find("MissionDialogAndLeftTabsRoot(Clone)").transform;
            }
            return m_TransMissionRoot;
        }
    }

    private Transform m_TransFunctionRoot;
    public Transform FunctionRoot
    {
        get
        {
            if (m_TransFunctionRoot == null)
            {
                m_TransFunctionRoot = GameObject.Find("FunctionButtonRoot(Clone)").transform;
            }
            return m_TransFunctionRoot;
        }
    }

    private Transform m_TransActController;
    public  Transform TransActController
    {
        get {
            if (m_TransActController == null)
            {
                m_TransActController = GameObject.Find("ActivityController(Clone)").transform;
            }
            return m_TransActController;
        }
    }

    private Transform m_TransBackPackRoot;
    public Transform TransBackPackRoot
    {
        get
        {
            if (m_TransBackPackRoot == null)
            {
                m_TransBackPackRoot = JoyControllerLogic.FindChild(TransUIRoot, "BackPackRoot(Clone)");
            }
            return m_TransBackPackRoot;
        }
    }

    private Transform m_TransQianghuaRoot;
    public Transform TransQianghuaRoot
    {
        get
        {
            if (m_TransQianghuaRoot == null)
            {
                m_TransQianghuaRoot = GameObject.Find("EquipStrengthenRoot(Clone)").transform;
            }
            return m_TransQianghuaRoot;
        }
    }

    private Transform m_TransStoryDialog;
    public Transform TransStoryDialog
    {
        get 
        {
            if (m_TransStoryDialog == null)
            {
                m_TransStoryDialog = JoyControllerLogic.FindChild(TransUIRoot, "StoryDialogRoot(Clone)");
            }
            return m_TransStoryDialog; 
        }
    }

    private Transform m_TransItemTooltipsRoot;
    public Transform TransItemTooltipsRoot
    {
        get
        {
            if (m_TransItemTooltipsRoot == null)
            {
                GameObject obj = GameObject.Find("ItemTooltipsRoot(Clone)");
                if(obj == null){
                    return null;
                }
                m_TransItemTooltipsRoot = obj.transform;

            }
            return m_TransItemTooltipsRoot;
        }
    }

    private Transform m_TransEquipTooltipsRoot;
    public Transform TransEquipTooltipsRoot
    {
        get
        {
            if (m_TransEquipTooltipsRoot == null)
            {
                GameObject obj = GameObject.Find("EquipTooltipsRoot(Clone)");
                if(obj == null){
                    return null;
                }
                m_TransEquipTooltipsRoot = obj.transform;
            }
            return m_TransEquipTooltipsRoot;
        }
    }

    private Transform m_TransSkillRoot;
    public Transform TransSkillRoot
    {
        get
        {
            if (m_TransSkillRoot == null)
            {
                if (SkillRootLogic.Instance() != null)
                {
                    m_TransSkillRoot = SkillRootLogic.Instance().transform;
                }
            }
            return m_TransSkillRoot;
        }
    }

	private Transform m_TransBelleRoot;
	public Transform TransBelleRoot
	{
		get
		{
			if (m_TransBelleRoot == null)
			{
				GameObject obj = GameObject.Find("BelleController(Clone)");
				if(obj == null){
					return null;
				}
				m_TransBelleRoot = obj.transform;
			}
			return m_TransBelleRoot;
		}
	}

    private Transform m_TransMakeRoot;
    public Transform TransMakeRoot
    {
        get
        {
            if (m_TransMakeRoot == null)
            {
                GameObject obj = GameObject.Find("Liveskill(Clone)");
                if (obj == null)
                {
                    return null;
                }
                m_TransMakeRoot = obj.transform;
            }
            return m_TransMakeRoot;
        }
    }

    private Transform m_TransBoiteRoot;
    public Transform TransBoiteRoot
    {
        get
        { 
            if (m_TransBoiteRoot == null) {
                GameObject obj = GameObject.Find("Restaurant(Clone)");
                if (obj == null)
                {
                    return null;
                }
                m_TransBoiteRoot = obj.transform;
            }
            return m_TransBoiteRoot;
        }
    }

    private Transform m_TransTipsRoot;
    public Transform TransTipsRoot
    {
        get
        {
            if (m_TransTipsRoot == null) 
            {
                GameObject obj = GameObject.Find("BiographyController(Clone)");
                if (obj == null) 
                {
                    return null;
                }
                m_TransTipsRoot = obj.transform;
            }
            return m_TransTipsRoot;
        }
    }

    private Transform m_TransQiankunRoot;
    public Transform TransQiankunRoot
    {
        get
        {
            if (m_TransQiankunRoot == null)
            {
                GameObject obj = GameObject.Find("BackPackRoot(Clone)");
                if (obj == null)
                {
                    return null;
                }
                m_TransQiankunRoot = obj.transform;
            }
            return m_TransQiankunRoot;
        }
    }

    private Transform m_TransZipaiRoot;
    public Transform TransZipaiRoot
    {
        get 
        {
            if (m_TransZipaiRoot == null)
            {
                if (ZiPaiLogic.Instance() != null)
                {
                    m_TransZipaiRoot = ZiPaiLogic.Instance().transform;
                }
            }
            return m_TransZipaiRoot; 
        }
    }

    private Transform m_TransGameWinRoot;
    public Transform TransGameWinRoot
    {
        get 
        {
            if (m_TransGameWinRoot == null)
            {
                if (VictoryScoreRoot.Instance() != null)
                {
                    m_TransGameWinRoot = VictoryScoreRoot.Instance().LotteryWindow.transform;
                }
            }
            return m_TransGameWinRoot;
        }
    }

    private Transform m_TransPartnerRoot;
    public Transform TransPartnerRoot
    {
        get 
        {
            if (m_TransPartnerRoot == null)
            {
                if (PartnerFrameLogic.Instance() != null)
                {
                    m_TransPartnerRoot = PartnerFrameLogic.Instance().transform;
                }
            }
            return m_TransPartnerRoot; 
        }
    }

    private Transform m_TransRankRoot;
    public Transform TransRankRoot
    {
        get
        {
            if (m_TransRankRoot == null)
            {
                if (RankWindow.Instance() != null)
                {
                    m_TransRankRoot = RankWindow.Instance().transform;
                }
            }
            return m_TransRankRoot;
        }
    }

    private Transform m_TransRechargeBar;
    public Transform TransRechargeBar
    {
        get
        {
            if (RechargeBarLogic.Instance() != null)
            {
                m_TransRechargeBar = RechargeBarLogic.Instance().transform;
            }
            return m_TransRechargeBar;
        }
    }

    private Transform m_TransFunctionButtonRoot;
    public Transform TransFunctionButtonRoot
    {
        get
        {
            if (FunctionButtonLogic.Instance() != null)
            {
                m_TransFunctionButtonRoot = FunctionButtonLogic.Instance().transform;
            }
            return m_TransFunctionButtonRoot;
        }
    }

    private Transform m_TransJishouRoot;
    public Transform TransJihouRoot
    {
        get
        {
            if (ConsignSaleLogic.Instance() != null)
            {
                m_TransJishouRoot = ConsignSaleLogic.Instance().transform;
            }
            return m_TransJishouRoot;
        }
    }
    #endregion 常见的UIRoot


    private static UIRootJoyControllerHelper s_instance;
    public static UIRootJoyControllerHelper Instance
    {
        get
        {
            return s_instance;
        }
    }
    void Awake()
    {
        s_instance = this;
        DontDestroyOnLoad(gameObject);
    }

	
	// Update is called once per frame
	void Update () {

        if (JoyControllerLogic.storyDialogOn)
        {
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
            {
                StoryDialogLogic.Instance().SendMessage("ShowNextStory", SendMessageOptions.DontRequireReceiver);
            }
            return;
        }
        if (m_state != JoyUIState.GAMEWIN_UI)
        {
            if (VictoryScoreRoot.Instance() != null)
            {
                if (VictoryScoreRoot.Instance().LotteryWindow.gameObject.activeSelf == true)
                {
                    setState(JoyUIState.GAMEWIN_UI);
                    m_bGameWinInited = false;
                    m_bGameContinue = false;
                }
            }
        }
        switch (m_state)
        {
            case JoyUIState.NONE:
                {
                    NoneUpdate();
                    break;
                }
            case JoyUIState.HIDE:
                {
                    HideUpdate();
                    break;
                }
            case JoyUIState.ACTIVITY_UI:
                {
                    ActivityUpdate();
                    break;
                }
            case JoyUIState.FTCHARGE_UI:
                {
                    FirstTimeChargeUpdate();
                    break;
                }
            case JoyUIState.VIP_UI:
                {
                    VipUpdate();
                    break;
                }
            case JoyUIState.SHOP_UI:
                {
                    ShopUpdate();
                    break;
                }
            case JoyUIState.FESTIVAL_UI:
                {
                    FestivalUpdate();
                    break;
                }
            case JoyUIState.PK_UI:
                {
                    PKUpdate();
                    break;
                }
            case JoyUIState.MONEYTREE_UI:
                {
                    MoneyTreeUpdate();
                    break;
                }
            case JoyUIState.CHOUJIANG_UI:
                {
                    ChouJiangUpdate();
                    break;
                }
            case JoyUIState.LINGJIANG_UI:
                {
                    LingJiangUpdate();
                    break;
                }
            case JoyUIState.SOCIAL_UI:
                {
                    SocialUpdate();
                    break;
                }
            case JoyUIState.MISSION_UI:
                {
                    MissionUpdate();
                    break;
                }
            case JoyUIState.MISSION_DETAIL_UI:
                {
                    MissionDetailUpdate();
                    break;
                }
            case JoyUIState.JISHOU_UI:
                {
                    JishouUpdate();
                    break;
                }
            case JoyUIState.GRUGSHOP_UI:
                {
                    GrugShopUpdate();
                    break;
                }
            case JoyUIState.BANGHUI_UI:
                {
                    BanghuiUpdate();
                    break;
                }
            case JoyUIState.SETTING_UI:
                {
                    SettingUpdate();
                    break;
                }
            case JoyUIState.NOTICE_UI:
                {
                    NoticeUpdate();
                    break;
                }
            case JoyUIState.CHAR_UI:
                {
                    CharUpdate();
                    break;
                }
            case JoyUIState.BAG_UI:
                {
                    BagUpdate();
                    break;
                }
            case JoyUIState.ITEM_UI:
                {
                    ItemUpdate();
                    break;
                }
            case JoyUIState.EQUIP_UI:
                {
                    EquipUpdate();
                    break;
                }
            case JoyUIState.QIANGHUA_UI:
                {
                    QHUpdate();
                    break;
                }
            case JoyUIState.QIANGHUA_UI_STAR:
                {
                    m_bQHInited = false;
                    break;
                }
            case JoyUIState.DAILYMISSION_UI:
                {
                    DailyMissionUpdate();
                    break;
                }
            case JoyUIState.SKILL_UI:
                {
                    SkillUpdate();
                    break;
                }
            case JoyUIState.ZIPAI_UI:
                {
                    ZipaiUpdate();
                    break;
                }
            case JoyUIState.GAMEWIN_UI:
                {
                    GameWinUpdate();
                    break;
                }
            case JoyUIState.PARTNER_UI:
                {
                    PartnerUpdate();
                    break;
                }
            case JoyUIState.ROLECREATE_UI:
                {
                    RoleCreateUpdate();
                    break;
                }
            case JoyUIState.BELLE_UI:
                {
                    BelleUpdate();
                    break;
                }
            case JoyUIState.BELLE_TAB_UI:
                {
                    BelleTabUpdate();
                    break;
                }
            case JoyUIState.MAKE_UI:
                {
                    MakeUpdate();
                    break;
                }
            case JoyUIState.MAKE_TAB_UI:
                {
                    //如果是制造界面切标签，重新刷新一遍drag数据
                    setState(JoyUIState.MAKE_UI);
                    m_bmakeInited = false;
                    break;
                }
            case JoyUIState.BOITE_UI:
                {
                    BoiteUpdate();
                    break;
                }
            case JoyUIState.TIPS_UI:
                {
                    TipsUpdate();
                    break;
                }
            case JoyUIState.RANK_TAB_UI: 
                {
                    RankTabUpdate();
                    break;
                }
            //case JoyUIState.RANK_INFO_UI:
            //    {
            //        RankInfoUpdate();
            //        break;
            //    }
            case JoyUIState.MENU_BAR_UI:
                {
                    MenuBarUpdate();
                    break;
                }
            case JoyUIState.RECHARGE_UI:
                {
                    RechargeUpdate();
                    break;
                }
            case JoyUIState.JOYSTICKTIPINFO_UI:
                {
                    break;
                }
        }
	}

    #region NONE
    int NoneTimer = 0;
    void NoneUpdate()
    {
        NoneTimer++;
        if (NoneTimer % 10 == 0)
        {
            NoneTimer = 0;
            setState(JoyUIState.HIDE);
        }
    }
    #endregion
    #region Hide
    void HideUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKey(JoyControllerLogic.BTN_L2))
        {
            GotoMissionState();

        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_L1))
        {
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
                setState(JoyUIState.MENU_BAR_UI);
            }
        }
    }

    public void GotoMissionState()
    {
        setState(JoyUIState.MISSION_UI);
        AttachMissionToJoy();
    }
    #endregion

    #region Char
    void CharactorClicked()
    {
        UIManager.ShowUI(UIInfo.RoleView);
        setState(JoyUIState.CHAR_UI);
    }
    void CharUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.RoleView);
            setState(JoyUIState.MENU_BAR_UI);
        }
    }
    #endregion
    #region Activity
    private static readonly int DRAGPANEL_ENABLE_STATE_LEFT = 1;
    private static readonly int DRAGPANEL_ENABLE_STATE_SUB = 2;
    public enum ActivitySubState
    {
        ACT_UI_RICHANG,         //日常任务
        ACT_UI_JIANGHU,         //江湖名人录
        ACT_UI_JUXIANZZHUANG,   //聚贤庄
        ACT_UI_CANGJINGGE,      //藏经阁
        ACT_UI_YANZIWU,         //燕子坞
        ACT_UI_ZHENLONG,        //珍珑棋局
        ACT_UI_SIDAEREN,        //四大恶人
        ACT_UI_YANWANGGUMU,     //燕王古墓
        ACT_UI_NUHAICHUJIAN,    //怒海锄奸
        ACT_UI_SHAOSHISHAN,     //少室山
        ACT_UI_HUASHANLUNJIAN,  //华山论剑
        ACT_UI_YANMENGUAN,      //守卫雁门关
        ACT_UI_TIANJIANGQIZHEN, //天降奇珍
        ACT_UI_BANGZHAN,        //帮战
        ACT_UI_SHIJIEBOSS,      //世界boss
        ACT_UI_WULINDAHUI,      //武林大会
        ACT_UI_CISHUHUIGOU,     //次数回购
    }
    public ActivitySubState ACT_SUBSTAT = ActivitySubState.ACT_UI_RICHANG;
    bool m_ActivitiesInited = false; //退出状态后即置为false
    bool m_ActivitiesSubInited = false;//二级菜单初始化
    bool m_bIsLeft = true;
    Engine.JoyUI.NewJoyUIDraggablePanel leftDragPanel = null;
    Engine.JoyUI.NewJoyUIDraggablePanel subDraggeblePanel = null;
    void OnActDragPanelChange(int state)
    {
        if (state == DRAGPANEL_ENABLE_STATE_LEFT)
        {
            m_bIsLeft = true;

            //if (leftDragPanel != null) { leftDragPanel.enabled = true; leftDragPanel.Refresh(); }
            //if(subDraggeblePanel!=null){subDraggeblePanel.enabled = false;}

            

            ACT_JIANGHU_SUBSTATE = ActJianghuSubState.ACT_JIANGHU_NONE;
            ACT_RICHANG_SUBSTATE = ActRichangSubState.ACT_RICHANG_NONE;
            m_ActivitiesSubInited = false;
        }
        else if (state == DRAGPANEL_ENABLE_STATE_SUB)
        {
            m_bIsLeft = false;

            //if(leftDragPanel!=null){leftDragPanel.enabled = false;}
            //if (subDraggeblePanel != null) { subDraggeblePanel.enabled = true; subDraggeblePanel.Refresh(); }
        }
        UpdateForce();
    }

    void UpdateForce()
    {
        if (m_bIsLeft)
        {
            if (leftDragPanel != null) { leftDragPanel.enabled = true; leftDragPanel.Refresh(); }
            if (subDraggeblePanel != null) { subDraggeblePanel.enabled = false; }
        }
        else
        {
            if (leftDragPanel != null) { leftDragPanel.enabled = false; }
            if (subDraggeblePanel != null) { subDraggeblePanel.enabled = true; }
        }
    }

    void OnActivityTabChanged(GameObject current)
    {
        MouseSimulator.Instance.SetMousePos(current.transform.position);
    }

    void OnActSubLeftClicked(GameObject cur)
    {
        OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_LEFT);
    }
    void OnActRightClicked(GameObject current)
    {
        if (current == null)
        {
            return;
        }
        current.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
        if (current.name == "Tab1")
        {
            LogModule.DebugLog("日常任务");
            //设置左边drag状态为非激活
            OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_SUB);
            ACT_SUBSTAT = ActivitySubState.ACT_UI_RICHANG;
            ACT_RICHANG_SUBSTATE = ActRichangSubState.ACT_RICHANG_RICHANG;
            m_ActivitiesSubInited = false;
            //List<GameObject> items = asdfasdf();
            //Engine.JoyUI.JoyUIConnector.Instance.ClearGUIItems()();
            //Engine.JoyUI.JoyUIConnector.Instance.AddGUIItems(items);//将需要匹配的按钮收集起来传给JoyUIConnector
            //Engine.JoyUI.JoyUIConnector.Instance.RebuildGUISet();//生成按钮的左右关系
        }
        if (current.name == "Tab2")
        {
            LogModule.DebugLog("江湖名人录");
            //设置左边drag状态为非激活
            if (JoyControllerLogic.FindChild(ActivityController.Instance().transform, "OpList").GetChild(0).childCount > 0)
            {
                OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_SUB);
                ACT_SUBSTAT = ActivitySubState.ACT_UI_JIANGHU;
                ACT_JIANGHU_SUBSTATE = ActJianghuSubState.ACT_JIANGHU_PIPEI;
                m_ActivitiesSubInited = false;
            }
        }

        if (current.name == "Tab3")
        {
            LogModule.DebugLog("聚贤庄");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_JUXIANZZHUANG;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab5")
        {
            LogModule.DebugLog("藏经阁");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_CANGJINGGE;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab6")
        {
            LogModule.DebugLog("燕子坞");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_YANZIWU;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab7")
        {
            LogModule.DebugLog("珍珑棋局");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_ZHENLONG;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab15")
        {
            LogModule.DebugLog("四大恶人");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_SIDAEREN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab8")
        {
            LogModule.DebugLog("燕王古墓");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_YANWANGGUMU;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab13")
        {
            LogModule.DebugLog("怒海锄奸");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_NUHAICHUJIAN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab10")
        {
            LogModule.DebugLog("少室山");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_SHAOSHISHAN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab4")
        {
            LogModule.DebugLog("华山论剑");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_HUASHANLUNJIAN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab16")
        {
            LogModule.DebugLog("守卫雁门关");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_YANMENGUAN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab9")
        {
            LogModule.DebugLog("天降奇珍");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_TIANJIANGQIZHEN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab11")
        {
            LogModule.DebugLog("帮战");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_BANGZHAN;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab12")
        {
            LogModule.DebugLog("世界boss");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_SHIJIEBOSS;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab14")
        {
            LogModule.DebugLog("武林大会");
            ACT_SUBSTAT = ActivitySubState.ACT_UI_WULINDAHUI;
            m_ActivitiesSubInited = false;
        }

        if (current.name == "Tab17")
        {//ReBuy
            LogModule.DebugLog("次数回购");
            //设置左边drag状态为非激活
            OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_SUB);
            ACT_SUBSTAT = ActivitySubState.ACT_UI_CISHUHUIGOU;
            m_ActivitiesSubInited = false;
        }
    }
    void ActivityUpdate()
    {
        if (m_ActivitiesInited == false)
        {
            m_ActivitiesInited = true;
            leftDragPanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(ActivityController.Instance().m_TabController.gameObject);
            leftDragPanel.OnChangeFinished += OnActivityTabChanged;
            leftDragPanel.OnRightClicked += OnActRightClicked;
            OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_LEFT);

        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            m_ActivitiesInited = false;
            //leftDragPanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(ActivityController.Instance().m_TabController.gameObject);
            leftDragPanel.OnChangeFinished -= OnActivityTabChanged;
            leftDragPanel.OnRightClicked -= OnActRightClicked;
            setState(JoyUIState.NONE);
            ClickButtonByName(ActivityController.Instance().transform, "CloseButton");

        }

        if (!m_bIsLeft)
        {
            switch (ACT_SUBSTAT)
            {
                case ActivitySubState.ACT_UI_RICHANG:
                    {
                        ActRiChangUpdate();
                        break;
                    }
                case ActivitySubState.ACT_UI_JIANGHU:
                    {
                        ActJianghuUpdate();
                        break;
                    }
                case ActivitySubState.ACT_UI_CISHUHUIGOU:
                    {
                        ActRebuyUpdate();
                        break;
                    }
            }
        }

    }

    public enum ActRichangSubState
    {
        ACT_RICHANG_NONE,
        ACT_RICHANG_RICHANG,
        ACT_RICHANG_HUOYUE,
        ACT_RICHANG_WEEK
    }
    public ActRichangSubState ACT_RICHANG_SUBSTATE = ActRichangSubState.ACT_RICHANG_NONE;

    private ActRichangSubState lastActRichangSubState = ActRichangSubState.ACT_RICHANG_NONE;
    void ActRiChangUpdate()
    {
        if (lastActRichangSubState != ACT_RICHANG_SUBSTATE )
        {
            m_ActivitiesSubInited = false;
        }
        if (!m_ActivitiesSubInited) {
            switch (ACT_RICHANG_SUBSTATE)
            {
                case ActRichangSubState.ACT_RICHANG_NONE:
                    {
                        //OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_LEFT);
                        lastActRichangSubState = ActRichangSubState.ACT_RICHANG_NONE;
                        break;
                    }
                case ActRichangSubState.ACT_RICHANG_RICHANG:
                    {
                        //TODO 初始化日常grid
                        subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "List-DailyMissionItem").gameObject);
                        subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
                        subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
                        m_ActivitiesSubInited = true;
                        lastActRichangSubState = ActRichangSubState.ACT_RICHANG_RICHANG;
                        break;
                    }
                case ActRichangSubState.ACT_RICHANG_HUOYUE:
                    {
                        //TODO 初始化活跃grid
                        subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "PanelView").gameObject);
                        subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
                        subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
                        m_ActivitiesSubInited = true;
                        lastActRichangSubState = ActRichangSubState.ACT_RICHANG_HUOYUE;
                        break;
                    }
            }
            UpdateForce();

            //给ACT_RICHANG_WEEK 添加左事件
            if (JoyControllerLogic.DPad_leftDown)
            {
                OnActDragPanelChange(DRAGPANEL_ENABLE_STATE_LEFT);
            }
        }

        //这方法不行，会导致状态混乱
        //if (JoyControllerLogic.FindChild(ActivityController.Instance().transform, "DailyMissionWindow").gameObject.activeInHierarchy)
        //{
        //    ACT_RICHANG_SUBSTATE = ActRichangSubState.ACT_RICHANG_RICHANG;
        //}
        //else if (JoyControllerLogic.FindChild(ActivityController.Instance().transform, "ActiveAwardWindow").gameObject.activeInHierarchy)
        //{
        //    ACT_RICHANG_SUBSTATE = ActRichangSubState.ACT_RICHANG_HUOYUE;
        //}
        //else if (JoyControllerLogic.FindChild(ActivityController.Instance().transform, "WeekdayActivityWindow").gameObject.activeInHierarchy)
        //{
        //    //不用刷新所以不管
        //}
        
    }

    public enum ActJianghuSubState
    {
        ACT_JIANGHU_NONE,       //未激活
        ACT_JIANGHU_PIPEI,      //匹配对手
        ACT_JIANGHU_MINGRENLU,  //名人录
        ACT_JIANGHU_JILU        //挑战记录
    }
    public ActJianghuSubState ACT_JIANGHU_SUBSTATE = ActJianghuSubState.ACT_JIANGHU_NONE;

    void ActJianghuUpdate()
    {
        if (!m_ActivitiesSubInited)
        {
            switch (ACT_JIANGHU_SUBSTATE)
            {
                case ActJianghuSubState.ACT_JIANGHU_NONE:
                    {

                        break;
                    }
                case ActJianghuSubState.ACT_JIANGHU_PIPEI:
                    {
                        
                        if (JoyControllerLogic.FindChild(ActivityController.Instance().transform, "OpList").GetChild(0).childCount > 0)
                        {
                            subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "OpList").gameObject);
                            subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
                            subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
                            m_ActivitiesSubInited = true;
                        }
                        break;
                    }
                case ActJianghuSubState.ACT_JIANGHU_MINGRENLU:
                    {
                        subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "MemberList").gameObject);
                        subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
                        subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
                        m_ActivitiesSubInited = true;
                        break;
                    }
                case ActJianghuSubState.ACT_JIANGHU_JILU:
                    {
                        subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "RecordList").gameObject);
                        subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
                        subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
                        m_ActivitiesSubInited = true;
                        break;
                    }

            }
            UpdateForce();
        }
    }

    void ActRebuyUpdate()
    {
        if (!m_ActivitiesSubInited)
        {
            subDraggeblePanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(ActivityController.Instance().transform, "ReBuy").gameObject);
            subDraggeblePanel.OnChangeFinished += OnActivityTabChanged;
            subDraggeblePanel.OnLeftClicked += OnActSubLeftClicked;
            m_ActivitiesSubInited = true;

            UpdateForce();
        }
        
    }
    //void ActivityUpdate()
    //{
    //    if (m_ActivitiesInited == false)
    //    {
    //        m_ActivitiesInited = AttachActivityToJoy();
    //        return;
    //    }

    //    if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
    //    {
    //        if (ClickButtonByName(TransActController, "CloseButton"))
    //        {
    //            setState(JoyUIState.NONE);
    //            m_ActivitiesInited = false;
    //        }
    //    }
    //}
    //void ActivityClicked()
    //{
    //    LogModule.DebugLog("Activity");
    //    if (!ClickButtonByName(FunctionRoot, "ButtonAct"))
    //    {
    //        return;
    //    }
    //    setState(JoyUIState.ACTIVITY_UI);
    //}
    //bool m_ActivitiesInited = false; //退出状态后即置为false
    //bool activityInitPosInited = false;
    //Vector3 activityInitPos;
    //void OnActivityInitItemList(Transform transGrid) {
    //    if (transGrid == null || transGrid.childCount < 13)
    //    {
    //        return;
    //    }
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab1").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab2").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab3").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab5").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab6").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab7").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab8").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab13").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab10").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab4").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab9").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab11").gameObject);
    //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, "Tab12").gameObject);

    //    if (activityInitPosInited == false)
    //    {
    //        activityInitPos = m_JoyDraggablePanel.initPos;
    //        activityInitPosInited = true;
    //    }
    //    else
    //    {
    //        m_JoyDraggablePanel.initPos = activityInitPos;
    //    }
    //    OnActivitySeletcChanged(null, m_JoyDraggablePanel.m_CurrentItem);
    //}
    //void OnActivitySeletcChanged(GameObject last, GameObject current) 
    //{
    //    current.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    //}
    //void OnActivityITemClicked(GameObject item) {
    //    if (item.name == "Tab1")
    //    {
    //        setState(JoyUIState.DAILYMISSION_UI);
    //        m_ActivitiesInited = false;
    //    }
    //    else if (item.name == "Tab2")
    //    {//江湖名人录
    //        GameObject.FindObjectOfType<PVPFindOpWindow>().gameObject.SendMessage("OnFightClick", SendMessageOptions.DontRequireReceiver);
    //        if (ClickButtonByName(TransActController, "CloseButton"))
    //        {
    //            m_ActivitiesInited = false;
    //            setState(JoyUIState.NONE);
    //            transform.GetChild(0).gameObject.SetActive(false);
    //        }
    //    }
    //    else if (item.name == "Tab3" || item.name == "Tab6" || item.name == "Tab7"
    //        || item.name == "Tab8" || item.name == "Tab10" || item.name == "Tab13")
    //    {//珍珑棋局 聚贤庄 燕子坞 燕王古墓 怒海锄奸 少室山
    //        if (DungeonWindow.Instance() != null)
    //        {
    //            DungeonWindow.Instance().m_BtnEnter.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    //        } 
    //        if (ClickButtonByName(TransActController, "CloseButton"))
    //        {
    //            m_ActivitiesInited = false;
    //            setState(JoyUIState.NONE);
    //            transform.GetChild(0).gameObject.SetActive(false);
    //        }
    //    }
    //    else if (item.name == "Tab5")
    //    {//藏经阁
    //        if (CangJingGeWindow.Instance() != null)
    //        {
    //            CangJingGeWindow.Instance().m_BtnTiaoZhan.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    //        }
    //        if (ClickButtonByName(TransActController, "CloseButton"))
    //        {
    //            m_ActivitiesInited = false;
    //            setState(JoyUIState.NONE);
    //            transform.GetChild(0).gameObject.SetActive(false);
    //        }
    //    }
    //}
    //bool AttachActivityToJoy()
    //{
    //    if( ActivityController.Instance() == null)
    //    {
    //        return false;
    //    }
    //    Transform activityPanel = ActivityController.Instance().m_TabController.transform;
    //    if (activityPanel == null)
    //    {
    //        return false;
    //    }
    //    AttachPanelToJoy(activityPanel, OnActivityInitItemList, OnActivitySeletcChanged, OnActivityITemClicked);

    //    return true;
    //}
    #endregion
                                                           #region DailyMission

    bool m_dailymissionInited = false;
    void DailyMissionUpdate()
    {
        if (m_dailymissionInited == false)
        {
            m_dailymissionInited = AttachDailyMissionToJoy();
            return;
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            setState(JoyUIState.ACTIVITY_UI);
            m_dailymissionInited = false;
        }

    }

    bool dailymissionInitPosInited = false;
    Vector3 dailymissionInitPos;
    void OnDailyMissionInitItemList(Transform transGrid) {
        if (transGrid == null)
        {
            return;
        }
        for (int i = 0; i < transGrid.childCount; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(transGrid.GetChild(i).gameObject);
        }
        if (dailymissionInitPosInited == false)
        {
            dailymissionInitPos = m_JoyDraggablePanel.initPos;
            dailymissionInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = dailymissionInitPos;
        }
        EnableDailyMissionItemBackground(m_JoyDraggablePanel.m_CurrentItem, false);
    }
    void OnDailyMissionSelectChanged(GameObject last, GameObject current) {
        EnableDailyMissionItemBackground(last, true);
        EnableDailyMissionItemBackground(current, false);
    }
    void OnDailyMissionItemClicked(GameObject item) {
        ClickButtonByName(item.transform, "Button-Opt");
    }
    void EnableDailyMissionItemBackground(GameObject item, bool enable = true)
    {
        Transform background = JoyControllerLogic.FindChild(item.transform, "BackGround");
        if (background != null)
        {
            background.gameObject.SetActive(enable);
        }        
    }
    bool AttachDailyMissionToJoy()
    {
        if (ActivityController.Instance() == null)
        {
            return false;
        }
        DailyMissionWindow dmw = ActivityController.Instance().m_DailyMissionActiveWindow.m_DailyMissionWindow;
        if (dmw == null)
        {
            return false;
        }
        Transform dailymissionpanel = JoyControllerLogic.FindChild(dmw.transform, "List-DailyMissionItem");
        if (dailymissionpanel == null)
        {
            return false;
        }
        AttachPanelToJoy(dailymissionpanel, OnDailyMissionInitItemList, 
            OnDailyMissionSelectChanged, OnDailyMissionItemClicked);
        //m_JoyDraggablePanel.Reset();
        //m_JoyDraggablePanel.m_draggablePanel = dailymissionpanel.gameObject;
        //m_JoyDraggablePanel.delInitItemList = OnDailyMissionInitItemList;
        //m_JoyDraggablePanel.delSelectChanged = OnDailyMissionSelectChanged;
        //m_JoyDraggablePanel.delItemClicked = OnDailyMissionItemClicked;

        return true;
    }
                                                           #endregion
                                                           #region Mission
    //开启或关闭显示效果
    void EnableMissionEffectSprite(GameObject item, bool enable = true)
    {
        Transform currenteffect = JoyControllerLogic.FindChild(item.transform, "EffectSprite");
        currenteffect.gameObject.SetActive(enable);
        currenteffect.gameObject.GetComponent<TweenScale>().enabled = enable;
    }
    void MissionUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            setState(JoyUIState.NONE);
            transform.GetChild(0).gameObject.SetActive(false);
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyUp(JoyControllerLogic.BTN_L2))
        {
            setState(JoyUIState.NONE);
        }
    }
    void OnMissionInitItemList(Transform transgrid) {
        int missioncount = transgrid.childCount;
        for (int i = 0; i < missioncount; i++)
        {
            Transform missionitem = JoyControllerLogic.FindChild(transgrid, "MissionItem" + i);
            m_JoyDraggablePanel.m_ItemList.Add(missionitem.gameObject);
        }
        if (missionInitPosInited == false)
        {
            missionInitPosInited = true;
            missionInitPos = m_JoyDraggablePanel.initPos;
        }
        else
        {
            m_JoyDraggablePanel.initPos = missionInitPos;
        }
        EnableMissionEffectSprite(m_JoyDraggablePanel.m_CurrentItem);
    }
    void OnMissionSelectChanged(GameObject last, GameObject current)
    {
        EnableMissionEffectSprite(last, false);
        EnableMissionEffectSprite(current, true);
        MouseSimulator.Instance.SetMousePos(current.transform.position);
    }
    void OnMissionItemClicked(GameObject item)
    {
        setState(JoyUIState.NONE);
        transform.GetChild(0).gameObject.SetActive(false);
        item.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);     
    }
    void MissionClicked()
    {
        setState(JoyUIState.MISSION_UI);
        AttachMissionToJoy();
    }
    bool missionInitPosInited = false;
    Vector3 missionInitPos;
    private void AttachMissionToJoy()
    {
        Transform missionpanel = JoyControllerLogic.FindChild(TransMissionRoot, "Content-Mission");
        m_JoyDraggablePanel.Reset();
        m_JoyDraggablePanel.m_draggablePanel = missionpanel.gameObject;
        m_JoyDraggablePanel.delInitItemList = OnMissionInitItemList;
        m_JoyDraggablePanel.delSelectChanged = OnMissionSelectChanged;
        m_JoyDraggablePanel.delItemClicked = OnMissionItemClicked;
    }

                                                           #endregion
                                                           #region Bag
    void OnBagInitItemList(Transform transGrid) {
        if (transGrid == null || transGrid.childCount < 90)
        {
            return;
        }
        int itemcount = 90;
        for (int i = 0; i < itemcount; i++)
        {
          m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, (1000 + i).ToString()).gameObject);
        }

        if (backpackInitPosInited == false)
        {
            backpackInitPos = m_JoyDraggablePanel.initPos;
            backpackInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = backpackInitPos;
        }
        EnableChooseSprite(m_JoyDraggablePanel.m_CurrentItem);
    }
    void OnBagSelectChanged(GameObject last, GameObject current) {
        EnableChooseSprite(last, false);
        EnableChooseSprite(current, true);
    }
    void OnBagItemClicked(GameObject item) {
        item.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);

        Games.Item.GameItem itemAttrib = item.GetComponent<BackPackItemLogic>().m_Item;
        if (itemAttrib.IsEquipMent())
        {
            setState(JoyUIState.EQUIP_UI);
        }
        else
        {
            setState(JoyUIState.ITEM_UI);
        }
        m_bBagInited = false;
    }
    void BagClicked()
    {        
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.MENU_BACKPACK;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchEquipPackView);
        setState(JoyUIState.BAG_UI);
        transform.GetChild(0).gameObject.SetActive(false);
    }
    bool backpackInitPosInited = false;
    Vector3 backpackInitPos;
    bool AttachPanelToJoy(Transform root, string panelname,
        JoyDraggablePanel.OnInitItemList delInitItem,
        JoyDraggablePanel.OnSelectChanged delSelectChange,
        JoyDraggablePanel.OnItemClicked delClick)
    {
        Transform backpakpanel = JoyControllerLogic.FindChild(root, panelname);
        if (backpakpanel == null)
        {
            return false;
        }
        //AttachPanelToJoy(backpakpanel, OnBagInitItemList, OnBagSelectChanged, OnBagItemClicked);
        m_JoyDraggablePanel.Reset();
        m_JoyDraggablePanel.m_draggablePanel = backpakpanel.gameObject;
        m_JoyDraggablePanel.delInitItemList = delInitItem;
        m_JoyDraggablePanel.delSelectChanged = delSelectChange;
        m_JoyDraggablePanel.delItemClicked = delClick;
        return true;
    }

    void AttachPanelToJoy(Transform panel, JoyDraggablePanel.OnInitItemList delInitItem, 
        JoyDraggablePanel.OnSelectChanged delSelectChange, 
        JoyDraggablePanel.OnItemClicked delClick)
    {
        m_JoyDraggablePanel.Reset();
        m_JoyDraggablePanel.m_draggablePanel = panel.gameObject;
        m_JoyDraggablePanel.delInitItemList = delInitItem;
        m_JoyDraggablePanel.delSelectChanged = delSelectChange;
        m_JoyDraggablePanel.delItemClicked = delClick;
    }
    bool m_bBagInited = false;
    void BagUpdate()
    {
        if (m_bBagInited == false)
        {
            m_bBagInited = AttachPanelToJoy(TransBackPackRoot,"Items",
                OnBagInitItemList, OnBagSelectChanged, OnBagItemClicked);
            return;
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            transform.GetChild(0).gameObject.SetActive(false);
            ClickButtonByName(TransBackPackRoot, "CloseButton");
            setState(JoyUIState.NONE);
            m_bBagInited = false;
            LogModule.ErrorLog("bag closebutton");
        }

    }
    void EnableChooseSprite(GameObject item, bool enable = true)
    {
        //Transform chooseSprite = JoyControllerLogic.FindChild(item.transform, "ChooseSprite");
        //chooseSprite.gameObject.SetActive(enable);
    }
                                                           #endregion
                                                           #region Item
    bool itemTooltipInit = false;
    Transform itemCloseButton = null;
    bool InitItemTooltipsUI()
    {
        if (TransItemTooltipsRoot == null)
        {
            return false;
        }
        itemCloseButton = JoyControllerLogic.FindChild(TransItemTooltipsRoot, "CloseButton");
        if (itemCloseButton == null)
        {
            return false;
        }
        return true;
    }
    void ItemUpdate()
    {
        if (itemTooltipInit == false)
        {
            itemTooltipInit = InitItemTooltipsUI();
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            setState(JoyUIState.BAG_UI);           
            itemTooltipInit = false;
            itemCloseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver); 
            itemCloseButton = null;
            LogModule.ErrorLog("item closebutton");
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {
            if (ItemTooltipsLogic.Instance().m_UseButton.gameObject.activeSelf)
            {
                ItemTooltipsLogic.Instance().m_UseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            }
            else
            {
                itemCloseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver); 
            }

            setState(JoyUIState.BAG_UI);
            itemTooltipInit = false;
            itemCloseButton = null;
        }
    }
                                                           #endregion
                                                           #region Equip
    bool equipTooltipInit = false;
    Transform equipCloseButton = null;

    bool InitEquipTooltipsUI()
    {
        if (TransEquipTooltipsRoot == null)
        {
            return false;
        }
        equipCloseButton = JoyControllerLogic.FindChild(TransEquipTooltipsRoot, "CloseButton");
        if (equipCloseButton == null)
        {
            return false;
        }
        return true;
    }
    void EquipUpdate()
    {
        if (equipTooltipInit == false)
        {
            equipTooltipInit = InitEquipTooltipsUI();
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            setState(JoyUIState.BAG_UI);
            equipTooltipInit = false;
            equipCloseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            equipCloseButton = null;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {
            if (EquipTooltipsLogic.Instance().m_EquipUseButton.gameObject.activeSelf)
            {
                EquipTooltipsLogic.Instance().m_EquipUseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            }

            equipCloseButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);          
            setState(JoyUIState.BAG_UI);
            equipTooltipInit = false;
            equipCloseButton = null;
        }
    }
                                                           #endregion
                                                           #region Qianghua
    void OnQHInitItemList(Transform transGrid)
    {
        if (transGrid == null)
        {
            return;
        }
        //int itemcount = 45;
        //for (int i = 0; i < itemcount; i++)
        //{
        //    m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, (1000 + i).ToString()).gameObject);
        //}
        UIGrid _grid = transGrid.GetComponent<UIGrid>();
        if (_grid != null)
        {
            List<Transform> _list = _grid.getList();
            for (int i = 0; i < _list.Count; i++) {
                m_JoyDraggablePanel.m_ItemList.Add(_list[i].gameObject); 
            }
        }
        if (qianghuaInitPosInited == false)
        {
            qianghuaInitPos = m_JoyDraggablePanel.initPos;
            qianghuaInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = qianghuaInitPos;
        }
        EnableChooseSprite(m_JoyDraggablePanel.m_CurrentItem);
    }

    void OnQHSelectChanged(GameObject last, GameObject current)
    {
        EnableQHChooseSprite(last, false);
        EnableQHChooseSprite(current, true);
    }
    void OnQHItemClicked(GameObject item)
    {
        item.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
        Transform chooseSprite = JoyControllerLogic.FindChild(item.transform, "EquipChoosedSprite");
        chooseSprite.gameObject.SetActive(!chooseSprite.gameObject.activeInHierarchy); 
    }
    void QHClicked()
    {
        //切换逻辑
        //UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchEquipPackView);
        //setState(JoyUIState.BAG_UI);
        //transform.GetChild(0).gameObject.SetActive(false);
    }
    bool qianghuaInitPosInited = false;
    Vector3 qianghuaInitPos;
    bool m_bQHInited = false;
    void QHUpdate()
    {
        if (m_bQHInited == false)
        {
            m_bQHInited = AttachPanelToJoy(TransQianghuaRoot, "RightPanel",
                OnQHInitItemList, OnQHSelectChanged, OnQHItemClicked);
            return;
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            transform.GetChild(0).gameObject.SetActive(false);
            ClickButtonByName(TransQianghuaRoot, "CloseButton");
            setState(JoyUIState.NONE);
            m_bQHInited = false;
            LogModule.ErrorLog("Qianghua closebutton");
        }

    }
    void EnableQHChooseSprite(GameObject item, bool enable = true)
    {
        //Transform chooseSprite = JoyControllerLogic.FindChild(item.transform, "EquipChoosedSprite");
        //chooseSprite.gameObject.SetActive(enable);
    }
                                                           #endregion
                                                           #region QianKunAll
    bool m_bQKAllInited = false;
    bool m_bQKAllInitPosInited = false;
    Vector3 m_vQKAllInitPos;

    QiankunTab currTab = QiankunTab.NONE;
    enum QiankunTab
    {
        NONE,
        QIANKUN_UI_ALL,
        QIANKUN_UI_EQUIP,
        QIANKUN_UI_MATERIAL,
        QIANKUN_UI_PARTNER,
        QIANKUN_UI_OTHER
    }
    void checkTab(QiankunTab tab)
    { 
        if (tab != currTab) {
            currTab = tab;
            m_bQKAllInited = false;
        }
    }
    void QKAllUpdate()
    {
        if (m_bQKAllInited == false)
        {
            m_bQKAllInited = AttachPanelToJoy(TransQiankunRoot, "Items", 
                OnQKAllInitItemList, OnQKAllSelectChanged, OnQKAllItemClicked);
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            transform.GetChild(0).gameObject.SetActive(false);
            ClickButtonByName(TransQiankunRoot, "CloseButton");
            setState(JoyUIState.NONE);
            m_bQKAllInited = false;
            LogModule.ErrorLog("qiankun closebutton");
        }

    }

    void OnQKAllInitItemList(Transform transGrid)
    {
        if (transGrid == null || transGrid.childCount < 90)
        {
            return;
        }
        int itemcount = 90;
        for (int i = 0; i < itemcount; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(JoyControllerLogic.FindChild(transGrid, (1000 + i).ToString()).gameObject);
        }
        if (m_bQKAllInitPosInited == false)
        {
            m_vQKAllInitPos = m_JoyDraggablePanel.initPos;
            m_bQKAllInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vQKAllInitPos;
        }
        EnableChooseSprite(m_JoyDraggablePanel.m_CurrentItem);
    }

    void OnQKAllSelectChanged(GameObject last, GameObject current)
    {
        EnableChooseSprite(last, false);
        EnableChooseSprite(current, true);
    }

    void OnQKAllItemClicked(GameObject item)
    {

    }

                                                           #endregion
                                                           #region Skill
    void SkillClicked()
    {
        UIManager.ShowUI(UIInfo.SkillInfo);
        setState(JoyUIState.SKILL_UI);
        transform.GetChild(0).gameObject.SetActive(false);
    }
    bool m_bSkillInitPosInited = false;
    Vector3 m_vSkillInfoInitPos;

    bool m_bSkillInited = false;
    void OnSkillInitItemList(Transform transGrid)
    {
        int gridCount = transGrid.childCount;
        for (int i = 0; i < gridCount; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(transGrid.GetChild(i).gameObject);
        }
        if (m_bSkillInitPosInited == false)
        {
            m_vSkillInfoInitPos = m_JoyDraggablePanel.initPos;
            m_bSkillInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vSkillInfoInitPos;
        }
    }
    void OnSkillSelectChange(GameObject last, GameObject current)
    {
        current.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    }
    void OnSkillItemClick(GameObject item)
    {
        LogModule.ErrorLog("levelup");
        SkillRootLogic.Instance().gameObject.SendMessage("ClickLevelUp", SendMessageOptions.DontRequireReceiver);
    }

    bool AttachSkillToJoy()
    {
        Transform skillbtPanel = JoyControllerLogic.FindChild(TransSkillRoot, "BtPanel");
        if (skillbtPanel == null)
        {
            return false;
        }
        AttachPanelToJoy(skillbtPanel, OnSkillInitItemList, OnSkillSelectChange, OnSkillItemClick);
        return true;
    }
    void SkillUpdate()
    {
        if (m_bSkillInited == false)
        {
            m_bSkillInited = AttachSkillToJoy();
            return;
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.SkillInfo);
            setState(JoyUIState.NONE);
            m_bSkillInited = false;
        }
    }
                                                           #endregion
                                                           #region Zipai
    bool m_bZipaiInitPosInited = false;
    Vector3 m_vZipaiInitPos;

    bool m_bZipaiInited = false;
    void OnZipaiInitItemList(Transform transGrid) {
        for (int i = 0; i < transGrid.childCount; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(transGrid.GetChild(i).gameObject);
        }
        if (m_bZipaiInitPosInited == false)
        {
            m_vZipaiInitPos = m_JoyDraggablePanel.initPos;
            m_bZipaiInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vZipaiInitPos;
        }
    }
    void OnZipaiSelectChange(GameObject last, GameObject current)
    {
        JoyControllerLogic.FindChild(last.transform, "Active").gameObject.SetActive(false);
        JoyControllerLogic.FindChild(current.transform, "Active").gameObject.SetActive(true);
    }
    void OnZipaiITemClick(GameObject item) {
        item.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    }
    bool AttachZipaiToJoy()
    {
        Transform zipaiPanel = TransZipaiRoot;
        if (zipaiPanel == null)
        {
            return false;
        }
        AttachPanelToJoy(zipaiPanel, OnZipaiInitItemList, OnZipaiSelectChange, OnZipaiITemClick);
        return true;
    }
    void ZipaiUpdate()
    {
        if (m_bZipaiInited == false)
        {
            m_bZipaiInited = AttachZipaiToJoy();
            return;
        }

    }
                                                           #endregion
                                                           #region GameWin
    bool m_bGameWinInited = false;//是否初始化
    bool m_bGameContinue = false; //是否可以继续游戏
    int m_lottoryIndex = 0;
    void GameWinUpdate()
    {//只是测试需要，只响应按键A
        if (TransGameWinRoot == null)
        {
            return;
        }
        if (m_bGameWinInited == false)
        {
            m_lottoryIndex = Random.Range(0,3);
            m_bGameWinInited = true;
            return;
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {
            if (m_bGameContinue == true) {
                VictoryScoreRoot.Instance().ContinueGame.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
                setState(JoyUIState.NONE);
                m_bGameWinInited = false;
                m_bGameContinue = false;
            }
            else
            {
                TransGameWinRoot.GetChild(m_lottoryIndex).gameObject.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
                m_bGameContinue = true;
            }
        }
        
    }
                                                           #endregion
                                                           #region Partner
    void PartnerClicked()
    {
        UIManager.ShowUI(UIInfo.PartnerFrameRoot);
        setState(JoyUIState.PARTNER_UI);
        m_bPartnerInited = false;
    }
    bool m_bPartnerInited = false;
    int m_PartnerTabIndex = 0;
    List<GameObject> m_PartnerTabList = new List<GameObject>();
    bool InitPartnerTabList()
    {
        m_PartnerTabList.Clear();
        if (TransPartnerRoot == null)
        {
            return false;
        }
        Transform tabWindowTrans = JoyControllerLogic.FindChild(TransPartnerRoot, "TabButtons");
        if (tabWindowTrans == null)
        {
            return false;
        }
        m_PartnerTabList.Add(JoyControllerLogic.FindChild(tabWindowTrans, "Button1-Info").gameObject);
        m_PartnerTabList.Add(JoyControllerLogic.FindChild(tabWindowTrans, "Button5-Gamble").gameObject);
        m_PartnerTabList.Add(JoyControllerLogic.FindChild(tabWindowTrans, "Button3-Stren").gameObject);
        m_PartnerTabList.Add(JoyControllerLogic.FindChild(tabWindowTrans, "Button4-Skill").gameObject);
        m_PartnerTabList.Add(JoyControllerLogic.FindChild(tabWindowTrans, "Button2-Star").gameObject);
        //Todo:初始化tablist
        return true;
    }
    void PartnerUpdate()
    {
        if (m_bPartnerInited == false)
        {
            m_bPartnerInited = InitPartnerTabList();
            return;
        }
        if (JoyControllerLogic.DPad_leftDown)
        {
            m_PartnerTabIndex--;
            if (m_PartnerTabIndex <= -1)
            {
                m_PartnerTabIndex = m_PartnerTabList.Count - 1;
            }
            m_PartnerTabList[m_PartnerTabIndex].SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
        }
        if (JoyControllerLogic.DPad_rightDown)
        {
            m_PartnerTabIndex++;
            if (m_PartnerTabIndex >= m_PartnerTabList.Count)
            {
                m_PartnerTabIndex = 0;
            }
            m_PartnerTabList[m_PartnerTabIndex].SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {//这里需要添加对其他tab的操作
            if (m_PartnerTabIndex == 0)
            {//伙伴信息
                PartnerFrameLogic_Info.Instance().m_BattleButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
                m_bPartnerInited = false;
                setState(JoyUIState.MENU_BAR_UI);
            }
            if (m_PartnerTabIndex == 1)
            {//伙伴获得
                PartnerFrameLogic.Instance().m_CoinGambleButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            }
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            m_bPartnerInited = false;
            setState(JoyUIState.MENU_BAR_UI);
            PartnerAndMountLogic.Instance().CloseWindow();
        }
    }
                                                           #endregion
                                                           #region RoleCreate
    int m_roleCreateProcess = 0;
    void RoleCreateUpdate()
    {
        LogModule.ErrorLog("process ： " + m_roleCreateProcess);
        if (m_roleCreateProcess == 0)
        {
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
            {
                m_roleCreateProcess++;
            } 
        }
        if (m_roleCreateProcess == 50)
        {
            //几个职业飞起来的界面
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
            {
                m_roleCreateProcess++;
                RoleCreateController.Instance().SendMessage("PlayerCharOnClicked3D","ShaoLin",SendMessageOptions.DontRequireReceiver);
                //m_roleCreateProcess = 120;
            } 
        }
        if ((m_roleCreateProcess > 0 && m_roleCreateProcess < 50) || (m_roleCreateProcess > 50 && m_roleCreateProcess < 120))
        {
            m_roleCreateProcess++;
        }
        if (m_roleCreateProcess == 120)
        {//Profession Detail界面
            if (Engine.OSC.AbstractController.Instance.GetAxis("DHorizontal") > 0.5f)
            {
                RoleCreateController.Instance().SendMessage("OnDrag", new Vector2(-1, 0), SendMessageOptions.DontRequireReceiver);
            }
            if (Engine.OSC.AbstractController.Instance.GetAxis("DHorizontal") < -0.5f)
            {
                RoleCreateController.Instance().SendMessage("OnDrag", new Vector2(1, 0), SendMessageOptions.DontRequireReceiver);
            }
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
            {
                LogModule.ErrorLog("clicking A");
                RoleCreateController.Instance().m_BtnEnterGame.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
                m_roleCreateProcess = 0;
                setState(JoyUIState.NONE);
            }
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
            {
                LogModule.ErrorLog("clicking B");
                RoleCreateController.Instance().SendMessage("OnCloseClick", SendMessageOptions.DontRequireReceiver);
                m_roleCreateProcess = 0;
            }
        }
    }
                                                           #endregion
                                                           #region Belle
    int m_belleProcess;
	bool m_bbelleInitPosInited = false;
	Vector3 m_vbelleInfoInitPos;
	
	bool m_bbelleInited = false;
    void BelleUpdate()
    {
		if (m_bbelleInitPosInited == false)
		{
			m_bbelleInitPosInited = AttachBelleToJoy();
			return;
		}
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
		{
			UIManager.CloseUI(UIInfo.Belle);
			setState(JoyUIState.NONE);
			m_bbelleInitPosInited = false;
		}
    }

	bool AttachBelleToJoy()
	{
		Transform illustrateWindow = JoyControllerLogic.FindChild(TransBelleRoot, "IllustrateWindow");
		Transform bellebtPanel = JoyControllerLogic.FindChild(illustrateWindow, "BelleList");
		if (bellebtPanel == null)
		{
			return false;
		}
		AttachPanelToJoy(bellebtPanel, OnBelleInitItemList, OnBelleSelectChange, OnBelleItemClick);
		return true;

	}

	void OnBelleInitItemList(Transform transGrid)
	{
		int gridCount = transGrid.childCount;
		for (int i = 0; i < gridCount; i++)
		{
			m_JoyDraggablePanel.m_ItemList.Add(transGrid.GetChild(i).gameObject);
		}
		if (m_bbelleInitPosInited == false)
		{
            m_vbelleInfoInitPos = new Vector3(-15, -30, 0);//美人界面初始化后位置有调整，所以在这里做相应的调整
			m_bbelleInitPosInited = true;
		}
		else
		{
            m_JoyDraggablePanel.initPos = new Vector3(-15, -30, 0); 
        }
	}
	void OnBelleSelectChange(GameObject last, GameObject current)
	{
//		current.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
	}
	void OnBelleItemClick(GameObject item)
	{
//		LogModule.ErrorLog("levelup");
//		SkillRootLogic.Instance().gameObject.SendMessage("ClickLevelUp", SendMessageOptions.DontRequireReceiver);
	}

                                                           #endregion
                                                           #region BelleTab
    void BelleTabUpdate()
    {
        setState(JoyUIState.NONE);
        m_bbelleInitPosInited = false;
    }
                                                           #endregion
                                                           #region Make
    bool m_bmakeInitPosInited = false;
    bool m_bstuffInitPosInited = false;
    Vector3 m_vmakeInfoInitPos;
    Vector3 m_vstuffInfoInitPos;

    bool m_bmakeInited = false;
    bool m_bStuffPanelInited = false;
    bool m_bStuffPanelEnabled = false;
    void MakeUpdate()
    {
        if (m_bStuffPanelEnabled)
        {
            m_bmakeInited = false;
            updateStuffPanel();
            
        }
        else
        {
            m_bStuffPanelInited = false;
            updateFormulaPanel();
        }

        
        
    }

    void updateFormulaPanel()
    {
        if (m_bmakeInited == false)
        {
            m_bmakeInited = AttachMakeToJoy();
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.LivingSkill);
            setState(JoyUIState.NONE);
            m_bmakeInited = false;
        }
    }

    void updateStuffPanel()
    {
        if (m_bStuffPanelInited == false)
        {
            m_bStuffPanelInited = AttachMakeStuffToJoy();
        }
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            m_bStuffPanelEnabled = false;
        }
    }

    bool AttachMakeToJoy()
    {
        Transform makebtPanel = JoyControllerLogic.FindChild(TransMakeRoot, "FormulaPanel");
        if (makebtPanel == null)
        {
            return false;
        }
        AttachPanelToJoy(makebtPanel, OnMakeInitItemList, OnMakeSelectChange, OnMakeItemClick);
        return true;

    }

    void OnMakeInitItemList(Transform transGrid)
    {
        //int gridCount = transGrid.childCount;
        //transGrid.GetComponent<UIGrid>().getList();
        //for (int i = 0; i < gridCount; i++)
        //{
        //    m_JoyDraggablePanel.m_ItemList.Add(transGrid.GetChild(i).gameObject);
        //}
        List<Transform> gridItemlist = transGrid.GetComponent<UIGrid>().getList();
        for (int i = 0; i < gridItemlist.Count; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(gridItemlist[i].gameObject);
        }
        if (m_bmakeInitPosInited == false)
        {
            m_vmakeInfoInitPos = m_JoyDraggablePanel.initPos; 
            m_bmakeInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vmakeInfoInitPos;
        }
    }

    void OnMakeStuffInitItemList(Transform transGrid)
    {
        List<Transform> gridItemlist = transGrid.GetComponent<UIGrid>().getList();
        for (int i = 0; i < gridItemlist.Count; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(gridItemlist[i].gameObject);
        }
        if (m_bstuffInitPosInited == false)
        {
            m_vstuffInfoInitPos = m_JoyDraggablePanel.initPos;
            m_bstuffInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vstuffInfoInitPos;
        }
    }

    bool AttachMakeStuffToJoy()
    {
        Transform stuffPanel = JoyControllerLogic.FindChild(TransMakeRoot, "StuffPanel");
        if (stuffPanel == null)
        {
            return false;
        }
        AttachPanelToJoy(stuffPanel, OnMakeStuffInitItemList, OnMakeStuffSelectChange, OnMakeStuffItemClick);
        return true;

    }

    void OnMakeStuffSelectChange(GameObject last, GameObject current)
    { 
    
    }

    void OnMakeStuffItemClick(GameObject item)
    { }



    void OnMakeSelectChange(GameObject last, GameObject current)
    {
        current.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    }
    void OnMakeItemClick(GameObject item)
    {
        m_bStuffPanelEnabled = true;
    }
                                                           #endregion
                                                           #region Boite
    bool m_bBoiteInitPosInited = false;
    Vector3 m_vBoiteInitPos;

    bool m_bBoiteInited = false;
    void BoiteUpdate()
    { 
        if (m_bBoiteInited == false) {
            m_bBoiteInited = AttachBoiteToJoy();
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.Restaurant);
            setState(JoyUIState.NONE);
            m_bBoiteInited = false;
        }
    }

    bool AttachBoiteToJoy()
    {
        Transform boitePanel = JoyControllerLogic.FindChild(TransBoiteRoot, "Desks");
        if (boitePanel == null) 
        {
            return false;
        }
        AttachPanelToJoy(boitePanel, OnBoiteInitItemList, OnBoiteSelectChange, OnBoiteItemClick);
        return true;

    }

    void OnBoiteInitItemList(Transform transGrid)
    {
        List<Transform> gridItemlist = transGrid.GetComponent<UIGrid>().getList();
        for (int i = 0; i < gridItemlist.Count; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(gridItemlist[i].gameObject);
        }
        if (m_bBoiteInitPosInited == false)
        {
            m_vBoiteInitPos = m_JoyDraggablePanel.initPos;
            m_bBoiteInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = m_vBoiteInitPos;
        }
    }

    void OnBoiteSelectChange(GameObject last, GameObject current)
    { 
        
    }

    void OnBoiteItemClick(GameObject item)
    { }

                                                           #endregion
                                                           #region Tips
    bool m_bTipsInitPosInited = false;
    Vector3 m_vTipsInitPos;

    bool m_bTipsInited = false;
    void TipsUpdate()
    { 
        if (m_bTipsInited == false) {
            m_bTipsInited = AttachTipsToJoy();
            return;
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.Biography);
            setState(JoyUIState.NONE);
            m_bTipsInited = false;
        }
    }

    bool AttachTipsToJoy()
    {
        Transform biographyList = JoyControllerLogic.FindChild(TransTipsRoot, "BiographyList");
        if (biographyList == null)
        {
            return false;
        }
        AttachPanelToJoy(biographyList, OnTipsInitItemList, OnTipsSelectChange, OnTipsItemClick);
        return true;
    }

    void OnTipsInitItemList(Transform transGrid)
    {
        List<Transform> gridItemlist = transGrid.GetComponent<UIGrid>().getList();
        for (int i = 0; i < gridItemlist.Count; i++)
        {
            m_JoyDraggablePanel.m_ItemList.Add(gridItemlist[i].gameObject);
        }
        if (m_bTipsInitPosInited == false)
        {
            m_vTipsInitPos = new Vector3(77,-30,0);//m_JoyDraggablePanel.initPos;
            m_bTipsInitPosInited = true;
        }
        else
        {
            m_JoyDraggablePanel.initPos = new Vector3(77, -30, 0);// m_vTipsInitPos;
        }
    }

    void OnTipsSelectChange(GameObject last, GameObject current)
    {

    }

    void OnTipsItemClick(GameObject item)
    { }


                                                           #endregion
                                                           #region RankTab
        //bool m_bRankTabInited = false;
        //void OnRankTabRightClicked(GameObject item)
        //{
        //    m_bRankTabInited = false;
        //    setState(JoyUIState.RANK_INFO_UI);
        //}
        //void OnRankTabSelectedChanged(GameObject current)
        //{
        //    LogModule.DebugLog(current.name);
        //    MouseSimulator.Instance.SetMousePos(current.transform.position);
        //}
	    void RankTabUpdate()
	    {
            //if (m_bRankTabInited == false)
            //{
            //    m_bRankTabInited = true;
            //    Engine.JoyUI.NewJoyUIDraggablePanel joypanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(TransRankRoot, "LeftInfoRoot").gameObject);
            //    joypanel.OnChangeFinished += OnRankTabSelectedChanged;
            //}
            if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
            {
                //Engine.JoyUI.NewJoyUIDraggablePanel joypanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(TransRankRoot, "LeftInfoRoot").gameObject);
                //joypanel.OnChangeFinished -= OnRankTabSelectedChanged;
	            RankWindow.Instance().OnCloseClick();
                //m_bRankTabInited = false;
	            setState(JoyUIState.MENU_BAR_UI);
	        }
	    }
                                                           #endregion
    //#region RankInfo
    //bool m_bRankInfoInited = false;
    //Vector3 m_rankinfoInitPos = Vector3.zero;
    //void OnRankInfoInitItemList(Transform transgrid)
    //{

    //    UIGrid _grid = transgrid.GetComponent<UIGrid>();
    //    List<Transform> _itemlist = _grid.getList();
    //    int tabCount = _itemlist.Count;
    //    for (int i = 0; i < tabCount; i++)
    //    {
    //        Transform tabItem = _itemlist[i];
    //        m_JoyDraggablePanel.m_ItemList.Add(tabItem.gameObject);
    //    }
    //    if (m_bRankInfoInited == false)
    //    {
    //        m_bRankInfoInited = true;
    //        m_rankinfoInitPos = m_JoyDraggablePanel.initPos;
    //    }
    //    else
    //    {
    //        m_JoyDraggablePanel.initPos = m_rankinfoInitPos;
    //    }
    //}
    //void OnRankInfoLeftClicked(GameObject item)
    //{
    //    m_bRankInfoInited = false;
    //    setState(JoyUIState.RANK_TAB_UI);
    //}
    //void OnRankInfoSelectedChanged(GameObject last, GameObject current) 
    //{
    //    MouseSimulator.Instance.SetMousePos(current.transform.position);
    //}
    //void RankInfoUpdate()
    //{
    //    if (m_bRankInfoInited == false)
    //    {
    //        if (TransRankRoot == null)
    //        {
    //            return;
    //        }
    //        AttachPanelToJoy(TransRankRoot, "RankInfo", OnRankInfoInitItemList, OnRankInfoSelectedChanged, null);
    //        m_JoyDraggablePanel.delItemLeftClicked = OnRankInfoLeftClicked;
    //    }
    //    if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT))
    //    {
    //        RankWindow.Instance().OnCloseClick();
    //        m_bRankInfoInited = false;
    //        setState(JoyUIState.MENU_BAR_UI);
    //    }
    //}
    //#endregion
                                                           #region MenuBar
    void MenuBarUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) 
            || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B)
            || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_L1))
        {
            MenuBarLogic.Instance().SendMessage("CloseWindow");
            //m_bRankTabInited = false;
            setState(JoyUIState.NONE);
        }
    }
                                                           #endregion
                                                           #region FirstTimeCharge
    void FirstTimeChargeUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.ChargeActivity);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region Vip
    void VipUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.VipRoot);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region Shop
    bool m_bshopInited = false;
    bool m_bshopNumChooseInited = false;
    private Transform m_TransNumChooseWindow;
    public Transform TransShopNumChooseWindow
    {
        get
        {
            if (m_TransNumChooseWindow == null)
            {
                if (YuanBaoShopLogic.Instance() != null)
                {
                    m_TransNumChooseWindow = JoyControllerLogic.FindChild(YuanBaoShopLogic.Instance().transform, "NumChooseWindow");
                }
            }
            return m_TransNumChooseWindow;
        }
    }
    void ShopUpdate()
    {
        if (m_bshopInited == false)
        {
            Transform ybTransformRoot = YuanBaoShopLogic.Instance().transform;
            System.Collections.Generic.List<GameObject> uiItems = new System.Collections.Generic.List<GameObject>();

            //添加标签
            Transform tabGrid = JoyControllerLogic.FindChild(ybTransformRoot,"TabGrid");
            if (tabGrid != null)
            {
                for (int i = 0; i < tabGrid.childCount; i++)
                {
                    uiItems.Add(tabGrid.GetChild(i).gameObject);
                }
            }

            // 添加 6个购买按钮GoodGrid
            Transform goodGrid = JoyControllerLogic.FindChild(ybTransformRoot, "GoodGrid");
            if (goodGrid != null)
            {
                for (int i = 0; i < goodGrid.childCount; i++)
                {
                    uiItems.Add(JoyControllerLogic.FindChild(goodGrid.GetChild(i), "Buy").gameObject);
                }
            }

            // 添加 充值按钮ChongZhi
            uiItems.Add(JoyControllerLogic.FindChild(ybTransformRoot, "ChongZhi").gameObject);

            // 添加 翻页按钮 PrePage NextPage
            uiItems.Add(JoyControllerLogic.FindChild(ybTransformRoot, "PrePage").gameObject);
            uiItems.Add(JoyControllerLogic.FindChild(ybTransformRoot, "NextPage").gameObject);


            Engine.JoyUI.BobJoyUINavigator.CollectUIItems(YuanBaoShopLogic.Instance().gameObject, uiItems);

            m_bshopInited = true;
            m_bshopNumChooseInited = false;
        }

        //二级菜单为激活状态
        if (TransShopNumChooseWindow.gameObject.activeInHierarchy && m_bshopNumChooseInited == false)
        {
            System.Collections.Generic.List<GameObject> uiItems2 = new System.Collections.Generic.List<GameObject>();
            //加减 NumChoose.AddButton & SubstrctButton
            uiItems2.Add(JoyControllerLogic.FindChild(TransShopNumChooseWindow, "AddButton").gameObject);
            uiItems2.Add(JoyControllerLogic.FindChild(TransShopNumChooseWindow, "SubstrctButton").gameObject);
            // 充值 ButtonGrid.1ChargeButton
            uiItems2.Add(JoyControllerLogic.FindChild(TransShopNumChooseWindow, "1ChargeButton").gameObject);
            // 赠送/代付 ButtonGrid.2PresentButton
            uiItems2.Add(JoyControllerLogic.FindChild(TransShopNumChooseWindow, "2PresentButton").gameObject);
            // 购买 ButtonGrid.3BuyButton
            uiItems2.Add(JoyControllerLogic.FindChild(TransShopNumChooseWindow, "3BuyButton").gameObject);

            Engine.JoyUI.BobJoyUINavigator.CollectUIItems(TransShopNumChooseWindow.gameObject, uiItems2);

            m_bshopNumChooseInited = true;

        }


        // 修改关闭按钮逻辑，添加对二级面板的支持
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            //NumChooseWindow

            if (TransShopNumChooseWindow != null && TransShopNumChooseWindow.gameObject.activeInHierarchy)
            {
                TransShopNumChooseWindow.gameObject.SetActive(false);
                ClickButtonByName(TransShopNumChooseWindow, "CloseButton");
                m_bshopNumChooseInited = false;
            }
            else
            {
                UIManager.CloseUI(UIInfo.YuanBaoShop);
                setState(JoyUIState.NONE);
                m_bshopInited = false;
                m_bshopNumChooseInited = true;
            }
            
        }
    }
                                                           #endregion
                                                           #region Festival
    void FestivalUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.FestivalController);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region PK
    void PKUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.PKSetInfo);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region MoneyTree
    void MoneyTreeUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.MoneyTreeRoot);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }

                                                           #endregion
                                                           #region ChouJiang
    void ChouJiangUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.DailyDrawRoot);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region LingJiang
    void LingJiangUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.AwardRoot);
            setState(JoyUIState.NONE);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region Social
    void SocialUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.RelationRoot);
            setState(JoyUIState.MENU_BAR_UI);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region JiShou
    bool m_bJishouLeftInited = false;
    enum JishouTabState
    {
        JISHOU_TAB_BUY,
        JISHOU_TAB_SALE
    }
    JishouTabState JISHOU_TAB_STATE = JishouTabState.JISHOU_TAB_BUY;
    void JishouUpdate()
    {
        if (m_bJishouLeftInited == false)
        {
            m_bJishouLeftInited = true;
            if (JISHOU_TAB_STATE == JishouTabState.JISHOU_TAB_BUY)
            {
                Transform buyroot = JoyControllerLogic.FindChild(TransJihouRoot, "BuyRoot");
                LogModule.ErrorLog("LeftInfoRoot count : " + JoyControllerLogic.FindChild(buyroot, "LeftInfoRoot").GetChild(0).childCount);
                leftDragPanel = Engine.JoyUI.NewJoyUIDraggablePanel.BeginJoyProc(JoyControllerLogic.FindChild(buyroot, "LeftInfoRoot").gameObject);
                leftDragPanel.OnChangeFinished += OnActivityTabChanged;
            }
            
        }

        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.ConsignSaleRoot);
            setState(JoyUIState.MENU_BAR_UI);
            m_bJishouLeftInited = false;
        }
    }
                                                           #endregion
                                                           #region GrugShop
    void GrugShopUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.SysShop);
            setState(JoyUIState.MENU_BAR_UI);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region BangHui
    void BanghuiUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.GuildRoot);
            setState(JoyUIState.MENU_BAR_UI);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region Setting
    void SettingUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.SystemAndAutoFight);
            setState(JoyUIState.MENU_BAR_UI);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region Notice
    void NoticeUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.Notice);
            setState(JoyUIState.MENU_BAR_UI);//TODO x 2015-2-3 19:16:49 因为notice在开始的时候也弹出，所以需要添加状态判断
            //m_bmakeInited = false;
        }
    }
                                                           #endregion
                                                           #region MissionDetail
    void MissionDetailUpdate()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            UIManager.CloseUI(UIInfo.MissionLogRoot);
            setState(JoyUIState.MENU_BAR_UI);
            //m_bmakeInited = false;
        }
    }
                                                           #endregion

                                                           #region Recharge
    bool m_bRechargeInited = false;
    void RechargeUpdate()
    {
        LogModule.DebugLog("------RechargeUpdate -----");
        if (m_bRechargeInited == false)
        {
            LogModule.DebugLog("------ into --- m_bRechargeInited :  " + m_bRechargeInited);
            LogModule.DebugLog("------ into --- grid :  " + RechargeController.Instance().m_TransRechargeGrid.childCount);
            // 判断充值面板非空，然后再刷新
            if (RechargeController.Instance().m_TransRechargeGrid.childCount > 0)
            {
                //System.Collections.Generic.List<GameObject> uiItems = new System.Collections.Generic.List<GameObject>();
                LogModule.DebugLog("------ into grid > 0 --- ");

                System.Collections.Generic.List<GameObject> uiItems = new System.Collections.Generic.List<GameObject>();
                
                //将“购买”按钮绑定
                for (int i = 0; i < RechargeController.Instance().m_TransRechargeGrid.childCount; i++ )
                {
                    //uiItems.Add(JoyControllerLogic.FindChild(RechargeController.Instance().m_TransRechargeGrid.GetChild(i), "Image Button").gameObject);
                    uiItems.Add(RechargeController.Instance().m_TransRechargeGrid.GetChild(i).gameObject);
                }

                // 手动收账，充值记录
                uiItems.Add(JoyControllerLogic.FindChild(RechargeController.Instance().m_TransRechargeGrid.parent.parent, "CZYCButton").gameObject);
                uiItems.Add(JoyControllerLogic.FindChild(RechargeController.Instance().m_TransRechargeGrid.parent.parent, "CZJLButton").gameObject);

                Engine.JoyUI.BobJoyUINavigator.CollectUIItems(RechargeController.Instance().gameObject, uiItems);
                LogModule.DebugLog("------into grid > 0 --- leftDragPanel inited ");
                m_bRechargeInited = true;
            }
            
        }

        LogModule.DebugLog("------ out --- m_bRechargeInited :  " + m_bRechargeInited);
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_SELECT) || Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            LogModule.DebugLog("------ b --- ");
            UIManager.CloseUI(UIInfo.Recharge);
            setState(JoyUIState.NONE);
            m_bRechargeInited = false;
        }
    }
                                                           #endregion





    public void setState(JoyUIState _state)
    {
        m_state = _state;
        m_JoyDraggablePanel.Reset();
    }
    bool ClickButtonByName(Transform root, string btnname)
    {
        Transform btntrans = JoyControllerLogic.FindChild(root, btnname);
        if (btntrans == null)
        {
            LogModule.ErrorLog(btnname+" not found!!!!!!!!");
            return false;
        }
        btntrans.gameObject.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
        return true;
    }
#endif
                                                       }
