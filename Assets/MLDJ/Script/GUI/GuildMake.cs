using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;
using Games.LogicObj;

public class GuildMake : MonoBehaviour {

    public UILabel m_CurItemName;
    public UILabel m_CurItemMakeNum;
    public UILabel m_CurItemPrice;
    public UILabel m_CurItemDesc;
    public UILabel m_CurItemDesc2;
    public GameObject m_MakeButton;
    public GameObject m_ItemGrid;
    public GuildShopMakeItem m_CurItemData;
    private GuildMakeItem m_curSelectItem;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnEnable()
    {
        m_curSelectItem = null;
        m_CurItemData.m_ItemID = GlobeVar.INVALID_ID;
        OnUpdateList();
    }

    void OnDisable()
    {
        GUIData.delGuildShopItemMakeListShow = null;
    }

    void OnLoadMakeWaistbandItem(GameObject resItem, object param)
    {
        if (resItem == null)
        {
            return;
        }

        Utils.CleanGrid(m_ItemGrid);
        for (int i = 0; i < GuildWindow.GuildShopItemMakeList.Count; i++)
        {
            GuildMakeItem curItem = GuildMakeItem.CreateItem(m_ItemGrid, resItem,
                i.ToString(), this, GuildWindow.GuildShopItemMakeList[i]);
            if (curItem != null && m_curSelectItem == null)
            {
                OnOpItemClick(curItem);
            }
        }
        m_ItemGrid.GetComponent<UIGrid>().repositionNow = true;
        m_ItemGrid.GetComponent<UITopGrid>().Recenter(true);
    }

    void OnUpdateList()
    {
        UIManager.LoadItem(UIInfo.MakeWaistbandItem, OnLoadMakeWaistbandItem);
    }

    public void OnOpItemClick(GuildMakeItem item)
    {
        if (null != m_curSelectItem)
        {
            m_curSelectItem.EnableHighlight(false);
        }

        m_curSelectItem = item;
        m_curSelectItem.EnableHighlight(true);

        if (item != null)
        {
            m_CurItemData = item.GetData();
            UpdateCurItemInfo();
        }
    }

    void UpdateCurItemInfo()
    {
        if (m_CurItemData.IsValid())
        {
            Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(m_CurItemData.m_ItemID, 0);
            if (tabCommonItem != null)
            {
                if (m_CurItemName != null) m_CurItemName.text = tabCommonItem.Name;
                if (m_CurItemMakeNum != null) m_CurItemMakeNum.text = m_CurItemData.m_MakeNum.ToString();
                if (m_CurItemPrice != null) m_CurItemPrice.text = m_CurItemData.m_Price.ToString();
                if (m_CurItemDesc != null && m_CurItemData.m_DictInfo > 0)
                {
                    m_CurItemDesc.text = Utils.GetDicByID(m_CurItemData.m_DictInfo);
                }
                if (m_CurItemDesc2 != null && m_CurItemData.m_DictID > 0)
                {
                    m_CurItemDesc2.text = Utils.GetDicByID(m_CurItemData.m_DictID);
                }

            }

            // 一直显示按钮
//             if (GuildWindow.GuildWealthBak < m_CurItemData.m_Price)
//             {
//                 m_MakeButton.SetActive(false);
//             }
//             else
//             {
//                 m_MakeButton.SetActive(true);
//             }
        }
    }

    void ProduceItem( )
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if (m_CurItemData.IsValid())
        {
            if (GuildWindow.GuildWealthBak < m_CurItemData.m_Price)
            {
                _mainPlayer.SendNoticMsg(false, "#{3956}");
                return;
            }

            CG_GUILD_SHOP_ITEM_MAKE packet = (CG_GUILD_SHOP_ITEM_MAKE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SHOP_ITEM_MAKE);
            packet.SetItemID(m_CurItemData.m_ItemID);
            packet.SendPacket();
        }
    }
}
