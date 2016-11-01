/********************************************************************************
 *	文件名：	GoldMoneyShopItemLogic.cs
 *	功能说明：金币商店限购物品逻辑
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using Games.GlobeDefine;

public class GoldMoneyShopItemLogic : MonoBehaviour
{
    public ItemSlotLogic m_ItemSlot;        //物品逻辑
    public UILabel m_NumContent;            //物品数量
    public UILabel m_PriceContent;          //价格
    public UILabel m_NameLabel;             //商品名称

    private int m_GoodsIndex;
    private int m_GoodsId;   // 商品ID 表格第一列
    private int m_ItemID;    // 物品ID 表格第五列
    private int m_LeftCount;    
    private int m_nPrice;


    public void Init(int nGoodIndex, int nGoodId, int nLeftCount)
    {
        Tab_GoldMoneyShop tabGoldMoneyShopItem = TableManager.GetGoldMoneyShopByID(nGoodId, 0);
        if (tabGoldMoneyShopItem == null)
        {
            return;
        }

        Tab_CommonItem tabItem = TableManager.GetCommonItemByID(tabGoldMoneyShopItem.ItemID, 0);
        if (tabItem == null)
        {
            return;
        }

        m_ItemSlot.InitInfo_GoldMoneyShopItem(tabGoldMoneyShopItem.ItemID, ItemSlotLogic.OnClickGoldMoneyShopOpenTips, tabGoldMoneyShopItem.StackSize > 0 ? tabGoldMoneyShopItem.StackSize.ToString() : "", tabGoldMoneyShopItem.StackSize > 0);
        
        m_NumContent.text = nLeftCount <= 0 ? "[FF0000]" + nLeftCount.ToString() : nLeftCount.ToString();
        m_PriceContent.text = tabGoldMoneyShopItem.Price.ToString();
        m_NameLabel.text = tabItem.Name;

        m_GoodsIndex = nGoodIndex;
        m_GoodsId = nGoodId;
        m_ItemID = tabItem.Id;
        m_LeftCount = nLeftCount;
        m_nPrice = tabGoldMoneyShopItem.Price;
    }


    void OnDelClick()
    {
//         ItemTooltipsLogic.SetDelegateBuyClick(GoldMoneyShopBuyBatch, GoldMoneyShopBuy);
//         EquipTooltipsLogic.SetDelegateBuyClick(GoldMoneyShopBuyBatch, GoldMoneyShopBuy);
    }

    void GoldMoneyShopBuyBatch()
    {
        Buy();
    }

    void GoldMoneyShopBuy()
    {
        MsgBoxBuyGoldMoneyItemOK(1);
    }

    public void Buy()
    {
        if (m_LeftCount <= 0)
        {
            GUIData.AddNotifyData("#{10519}");
            return;
        }

		NumChooseController.OpenWindow(1, m_LeftCount,
		                               StrDictionary.GetClientDictionaryString("#{11163}"),
		                               MsgBoxBuyGoldMoneyItemOK, 1,
		                               StrDictionary.GetClientDictionaryString("#{2837}"),
		                               StrDictionary.GetClientDictionaryString("#{2837}") );
    }

    public void MsgBoxBuyGoldMoneyItemOK(int nCurNum)
    {
        //nCurNum数量判断
        if (nCurNum < 1 || nCurNum > m_LeftCount)
        {
            return;
        }

        //背包判断
        if (GameManager.gameManager.PlayerDataPool.BackPack.GetCanContainerSize() <= 0)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1903}");
            return;
        }

        //判断个人公会积分是否够
        int nRealCost = m_nPrice * nCurNum;
        if (nRealCost > 0)
        {
//            int nGuildDKP = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
            int nBindYuanBaoCount = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
            if (nRealCost > nBindYuanBaoCount)
            {
                //个人公会积分，返回
                GUIData.AddNotifyData("#{1018}");
                return;
            }
        }
        else
        {
            //可能溢出，直接返回
            return;
        }

        //发送购买消息包
        CG_BUY_GOLDMONEYSHOPGOODS msg = (CG_BUY_GOLDMONEYSHOPGOODS)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_GOLDMONEYSHOPGOODS);
        msg.GoodID = m_GoodsId;
        msg.BuyNum = nCurNum;
        msg.GoodIndex = m_GoodsIndex;
        msg.SendPacket();
    }
}
