using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Item;

public class ShoppingListItem : MonoBehaviour {

    public UILabel m_CountLabel;
    public GameObject m_DeleteButton;
    public ItemSlotLogic m_ItemSlot;
    public UILabel m_NameLabel;

    private int m_GoodsID = GlobeVar.INVALID_ID;
    private int m_GoodsCount = GlobeVar.INVALID_ID;
    private PresentRootLogic.TAB_INDEX m_Type;
    private int m_GoodsIndex = GlobeVar.INVALID_ID;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(int goodsid, int count, PresentRootLogic.TAB_INDEX tab, int index = GlobeVar.INVALID_ID)
    {
        m_GoodsID = goodsid;
        m_GoodsCount = count;
        m_Type = tab;
        m_GoodsIndex = index;

        Tab_YuanBaoShop tabGood = TableManager.GetYuanBaoShopByID(goodsid, 0);
        if (tabGood != null && tabGood.ItemType == (int)YuanBaoShopItemLogic.ITEM_TYPE.TYPE_ITEM)
        {
            int itemid = tabGood.ItemID;
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(itemid, 0);
            if (tabItem != null)
            {
                m_ItemSlot.InitInfo_Item(tabItem.Id, GoodsOnClick, tabGood.Num.ToString(), true);
                m_CountLabel.text = count.ToString();
                m_DeleteButton.SetActive(true);
                m_NameLabel.text = tabItem.Name;
            }            
        }

        if (tab == PresentRootLogic.TAB_INDEX.TAB_SHOPPINGCART)
        {
            m_DeleteButton.SetActive(true);
        }
        else
        {
            m_DeleteButton.SetActive(false);
        }
    }

    void GoodsOnClick(int nItemID, ItemSlotLogic.SLOT_TYPE eSlotType, string strSlotName)
    {
        if (eSlotType == ItemSlotLogic.SLOT_TYPE.TYPE_ITEM)
        {
            GameItem item = new GameItem();
            item.DataID = nItemID;
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }

    void DelFromShoppingCart()
    {
        if (m_Type != PresentRootLogic.TAB_INDEX.TAB_SHOPPINGCART)
        {
            return;
        }

        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4793}"), "", DelOK);
    }

    void DelOK()
    {
        if (PresentRootLogic.Instance() != null)
        {
            PresentRootLogic.Instance().OnDelFromShoppingCart(m_GoodsIndex);
        }
    }
}
