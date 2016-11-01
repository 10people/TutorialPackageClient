/********************************************************************
	创建时间:	2014/12/15 15:11
	全路径:		\Project\Client\Assets\MLDJ\Script\GUI\LivingSkillShenQiStuffLogic.cs
	创建人:		luoy
	功能说明:	神器配方材料显示
	修改记录:
*********************************************************************/

using System;
using Games.GlobeDefine;
using Games.Item;
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class LivingSkillShenQiStuffLogic : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;
    public UILabel m_NameLabel;
    public UILabel m_CountLabel;
    public GameObject m_SelBtGameObj;
    private int m_ItemID =-1;
    public int ItemID
    {
        get { return m_ItemID; }
    }
    private UInt64 m_ItemGuid =GlobeVar.INVALID_GUID;
    public System.UInt64 ItemGuid
    {
        get { return m_ItemGuid; }
    }
    
    private int m_RequireCount;
    
    // Use this for initialization
    void Start()
    {
  //      m_SelBtGameObj.SetActive(false);
    }

    public void InitInfo(int nItemID,UInt64 ItemGuid, int nRequireCount)
    {
        
        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(nItemID, 0);
        if (tabCommonItem == null)
        {
            return;
        }
        m_ItemID = nItemID;
        m_RequireCount = nRequireCount;
        m_ItemGuid = ItemGuid;
        m_NameLabel.text = tabCommonItem.Name;
        m_ItemSlot.InitInfo_Stuff(m_ItemID, ShowShenQiStuffTooltips);
        UpdateItemCountInfo();
    }
    public void InitInfoAfterSel(GameItem selItem)
    {
        if (selItem!=null && selItem.IsValid())
        {
            m_ItemID = selItem.DataID;
            m_ItemGuid = selItem.Guid;
            m_NameLabel.text = selItem.GetName();
            m_ItemSlot.InitInfo_Stuff(m_ItemID, ShowShenQiStuffTooltips);
            UpdateItemCountInfo();
        }
        
    }
    void UpdateItemCountInfo()
    {
        int BackPackItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(m_ItemID);
        string strColor = "";
        if (BackPackItemCount >= m_RequireCount)
        {
            strColor = "[32A100]";
        }
        else
        {
            strColor = "[FF2222]";
        }
        m_CountLabel.text = strColor + BackPackItemCount.ToString() + "[FFFFFF]/" + m_RequireCount.ToString();
        m_SelBtGameObj.SetActive(false);
        Tab_CommonItem line = TableManager.GetCommonItemByID(m_ItemID, 0);
        if (line != null)
        {
            if (line.ClassID == (int)ItemClass.EQUIP)
            {
                if (BackPackItemCount > m_RequireCount)
                {
                    m_SelBtGameObj.SetActive(true);
                }
            }
        }
    }

    void ShowShenQiStuffTooltips(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        GameItem item = new GameItem();
        item.DataID = m_ItemID;
        if (m_ItemGuid !=GlobeVar.INVALID_GUID)
        {
            item=GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ItemGuid);
        }
        if (item!=null && item.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
        }
    }


    void SelBtnClick()
    {
        if (LivingSkillLogic.Instance() != null && LivingSkillLogic.Instance().m_SelShenQiStuffObj !=null)
        {
            if (LivingSkillLogic.Instance().m_SelShenQiStuffObj.GetComponent<SelShenQiStuffLogic>())
            {
                LivingSkillLogic.Instance().m_SelShenQiStuffObj.GetComponent<SelShenQiStuffLogic>().InitNeedInf(this,m_ItemID); 
                LivingSkillLogic.Instance().m_SelShenQiStuffObj.SetActive(true);
            }
        }
    }
    public void HandleUpdateItem()
    {
        UInt64 itemGuid = GameManager.gameManager.PlayerDataPool.BackPack.GetItemGuidByDataID(m_ItemID);
        InitInfo(m_ItemID, itemGuid, m_RequireCount);
    }

}
