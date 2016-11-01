using Games.GlobeDefine;
using Games.Item;
using UnityEngine;
using System.Collections;
using GCGame.Table;

public class LivingSkillFormulaLogic : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;
    public UILabel m_NameLabel;
    //public UILabel m_NameLabel2;
    public UILabel m_InfoLabel;
    public GameObject m_ChosoeFrame;    

    private int m_FormulaID;
    public int FormulaID
    {
        get { return m_FormulaID; }
    }

	// Use this for initialization
	void Start () {
	
	}

    public void InitInfo(int nFormulaID)
    {
        Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(nFormulaID, 0);
        if (tabLivingSkill == null)
        {
            return;
        }

        m_FormulaID = nFormulaID;

        m_NameLabel.text = tabLivingSkill.Name;
       // m_NameLabel2.text = tabLivingSkill.Name;
        m_InfoLabel.text = tabLivingSkill.Info;
        m_ItemSlot.InitInfo_Formula(m_FormulaID);
        UpdateEnableState();
    }

    public void InitInfoForStaticProduct(int nFormulaID)
    {
        Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(nFormulaID, 0);
        if (tabLivingSkill == null)
        {
            return;
        }
        m_FormulaID = nFormulaID;
        m_NameLabel.text = tabLivingSkill.Name;
        //m_NameLabel2.text = tabLivingSkill.Name;
        m_InfoLabel.text = tabLivingSkill.Info;
        m_ItemSlot.InitInfo_Item(tabLivingSkill.StaticProductItemId, ShowStaticProductTips);
        UpdateEnableState();
    }

    void ShowStaticProductTips(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        GameItem item = new GameItem();
        item.DataID = nItemID;
        if (item.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.InfoCompare);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
        }
    }
    public void ChooseFormula()
    {
        if (LivingSkillLogic.Instance() != null)
        {
            LivingSkillLogic.Instance().OnFormulaChoose(m_FormulaID);
        }
        m_ChosoeFrame.SetActive(true);
    }

    public void ChooseCancel()
    {
        m_ChosoeFrame.SetActive(false);
    }

    void UpdateEnableState()
    {
        Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(m_FormulaID, 0);
        if (tabLivingSkill == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < tabLivingSkill.OpenLevel)
        {
            m_ItemSlot.ItemSlotDisable();
        }
        else
        {
            m_ItemSlot.ItemSlotEnable();
        }
    }
}
