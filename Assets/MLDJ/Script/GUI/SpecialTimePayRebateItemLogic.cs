using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;

public class SpecialTimePayRebateItemLogic : MonoBehaviour
{

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
        SpecialTimePayRebateData payRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        int costValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_SPECICALTIME_PAYREBATE_VALUE);
      //  int costType = payRebate.CostType;
        if (unitIndex >= 0 && 
            unitIndex < payRebate.RebateLimit.Length &&
            unitIndex < payRebate.RebateId1.Length &&
            unitIndex < payRebate.RebateId2.Length &&
            unitIndex < payRebate.RebateId3.Length &&
            unitIndex < payRebate.RebateNum1.Length &&
            unitIndex < payRebate.RebateNum2.Length &&
            unitIndex < payRebate.RebateNum3.Length)
        {
            int limit = payRebate.RebateLimit[unitIndex];
            int id1 = payRebate.RebateId1[unitIndex];
            int id2 = payRebate.RebateId2[unitIndex];
            int id3 = payRebate.RebateId3[unitIndex];
            int num1 = payRebate.RebateNum1[unitIndex];
            int num2 = payRebate.RebateNum2[unitIndex];
            int num3 = payRebate.RebateNum3[unitIndex];
            bool flag = payRebate.RebateFlag[unitIndex];

            m_LimitLabel.text = Utils.ConvertLargeNumToString_10w(limit);
            m_CostTypeLabel.text = payRebate.GetCostTypeString();
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
            CG_ASK_SPECIALTIME_PAY_REBATE_PRIZE msg = (CG_ASK_SPECIALTIME_PAY_REBATE_PRIZE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SPECIALTIME_PAY_REBATE_PRIZE);
            msg.SetPrizeindex(m_UnitIndex);
            msg.SendPacket();
        }
    }
}
