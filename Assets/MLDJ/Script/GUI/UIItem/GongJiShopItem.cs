using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;

public class GongJiShopItem : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;        //物品逻辑
    public UILabel m_PriceContent;          //价格
    public UILabel m_NameLabel;             //商品名称

    private int m_ShopTabID;   // 商店ID
    public int ShopTabID
    {
        get { return m_ShopTabID; }
        set {
            m_ShopTabID = value;
            UpDateUI(m_ShopTabID);
        }
    }

    private const int m_nShopItemChangeMin = 1;    // 一次兑换商品最小数量
    private const int m_nShopItemChangeMax = 99;   // 一次兑换商品最大数量

    private int m_nPrice;
    public int Price
    {
        get { return m_nPrice; }
        set { 
            m_nPrice = value;

            if (null != m_PriceContent)
            {
                m_PriceContent.text = m_nPrice.ToString();
            }
        }
    }
    private int m_nConsumItemID;
    public int ConsumItemID
    {
        get { return m_nConsumItemID; }
        set { m_nConsumItemID = value; }
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(int nShopTabID)
    {
        ShopTabID = nShopTabID;
    }

    void UpDateUI(int nShopTabID)
    {
        Tab_GongJiShop ShopTab = TableManager.GetGongJiShopByID(nShopTabID, 0);
        if (ShopTab == null)
        {
            return;
        }

        Price = ShopTab.Price;
        ConsumItemID = ShopTab.ConsumItemID;

        Tab_CommonItem ShopItem = TableManager.GetCommonItemByID(ShopTab.ItemID, 0);
        if (ShopItem == null)
        {
            return;
        }

        m_ItemSlot.InitInfo(ItemSlotLogic.SLOT_TYPE.TYPE_ITEM, ShopTab.ItemID, ItemOnClick);

        if (null != m_NameLabel)
        {
            m_NameLabel.text = ShopItem.Name;
        }
    }

    void ItemOnClick(int nItemID, ItemSlotLogic.SLOT_TYPE eSlotType, string strSlotName)
    {
        GameItem item = new GameItem();
        item.DataID = nItemID;

        EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.InfoCompare);
    }

    void ButtonBuy()
    {
        NumChooseController.OpenWindow(m_nShopItemChangeMin, m_nShopItemChangeMax,
            StrDictionary.GetClientDictionaryString("#{5315}"), BoxBuyItemOK, 1);
    }

    void BoxBuyItemOK(int nCurNum)
    {
        //nCurNum数量判断
        if (nCurNum < m_nShopItemChangeMin || nCurNum > m_nShopItemChangeMax)
        {
            return;
        }

        //背包判断
        if (GameManager.gameManager.PlayerDataPool.BackPack.GetCanContainerSize() <= 0)
        {
            GUIData.AddNotifyData2Client(false, "#{1903}");
            return;
        }

        //判断是否够
        int nRealCost = Price * nCurNum;
        if (nRealCost > 0)
        {
            int GongJiItemNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(ConsumItemID);
            if (nRealCost > GongJiItemNum)
            {
                //不够，返回
                GUIData.AddNotifyData2Client(false, "#{5295}");
                return;
            }
        }
        else
        {
            //可能溢出，直接返回
            return;
        }

        //发送购买消息包
        CG_GONGJISHOP_BUY msg = (CG_GONGJISHOP_BUY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GONGJISHOP_BUY);
        msg.GoodID = ShopTabID;
        msg.BuyNum = nCurNum;
        msg.SendPacket();
    }
}
