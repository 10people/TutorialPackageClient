using UnityEngine;
using System.Collections;
using Games.Item;

public class CangKuItemLogic : MonoBehaviour {

    public UISprite m_ArrowUpSprite;
    public UISprite m_ArrowDownSprite;
    public ItemSlotLogic m_ItemSlot;
    public UISprite m_ItemSlotBgSprite;

    private GameItem m_Item = null;
    bool mIsShowInfo = false;
    bool mIsLock = false;

    void Start()
    {
        GetComponent<UILongPressButton>().OnLongPress = ShowItemInfo;
    }

	public void UpdateEmpty()
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        m_ItemSlot.ClearInfo();
        m_ItemSlotBgSprite.spriteName = "Quality-Normal";
        m_Item = null;
        mIsLock = false;
    }

    public void UpdateItem(GameItem item)
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        m_ItemSlot.InitInfo_Item(item.DataID, null, item.StackCount.ToString());
		m_ItemSlotBgSprite.spriteName = "Quality-Normal";
        m_Item = item;
        mIsLock = false;
    }

    public void UpdateLock()
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        m_ItemSlot.ClearInfo();
        m_ItemSlotBgSprite.spriteName = "Quality-Lock";
        m_Item = null;
        mIsLock = true;
    }

    void SetArrow(GameItem item)
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        if (item.IsEquipMent())
        {
            //获得身上对应槽位的装备
            int slotindex = item.GetEquipSlotIndex();
            GameItem compareEquip = GameManager.gameManager.PlayerDataPool.EquipPack.GetItem(slotindex);
            if (compareEquip != null)
            {
                if (compareEquip.IsValid())
                {
                    if (compareEquip.GetCombatValue_NoStarEnchance() > item.GetCombatValue_NoStarEnchance())
                    {
                        m_ArrowDownSprite.gameObject.SetActive(true);
                        m_ArrowUpSprite.gameObject.SetActive(false);
                        return;
                    }
                    else if (compareEquip.GetCombatValue_NoStarEnchance() == item.GetCombatValue_NoStarEnchance())
                    {
                        m_ArrowDownSprite.gameObject.SetActive(false);
                        m_ArrowUpSprite.gameObject.SetActive(false);
                        return;
                    }
                }
            }
            m_ArrowDownSprite.gameObject.SetActive(false);
            m_ArrowUpSprite.gameObject.SetActive(true);
        }
    }

    void OnItemClick()
    {
        if (mIsShowInfo)
        {
            mIsShowInfo = false;
            return;
        }
        if (m_Item != null && m_Item.IsValid() && Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            Singleton<ObjManager>.Instance.MainPlayer.CangKuTakeOut(m_Item);
        }
        if (mIsLock)
        {
            CangKuLogic.Instance().OnClickUnLock();
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
