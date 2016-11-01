using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;

public class CostRebateItemLogic : MonoBehaviour {

    public UILabel m_LimitLabel;
    public UILabel m_CostTypeLabel;
    public ItemSlotLogic m_PrizeItem1;
    public ItemSlotLogic m_PrizeItem2;
    public ItemSlotLogic m_PrizeItem3;
    public UIImageButton m_GetButton;
    public UILabel m_GetButtonLabel;

    private int m_UnitIndex = -1;
    
    public void InitEmpty()
    {
        m_LimitLabel.gameObject.SetActive(false);
        m_CostTypeLabel.gameObject.SetActive(false);
        m_PrizeItem1.ClearInfo();
        m_PrizeItem2.ClearInfo();
        m_PrizeItem3.ClearInfo();
        m_GetButton.isEnabled = false;
        m_GetButtonLabel.text = "";
    }

    public void InitData(int unitIndex)
    {
        CostRebateData costRebate = GameManager.gameManager.PlayerDataPool.CostRebate;
        int costValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COSTREBATE_VALUE);
//        int costType = costRebate.CostType;
        if (unitIndex >= 0 && 
            unitIndex < costRebate.RebateLimit.Length &&
            unitIndex < costRebate.RebateId1.Length &&
            unitIndex < costRebate.RebateId2.Length &&
            unitIndex < costRebate.RebateId3.Length &&
            unitIndex < costRebate.RebateNum1.Length &&
            unitIndex < costRebate.RebateNum2.Length &&
            unitIndex < costRebate.RebateNum3.Length)
        {
            int limit = costRebate.RebateLimit[unitIndex];
            int id1 = costRebate.RebateId1[unitIndex];
            int id2 = costRebate.RebateId2[unitIndex];
            int id3 = costRebate.RebateId3[unitIndex];
            int num1 = costRebate.RebateNum1[unitIndex];
            int num2 = costRebate.RebateNum2[unitIndex];
            int num3 = costRebate.RebateNum3[unitIndex];
            bool flag = costRebate.RebateFlag[unitIndex];

            m_LimitLabel.text = Utils.ConvertLargeNumToString_10w(limit);
            m_CostTypeLabel.text = costRebate.GetCostTypeString();
            if (costValue >= limit)
            {
                if (flag == true)
                {
                    //已领取
                    m_GetButton.isEnabled = false;
                    m_GetButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1380}"); //已领取
                }
                else
                {
                    //可以领取
                    m_GetButton.isEnabled = true;
                    m_GetButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1378}"); //领取
                }
            }
            else
            {
                //未领取
                m_GetButton.isEnabled = false;
                m_GetButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1379}"); //未领取
            }
            ShowPrizeItem(m_PrizeItem1, id1, num1);
            ShowPrizeItem(m_PrizeItem2, id2, num2);
            ShowPrizeItem(m_PrizeItem3, id3, num3);

            m_UnitIndex = unitIndex;
        }
        
    }

    void ShowPrizeItem(ItemSlotLogic itemSlot, int id, int num)
    {
        itemSlot.gameObject.SetActive(true);
        if (id < 0)
        {
            itemSlot.gameObject.SetActive(false);
        }
        else if (id == 0)
        {
            //金币
            itemSlot.InitInfo_Coin(null, num.ToString(), true);
        }
        else if (id == 1)
        {
            //元宝
            itemSlot.InitInfo_Yuanbao(null, num.ToString(), true);
        }
        else if (id == 2)
        {
            //绑定元宝
            itemSlot.InitInfo_YuanbaoBind(null, num.ToString(), true);
        }
        else
        {
            //物品
            itemSlot.InitInfo_Item(id, ItemSlotLogic.OnClickOpenTips, num.ToString(), true);
        }
    }

    void OnClickGet()
    {
        if (m_UnitIndex >= 0)
        {
            CG_ASK_COST_REBATE_PRIZE msg = (CG_ASK_COST_REBATE_PRIZE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COST_REBATE_PRIZE);
            msg.SetPrizeindex(m_UnitIndex);
            msg.SendPacket();
        }
    }
}
