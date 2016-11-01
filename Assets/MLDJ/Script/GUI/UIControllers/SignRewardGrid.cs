using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
public class SignRewardGrid : MonoBehaviour {

    public UIGrid m_grid;
    public UILabel m_lblDay;
    public RewardAwardItem[] m_aryRewardItem;
    private bool m_hasReceive = false;
    public GameObject m_objRec;//已经领取过的显示
    public GameObject m_objNotRec;//尚未领取的显示
    public RewardAwardItem.AwardState m_AwardState;
    public UILabel m_ContinueSignDay;
    private int m_nDayIndex = -1;
    const int MAXSIGNNUMPERGRID = 4;
    IChooseItem m_chooseAgent;
    public UISprite m_BGNormal;
    public UISprite m_BGHigh;
    public UISprite m_BGGray;
    
    public void UpdateData(Tab_NewServerAward pAward,int dayIndex,IChooseItem agent,string strDicId,int loginDays=0)
    {
        gameObject.name = dayIndex.ToString();
        m_nDayIndex = dayIndex;
        m_chooseAgent = agent;
        m_lblDay.text = StrDictionary.GetClientDictionaryString(strDicId, m_nDayIndex + 1);
        int addedItem = 0;
        //这个现在代表
        if (pAward.GetShowIdbyIndex(0) != -1)
        {
            if (pAward.GetShowIdbyIndex(0) > 0)
            {
                m_aryRewardItem[addedItem].AddItem(RewardAwardItem.ItemType.ITEM_ITEM, pAward.GetShowIdbyIndex(0), 1);
                m_aryRewardItem[addedItem].UpdateItemState(RewardAwardItem.AwardState.AWARD_IDLE);
                ++addedItem;
            }
        }
        else
        {
            if (pAward.Exp > 0)
            {
                m_aryRewardItem[addedItem].AddItem(RewardAwardItem.ItemType.ITEM_EXP, -1, pAward.Exp);
                m_aryRewardItem[addedItem].UpdateItemState(RewardAwardItem.AwardState.AWARD_IDLE);
                addedItem++;
            }
            if (pAward.Money > 0)
            {
                m_aryRewardItem[addedItem].AddItem(RewardAwardItem.ItemType.ITEM_MONEY, -1, pAward.Money);
                m_aryRewardItem[addedItem].UpdateItemState(RewardAwardItem.AwardState.AWARD_IDLE);
                addedItem++;
            }

            if (pAward.BindYuanbao > 0)
            {
                m_aryRewardItem[addedItem].AddItem(RewardAwardItem.ItemType.ITEM_YUANBAO, -1, pAward.BindYuanbao);
                m_aryRewardItem[addedItem].UpdateItemState(RewardAwardItem.AwardState.AWARD_IDLE);
                addedItem++;
            }
            for (int itemIndex = 0; itemIndex < pAward.getItemCountCount(); ++itemIndex)
            {
                if (pAward.GetItemDataIDbyIndex(itemIndex) > 0 && addedItem < MAXSIGNNUMPERGRID)
                {
                    m_aryRewardItem[addedItem].AddItem(RewardAwardItem.ItemType.ITEM_ITEM, pAward.GetItemDataIDbyIndex(itemIndex), pAward.GetItemCountbyIndex(itemIndex));
                    m_aryRewardItem[addedItem].UpdateItemState(RewardAwardItem.AwardState.AWARD_IDLE);
                    addedItem++;
                }
            }
        }


        if (m_ContinueSignDay != null)
        {
            SetContinueDay(loginDays, dayIndex + 1);
        }

        for (; addedItem < m_aryRewardItem.Length;++addedItem )
        {
            m_aryRewardItem[addedItem].m_ItemGrid[0].SetActive(false);
        }
       /* if (pAward.ItemDataID >= 0 && pAward.ItemCount > 0)
        {
            m_aryRewardItem[i].AddItem(RewardAwardItem.ItemType.ITEM_ITEM, pAward.ItemDataID, pAward.ItemCount);
        }*/
    }
    
    public void SetContinueDay(int continueDay, int needDay)
    {
        if (m_ContinueSignDay != null)
        {
            m_ContinueSignDay.text = StrDictionary.GetClientDictionaryString("#{11245}", continueDay, needDay);
            m_ContinueSignDay.enabled = true;
        }
       
    }

    public void DisbalContinueDay()
    {
        if (m_ContinueSignDay != null)
        {
            m_ContinueSignDay.enabled = false;
        }
    }
    //private void SetObjRecState(bool hasRec)
    //{
    //    m_hasReceive = hasRec;
    //    m_objRec.SetActive(m_hasReceive);
    //    //m_objNotRec.SetActive(!m_hasReceive);
    //    m_objNotRec.GetComponent<UIImageButton>().isEnabled = (!m_hasReceive);
    //}

    public void UpdateItemState(RewardAwardItem.AwardState awardState)
    {
        m_AwardState = awardState;
        if (awardState == RewardAwardItem.AwardState.AWARD_HAVEDONE)
        {
            m_objRec.SetActive(true);
            m_objNotRec.SetActive(false);
            if (m_BGHigh != null)
            {
                m_BGGray.gameObject.SetActive(true);
                m_BGNormal.gameObject.SetActive(false);
                m_BGHigh.gameObject.SetActive(false);
            }

        }
        else if (awardState == RewardAwardItem.AwardState.AWARD_CANHAVE)
        {
            m_objRec.SetActive(false);
            m_objNotRec.GetComponent<UIImageButton>().isEnabled = true;
            if (m_BGNormal != null)
            {
                m_BGGray.gameObject.SetActive(false);
                m_BGHigh.gameObject.SetActive(true);
                m_BGNormal.gameObject.SetActive(false);
            }

        }
        else if (awardState == RewardAwardItem.AwardState.AWARD_CANNNTHAVE)
        {
            m_objRec.SetActive(false);
            //m_objNotRec.SetActive(false);
            m_objNotRec.GetComponent<UIImageButton>().isEnabled = false;
            if (m_BGNormal != null)
            {
                m_BGGray.gameObject.SetActive(false);
                m_BGHigh.gameObject.SetActive(false);
                m_BGNormal.gameObject.SetActive(true);
            }

        }
        else
        {
            m_objRec.SetActive(false);
            //m_objNotRec.SetActive(false);
            m_objNotRec.GetComponent<UIImageButton>().isEnabled = false;
            if (m_BGNormal != null)
            {
                m_BGGray.gameObject.SetActive(false);
                m_BGHigh.gameObject.SetActive(false);
                m_BGNormal.gameObject.SetActive(true);
            }

        }
    }

    /// <summary>
    /// 领取
    /// </summary>
    void OnClickGet()
    {
        if (m_chooseAgent != null && m_nDayIndex != -1)
        {
            m_chooseAgent.ChangeChooseItem(m_nDayIndex);
        }
    }
}
