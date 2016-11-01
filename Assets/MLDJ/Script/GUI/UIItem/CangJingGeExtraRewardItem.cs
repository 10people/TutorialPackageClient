/********************************************************************************
 *	文件名：	AI_PlayCombat.cs
 *	全路径：	\Script\GUI\UIItem\CangJingGeExtraRewardItem.cs
 *	创建时间：2015-9-1
 *
 *	功能说明：藏经阁额外奖励使用的Item
 *	修改记录：藏经阁额外奖励必须顺序领取，不能跳跃领取；
*********************************************************************************/
using UnityEngine;
using GCGame.Table;
using Games.GlobeDefine;
using Module.Log;
using Games.Item;
using System;
using System.Collections.Generic;

public class CangJingGeExtraRewardItem : MonoBehaviour
{
    private const int MAX_ITEM_NUM = 4;

    private int ExtraRewardTableID { get; set; }
    public UILabel m_TierNum;
    public UISprite[] m_RewardItemIconSprite = new UISprite[MAX_ITEM_NUM];
    public UILabel[] m_RewardItemCount = new UILabel[MAX_ITEM_NUM];
    public GameObject m_BtnReceive;
    public GameObject m_CantReceive;
    public UILabel m_LabelCantReceive;
	public GameObject[] m_Reward;
    private int[] m_nRewardItemID = new int[MAX_ITEM_NUM];

    private void Clear()
    {
        ExtraRewardTableID = GlobeVar.INVALID_ID;
        m_TierNum.text = "";
        for (int ii = 0; ii < MAX_ITEM_NUM; ++ii)
        {
            m_RewardItemIconSprite[ii].spriteName = "";
            m_RewardItemCount[ii].text = "";
            m_nRewardItemID[ii] = GlobeVar.INVALID_ID;
        }
        m_BtnReceive.SetActive(false);
        m_CantReceive.SetActive(false);
    }

    public void InitInfo(int nTableID)
    {
        Tab_CangJingGeExtraReward tabExtraReward = TableManager.GetCangJingGeExtraRewardByID(nTableID, 0);
        if (null == tabExtraReward)
        {
            LogModule.WarningLog("CangJingGeExtraRewardItem::InitInfo TableID is Invalid!!!");
            Clear();
        }
        else
        {
            Clear();
            ExtraRewardTableID = nTableID;
            m_TierNum.text = StrDictionary.GetClientDictionaryString("#{2087}", tabExtraReward.TierLimit);
            for (int ii = 0; ii < MAX_ITEM_NUM; ++ii)
            {
                int nItemID = tabExtraReward.GetItemIDbyIndex(ii);
                int nCount = tabExtraReward.GetItemNumbyIndex(ii);
                if (0 >= nCount || 0 > nItemID)
                {
					m_Reward[ii].SetActive(false);
                    continue;
                }
                Tab_CommonItem tabItem = TableManager.GetCommonItemByID(nItemID, 0);
                if (null == tabItem)
                {
					m_Reward[ii].SetActive(false);
                    continue;
                }
                else
                {
                    m_RewardItemIconSprite[ii].spriteName = tabItem.Icon;
                    m_RewardItemCount[ii].text = nCount.ToString();
                    m_nRewardItemID[ii] = tabItem.Id;
                }
            }

            if (GetReceiveExtraRewardTableID() == ExtraRewardTableID)
            {
                m_BtnReceive.SetActive(true);
                m_CantReceive.SetActive(false);
            }
            else
            {
                m_BtnReceive.SetActive(false);
                m_CantReceive.SetActive(true);
                m_CantReceive.GetComponent<UIWidget>().color = new Color(0, 1, 1, 1);
				if (GameManager.gameManager.PlayerDataPool.CommonData.IsAlreadyReceiveReward(ExtraRewardTableID))
                {
                    m_LabelCantReceive.text = StrDictionary.GetClientDictionaryString("#{10819}");
                }
                else
                {
                    m_LabelCantReceive.text = StrDictionary.GetClientDictionaryString("#{10818}");
                }
            }
        }
    }

    private int GetReceiveExtraRewardTableID()
    {
        int nTableLineID = GlobeVar.INVALID_ID;
        int nMinTierLimit = GlobeVar.INVALID_ID;
        if (null != CangJingGeWindow.Instance())
        {
            GameDefine_Globe.CopyScene_PlayType nPlayerMode = CangJingGeWindow.Instance().CopyScenePlayerMode;
            foreach (KeyValuePair<int, List<Tab_CangJingGeExtraReward>> pair in TableManager.GetCangJingGeExtraReward())
            {
                Tab_CangJingGeExtraReward tabExtraReward = pair.Value[0];
                if (null != tabExtraReward && (int)nPlayerMode == tabExtraReward.CopySceneType)
                {
					if (GameManager.gameManager.PlayerDataPool.CommonData.IsCanReceiveReward(tabExtraReward.Id) && !GameManager.gameManager.PlayerDataPool.CommonData.IsAlreadyReceiveReward(tabExtraReward.Id))
                    {
                        if (GlobeVar.INVALID_ID == nMinTierLimit)
                        {
                            nTableLineID = tabExtraReward.Id;
                            nMinTierLimit = tabExtraReward.TierLimit;
                        }
                        else
                        {
                            if (tabExtraReward.TierLimit < nMinTierLimit)
                            {
                                nTableLineID = tabExtraReward.Id;
                                nMinTierLimit = tabExtraReward.TierLimit;
                            }
                        }
                    }
                }
            }
        }
        return nTableLineID;
    }

    

    public void OnRewardItemClick(GameObject obj)
    {
        int nShowID = GlobeVar.INVALID_ID;
        if (obj.name.Equals("Jiangli1", StringComparison.OrdinalIgnoreCase))
            nShowID = m_nRewardItemID[0];
        else if (obj.name.Equals("Jiangli2", StringComparison.OrdinalIgnoreCase))
            nShowID = m_nRewardItemID[1];
        else if (obj.name.Equals("Jiangli3", StringComparison.OrdinalIgnoreCase))
            nShowID = m_nRewardItemID[2];
        else if (obj.name.Equals("Jiangli4", StringComparison.OrdinalIgnoreCase))
            nShowID = m_nRewardItemID[3];
        else
            return;

        GameItem item = new GameItem();
        item.DataID = nShowID;
        if (item.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
        }
    }

    public void OnReceiveRewardClick()
    {
        Tab_CangJingGeExtraReward tabExtraReward = TableManager.GetCangJingGeExtraRewardByID(ExtraRewardTableID, 0);
        if (null != tabExtraReward)
        {
            CG_CJG_EXTRA_REWARD_REQ packet = (CG_CJG_EXTRA_REWARD_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CJG_EXTRA_REWARD_REQ);
            packet.SetNType(tabExtraReward.CopySceneType);
            packet.SendPacket();
        }
    }
}