using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Item;

public class GongZhanRewardItemLogic : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;
    public UILabel m_ExchangeLabel;

    private int m_Id = GlobeVar.INVALID_ID;
    private int m_ItemId = GlobeVar.INVALID_ID;
    private int m_ZhanKuangPaiNeed = GlobeVar.INVALID_ID;
    
    public void Init(Tab_GongZhanReward reward)
    {
        if (reward == null)
        {
            return;
        }

        m_Id = reward.Id;
        m_ItemId = reward.ItemId;
        m_ZhanKuangPaiNeed = reward.ZhanKuangPaiNeed;

        m_ItemSlot.InitInfo_Item(m_ItemId, ShowRewardTooltips);
        m_ExchangeLabel.text = StrDictionary.GetClientDictionaryString("#{5362}", m_ZhanKuangPaiNeed);
    }

    void ShowRewardTooltips(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
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

    void AskExchange()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5468}"), "", ExchangeOK);
    }

    void ExchangeOK()
    {
        CG_ASK_GONGZHAN_REWARD packet = (CG_ASK_GONGZHAN_REWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GONGZHAN_REWARD);
        packet.RewardID = m_Id;
        packet.SendPacket();
    }
}
