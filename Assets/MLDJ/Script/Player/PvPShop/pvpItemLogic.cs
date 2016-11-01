using UnityEngine;
using System.Collections;
using Games.Item;
using GCGame.Table;
using Games.GlobeDefine;

public class pvpItemLogic : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    //====================================
    public UILabel m_ItemName;
    public UILabel m_ItemCount;
    public UILabel m_ItemPrice;
    public UISprite m_ItemIcon;
    public GameObject m_SellOut;
    public UISprite m_ItemQuality;

    //=====================================
    private int m_itemId;
//    private GameItem m_item = new GameItem();
    public int ItemId
    {
        set { m_itemId = value; }
        get { return m_itemId;  }
    }
    private int m_BlockId ;
    public int BlockId
    {
        set { m_BlockId = value ; }
        get { return m_BlockId; }
    }
    public void setPvpItemData(string Name ,int itemCount ,int itemPrice ,string itemicon ,int leftCount ,int pvpid ,int blockId, int quality)
    {
        m_ItemName.text = Name;
        m_ItemCount.text = leftCount.ToString();
        m_ItemPrice.text = itemPrice.ToString();
        m_ItemIcon.spriteName = itemicon;
        m_ItemQuality.spriteName = GlobeVar.QualityColorGrid[quality - 1];

        if (leftCount <= 0)
            m_SellOut.SetActive(true);
        else
            m_SellOut.SetActive(false);

       // m_itemId  = itemId;
       // m_BlockId = blockId;

       // m_item.DataID = itemId;

    }
    public void onClick()
    {
        int id = int.Parse(gameObject.name);
        Tab_PvpShop pvpshop = TableManager.GetPvpShopByID(id,0);
        if (pvpshop == null)
            return;

        Tab_CommonItem line = TableManager.GetCommonItemByID(pvpshop.ItemId, 0);
        if (line != null)
        {
            if (line.ClassID == (int)ItemClass.EQUIP)
            {
                EquipTooltipsLogic.ShowEquipTooltip(pvpshop.ItemId, EquipTooltipsLogic.ShowType.Info);
            }

            else
            {
                ItemTooltipsLogic.ShowItemTooltip(pvpshop.ItemId, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }

    public void onClickBuy()
    {
		if(m_SellOut.activeSelf == true)
		{
			return;
		}
        int id    = int.Parse(gameObject.name);
        int money = int.Parse(m_ItemPrice.text);
        if ( PvpShopLogic.Instance() != null)
        {
            PvpShopLogic.Instance().BuyItem(id,money);
        }
    }
}
