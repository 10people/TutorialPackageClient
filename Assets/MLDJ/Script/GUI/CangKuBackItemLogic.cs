using UnityEngine;
using System.Collections;
using Games.Item;

public class CangKuBackItemLogic : MonoBehaviour {

    public UISprite m_ArrowUpSprite;
    public UISprite m_ArrowDownSprite;
    public ItemSlotLogic m_ItemSlot;

    private GameItem m_Item = null;
    bool mIsShowInfo = false;

	void Start () 
    {
        GetComponent<UILongPressButton>().OnLongPress = ShowItemInfo;
	}

    public void UpdateItem(GameItem item)
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        m_ItemSlot.InitInfo_Item(item.DataID, null, item.StackCount.ToString());
        m_Item = item;
    }

    public void UpdateEmpty()
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        m_ItemSlot.ClearInfo();
        m_Item = null;
    }

    /// <summary>
    /// 点击仓库背包Item
    /// </summary>
    void OnItemClick()
    {
        if (mIsShowInfo)
        {
            mIsShowInfo = false;
            return;
        }
        if (m_Item != null && m_Item.IsValid() && Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            Singleton<ObjManager>.Instance.MainPlayer.CangKuPutIn(m_Item);
        }
    }

    void ShowItemInfo(bool isPress)
    {
        if (isPress)
        {
            mIsShowInfo = true;
            if (m_Item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(m_Item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(m_Item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }
}
