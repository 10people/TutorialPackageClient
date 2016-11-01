/*
 * 天道酬勤
 */
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.AwardActivity;
using Module.Log;
using Games.LogicObj;
using Games.Item;
using Games.FakeObject;

public class SignReward_ContinueLogin : UIControllerBase<SignReward_ContinueLogin>, IChooseItem
{

    public UIGrid m_Grid;
    private int m_ContinueDay;
    private int m_LastGridItemPos = 7;
    public SignRewardGrid[] m_AwardItem; // 7个
    //private const int ITEMNUM = 7;
    void Awake()
    {
        SetInstance(this);
        m_AwardItem = new SignRewardGrid[AwardActivityData.MaxNewServerDays];
        for (int i = 0; i < AwardActivityData.MaxNewServerDays; i++)
        {
            Transform t = m_Grid.transform.GetChild(i);
            if (t && t.GetComponent<SignRewardGrid>() != null)
            {
                m_AwardItem[i] = t.GetComponent<SignRewardGrid>();
            }
        }
    }
    void OnEnable()
    {
        SetInstance(this);
        InitData();
    }
    void OnDisable()
    {
        SetInstance(null);
    }


    void InitData()
    {
        m_ContinueDay = GameManager.gameManager.PlayerDataPool.AwardActivityData.ContinueLoginDay;
        UpDateWindow();
    }
    #region UI事件
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.SignReward);
    }
    #endregion

    bool GetContinueLoginFlag(int nDay)
    {
        return GameManager.gameManager.PlayerDataPool.AwardActivityData.GetContinueAwardFlag(nDay);
    }
    void UpDateWindow()
    {
        // 设置选中界面
        int nMaxRecordCount = AwardActivityData.MaxContinueServerDays;

        for (int i = 0; i < nMaxRecordCount && i < m_AwardItem.Length; i++)
        {
            Tab_NewServerAward pAward = TableManager.GetNewServerAwardByID(i + AwardActivityData.MaxNewServerDays, 0);
            if (pAward == null)
            {
                continue;
            }
            if (i >= m_AwardItem.Length)
            {
                continue;
            }
            m_AwardItem[i].UpdateData(pAward, i, this, "#{11244}",m_ContinueDay+1);
            UpDateAwardState(i);
        }
    }


    void UpDateAwardState(int nDay)
    {
        if (nDay < 0 || nDay >= AwardActivityData.MaxContinueServerDays)
        {
            return;
        }
        if (nDay >= m_AwardItem.Length)
        {
            return;
        }
        if (GetContinueLoginFlag(nDay) == true)
        {
            m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_HAVEDONE);
            if (m_AwardItem[nDay].gameObject.name.CompareTo("6") <= 0)
            {
                m_AwardItem[nDay].gameObject.name = "z" + m_LastGridItemPos.ToString();
                ++m_LastGridItemPos;
                m_Grid.repositionNow = true;
            }

        }
        else
        {
            if (m_ContinueDay >= nDay)
            {
                m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_CANHAVE);
                // m_ButtonAward.isEnabled = true;
            }
            else
            {
                m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_CANNNTHAVE);
                
            }
        }
    }
    public void ChangeChooseItem(int index)
    {
        if (GetContinueLoginFlag(index) == true)
        {
            // 提示
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2175}");
            return;
        }

        GameManager.gameManager.PlayerDataPool.AwardActivityData.SendAwardPacket(AwardActivityType.Award_CONTINUELOGIN,index);
    }
    // 在线奖励按钮
    public void ButtonNewServerAward()
    {
        CleanUp();
        InitData();
        UpDateWindow();
    }
    void CleanUp()
    {
        m_ContinueDay = -1;

        //         if (m_ItemGrid != null)
        //         {
        //             //    Utils.CleanGrid(m_ItemGrid.gameObject);
        //             m_ItemGrid.repositionNow = true;
        //             m_ItemGrid.sorted = true;
        //         }
        // 
        //         for (int i = 0; i < m_AwardItem.Length; i++)
        //         {
        //             if (m_AwardItem[i])
        //             {
        //                 m_AwardItem[i].CleanUp();
        //             }
        //         }
        // 
        //         if (m_ButtonAward)
        //         {
        //             m_ButtonAward.isEnabled = false;
        //         }
    }
    public void PlayEffect(int nNewServerDay)
    {

    }
}
