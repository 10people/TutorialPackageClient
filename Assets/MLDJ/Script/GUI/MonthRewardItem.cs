using UnityEngine;
using System.Collections;
using System;
using Games.AwardActivity;

public class MonthRewardItem : MonoBehaviour {

    public UILabel m_num;
    public GameObject m_open;
    public GameObject m_close;
    public GameObject m_canget;
  
    public int m_Index=-1;
    private Action<int> onClickBoxWithIndex;
    public Action<int> OnClickBoxWithIndex
    {
        get
        {
            return onClickBoxWithIndex;
        }
        set 
        {
            onClickBoxWithIndex = null;
            onClickBoxWithIndex = value; 
        }
    }
    public bool m_bIsOpend = false;
	void Start () {
	
	}
    public void SetIndex(int index)
    {
        m_Index = index;
    }
    public void SetOpen(bool open)
    {
        m_bIsOpend = open;
        m_open.SetActive(open);
        m_close.SetActive(!open);
        if (open && m_canget.gameObject.activeSelf)
        {
            m_canget.SetActive(false);
        }
       // m_canget.SetActive(!open);
    }

    public void SetCanGet()
    {
        if (m_open.activeSelf)
        {
            return;
        }
        m_open.SetActive(false);
        m_close.SetActive(false);
        m_canget.SetActive(true);

    }

    void OnClickBox()
    {
        if (m_bIsOpend)
        {
            return;
        }
        if (AwardLogic.Instance() != null)
        {
            PlayerData.DaySignInInfoData DataSignInInfo = GameManager.gameManager.PlayerDataPool.DaySignInfo;
            if (DataSignInInfo != null && DataSignInInfo.m_AccumateSignDic != null)
            {
                if (DataSignInInfo.m_AccumateSignDic.ContainsKey(m_Index+1)) 
                {
                    AccumulateSignInfo info = DataSignInInfo.m_AccumateSignDic[m_Index+1];
                    AwardLogic.Instance().m_AccSignPopUpBox.UpdateChestRewards(info,m_Index+1,this);
                }
            }
            //if (OnClickBoxWithIndex != null)
            //{
            //    OnClickBoxWithIndex(m_Index);
            //}
        }
    }

    public void SendAccumulateSignAward()
    {
        OnClickBoxWithIndex(m_Index);
    }
}
