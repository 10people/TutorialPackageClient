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

public class NewFunctionLogic : MonoBehaviour
{
    public GameObject m_TaskButtonRedPoint;
	public GameObject m_JuQingRedPoint;
    public GameObject m_KaiFu;

    public GameObject m_CloseButton;
    public GameObject m_OpenButton;
    public TweenPosition m_Tween;
    public GameObject m_ButtonAuto;
    public GameObject m_ButtonCopyScene;
    public GameObject m_ButtonPK;
    public UILabel m_PKModleLable;

    private bool m_bFunctionOpen;
    private bool m_bOpening;

    private static NewFunctionLogic m_Instance = null;
    public static NewFunctionLogic Instance()
    {
        return m_Instance;
    }

    private int m_nNewPlayerGuideIndex = 0;
    public int NewPlayerGuideIndex
    {
        get { return m_nNewPlayerGuideIndex; }
        set { m_nNewPlayerGuideIndex = value; }
    }

    void Awake()
    {
        m_Instance = this;
        m_bFunctionOpen = false;
        m_bOpening = false;

        ShowNewServerActivity();
    }

    void Start()
    {
        NewPlayerGuideIndex = -1;
		SetMoneyDataTime ();
    }

    void FixedUpdate()
    {

    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnToggleStart()
    {
        if (!m_bOpening)
        {
            m_Tween.Play(!m_bFunctionOpen);
            m_bOpening = true;
            if (FunctionButtonLogic.Instance() != null) {
              FunctionButtonLogic.Instance().ShowNewServerActivityEffect(m_bFunctionOpen);
            }
            if (SkillBarLogic.Instance() != null) {
              SkillBarLogic.Instance().ShowSkillChangeStateEffect(m_bFunctionOpen);
            }
            if (m_nNewPlayerGuideIndex == 17
                || m_nNewPlayerGuideIndex == 19
                || m_nNewPlayerGuideIndex == 21
                || m_nNewPlayerGuideIndex == 23)
            {
                NewPlayerGuide(m_nNewPlayerGuideIndex+1);
            }
            else if (m_nNewPlayerGuideIndex == 8)
            {
                NewPlayerGuide(11);
            }
        }
    }

    public void OnToggleOver()
    {
        m_bFunctionOpen = !m_bFunctionOpen;

        if (m_bFunctionOpen)
        {
            m_CloseButton.SetActive(true);
            m_OpenButton.SetActive(false);
        }
        else
        {
            m_OpenButton.SetActive(true);
            m_CloseButton.SetActive(false);
        }

        m_bOpening = false;

        if (m_nNewPlayerGuideIndex == 4)
        {
            NewPlayerGuide(5);
        }
    }
    //////////////////////////////////////////////////////////////////////////
    //FunctionClick
    public void OnOpenActivity()
    {
        if (m_bOpening)
        {
            return;
        }
        ActivityController.SetStartTab("Tab2");

        //这里直接用名字作为引用，不是很恰当，为了能引导成功，故意将tab2切换到其他tab，不然点击tab2，
        //会没有效果，不想改TabButton的底层逻辑，只好这里做下简单处理了，如果Tab名字名字改了，这里也要对应更改。By zhipeng
        if (m_nNewPlayerGuideIndex == 26)
        {
            ActivityController.SetStartTab("Tab3");
        }
        UIManager.ShowUI(UIInfo.Activity);
    }
    public void OpenActivityWithIndex(int index)
    {
        if (m_bOpening)
        {
            return;
        }
        ActivityController.SetStartTab("Tab"+index);
        UIManager.ShowUI(UIInfo.Activity);
    }

    public void OnOpenAFK()
    {
        if (m_bOpening)
        {
            return;
        }

        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        if (mainPalyer.IsOpenAutoCombat)
        {
            mainPalyer.LeveAutoCombat();
        }
        else
        {
           
            mainPalyer.EnterAutoCombat();
        }
    }

    public void OnOpenAward()
    {
        if (m_bOpening)
        {
            return;
        }
        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        if (mainPalyer.BaseAttr.Level < 5)
        {
            GUIData.AddNotifyData("#{3188}");
            return;
        }
		UIManager.ShowUI(UIInfo.AwardRoot,OnShowAwardRoot);     
    }

	public void OnShowAwardRoot(bool bSuccess, object param)
	{
		AwardLogic.Instance().m_OnlineAwardRoot.ButtonOnlineAward();
	}
    public void OnOpenDrawBonus()
    {
        if (m_bOpening)
        {
            return;
        }
        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        if (mainPalyer.BaseAttr.Level < 10)
        {
            GUIData.AddNotifyData("#{3187}");
            return;
        }
        UIManager.ShowUI(UIInfo.DailyDrawRoot);     
    }

    public void OnOpenMap()
    {
        //modified by mawenbin
        //七天版本屏蔽功能 TT3815
//         GUIData.AddNotifyData("#{10830}");
//         return;

        if (m_bOpening)
        {
            return;
        }

        UIManager.ShowUI(UIInfo.SceneMapRoot);
    }

    public void OnOpenEgg()
    {
        if (m_bOpening)
        {
            return;
        }
        Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPalyer)
        {
            return;
        }
        if (mainPalyer.BaseAttr.Level < 15)
        {
            GUIData.AddNotifyData("#{3189}");
            return;
        }
        UIManager.ShowUI(UIInfo.MoneyTreeRoot);     
    }

    public void OnOpenShop()
    {
        if (m_bOpening)
        {
            return;
        }

        CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
        packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_FUNCTION_BUTTON;
        packet.SendPacket();
    }

    public void OnOpenPK()
    {
        if (m_bOpening)
        {
            return;
        }
        UIManager.ShowUI(UIInfo.PKSetInfo);
    }

    public void OnBackPackClick()
    {
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.NEWFUNCTION_QUICK;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchEquipPackView);
    }
    //////////////////////////////////////////////////////////////////////////
    //Dynamic
    public void ShowNewServerActivity()
    {
        //bOpen为true，应该显示坐骑奖励图标，表明已经有日期记录，可以打开界面查看了。bOpen为false不应该显示坐骑奖励图标，日期记录已经被清空了。
        int nValue = Utils.GetCommonData((int)USER_COMMONDATA.CD_NEWSERVERACTIVITY);
        bool bOpen = (nValue > 0);
        m_KaiFu.SetActive(bOpen);
    }
    void OnOpenNewServerActivity()
    {
        UIManager.ShowUI(UIInfo.NewServerActivityRoot);
    }


    // 新手指引
    public void NewPlayerGuide(int nIndex)
    {
        m_nNewPlayerGuideIndex = nIndex;
        switch (nIndex)
        {
            case 1://挂机
                {
                    Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
                    if (m_OpenButton && User.Controller && User)
                    {
                        if (true == User.Controller.CombatFlag)
                        {
                            return;
                        }

                        if (m_bOpening)
                        {
                            NewPlayerGuide(7);
                        }
                        else
                        {
                            NewPlayerGuidLogic.OpenWindow(m_OpenButton, 110, 110, "", "left", 0, true, true);
                        }
                    }
                }
                break;
            case 3:// 取消挂机
                {
                    Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
                    if (m_OpenButton && User.Controller && User)
                    {
                        if (false == User.Controller.CombatFlag)
                        {
                            return;
                        }

                        if (m_bOpening)
                        {
                            NewPlayerGuide(7);
                        }
                        else
                        {
                            NewPlayerGuidLogic.OpenWindow(m_OpenButton, 110, 110, "", "left", 0, true, true);
                        }
                    }
                }
                break;
            case 7:
                NewPlayerGuidLogic.OpenWindow(m_ButtonAuto, 110, 110, "", "left", 0, true, true);
                break;
            case 8:// 藏经阁
                {
                    if (m_OpenButton)
                    {
                        NewPlayerGuide(11);
                    }
                    else
                    {
                        NewPlayerGuidLogic.OpenWindow(m_OpenButton, 110, 110, "", "left", 0, true, true);
                    }
                }
                break;
            case 16:// 第二天领奖按钮
                {
                    NewPlayerGuidLogic.OpenWindow(m_KaiFu, 150, 150, Utils.GetDicByID(10409), "left", 0, true, true);
                }
                break;
            case 4:     // PK
                {
                    if (m_bFunctionOpen)
                    {
                        NewPlayerGuide(5);
                    }
                    else
                    {
                        NewPlayerGuidLogic.OpenWindow(m_OpenButton, 110, 110, "", "left", 0, true, true);
                    }
                }
                break;
            case 17:    // 副本指引
            case 19:    // 副本指引
            case 21:    // 副本指引
            case 23:    // 副本指引
                {
                    NewPlayerGuide(nIndex + 1);
                }
                break;
            case 5:     // PK指引
                NewPlayerGuidLogic.OpenWindow(m_ButtonPK, 80, 80, "", "left", 0, true, true);      
                break;
            case 11:    // 爬塔
            case 18:    // 黄昏边境
            case 20:    // 黄昏边境
            case 22:    // 黄昏边境
            case 24:    // 黄昏边境
                NewPlayerGuidLogic.OpenWindow(m_ButtonCopyScene, 108, 56, "", "left", 0, true, true);
                break;
            case 25:    // 第一次剧情副本过关后领取奖励
                NewPlayerGuidLogic.OpenWindow(m_ButtonCopyScene, 108, 56, "", "left", 0, true, true);
                break;
            case 26:    // 混沌之地副本
                NewPlayerGuidLogic.OpenWindow(m_ButtonCopyScene, 108, 56, "", "left", 0, true, true);
                break;

            // 活动副本 
            case 30:       // 黄昏要塞
            case 31:       // 机械研究所
            case 32:       // 雷纳包
            case 33:       // 冰冻地下
            case 34:       // 废弃都市
            case 35:       // pvp
                NewPlayerGuidLogic.OpenWindow(m_ButtonCopyScene, 108, 56, "", "left", 0, true, true);
                break;
          

        }
    }
	//====================================================
	private float m_CDTime ;
	public GameObject m_MoneyTreeBigRed ;

	public void SetMoneyDataTime()
	{
		m_CDTime = GameManager.gameManager.PlayerDataPool.MoneyTreeData.CDTime;
		updateMoneyTreeTime ();
	}

	public void updateMoneyTreeTime()
	{
		if (Singleton<ObjManager>.Instance.MainPlayer == null)
			return;

		if (m_MoneyTreeBigRed == null)
			return;

		if (GameManager.gameManager.PlayerDataPool.MoneyTreeData.MoneyTreeID >= 8) 
		{
			m_MoneyTreeBigRed.SetActive(false);
			return;
		}

		if (m_CDTime <= 0) {
			if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level >= 15) {
				m_MoneyTreeBigRed.SetActive (true);
				return;
			}
			m_MoneyTreeBigRed.SetActive (false);
		}
		else 
		{
			m_MoneyTreeBigRed.SetActive (false);
		}
	}

    public void SetPkLabel(bool IsPkModle)
    {
        if (!IsPkModle)
        {
            NewFunctionLogic.Instance().m_PKModleLable.text = "[9BFBF7]" + Utils.GetDicByID(10265) + "[-]";
        }
        else
        {
            NewFunctionLogic.Instance().m_PKModleLable.text = "[FF0000]" + Utils.GetDicByID(10264) + "[-]";
        }
    }

    void OnVipClick()
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

    void OnClickChargeActivity()
    {
        //if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_PAYACT))
        //{
            //UIManager.ShowUI(UIInfo.ChargeActivity);
        //}
        RechargeData.PayUI();
    }

    public void OnMissionLogClick()
    {
      UIManager.ShowUI(UIInfo.MissionLogRoot, OnLoadMissionAndMissionDayRoot);
    }
    void OnLoadMissionAndMissionDayRoot(bool bSuccess, object param)
    {
      if (MissionLogLogic.Instance() != null) {
        MissionLogLogic.Instance().SetOpenTabName("Btn2-Daily");
      }
    }
    void OnEnable()
    {
		DailyMissionRedPoint();
		JuqingRedPoint();
		Messenger.AddListener(MessengerConst.OnUpdateJuQingCopySceneChapterInfo, OnUpdateJuQingCopySceneChapterInfo);
		Messenger.AddListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
    }

	void OnDisable()
	{
		Messenger.RemoveListener(MessengerConst.OnUpdateJuQingCopySceneChapterInfo, OnUpdateJuQingCopySceneChapterInfo);
		Messenger.RemoveListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
	}

    public void DailyMissionRedPoint()
    {
      if (m_TaskButtonRedPoint != null) {
        m_TaskButtonRedPoint.SetActive(MissionView_Daily.CalculateIsShowRedPoint());
      }
    }

	void OnUpdateJuQingCopySceneChapterInfo()
	{
		JuqingRedPoint();
	}

	void OnUpdateCangjinggeAward()
	{
		JuqingRedPoint();
	}

	void JuqingRedPoint()
	{
		if(m_JuQingRedPoint==null)
		{
			return;
		}

		bool bHaveUngotAwardJQ = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsHaveUngotAward();
		bool bHaveUngotAwardCJG = GameManager.gameManager.PlayerDataPool.CommonData.IsHaveCanGotRewardCangjingge(0);
		if( bHaveUngotAwardJQ || bHaveUngotAwardCJG )
		{
			m_JuQingRedPoint.SetActive(true);
		}
		else
		{
			m_JuQingRedPoint.SetActive(false);
		}
	}
 }
