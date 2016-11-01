using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.Fellow;
using GCGame;
using Module.Log;
using GCGame.Table;
using Games.UserCommonData;
using Games.GlobeDefine;
using System;

public class PartnerFrameLogic : MonoBehaviour
{
    private static PartnerFrameLogic m_Instance = null;
    public static PartnerFrameLogic Instance()
    {
        return m_Instance;
    }

    public enum TABCONTENT
    {
        TABCONTENT_INVALID        = -1,
        TABCONTENT_INFO           = 0,
        TABCONTENT_DEVELOP        = 1,
        TABCONTENT_SKILL          = 2,
        TABCONTENT_BLEEDING       = 3,
    }
    public GameObject SkillRedTip;
    public GameObject CloneRedTip;
    public GameObject[] SkillElementsUpdate;
	public GameObject[] m_TabBtn;
    public PartnerFrameLogic_Info m_PartnerFrameLogic_Info;
    public PartnerFrameLogic_Develop m_PartnerFrameLogic_Develop;
    public PartnerFrameLogic_Develop m_PartnerFrameLogic_Skill;

    public TabController m_TabController;
    public GameObject m_PartnerList;
    public UILabel m_PartnerCapacity;
    public GameObject m_PartnerListGrid;

    public GameObject m_ChangeNameWindow;
    public UIInput m_ChangeNameInput;

    public GameObject m_RebirthWindow;
    public UISprite m_CurFellowIcon;
    public UISprite m_CurFellowQualityFrame;
    public UILabel m_CurFellowNameLabel;
    public UISprite m_RebirthFellowIcon;
    public UILabel m_RebirthFellowNameLabel;
    public ItemSlotLogic m_RebirthItemSlot;

    public GameObject m_PartnerListItem;

    private TABCONTENT m_CurTab = TABCONTENT.TABCONTENT_INFO;
	private Fellow m_FellowBuffer = null;
	public UInt64 rebirthFellowGuid = GlobeVar.INVALID_GUID;

    public GameObject m_GuidePoint;
    public UISprite m_DevelopRemindPoint;

	void OnEnable () 
    {
        m_Instance = this;
        m_TabController.delTabChanged = TabOnClick;
        m_TabController.ChangeTab("Button1-Info");
        Check_NewPlayerGuide();
        UpdateDevelopRemindPoint();
	}

    void OnDisable()
    {
        m_Instance = null;
        m_FellowBuffer = null;
    }

    public void ChangeTabClick( string strTabIndex )
    {
        m_TabController.ChangeTab(strTabIndex);
    }

    void OnChangeTabClick(string strTabIndex)
    {
        if (strTabIndex == "Button1-Info")
        {
            m_CurTab = TABCONTENT.TABCONTENT_INFO;
            if (m_PartnerFrameLogic_Info != null)
            {
                m_PartnerFrameLogic_Info.HandleChangeTab();
            }
        }
        else if (strTabIndex == "Button2-Develop")
        {
            m_CurTab = TABCONTENT.TABCONTENT_DEVELOP;
            if (m_PartnerFrameLogic_Develop != null)
            {
                PartnerFrameLogic_Develop.m_DefaultFellowGuid = mCurFellowId;
                m_PartnerFrameLogic_Develop.HandleChangeTab();
                if (m_NewPlayerGuideFlag_Step == 14)
                {
                    NewPlayerGuide(15);
                }
            }
        }
        else if (strTabIndex == "Button3-Skill")
        {
            m_CurTab = TABCONTENT.TABCONTENT_SKILL;
            if (m_PartnerFrameLogic_Skill != null)
            {
                PartnerFrameLogic_Develop.m_DefaultFellowGuid = mCurFellowId;
                m_PartnerFrameLogic_Skill.HandleChangeTab();
                if (m_NewPlayerGuideFlag_Step == 12)
                {
                    NewPlayerGuide(13);
                }
            }
        }
        else if (strTabIndex == "Button4-Bleeding")
        {
            m_CurTab = TABCONTENT.TABCONTENT_BLEEDING;
            if (GameManager.gameManager.MissionManager.IsHaveMission(MISSION_ID_CLONE))
            {
                NewPlayerGuide(23);
            }
        }
    }

    void TabOnClick(TabButton value)
    {
        OnChangeTabClick(value.name);
    }

    public void InitPartnerList(UInt64 defaultGuid = GlobeVar.INVALID_GUID, Predicate<Fellow> filter = null)
    {
        if (m_PartnerListGrid != null)
        {
            //先清空
            Utils.CleanGrid(m_PartnerListGrid);

            m_PartnerList.SetActive(true);

            FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
            if (container == null)
            {
                return;
            }
            //遍历伙伴容器
            bool bFirst = true;
            List<Fellow> fellowList = FellowTool.FellowSort(container);
            PartnerFrameItemLogic firstOneCache = null;
            bool needReSelect = false;
            bool needToTopReset = false;
            int firstOneCacheIndex = 0;
            for (int i = 0; i < fellowList.Count; ++i)
            {
                //有效槽位
                Fellow fellow = fellowList[i];
                if (fellow.IsValid())
                {
                    if (filter != null && !filter(fellow))
                    {
                        if (firstOneCache == null)
                        {
                            firstOneCacheIndex += 1;
                        }
                        if (fellow.Guid == defaultGuid)
                        {
                            needReSelect = true;
                        }
                        continue;
                    }
                    string objectName = "";
                    if (i < 10)
                    {
                        objectName += "0";
                    }
                    objectName += i.ToString();
                    GameObject fellowobject = Utils.BindObjToParent(m_PartnerListItem, m_PartnerListGrid, objectName);
                    if (fellowobject != null && fellowobject.GetComponent<PartnerFrameItemLogic>() != null)
                    {
                        fellowobject.GetComponent<PartnerFrameItemLogic>().UpdateFellowInfo(fellow);
                        if (i == firstOneCacheIndex)
                        {
                            firstOneCache = fellowobject.GetComponent<PartnerFrameItemLogic>();
                        }
                        if (defaultGuid == GlobeVar.INVALID_GUID)
                        {
                            if (bFirst)
                            {
                                fellowobject.GetComponent<PartnerFrameItemLogic>().OnFellowClick();
                                bFirst = false;
                                needToTopReset = true;
                            }
                        }
                        else
                        {
                            if (fellow.Guid == defaultGuid)
                            {
                                fellowobject.GetComponent<PartnerFrameItemLogic>().OnFellowClick();
                            }
                        }
                    }
                }
            }

            if (needReSelect && firstOneCache != null)
            {
                needToTopReset = true;
                firstOneCache.OnFellowClick();
            }
            
            // add cloning fellow in info view
            if (filter == null && GameManager.gameManager.PlayerDataPool.IsProcreateGoing())
            {
                GameObject fellowobject = Utils.BindObjToParent(m_PartnerListItem, m_PartnerListGrid, "z00");
                if (fellowobject != null && fellowobject.GetComponent<PartnerFrameItemLogic>() != null)
                {
                    fellowobject.GetComponent<PartnerFrameItemLogic>().ShowCloningInfo();
                    if (fellowList.Count == 0)
                    {
                        fellowobject.GetComponent<PartnerFrameItemLogic>().OnFellowClick();
                    }
                }
            }
            
            m_PartnerListGrid.GetComponent<UIGrid>().Reposition();
            if (needToTopReset)
            {
                m_PartnerListGrid.GetComponent<UITopGrid>().Recenter(true);
            }
            m_PartnerCapacity.text = container.GetCapacityStr();
        }
        UpdateFellowTip();
    }

    public void RefreshPartnerList(Predicate<Fellow> filter = null)
    {
        if (m_PartnerListGrid != null)
        {
            //先清空
            Utils.CleanGrid(m_PartnerListGrid);

            m_PartnerList.SetActive(true);

            FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
            if (container == null)
            {
                return;
            }
            //遍历伙伴容器
            List<Fellow> fellowList = FellowTool.FellowSort(container);
            for (int i = 0; i < fellowList.Count; ++i)
            {
                //有效槽位
                Fellow fellow = fellowList[i];
                if (fellow.IsValid())
                {
                    if (filter != null && !filter(fellow))
                    {
                        continue;
                    }
                    string objectName = "";
                    if (i < 10)
                    {
                        objectName += "0";
                    }
                    objectName += i.ToString();
                    GameObject fellowobject = Utils.BindObjToParent(m_PartnerListItem, m_PartnerListGrid, objectName);
                    if (fellowobject != null && fellowobject.GetComponent<PartnerFrameItemLogic>() != null)
                    {
                        fellowobject.GetComponent<PartnerFrameItemLogic>().UpdateFellowInfo(fellow);
                    }
                }
            }
            m_PartnerListGrid.GetComponent<UIGrid>().Reposition();
			ShowSelectFun();//升星后列表的选中
        } 
    }

    public void HidePartnerList()
    {
        Utils.CleanGrid(m_PartnerListGrid);
        m_PartnerList.SetActive(false);
    }

    void OnCloseClick()
    {
        if (m_NewPlayerGuideFlag_Step == 1)
        {
            NewPlayerGuide(3);
        }
        UIManager.CloseUI(UIInfo.PartnerFrameRoot);
		rebirthFellowGuid = GlobeVar.INVALID_GUID;
    }
	private Fellow m_clickFellow;
    ulong mCurFellowId = GlobeVar.INVALID_GUID;
    public void OnFellowClick(Fellow fellow)
    {
		m_clickFellow = fellow;
        if (fellow == null)
        {
            // cloning item
            if (m_CurTab == TABCONTENT.TABCONTENT_INFO)
            {
                if (m_PartnerFrameLogic_Info != null)
                {
                    m_PartnerFrameLogic_Info.ShowCloningTips();
                }
                mCurFellowId = GlobeVar.INVALID_GUID;
                PartnerFrameItemLogic[] bItem = m_PartnerListGrid.GetComponentsInChildren<PartnerFrameItemLogic>();
                for (int i = 0; i < bItem.Length; ++i)
                {
                    bItem[i].UpdateChooseFlag(mCurFellowId);
                }
            }
            return;
        }

        if (false == fellow.IsValid())
        {
            return;
        }
        mCurFellowId = fellow.Guid;
        PartnerFrameItemLogic[] aItem = m_PartnerListGrid.GetComponentsInChildren<PartnerFrameItemLogic>();
        for (int i = 0; i < aItem.Length; ++i)
        {
            aItem[i].UpdateChooseFlag(fellow.Guid);
        }

        if (m_CurTab == TABCONTENT.TABCONTENT_INFO)
        {
            if (m_PartnerFrameLogic_Info != null)
            {
                m_PartnerFrameLogic_Info.UpdateFellowInfo(fellow);
                if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY && GameManager.gameManager.MissionManager.IsHaveMission(MISSION_ID_BABY_UPGRADE))
                {
                    NewPlayerGuide(21);
                }
            }            
        }
        else if (m_CurTab == TABCONTENT.TABCONTENT_DEVELOP)
        {
            if (m_PartnerFrameLogic_Develop != null)
            {
                m_PartnerFrameLogic_Develop.UpdateFellowInfo(fellow);
            }            
        }
        else if (m_CurTab == TABCONTENT.TABCONTENT_SKILL)
        {
            if (m_PartnerFrameLogic_Skill != null)
            {
                m_PartnerFrameLogic_Skill.UpdateFellowInfo(fellow);
            }
        }
        OnItemClick(fellow);
    }

    public void UpdateFellowInfo_Refresh()
    {
        if (m_CurTab == TABCONTENT.TABCONTENT_INFO)
        {
            if (m_PartnerFrameLogic_Info != null)
            {
                m_PartnerFrameLogic_Info.UpdateFellowInfo_Refresh();
            }
        }
        else if (m_CurTab == TABCONTENT.TABCONTENT_DEVELOP)
        {
            if (m_PartnerFrameLogic_Develop != null)
            {
                m_PartnerFrameLogic_Develop.UpdateFellowInfo_Refresh();
            }
        }
        else if (m_CurTab == TABCONTENT.TABCONTENT_SKILL)
        {
            if (m_PartnerFrameLogic_Skill != null)
            {
                m_PartnerFrameLogic_Skill.UpdateFellowInfo_Refresh();
            }
        }

        PartnerFrameItemLogic[] aItem = m_PartnerListGrid.GetComponentsInChildren<PartnerFrameItemLogic>();
        for (int i = 0; i < aItem.Length; i++ )
        {
            aItem[i].UpdateFellowInfo_Refresh();
        }
    }
	private void ShowSelectFun()
	{
		PartnerFrameItemLogic[] aItem = m_PartnerListGrid.GetComponentsInChildren<PartnerFrameItemLogic>();
		for (int i = 0; i < aItem.Length; i++ )
		{
			if(m_clickFellow!=null)
				aItem[i].UpdateChooseFlag(m_clickFellow.Guid);
		}
	}
    public void OnChangeNameClick(Fellow fellow)
    {
        if (fellow == null)
        {
            return;
        }

        if (false == fellow.IsValid())
        {
            return;
        }

        m_ChangeNameWindow.SetActive(true);

        m_FellowBuffer = fellow;
    }

    void OnClickSaveName()
    {
        if (m_FellowBuffer == null)
        {
            //未选择伙伴
            GUIData.AddNotifyData2Client(false, "#{1836}");
            return;
        }

        if (false == m_FellowBuffer.IsValid())
        {
            return;
        }

        if (string.IsNullOrEmpty(m_ChangeNameInput.value))
        {
            //请输入伙伴名称
            GUIData.AddNotifyData2Client(false, "#{1837}");
            return;
        }

        int curCharNum = 0;     // 英文算一个，中文算两个 
        foreach (char curChar in m_ChangeNameInput.value)
        {
            if ((int)curChar >= 128)
            {
                curCharNum += 2;
            }
            else if ((int)curChar >= 65 && (int)curChar <= 90)
            {
                curCharNum += 2;
            }
            else
            {
                curCharNum += 1;
            }
        }
        if (curCharNum > 14)
        {
            // 名字过长
            GUIData.AddNotifyData2Client(false, "#{1279}");
            return;
        }

        if (m_ChangeNameInput.value.Contains("*"))
        {
            GUIData.AddNotifyData2Client(false, "#{1278}");
            return;
        }

        if (null == Utils.GetStrFilter(m_ChangeNameInput.value, (int)Games.GlobeDefine.GameDefine_Globe.STRFILTER_TYPE.STRFILTER_NAME))
        {
            CG_FELLOW_CHANGE_NAME fellowPak = (CG_FELLOW_CHANGE_NAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_CHANGE_NAME);
            fellowPak.SetFellowguid(m_FellowBuffer.Guid);
            fellowPak.SetName(m_ChangeNameInput.value);
            fellowPak.SendPacket();

            OnClickCloseChangeName();
        }
        else
        {
            // 包含非法字符
            GUIData.AddNotifyData2Client(false, "#{1278}");
        }
    }

    void OnClickCloseChangeName()
    {
        m_ChangeNameWindow.SetActive(false);
        m_ChangeNameInput.value = "";

        m_FellowBuffer = null;
    }

    public void OnRebirthClick(Fellow fellow)
    {
        if (fellow == null)
        {
            return;
        }

        if (false == fellow.IsValid())
        {
            return;
        }

        Tab_CabalFellowAttr tabAttr = TableManager.GetCabalFellowAttrByID(fellow.DataId, 0);
        if (tabAttr == null)
        {
            return;
        }

        Tab_CabalFellowAttr tabBaby = TableManager.GetCabalFellowAttrByID(tabAttr.BabyFellowId, 0);
        if (tabBaby == null)
        {
            LogModule.ErrorLog("The fellow has not baby state, fellow id = " + fellow.DataId);
            return;
        }

        m_CurFellowIcon.spriteName = fellow.GetIcon();
        m_CurFellowQualityFrame.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        m_CurFellowNameLabel.text = fellow.Name;
        m_RebirthFellowIcon.spriteName = tabBaby.Icon;
        m_RebirthFellowNameLabel.text = tabBaby.Name;
        m_RebirthItemSlot.InitInfo_Yuanbao(null, GlobeVar.PARTNER_REBIRTH_YUANBAO.ToString(), true);

        m_RebirthWindow.SetActive(true);

        m_FellowBuffer = fellow;
    }

    void OnRebirthOKClick()
    {
        if (m_FellowBuffer == null)
        {
            return;
        }

        if (false == m_FellowBuffer.IsValid())
        {
            return;
        }

        if (m_FellowBuffer.Called)
        {
            GUIData.AddNotifyData("#{10325}");
            return;
        }

        CG_FELLOW_REBIRTH pak = (CG_FELLOW_REBIRTH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_REBIRTH);
        pak.SetGuid(m_FellowBuffer.Guid);
        pak.SendPacket();
        rebirthFellowGuid = m_FellowBuffer.Guid;
        OnRebirthCancelClick();
    }

    void OnRebirthCancelClick()
    {
        m_RebirthWindow.SetActive(false);

        m_CurFellowIcon.spriteName = "";
        m_CurFellowNameLabel.text = "";
        m_RebirthFellowIcon.spriteName = "";
        m_RebirthFellowNameLabel.text = "";
        m_RebirthItemSlot.ClearInfo();

        m_FellowBuffer = null;
    }

    public void ChangeToDevelop(PartnerFrameLogic_Develop.DEVELOPCONTENT tab, UInt64 guid)
    {
        PartnerFrameLogic_Develop.m_DefaultTab = tab;
        PartnerFrameLogic_Develop.m_DefaultFellowGuid = guid;
        m_TabController.ChangeTab("Button2-Develop");
    }

    // 新手指引
    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }
    public GameObject m_CloseButton;

    const int MISSION_ID_BABY_UPGRADE = 98;
    const int MISSION_ID_CLONE = 180;

    void Check_NewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 2 || nIndex == 6 || nIndex == 12 || nIndex == 14)
        {
            NewPlayerGuide(nIndex);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
        // 宠物克隆特殊引导
        if (GameManager.gameManager.MissionManager.IsHaveMission(MISSION_ID_BABY_UPGRADE))
        {
            NewPlayerGuide(20);
        }
        else if (GameManager.gameManager.MissionManager.IsHaveMission(MISSION_ID_CLONE))
        {
            NewPlayerGuide(22);
        }
    }

    public void NewPlayerGuide(int index)
    {
        if (index < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = index;
        switch (index)
        {
            case 1:
                //NewPlayerGuidLogic.OpenWindow(m_CloseButton, 200, 80, StrDictionary.GetClientDictionaryString("#{2867}"), "bottomleft", 0, true, true);
                NewPlayerGuidLogic.OpenWindow_Circle(m_GuidePoint, 100, "", "left", 0, true, true);
                break;
            case 2:// 召唤
            case 15:// 升星点击宠物
                {
                    Transform itemTrans = m_PartnerListGrid.transform.FindChild("00");
                    if (itemTrans)
                    {
                        PartnerFrameItemLogic FellowItem = itemTrans.GetComponent<PartnerFrameItemLogic>();
                        if (FellowItem)
                        {
                            NewPlayerGuidLogic.OpenWindow(FellowItem.gameObject, 270, 110, Utils.GetDicByID(10420), "right", 0, true, true);
                        }
                    }
                }
                break;
            case 3:
                if (MenuBarLogic.Instance())
                {
                    MenuBarLogic.Instance().NewPlayerGuide(101);
                }
                m_NewPlayerGuideFlag_Step = -1;
                break;
            case 4: // 强制点击画面中心空格
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Skill.Instance().m_LearnSkillAddSkillBook.gameObject, 70, 80, "", "left", 0, true, true);
                break;

            case 5: // 强制选中第一本技能书（任务需要）
                Transform skillbookItem = PartnerFrameLogic_Skill.Instance().m_SkillChooseGrid.transform.FindChild("00");
                if (skillbookItem != null)
                {
                    NewPlayerGuidLogic.OpenWindow(skillbookItem.FindChild("ChooseButton").gameObject, 145, 50, "", "left", 0, true, true);
                }
                else
                {
                    NewPlayerGuideFlag_Step = -1;
                }
                break;

            case 6:// 点击学习
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Skill.Instance().m_LearnSkillWindow.transform.FindChild("LearnSkillButton").gameObject, 160, 65, "", "left", 0, true, true);
                break;

            case 7:// 学习成功，关闭界面
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Skill.Instance().m_LearnSkillCloseButton, 50, 50, "", "left", 0, true, true);
                NewPlayerGuideFlag_Step = -1;
                break;

            case 12:// 学习技能引导，点击技能分页
                NewPlayerGuidLogic.OpenWindow(m_TabController.GetTabButtonObj("Button3-Skill"), 160, 70, Utils.GetDicByID(11425), "left", 0, true, true);
                break;

            case 13:// 强制点击【学习技能】，后接4
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Skill.Instance().m_LearnSkillOpenButton.gameObject, 160, 65, "", "left", 0, true, true);
                break;

            case 14: // 伙伴升星，强制点开升星分页，加提示文字（字典号11425）
                NewPlayerGuidLogic.OpenWindow(m_TabController.GetTabButtonObj("Button2-Develop"), 160, 70, Utils.GetDicByID(11425), "left", 0, true, true);
                break;

            case 16: // 引导点击升星按钮
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Star.Instance().m_StarButton, 160, 65, "", "left", 0, true, true);
                break;

            case 17: // 引导点击狗粮宠物（狗粮宠物默认放在最左侧第一个宠物格位置）（字典号11426）
                GameObject FTEFellow = PartnerFrameLogic_Star.Instance().m_ChooseMaterialGrid.transform.FindChild("a41").gameObject;
                if (FTEFellow != null)
                {
                    NewPlayerGuidLogic.OpenWindow(FTEFellow, 68, 78, Utils.GetDicByID(11426), "left", 0, true, true);
                }
                break;

            case 18: // 引导点击升星确认按钮
                GameObject OKBtn = PartnerFrameLogic_Star.Instance().m_ChooseMaterialWindow.transform.FindChild("OkButon").gameObject;
                if (OKBtn != null)
                {
                    NewPlayerGuidLogic.OpenWindow(OKBtn, 160, 65, "", "left", 0, true, true, false, null, () =>
                    {
                        m_NewPlayerGuideFlag_Step = -1;
                    });
                }
                break;

            case 20: // 1.指向左侧标签中的宠物宝宝11454；
                GameObject babyItem = null;
                foreach (Transform item in m_PartnerListGrid.GetComponent<UIGrid>().GetChildList())
                {
                    if (item.GetComponent<PartnerFrameItemLogic>().FellowInfo.GetFellowType() == (int)FELLOWTYPE.BABY)
                    {
                        babyItem = item.gameObject;
                        break;
                    }
                }
                if (babyItem != null)
                {
                    NewPlayerGuidLogic.OpenWindow(babyItem, 270, 110, Utils.GetDicByID(11454), "right", 2);
                }
                NewPlayerGuideFlag_Step = -1;
                break;

            case 21: // 2.指向宝宝属性中的“繁殖次数”位置，说明升级到15级之后，宝宝拥有克隆次数11455
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Info.Instance().m_ProCreateLabel.gameObject, 150, 40, Utils.GetDicByID(11455),
                    "left", -1, true, true, false, null, null, 0, 0, true, false, () =>
                    {
                        NewPlayerGuidLogic.CloseWindow();
                    });
                NewPlayerGuideFlag_Step = -1;
                break;

            case 22: //完成1次宠物克隆（任务描述中说明步骤，且当玩家带有这个任务打开宠物界面的时候，1.指向【克隆】分页，2，指向加号，说明需要组队完成
                NewPlayerGuidLogic.OpenWindow(m_TabController.GetTabButtonObj("Button4-Bleeding"), 160, 70, Utils.GetDicByID(11456), "left", 2);
                NewPlayerGuideFlag_Step = -1;
                break;

            case 23: //2，指向加号，说明需要组队完成
                NewPlayerGuidLogic.OpenWindow(PartnerFrameLogic_Breeding.Instance().m_PushPartnerButton, 310, 300, Utils.GetDicByID(11457), "left", 2);
                NewPlayerGuideFlag_Step = -1;
                break;

            default:
                break;
        }
    }

    public void UpdateDevelopRemindPoint()
    {
        if (m_DevelopRemindPoint == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetPartnerSkillCanLevelUpCount() > 0)
        {
            m_DevelopRemindPoint.gameObject.SetActive(true);
        }
        else
        {
            m_DevelopRemindPoint.gameObject.SetActive(false);
        }
    }
    public void UpdateFellowTip()
    {
        Games.Fellow.FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
		//if (m_PartnerListGrid != null&&m_CurTab == TABCONTENT.TABCONTENT_DEVELOP)
		if (m_PartnerListGrid != null)
        {
            Dictionary<int, List<int>> learnlist = container.GetPartnerCanLearnSkill();
            Dictionary<int, List<int>> updatelist = container.GetPartnerCanUpdateSkill();
            PartnerFrameItemLogic[] partners = m_PartnerListGrid.GetComponentsInChildren<PartnerFrameItemLogic>();
            foreach (PartnerFrameItemLogic pfil in partners)
            {
                if (pfil.FellowInfo == null)
                {
                    continue;
                }
                if (learnlist.ContainsKey(pfil.FellowInfo.DataId) || updatelist.ContainsKey(pfil.FellowInfo.DataId))
                {
                    pfil.SetRedPoint(true);
                }
                else
                {
                    pfil.SetRedPoint(false);
                }
                if (pfil.FellowInfo.Guid == mCurFellowId)
                {
                    OnItemClick(pfil.FellowInfo);
                }
            }
        }
        PlayerData playerdata = GameManager.gameManager.PlayerDataPool;
        if (playerdata != null && CloneRedTip != null)
        {
            if (playerdata.IsProcreateGoing() && playerdata.IsProcreateWaitReceive())
            {
                CloneRedTip.SetActive(true);
            }
            else
            {
                CloneRedTip.SetActive(false);
            }
        }
    }
    public void OnItemClick(Fellow fellow)
    {
        if (fellow != null && SkillRedTip != null)
        {
            Games.Fellow.FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
            Dictionary<int, List<int>> learnlist = container.GetPartnerCanLearnSkill();
            Dictionary<int, List<int>> updatelist = container.GetPartnerCanUpdateSkill();
            if (learnlist.ContainsKey(fellow.DataId) || updatelist.ContainsKey(fellow.DataId))
            {
                SkillRedTip.SetActive(true);
            }
            else
            {
                SkillRedTip.SetActive(false);
            }
            List<int> skills;
            if (updatelist.TryGetValue(fellow.DataId, out skills))
            {
                foreach (GameObject go in SkillElementsUpdate)
                {
                    if (go != null)
                    {
                        go.SetActive(false);
                    }
                }
                int count = skills.Count;
                for (int i = 0; i < count; ++i)
                {
                    if (skills[i] > -1 && skills[i] < SkillElementsUpdate.Length)
                    {
                        SkillElementsUpdate[skills[i]].SetActive(true);
                    }
                }
            }
        }
    }
}
