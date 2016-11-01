using UnityEngine;
using System.Collections;
using GCGame.Table;

public class GuildShopPreviewItem : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;

	public void Init(Tab_GuildShop tabShopItem)
    {
        if (tabShopItem == null)
        {
            return;
        }

        m_ItemSlot.InitInfo_Item(
            tabShopItem.ItemID, 
            ItemSlotLogic.OnClickOpenTips, 
            tabShopItem.StackSize > 1 ? tabShopItem.StackSize.ToString() : "", 
            tabShopItem.StackSize > 1);
    }
}
