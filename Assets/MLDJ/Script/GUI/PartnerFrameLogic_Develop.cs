using UnityEngine;
using System.Collections;
using Games.Fellow;
using Games.FakeObject;
using GCGame.Table;
using GCGame;
using System;
using Games.GlobeDefine;

public class PartnerFrameLogic_Develop : MonoBehaviour {

    private static PartnerFrameLogic_Develop m_Instance = null;
    public static PartnerFrameLogic_Develop Instance()
    {
        return m_Instance;
    }

    public enum DEVELOPCONTENT
    {
        DEVELOPCONTENT_STAR = 0,
        DEVELOPCONTENT_SKILL = 1,
    }

    public PartnerFrameLogic_Star m_PartnerFrameLogic_Star;
    public PartnerFrameLogic_Skill m_PartnerFrameLogic_Skill;    

    public TabController m_TabController;
    public UILabel m_NameLabel;
    public UILabel m_CombatValueLabel;
    public UILabel m_LevelLabel;
    public UILabel m_ExpLabel;
    public UISprite m_IconSprite;
    public UISprite m_QualitySprite;
  //  public UISprite m_QualityIcon;

    public GameObject m_ModelViewTopLeft;
    public GameObject m_ModelViewBottomRight;
    public ModelDragLogic m_ModelDrag;

    public GameObject m_Content;
    public GameObject m_EmptyContent;

    public static DEVELOPCONTENT m_DefaultTab = DEVELOPCONTENT.DEVELOPCONTENT_STAR;
    public static UInt64 m_DefaultFellowGuid = GlobeVar.INVALID_GUID;

    private DEVELOPCONTENT m_CurTab = DEVELOPCONTENT.DEVELOPCONTENT_STAR;
    private Fellow m_Fellow;
    private FakeObject m_PartnerFakeObj;
    private GameObject m_FakeObjGameObject;

    void OnEnable()
    {
        m_Instance = this;
        if (m_PartnerFrameLogic_Skill.gameObject.activeSelf)
        {
            m_CurTab = DEVELOPCONTENT.DEVELOPCONTENT_SKILL;
        }
        //Check_NewPlayerGuide();
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
//         m_TabController.delTabChanged = TabOnClick;
//         if (m_DefaultTab == DEVELOPCONTENT.DEVELOPCONTENT_STAR)
//         {
//             m_TabController.ChangeTab("Tab1-Star");
//         }
//         else if (m_DefaultTab == DEVELOPCONTENT.DEVELOPCONTENT_SKILL)
//         {
//             m_TabController.ChangeTab("Tab2-Skill");
//         }

        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_ModelViewTopLeft, m_ModelViewBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        if (PartnerFrameLogic.Instance() != null)
        {
			PartnerFrameLogic.Instance().InitPartnerList();
            // 可能从宠物属性界面点升星/技能升级切过来 而不是点大标签
            // 此时还要默认选中在属性界面选中的宠物 加载完列表后默认选中立即清空
            PartnerFrameLogic.Instance().InitPartnerList(m_DefaultFellowGuid, (fellow) =>
            {
                return (fellow.GetFellowType() != (int)FELLOWTYPE.BABY);
            });
            m_DefaultFellowGuid = GlobeVar.INVALID_GUID;
            bool hasShowFellow = PartnerFrameLogic.Instance().m_PartnerListGrid.transform.childCount > 0;
            m_Content.SetActive(hasShowFellow);
            m_EmptyContent.SetActive(!hasShowFellow);
            if (!hasShowFellow)
            {
                GameManager.gameManager.ActiveScene.HideFakeObj();
            }
        }
    }

    void TabOnClick(TabButton value)
    {
        if (value.name == "Tab1-Star")
        {
            m_CurTab = DEVELOPCONTENT.DEVELOPCONTENT_STAR;
            if (m_PartnerFrameLogic_Star != null && m_Fellow != null)
            {
                m_PartnerFrameLogic_Star.UpdateFellowInfo(m_Fellow);
            }
        }
        else if (value.name == "Tab2-Skill")
        {
            m_CurTab = DEVELOPCONTENT.DEVELOPCONTENT_SKILL;
            if (m_PartnerFrameLogic_Skill != null && m_Fellow != null)
            {
                m_PartnerFrameLogic_Skill.UpdateFellowInfo(m_Fellow);
            }
        }
    }

    public void UpdateFellowInfo(Fellow fellow)
    {
        if (fellow == null)
        {
            return;
        }

        if (fellow.IsValid() == false)
        {
            return;
        }

        UpdateFellowInfo_Attr(fellow);
        UpdateFellowInfo_Model(fellow);
        UpdateFellowInfo_Tab(fellow);

        m_Fellow = fellow;
    }

    public void UpdateFellowInfo_Refresh()
    {
        if (m_Fellow == null || m_Fellow.IsValid() == false)
        {
            return;
        }

        UpdateFellowInfo_Attr(m_Fellow);
        UpdateFellowInfo_Model(m_Fellow);
        UpdateFellowInfo_Tab(m_Fellow);
    }

    void UpdateFellowInfo_Attr(Fellow fellow)
    {
        m_NameLabel.text = fellow.Name;
        m_IconSprite.spriteName = fellow.GetIcon();
        m_QualitySprite.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
       // m_QualityIcon.spriteName = FellowTool.GetFellowQualityIcon(fellow.Quality);
        m_CombatValueLabel.text = fellow.GetCombatValue().ToString();
        m_LevelLabel.text = fellow.Level.ToString();
        m_ExpLabel.text = StrDictionary.GetClientDictionaryString("#{10316}", fellow.Exp, fellow.GetFellowLevelUpNeedExp());
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

    void UpdateFellowInfo_Tab(Fellow fellow)
    {
        if (m_CurTab == DEVELOPCONTENT.DEVELOPCONTENT_STAR)
        {
            if (m_PartnerFrameLogic_Star != null)
            {
                m_PartnerFrameLogic_Star.UpdateFellowInfo(fellow);
            }
        }
        else if (m_CurTab == DEVELOPCONTENT.DEVELOPCONTENT_SKILL)
        {
            if (m_PartnerFrameLogic_Skill != null)
            {
                m_PartnerFrameLogic_Skill.UpdateFellowInfo(fellow);
            }
        }
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

    public GameObject m_TalentLevelUpButton;
    public GameObject m_OkButton;
    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }
    void Check_NewPlayerGuide()
    {
        if (PartnerFrameLogic.Instance() && PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 4)
        {
            NewPlayerGuide(1);
        }
    }
    public void NewPlayerGuide(int nIndex)
    {
        NewPlayerGuideFlag_Step = nIndex;
        switch(nIndex)
        {
            case 1:
                PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step = -1;
                NewPlayerGuidLogic.OpenWindow(m_TalentLevelUpButton, 100, 60, Utils.GetDicByID(10422), "left", 0, true, true);
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_OkButton, 200, 60, Utils.GetDicByID(10423), "topleft", 0, true, true);
                break;
        }
    }
}
