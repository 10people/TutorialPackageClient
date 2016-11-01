using UnityEngine;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Item;

public class StoryCopySceneItem : MonoBehaviour
{
    private int m_nID;
    public UISprite m_Icon;
    public UISprite m_Quality;
    public UISprite m_Disable;
    public UILabel m_Num;
    public GameObject m_GotLabel;

    private const string coinicon = "jinbi";
    private const string yuanbaoicon = "yuanbao";
    private const string bindyuanbaoicon = "bdyuanbao";
//	private StoryCopyAwardItemType m_ItemType;

    void Start()
    {
    }

	public void SetShowItem(int nID, int nNum, bool bGet, bool bPreGot)
    {        
        //普通物品
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(nID, 0);
        if ( tBook != null && nNum >= 0 )
        {
            m_nID = nID;
            m_Icon.spriteName = tBook.Icon;

            int nQualiltyIndex = tBook.Quality - 1;
            if (nQualiltyIndex >= 0 && nQualiltyIndex < GlobeVar.QualityColorGrid.Length)
            {
                m_Quality.spriteName = GlobeVar.QualityColorGrid[nQualiltyIndex];
            }

            m_Num.text = nNum.ToString();
        }
        if (m_GotLabel != null)
        {
			m_GotLabel.SetActive(bPreGot);
        }
		gameObject.SetActive(true);
    }

	public void SetRewardItem(StoryCopyAwardItemType itemType, int id, int count)
	{
		Tab_CommonItem commonItem = null;
		int nQualiltyIndex = 0;
		if (itemType == StoryCopyAwardItemType.ITEM_ITEM)
		{
			commonItem = TableManager.GetCommonItemByID(id, 0);
			if (commonItem == null)
			{
				return;
			}
			nQualiltyIndex = commonItem.Quality - 1;
		}

		gameObject.SetActive(true);
//		m_ItemType = itemType;
		m_nID = id;
		m_Num.text = count.ToString();
		m_Quality.spriteName = GlobeVar.QualityColorGrid[nQualiltyIndex];
		switch (itemType)
		{
		case StoryCopyAwardItemType.ITEM_EXP:
			m_Icon.spriteName = "jingyan";
			break;
		case StoryCopyAwardItemType.ITEM_FELLOWEXP:
			m_Icon.spriteName = "fellowexp";
			break;
		case StoryCopyAwardItemType.ITEM_MONEY:
			m_Icon.spriteName = "jinbi";
			break;
		case StoryCopyAwardItemType.ITEM_BDYUANBAO:
			m_Icon.spriteName = "bdyuanbao";
			break;
		case StoryCopyAwardItemType.ITEM_ITEM:
			m_Icon.spriteName = commonItem.Icon;
			break;
		case StoryCopyAwardItemType.ITEM_YUANBAO:
			m_Icon.spriteName = "yuanbao";
			break;
		}
	}

	public void OnDropItemClicked()
	{
//		int nShowID = -1;
//		if (obj.name == "DropItem1")
//			nShowID = m_nDropItemID1;
//		else if (obj.name == "DropItem2")
//			nShowID = m_nDropItemID2;
//		else if (obj.name == "DropItem3")
//			nShowID = m_nDropItemID3;
//		else
//			return;
		
		GameItem item = new GameItem();
		item.DataID = m_nID;
		if (item.IsEquipMent())
		{
			EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
		}
		else
		{
			ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
		}
	}

    //void SetMoney(int nMoneyType, int nNum)
    //{
    //    if (nMoneyType > (int)MONEYTYPE.MONEYTYPE_INVALID && nMoneyType < (int)MONEYTYPE.MONEYTYPE_TYPECOUNT)
    //    {
    //        m_ID = nMoneyType;
    //        m_Quality.spriteName = "";
    //        if (m_ID == (int)MONEYTYPE.MONEYTYPE_COIN)
    //        {
    //            m_Icon.spriteName = coinicon;
    //        }
    //        else if (m_ID == (int)MONEYTYPE.MONEYTYPE_YUANBAO)
    //        {
    //            m_Icon.spriteName = yuanbaoicon;
    //        }
    //        else if (m_ID == (int)MONEYTYPE.MONEYTYPE_YUANBAO_BIND)
    //        {
    //            m_Icon.spriteName = bindyuanbaoicon;
    //        }
    //        m_Num.text = nNum.ToString();
    //    }
    //}
}


