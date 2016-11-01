using UnityEngine;
using System.Collections;
using Games.Fellow;
using GCGame.Table;
using GCGame;
using System.Collections.Generic;
using Games.FakeObject;

public class ChatInfoLinkFellowTipLogic : MonoBehaviour
{
    public UILabel m_LevelLabel;
    public UISprite m_headPic;
    public UILabel m_NameLabel;
    public UILabel m_CombatValueLabel;
    public UISprite m_ElementPic;
    public UILabel m_TypeLabel;
    public UILabel m_BattleLevelLabel;
    public UILabel m_AttackLabel;
    public UILabel m_HitLabel;
    public UILabel m_CriticalLabel;
    public UILabel m_GuardLabel;
    public UILabel m_BlessLabel;
    public UILabel m_AlienLabel;
    public UILabel m_ProCreateLabel;
    public UILabel m_LuckyLabel;
    //public UILabel m_GrowUpLabel;
    public GameObject m_BabyAttr;
    public GameObject m_ElementAttr;
    public GameObject m_AlienAttr;

    public GameObject m_StarAttr;

    public GameObject m_SkillItemGrid;
    public GameObject m_PartnerSkillItem;

    private static Fellow m_fellow = null;

    private static ChatInfoLinkFellowTipLogic m_instance = null;
    public static ChatInfoLinkFellowTipLogic Instance()
    {
        return m_instance;
    }
    void Awake()
    {
        m_instance = this;
    }

    void OnDestroy()
    {
        m_instance = null;

        m_fellow = null;
    }

    public static void ShowTooltips(Fellow fellow)
    {
        UIManager.ShowUI(UIInfo.FellowTooltipsRoot, OnShowFellowTip, fellow);
    }

    static void OnShowFellowTip(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }

        Fellow fellow = param as Fellow;

        if (fellow == null || false == fellow.IsValid())
        {
            return;
        }

        if (ChatInfoLinkFellowTipLogic.Instance() != null)
        {
            ChatInfoLinkFellowTipLogic.Instance().SetMyFellow(fellow);
        }
    }

    public void SetMyFellow(Fellow fellow)
    {
        m_fellow = fellow;
        if (m_fellow != null)
        {
            UpdateFellowInfo(m_fellow);
        }
    }
    public void UpdateFellowInfo(Fellow fellow)
    {
        UpdateFellow_AttrInfo(fellow);
        UpdateFellow_SkillInfo(fellow);
        UpdateFellowInfo_Star(fellow);
    }
    public void UpdateFellow_AttrInfo(Fellow fellow)
    {
        m_headPic.spriteName = fellow.GetIcon();
        m_NameLabel.text = fellow.Name;
        m_CombatValueLabel.text = fellow.CombatValue.ToString();
        if (fellow.GetFellowType() == (int)FELLOWTYPE.ALIEN)
        {
            m_TypeLabel.text = FellowTool.GetFellowTypeText(fellow.GetFellowType(), fellow.GetEvolveLevel());
        }
        else
        {
            m_TypeLabel.text = FellowTool.GetFellowTypeText(fellow.GetFellowType());
        }
        m_BattleLevelLabel.text = fellow.GetCallLevel().ToString();
        m_LevelLabel.text = "LV" + fellow.Level.ToString();
       // m_ExpLabel.text = StrDictionary.GetClientDictionaryString("#{10316}", fellow.Exp, fellow.GetFellowLevelUpNeedExp());
       // m_GrowUpLabel.text = fellow.GrowUp.ToString();

        m_AttackLabel.text = fellow.CombatAttr_Attack.ToString();
        m_HitLabel.text = fellow.CombatAttr_Hit.ToString();
        m_CriticalLabel.text = fellow.CombatAttr_Critical.ToString();
        m_GuardLabel.text = fellow.CombatAttr_Guard.ToString();
        m_BlessLabel.text = fellow.CombatAttr_Bless.ToString();

        if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY)
        {
            m_ProCreateLabel.text = fellow.ProcreateCount.ToString();
            m_LuckyLabel.text = fellow.Lucky.ToString();
            m_BabyAttr.SetActive(true);
        }
        else
        {
            m_BabyAttr.SetActive(false);
        }

        if (fellow.GetFellowType() == (int)FELLOWTYPE.ADULT || fellow.GetFellowType() == (int)FELLOWTYPE.ALIEN)
        {
            m_ElementPic.spriteName = FellowTool.GetFellowElementPic(fellow.ElementAttr);
            m_ElementAttr.SetActive(true);
        }
        else
        {
            m_ElementAttr.SetActive(false);
        }

        if (fellow.GetFellowType() == (int)FELLOWTYPE.ALIEN)
        {
            m_AlienLabel.text = fellow.GetEvolveLevel().ToString();
            m_AlienAttr.SetActive(true);
        }
        else
        {
            m_AlienAttr.SetActive(false);
        }

    }

    public void UpdateFellow_SkillInfo(Fellow fellow)
    {
        Utils.CleanGrid(m_SkillItemGrid);

        int index = 0;

        foreach (KeyValuePair<int, int> pair in fellow.TallentSkill)
        {
            int skillid = pair.Key;
            if (skillid <= 0)
            {
                continue;
            }

            Tab_CabalFellowTallentSkill tabTallentSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabTallentSkill == null)
            {
                continue;
            }

            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(m_PartnerSkillItem, m_SkillItemGrid, itemName);
            if (skillitem == null || skillitem.GetComponent<ChatInfoLinkFellowItemLogic>() == null)
            {
                continue;
            }

            skillitem.GetComponent<ChatInfoLinkFellowItemLogic>().InitTallentSkill(skillid);

            index += 1;
        }

        for (int i = 0; i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
        {
            int skillid = fellow.GetElementSkillId(i);
            if (skillid <= 0)
            {
                break;
            }

            Tab_CabalFellowElementSkill tabElementSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabElementSkill == null)
            {
                break;
            }

            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(m_PartnerSkillItem, m_SkillItemGrid, itemName);
            if (skillitem == null || skillitem.GetComponent<ChatInfoLinkFellowItemLogic>() == null)
            {
                break;
            }

            skillitem.GetComponent<ChatInfoLinkFellowItemLogic>().InitElementSkill(skillid);

            index += 1;
        }

        if (m_SkillItemGrid.GetComponent<UIGrid>() != null)
        {
            m_SkillItemGrid.GetComponent<UIGrid>().Reposition();
        }
    }

    void UpdateFellowInfo_Star(Fellow fellow)
    {
        if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY)
        {
            m_StarAttr.SetActive(false);
        }
        else
        {
            TooltipsEquipStar star = m_StarAttr.GetComponent<TooltipsEquipStar>();
            star.ShowStar(fellow.StarLevel);
            m_StarAttr.SetActive(true);
        }
    }

    public void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.FellowTooltipsRoot);
    }
}
