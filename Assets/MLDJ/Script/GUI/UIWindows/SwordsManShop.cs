using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;
using Games.SwordsMan;
/********************************************************************
    created:	2014-06-25
    filename: 	SwordsManShop.cs
    author:		grx
    purpose:	侠客吞噬
*********************************************************************/

public class SwordsManShop : MonoBehaviour
{
    enum TAB_PAGE
    {
        TAB_PAGE_DAXIA =1,  //大侠
        TAB_PAGE_JUXIA,  //巨侠
    }
    public GameObject m_ShopSwordsManGrid;
    public UILabel m_LableScore;
    public GameObject[] m_TabPage_HighLight;
    public UIImageButton m_BuyButton;

    private List<PriorityInfo> m_DaXiaListPriority = new List<PriorityInfo>();
    private List<PriorityInfo> m_JuXiaListPriority = new List<PriorityInfo>();

    private SwordsManShopItem m_SelectShopSwordsManItem;
    private TAB_PAGE m_CurTabPage = TAB_PAGE.TAB_PAGE_DAXIA;

    static private SwordsManShop m_Instance = null;
    public static SwordsManShop Instance()
    {
        return m_Instance;
    }
    void FliterSortShopItem()
    {
        if (m_DaXiaListPriority != null && m_DaXiaListPriority.Count <= 0)
        {
            Dictionary<int, List<Tab_SwordsManAttr>> allitemList = TableManager.GetSwordsManAttr();
            Dictionary<int, List<Tab_SwordsManScoreShop>> ShopitemList = TableManager.GetSwordsManScoreShop();
            for (int i = 0; i < allitemList.Count; i++)
            {
                if (false == ShopitemList.ContainsKey(i))
                {
                    continue;
                }
                Tab_SwordsManScoreShop ShopSwordsManTable = ShopitemList[i][0];
                if (null == ShopSwordsManTable)
                {
                    LogModule.ErrorLog("FliterSortShopItem::ShopSwordsManTable is null");
                    continue;
                }
                if (ShopSwordsManTable.Page != (int)TAB_PAGE.TAB_PAGE_DAXIA)
                {
                    continue;
                }
                m_DaXiaListPriority.Add(new PriorityInfo((short)ShopSwordsManTable.Id, (short)ShopSwordsManTable.ShowPirority));
            }
            m_DaXiaListPriority.Sort(new PriorityInfoCompare());
        }

        if (m_JuXiaListPriority != null && m_JuXiaListPriority.Count <= 0)
        {
            Dictionary<int, List<Tab_SwordsManAttr>> allitemList = TableManager.GetSwordsManAttr();
            Dictionary<int, List<Tab_SwordsManScoreShop>> ShopitemList = TableManager.GetSwordsManScoreShop();
            for (int i = 0; i < allitemList.Count; i++)
            {
                if (false == ShopitemList.ContainsKey(i))
                {
                    continue;
                }
                Tab_SwordsManScoreShop ShopSwordsManTable = ShopitemList[i][0];
                if (null == ShopSwordsManTable)
                {
                    LogModule.ErrorLog("FliterSortShopItem::ShopSwordsManTable is null");
                    continue;
                }
                if (ShopSwordsManTable.Page != (int)TAB_PAGE.TAB_PAGE_JUXIA)
                {
                    continue;
                }
                m_JuXiaListPriority.Add(new PriorityInfo((short)ShopSwordsManTable.Id, (short)ShopSwordsManTable.ShowPirority));            
            }
            m_JuXiaListPriority.Sort(new PriorityInfoCompare());
        }

    }
    void OnEnable()
    {
        m_Instance = this;
        FliterSortShopItem();
        InitShop();
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    /// <summary>
    /// 
    /// </summary>
    void InitShop()
    {
        m_SelectShopSwordsManItem = null;
        if (m_LableScore != null)
        {
            m_LableScore.text = GameManager.gameManager.PlayerDataPool.SwordsManScore.ToString();
        }
        SetSelectTable(TAB_PAGE.TAB_PAGE_DAXIA);
    }

    /// <summary>
    /// 
    /// </summary>
    void LoadShopSwordsMan()
    {
        if (null == m_ShopSwordsManGrid)
        {
            LogModule.ErrorLog("LoadShopSwordsMan::m_ShopSwordsManGrid is null");
            return;
        }
        UIManager.LoadItem(UIInfo.SwordsManShopItem, OnLoadShopSwordsMan);
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="resObj"></param>
    /// <param name="param"></param>
    void OnLoadShopSwordsMan(GameObject resObj, object param)
    {
        if (null == m_ShopSwordsManGrid)
        {
            LogModule.ErrorLog("OnLoadShopSwordsMan::m_ShopSwordsManGrid is null");
            return;
        }
        if (null == m_DaXiaListPriority)
        {
            LogModule.ErrorLog("OnLoadShopSwordsMan::m_DaXiaListPriority is null");
            return;
        }
        if (null == m_JuXiaListPriority)
        {
            LogModule.ErrorLog("OnLoadShopSwordsMan::m_JuXiaListPriority is null");
            return;
        }
        Utils.CleanGrid(m_ShopSwordsManGrid.gameObject);

        if (m_CurTabPage == TAB_PAGE.TAB_PAGE_DAXIA)
        {
            for (int i = 0; i < m_DaXiaListPriority.Count; i++)
            {           
                Tab_SwordsManScoreShop ShopSwordsManTable = TableManager.GetSwordsManScoreShopByID(m_DaXiaListPriority[i].GoodsId, 0);
                if (null == ShopSwordsManTable)
                {
                    LogModule.ErrorLog("OnLoadShopSwordsMan::ShopSwordsManTable is null");
                    continue;
                }
                SwordsManShopItem oShopSwordsManItem = SwordsManShopItem.CreateItem(m_ShopSwordsManGrid, resObj, this);
                if (null == oShopSwordsManItem)
                {
                    LogModule.ErrorLog("OnLoadShopSwordsMan::oShopSwordsManItem is null");
                   continue;
                }
                oShopSwordsManItem.SetShopSwordsMan(ShopSwordsManTable);
            }
        }
        else if (m_CurTabPage == TAB_PAGE.TAB_PAGE_JUXIA)
        {
            for (int i = 0; i < m_JuXiaListPriority.Count; i++)
            {
                Tab_SwordsManScoreShop ShopSwordsManTable = TableManager.GetSwordsManScoreShopByID(m_JuXiaListPriority[i].GoodsId, 0);
                if (null == ShopSwordsManTable)
                {
                    LogModule.ErrorLog("OnLoadShopSwordsMan::ShopSwordsManTable is null");
                    continue;
                }
                SwordsManShopItem oShopSwordsManItem = SwordsManShopItem.CreateItem(m_ShopSwordsManGrid, resObj, this);
                if (null == oShopSwordsManItem)
                {
                    LogModule.ErrorLog("OnLoadShopSwordsMan::oShopSwordsManItem is null");
                    continue;
                }
                oShopSwordsManItem.SetShopSwordsMan(ShopSwordsManTable);
            }
        }
        m_ShopSwordsManGrid.GetComponent<UIGrid>().repositionNow = true;
        m_ShopSwordsManGrid.GetComponent<UITopGrid>().recenterTopNow = true;
    }

    public void OnShopSwordsManClick( SwordsManShopItem oShopSwordsManItem)
    {
        if (null == oShopSwordsManItem)
        {
            LogModule.ErrorLog("OnShopSwordsManClick::oShopSwordsManItem is null");
            return;
        }
        if (m_SelectShopSwordsManItem != null)
        {
            m_SelectShopSwordsManItem.OnCancelSelectShopItem();
        }
        m_SelectShopSwordsManItem = oShopSwordsManItem;
        m_SelectShopSwordsManItem.OnSelectShopItem();
        if (m_BuyButton != null )
        {
            if (GameManager.gameManager.PlayerDataPool.SwordsManScore >= oShopSwordsManItem.Price)
            {
                m_BuyButton.isEnabled = true;
            }
            else
            {
                m_BuyButton.isEnabled = false;
            }
        }
    }

    public void OnCloseClick()
    {
        m_SelectShopSwordsManItem = null;
        UIManager.CloseUI(UIInfo.SwordsManShopRoot);
        UIManager.ShowUI(UIInfo.SwordsManRoot);
    }

    void OnClickBuy()
    {
        if (null == m_SelectShopSwordsManItem)
        {
            //MessageBoxLogic.OpenOKBox("请先选择想要购买的侠客", "");
            MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{2810}"), "");
            return; 
        }
        int nSiize = GameManager.gameManager.PlayerDataPool.SwordsManBackPack.GetEmptyContainerSize();
        if (nSiize <= 0)
        {
            MessageBoxLogic.OpenOKBox(2488, 1000);
        }

        CG_BUY_SWORDSMAN packet = (CG_BUY_SWORDSMAN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_SWORDSMAN);
        packet.Swordsmanid = m_SelectShopSwordsManItem.SwordsManDataID;
        packet.SendPacket();
    }

    /// <summary>
    /// 
    /// </summary>
    void OnTabClick_daxia()
    {
        SetSelectTable(TAB_PAGE.TAB_PAGE_DAXIA);
    }

    /// <summary>
    /// 
    /// </summary>
    void OnTabClick_juxia()
    {
        SetSelectTable(TAB_PAGE.TAB_PAGE_JUXIA);
    }

    void SetSelectTable(TAB_PAGE page)
    {
        m_CurTabPage = page;
        for (int i = 0; i < m_TabPage_HighLight.Length; i++)
        {
            m_TabPage_HighLight[i].SetActive(false);
        }
        if ((int)m_CurTabPage > 0 && (int)m_CurTabPage <= m_TabPage_HighLight.Length)
        {
            m_TabPage_HighLight[(int)m_CurTabPage-1].SetActive(true);
        }
        LoadShopSwordsMan();
    }
}