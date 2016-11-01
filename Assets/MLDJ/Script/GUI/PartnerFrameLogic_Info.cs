using UnityEngine;
using System.Collections;
using Games.Fellow;
using Games.FakeObject;
using GCGame.Table;
using GCGame;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.Item;
public class PartnerFrameLogic_Info : MonoBehaviour {

    private static PartnerFrameLogic_Info m_Instance = null;
    public static PartnerFrameLogic_Info Instance()
    {
        return m_Instance;
    }

    public GameObject m_StarAttr;
    public GameObject m_BabyFellowNotice;

    public GameObject m_BattleButton;
    public GameObject m_CallBackButton;
    public GameObject m_RebirtheButton;
    public GameObject m_XiSuiButton;
    public GameObject m_LockButton;
    public GameObject m_UnLockButton;

    public UILabel m_NameLabel;
    public UILabel m_CombatValueLabel;
    public UISprite m_ElementPic;
    public UILabel m_TypeLabel;
    public UILabel m_BattleLevelLabel;
    public UILabel m_LevelLabel;
    public UILabel m_ExpLabel;
    public UILabel m_AttackLabel;
    public UILabel m_HitLabel;
    public UILabel m_CriticalLabel;
    public UILabel m_GuardLabel;
    public UILabel m_BlessLabel;
    public UILabel m_ProCreateLabel;
    public UILabel m_LuckyLabel;
    public UILabel m_GrowUpLabel;
    public GameObject m_BabyAttr;
    public GameObject m_SkillArea;
    public UISprite[] m_StarPic;

    public GameObject m_TalentSkillGrid;
    public GameObject m_ElementSkillGrid;
    public GameObject m_PartnerSkillItem;

    public GameObject m_ModelViewTopLeft;
    public GameObject m_ModelViewBottomRight;
    public ModelDragLogic m_ModelDrag;

    private Fellow m_Fellow;
    private FakeObject m_PartnerFakeObj;
    private GameObject m_FakeObjGameObject;
    public UISprite m_LevelUpRemindPoint;
    public Tooltip m_SkillTooltip;
 //   public UISprite m_QualityIcon;
    public GameObject cloningArea;
    public GameObject normalArea;

    void OnEnable()
    {
        m_Instance = this;
        UpdateLevelUpRemindPoint();
    }

    void OnDisable()
    {
        m_Instance = null;

        m_Fellow = null;
        DestroyPartnerFakeObj();
        GameManager.gameManager.ActiveScene.HideFakeObj();
    }

    public void HandleChangeTab()
    {
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_ModelViewTopLeft, m_ModelViewBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();

        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().InitPartnerList();
        }

        Check_NewPlayerGuide();
    }

    public void ShowCloningTips()
    {
        cloningArea.SetActive(true);
        normalArea.SetActive(false);
        DestroyPartnerFakeObj();
    }

	public void UpdateFellowInfo(Fellow fellow, bool bState=true)//bState true 出战  false 召回
    {
        if (fellow == null)
        {
            return;
        }

        if (fellow.IsValid() == false)
        {
            return;
        }
        cloningArea.SetActive(false);
        normalArea.SetActive(true);

        UpdateFellowInfo_Attr(fellow);
        UpdateFellowInfo_Star(fellow);
        UpdateFellowInfo_Skill(fellow);
		if(bState)
        	UpdateFellowInfo_Model(fellow);
        UpdateFellowInfo_Button(fellow);

        m_Fellow = fellow;
    }

    public void UpdateFellowInfo_Refresh()
    {
        if (m_Fellow == null || m_Fellow.IsValid() == false)
        {
            return;
        }

        UpdateFellowInfo_Attr(m_Fellow);
        UpdateFellowInfo_Star(m_Fellow);
        UpdateFellowInfo_Skill(m_Fellow);
        UpdateFellowInfo_Model(m_Fellow);
        UpdateFellowInfo_Button(m_Fellow);
    }

    void UpdateFellowInfo_Attr(Fellow fellow)
    {
        m_NameLabel.text = fellow.Name;
        m_CombatValueLabel.text = fellow.GetCombatValue().ToString();
        m_TypeLabel.text = FellowTool.GetFellowTypeText(fellow.GetFellowType(), fellow.GetEvolveLevel());
        m_BattleLevelLabel.text = fellow.GetCallLevel().ToString();
        m_LevelLabel.text = fellow.Level.ToString();
        m_ExpLabel.text = StrDictionary.GetClientDictionaryString("#{10316}", fellow.Exp, fellow.GetFellowLevelUpNeedExp());
        //m_GrowUpLabel.text = fellow.GrowUp.ToString();

        m_AttackLabel.text = fellow.GetAttackValue().ToString();
        m_HitLabel.text = fellow.GetHitValue().ToString();
        m_CriticalLabel.text = fellow.GetCriticalValue().ToString();
        m_GuardLabel.text = fellow.GetGuardValue().ToString();
        m_BlessLabel.text = fellow.GetBlessValue().ToString();

        if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY)
        {
            m_ProCreateLabel.text = fellow.ProcreateCount.ToString();
            m_LuckyLabel.text = fellow.Lucky.ToString();
            m_BabyAttr.SetActive(true);
            m_SkillArea.SetActive(false);
        }
        else
        {
            m_BabyAttr.SetActive(false);
            m_SkillArea.SetActive(true);
        }

        m_ElementPic.spriteName = FellowTool.GetFellowElementPic(fellow.ElementAttr);
       // m_QualityIcon.spriteName = FellowTool.GetFellowQualityIcon(fellow.Quality);
    }
	private Vector3 m_nPos1 = Vector3.zero;
	private Vector3 m_nPos2 = Vector3.zero;
	private void MoveButtonFun(bool bState=true)//当宠物为宝宝时不显示 升星和技能按钮 克隆按钮前移
	{
		m_nPos2 = PartnerFrameLogic.Instance ().m_TabBtn [2].transform.localPosition;
		m_nPos1 = PartnerFrameLogic.Instance ().m_TabBtn [1].transform.localPosition;
		if (bState) 
		{
			if (PartnerFrameLogic.Instance () != null) 
			{
				PartnerFrameLogic.Instance ().m_TabBtn [1].SetActive (false);
				PartnerFrameLogic.Instance ().m_TabBtn [2].SetActive (false);
			}
			PartnerFrameLogic.Instance ().m_TabBtn [3].transform.localPosition = m_nPos1;
		} 
		else 
		{
			if (PartnerFrameLogic.Instance () != null)
			{
				PartnerFrameLogic.Instance ().m_TabBtn [1].SetActive (true);
				PartnerFrameLogic.Instance ().m_TabBtn [2].SetActive (true);
			}

			PartnerFrameLogic.Instance ().m_TabBtn [3].transform.localPosition = new Vector3(m_nPos2.x*2-m_nPos1.x, m_nPos2.y, m_nPos2.z);
		}
	}
    void UpdateFellowInfo_Star(Fellow fellow)
    {
        if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY)
        {
            m_StarAttr.SetActive(false);
            m_BabyFellowNotice.SetActive(true);
			//MoveButtonFun(true);
        }
        else
        {
            m_StarAttr.SetActive(true);
            m_BabyFellowNotice.SetActive(false);
			//MoveButtonFun(false);
            int nStarCount = fellow.StarLevel > 0 ? ((fellow.StarLevel - 1) % 12) + 1 : 0;
            for (int i = 0; i < m_StarPic.Length; i++)
            {
                if (i < nStarCount)
                {
                    //m_StarPic[i].spriteName = FellowTool.GetChatFellowStarQualityPic(fellow.StarLevel);
                    //m_StarPic[i].MakePixelPerfect();
                   // m_StarPic[i].gameObject.SetActive(true);
					m_StarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel);
                }
                else
                {
                   // m_StarPic[i].gameObject.SetActive(false);
					m_StarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel-12);
                }
            }
        }        
    }

    void UpdateFellowInfo_Skill(Fellow fellow)
    {
        Utils.CleanGrid(m_TalentSkillGrid);
        Utils.CleanGrid(m_ElementSkillGrid);

        int index = 0;

        int nValidTalentSkillCount = 0;
        foreach(KeyValuePair<int, int> pair in fellow.TallentSkill)
        {
            int skillid = pair.Key;
            if (skillid <= 0)
            {
                break;
            }

            Tab_CabalFellowTallentSkill tabTallentSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabTallentSkill == null)
            {
                break;
            }

            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(m_PartnerSkillItem, m_TalentSkillGrid, itemName);
            if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
            {
                break;
            }

            skillitem.GetComponent<PartnerSkillItemLogic>().InitTallentSkill(skillid);
            AddSkillItemListener(skillitem);
            index += 1;

            nValidTalentSkillCount += 1;
        }

        int nValidElementSkillCount = 0;
        if (false == fellow.IsBabyFellow())
        {
            for (int i = 0; i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
            {
                int skillid = fellow.GetElementSkillId(i);
                if (skillid <= 0)
                {
                    continue;
                }

                Tab_CabalFellowElementSkill tabElementSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
                if (tabElementSkill == null)
                {
                    continue;
                }

                string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
                GameObject skillitem = Utils.BindObjToParent(m_PartnerSkillItem, m_ElementSkillGrid, itemName);
                if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
                {
                    continue;
                }

                skillitem.GetComponent<PartnerSkillItemLogic>().InitElementSkill(skillid);
                AddSkillItemListener(skillitem);
                index += 1;

                nValidElementSkillCount += 1;
            }
        }

        //int nEmptySlotCount = Fellow.FELLOW_TALLENTSKILL_OPENCOUNT + Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT - nValidTalentSkillCount - nValidElementSkillCount;
        int nEmptySlotCount = Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT - nValidElementSkillCount;
        int nLockSlotCount = Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length;
        if (false == fellow.IsBabyFellow())
        {
            for (int i = 0; i < Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length; i++)
            {
                if (fellow.Level >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[i])
                {
                    nLockSlotCount -= 1;
                }
            }
        }        

        for (int i = 0; i < nEmptySlotCount; i++)
        {
            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(m_PartnerSkillItem, m_ElementSkillGrid, itemName);
            if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
            {
                break;
            }

            skillitem.GetComponent<PartnerSkillItemLogic>().InitEmptySkill(i >= nEmptySlotCount - nLockSlotCount);
            AddSkillItemListener(skillitem);
            index += 1;
        }
        m_TalentSkillGrid.GetComponent<UIGrid>().Reposition();
        m_ElementSkillGrid.GetComponent<UIGrid>().Reposition();
    }

    void UpdateFellowInfo_Model(Fellow fellow)
    {
        if (m_FakeObjGameObject == null || m_PartnerFakeObj == null)
        {
            if (m_PartnerFakeObj != null)
            {
                DestroyPartnerFakeObj();
            }

            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(fellow.DataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            m_PartnerFakeObj = new FakeObject();
            if (m_PartnerFakeObj == null)
            {
                return;
            }

            m_PartnerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
            m_ModelDrag.ModelTrans = m_PartnerFakeObj.ObjAnim.transform;
        }
        else
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(fellow.DataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(fakeObjId, 0);
            if (FakeObjTable == null)
            {
                return;
            }

            Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
                FakeObjTable.FakeObjModel,
                Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
                FakeObjTable,
                m_PartnerFakeObj);
        }
    }

    void UpdateFellowInfo_Button(Fellow fellow)
    {
        switch ((FELLOWTYPE)fellow.GetFellowType())
        {
            case FELLOWTYPE.BABY:
                {
                    // remove xishui feature
                    //m_XiSuiButton.SetActive(true);
                    m_RebirtheButton.GetComponent<UIImageButton>().isEnabled = false;
                }
                break;
            case FELLOWTYPE.ADULT:
                {
                    m_XiSuiButton.SetActive(false);
                    m_RebirtheButton.GetComponent<UIImageButton>().isEnabled = true;
                }
                break;
            case FELLOWTYPE.ALIEN:
                {
                    m_XiSuiButton.SetActive(false);
                    m_RebirtheButton.GetComponent<UIImageButton>().isEnabled = false;
                }
                break;
            default:
                break;
        }

        m_BattleButton.SetActive(!fellow.Called);
        m_CallBackButton.SetActive(fellow.Called);

        m_LockButton.SetActive(!fellow.Locked);
        m_UnLockButton.SetActive(fellow.Locked);
    }

    private void DestroyPartnerFakeObj()
    {
        if (m_PartnerFakeObj != null)
        {
            m_PartnerFakeObj.Destroy();
            m_PartnerFakeObj = null;
        }
    }

    void OnChangeNameClick()
    {
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().OnChangeNameClick(m_Fellow);
        }
    }

    void OnLockClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (false == m_Fellow.IsValid())
        {
            return;
        }

        CG_LOCK_FELLOW pak = (CG_LOCK_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LOCK_FELLOW);
        pak.SetGuid(m_Fellow.Guid);
        pak.SendPacket();
    }

    void OnUnLockClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (false == m_Fellow.IsValid())
        {
            return;
        }

        CG_UNLOCK_FELLOW pak = (CG_UNLOCK_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_UNLOCK_FELLOW);
        pak.SetGuid(m_Fellow.Guid);
        pak.SendPacket();
    }

    void OnRebirthClick()
    {
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().OnRebirthClick(m_Fellow);
        }
    }

    void OnXiSuiClick()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10304}"), "", XiSuiOK);
    }

    void XiSuiOK()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (false == m_Fellow.IsValid())
        {
            return;
        }

        CG_FELLOW_XISUI pak = (CG_FELLOW_XISUI)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_XISUI);
        pak.SetGuid(m_Fellow.Guid);
        pak.SendPacket();
    }

    void OnBattleClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (false == m_Fellow.IsValid())
        {
            return;
        }

        CG_CALL_FELLOW pak = (CG_CALL_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CALL_FELLOW);
        pak.SetGuid(m_Fellow.Guid);
        pak.SendPacket();

        GameManager.gameManager.SoundManager.PlaySoundEffect(30);

        if (m_NewPlayerGuideFlag_Step == 1)
        {
            if (PartnerFrameLogic.Instance())
            {
                PartnerFrameLogic.Instance().NewPlayerGuide(1);
            }            
        }
    }

    void OnCallBackClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (false == m_Fellow.IsValid())
        {
            return;
        }

        CG_UNCALL_FELLOW pak = (CG_UNCALL_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_UNCALL_FELLOW);
        pak.SetGuid(m_Fellow.Guid);
        pak.SendPacket();
    }

    //void OnElementInfoClick()
    //{
    //    m_ElementInfoWindow.SetActive(!m_ElementInfoWindow.activeSelf);
    //}

    void OnStarLevelUpClick()
    {
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().ChangeToDevelop(
                PartnerFrameLogic_Develop.DEVELOPCONTENT.DEVELOPCONTENT_STAR, 
                m_Fellow != null ? m_Fellow.Guid : GlobeVar.INVALID_GUID);
        }
    }

    /// <summary>
    /// 弃用
    /// </summary>
    void OnSkillLevelUpClick()
    {
        if (PartnerFrameLogic.Instance() != null)
        {
            if (NewPlayerGuideFlag_Step == 2)
            {
                NewPlayerGuideFlag_Step = -1;
                PartnerFrameLogic.Instance().NewPlayerGuide(4);
            }

            PartnerFrameLogic.Instance().ChangeToDevelop(
                PartnerFrameLogic_Develop.DEVELOPCONTENT.DEVELOPCONTENT_SKILL,
                m_Fellow != null ? m_Fellow.Guid : GlobeVar.INVALID_GUID);
        }
    }

    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }
    void Check_NewPlayerGuide()
    {
        if (PartnerFrameLogic.Instance() == null)
        {
            return;
        }
        int nIndex = PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step;
        if (nIndex == 2)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(nIndex);
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuideFlag_Step = nIndex;
        if (nIndex == 1)
        {
            NewPlayerGuidLogic.OpenWindow(m_BattleButton, 150, 80, Utils.GetDicByID(11453), "left", 0, true, true);
        }
        else if (nIndex == 2)
        {
            //NewPlayerGuidLogic.OpenWindow(m_LevelUpButton, 100, 60, Utils.GetDicByID(10421), "left", 0, true, true);
        }
    }

    public void UpdateLevelUpRemindPoint()
    {
        if (m_LevelUpRemindPoint == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetPartnerSkillCanLevelUpCount() > 0)
        {
            m_LevelUpRemindPoint.gameObject.SetActive(true);
        }
        else
        {
            m_LevelUpRemindPoint.gameObject.SetActive(false);
        }
    }

    void AddSkillItemListener(GameObject go)
    {
        UIEventListener.Get(go).onClick = OnPressSkillItem;
    }

    void OnPressSkillItem(GameObject go)
    {
        PartnerSkillItemLogic item = go.GetComponent<PartnerSkillItemLogic>();
        if (!string.IsNullOrEmpty(item.toolTipMsg))
        {
            m_SkillTooltip.ShowTooltip(item.toolTipMsg);
        }
    }
}
