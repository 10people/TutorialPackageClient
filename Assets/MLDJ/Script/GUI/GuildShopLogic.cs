using UnityEngine;
using System.Collections;
using GCGame;
using Games.GlobeDefine;
using GCGame.Table;
using System.Collections.Generic;

public class GuildShopLogic : MonoBehaviour {

    private static GuildShopLogic m_Instance = null;
    public static GuildShopLogic Instance()
    {
        return m_Instance;
    }

    public GameObject m_GuildShopItem;
    public GameObject m_GuildShopPreviewItem;
    public GameObject m_GuildShopItemGrid;
    public GameObject m_DragFlag;
    public UILabel m_GuildDKPLabel;
    public GameObject m_GuildShopBuildWindow;
    public GameObject m_GuildShopPreviewItemGrid;
    public UILabel m_ShopBuildTitleLabel;
    public UILabel m_ShopBuildSlotLabel;
    public UIImageButton[] m_GuildShopBuildLevelBtn;
    public UISprite m_GuildShopLevelProgress;

    // 等级进度条比例 写死 和公会等级最大值有关 临时数值
    private float[] m_LevelProgressValue = {0, 0.25f, 0.5f, 0.75f, 1.0f};

    void OnEnable()
    {
        m_Instance = this;

        UpdateGuildShopItem();
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    public void UpdateGuildShopItem()
    {
        Utils.CleanGrid(m_GuildShopItemGrid);

        int nValidCount = 0;
        for (int i = 0; i < GameManager.gameManager.PlayerDataPool.GuildShopItemList.Count; i++)
        {
            if (false == GameManager.gameManager.PlayerDataPool.GuildShopItemList[i].IsValid())
            {
                break;
            }

            int nGoodId = GameManager.gameManager.PlayerDataPool.GuildShopItemList[i].m_GoodId;
            int nLeftCount = GameManager.gameManager.PlayerDataPool.GuildShopItemList[i].m_LeftCount;

            string szItemName = i < 10 ? "0" + i.ToString() : i.ToString();
            GameObject ShopItem = Utils.BindObjToParent(m_GuildShopItem, m_GuildShopItemGrid, szItemName);
            if (ShopItem == null || ShopItem.GetComponent<GuildShopItemLogic>() == null)
            {
                continue;
            }

            ShopItem.GetComponent<GuildShopItemLogic>().Init(i, nGoodId, nLeftCount);

            nValidCount += 1;
        }

        if (m_GuildShopItemGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildShopItemGrid.GetComponent<UIGrid>().Reposition();
        }

        m_DragFlag.SetActive(nValidCount > 6);
        UpdateGuildDKP();
    }

    public void UpdateGuildDKP()
    {
        m_GuildDKPLabel.text = GameManager.gameManager.PlayerDataPool.GuildDKP.ToString();
    }

    void OnRefreshClick()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10488}"), "", OnRefreshOK);
    }

    void OnRefreshOK()
    {
        CG_GUILD_SHOP_ITEM_LIST msg = (CG_GUILD_SHOP_ITEM_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SHOP_ITEM_LIST);
        msg.Flag = 0;
        msg.SendPacket();
    }

    void OnShopBuildClick()
    {
        m_GuildShopBuildWindow.SetActive(true);

        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (0 < info.GuildLevel && info.GuildLevel <= 5)
        {
            m_GuildShopLevelProgress.fillAmount = m_LevelProgressValue[info.GuildLevel - 1];
        }
        else
        {
            m_GuildShopLevelProgress.fillAmount = 1;
        }

        for (int i = 0; i < m_GuildShopBuildLevelBtn.Length; i++ )
        {
            if (i + 1 <= info.GuildLevel)
            {
                m_GuildShopBuildLevelBtn[i].normalSprite = "SubUI_ChoosePre";
                m_GuildShopBuildLevelBtn[i].hoverSprite = "SubUI_ChoosePre";
            }
            else
            {
                m_GuildShopBuildLevelBtn[i].normalSprite = "SubUI_ChooseNormal";
                m_GuildShopBuildLevelBtn[i].hoverSprite = "SubUI_ChooseNormal";
            }
        }

        UpdateShopPreviewItem(1);
    }

    void OnShopBuildCloseClick()
    {
        m_GuildShopBuildWindow.SetActive(false);
        Utils.CleanGrid(m_GuildShopPreviewItemGrid);
    }

    void UpdateShopPreviewItem(int level)
    {
        Utils.CleanGrid(m_GuildShopPreviewItemGrid);

        foreach (KeyValuePair<int, List<Tab_GuildShop>> pair in TableManager.GetGuildShop())
        {
            Tab_GuildShop tabShopItem = pair.Value[0];
            if (tabShopItem == null)
            {
                continue;
            }

            if (level < tabShopItem.OpenLevel)
            {
                continue;
            }

            GameObject ShopPreviewItem = Utils.BindObjToParent(m_GuildShopPreviewItem, m_GuildShopPreviewItemGrid, tabShopItem.Id.ToString());
            if (ShopPreviewItem == null || ShopPreviewItem.GetComponent<GuildShopPreviewItem>() == null)
            {
                continue;
            }

            ShopPreviewItem.GetComponent<GuildShopPreviewItem>().Init(tabShopItem);
        }

        if (m_GuildShopPreviewItemGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildShopPreviewItemGrid.GetComponent<UIGrid>().Reposition(true);
        }

        if (m_GuildShopPreviewItemGrid.GetComponent<UITopGrid>() != null)
        {
            m_GuildShopPreviewItemGrid.GetComponent<UITopGrid>().Recenter(true);
        }

        m_ShopBuildTitleLabel.text = StrDictionary.GetClientDictionaryString("#{10484}", level);
        m_ShopBuildSlotLabel.text = StrDictionary.GetClientDictionaryString("#{10487}", level < 5 ? 6 : 12);
    }

    void OnLevelBtnClick_LV1()
    {
        UpdateShopPreviewItem(1);
    }

    void OnLevelBtnClick_LV2()
    {
        UpdateShopPreviewItem(2);
    }

    void OnLevelBtnClick_LV3()
    {
        UpdateShopPreviewItem(3);
    }

    void OnLevelBtnClick_LV4()
    {
        UpdateShopPreviewItem(4);
    }

    void OnLevelBtnClick_LV5()
    {
        UpdateShopPreviewItem(5);
    }
}
