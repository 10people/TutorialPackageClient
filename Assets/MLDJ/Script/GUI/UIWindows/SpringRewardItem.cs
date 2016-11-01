using System;
using Games.AwardActivity;
using Games.GlobeDefine;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.Item;

public class SpringRewardItem : MonoBehaviour
{
    public UISprite m_ChooseSprite;
    public UISprite m_ItemIcon;
    public UILabel m_NumLabel;
    public UISprite m_GuoQiSprite;
    public UISprite m_KeLinQuSprite;
    public UISprite m_YiLingQuSprite;
    public UILabel m_TimeLabel;
    public UISprite m_DisableSprite;

    public ActivityRewardData m_RewardData;
    public int m_RewardItem;

    private bool m_IsChoose = false;

	// Use this for initialization
	void Start () {
	
	}

    /// <summary>
    /// 获取对应的时间点
    /// </summary>
    public DateTime CurDateTime
    {
        get
        {
            int tag = m_RewardData.Index - 1;
            if (tag < 0) tag = 0;
            DateTime oldTime = Convert.ToDateTime(GameManager.gameManager.PlayerDataPool.ActivityRewardBeginTime);
            DateTime m_CurDateTime = oldTime.AddDays(tag);

            return m_CurDateTime;
        }
    }

    public void SetRewardInfo(ActivityRewardData rewardData)
    {
        m_RewardData = rewardData;

        if (m_RewardData.Item1DataID > 0)
        {
            Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_RewardData.Item1DataID, 0);
            if (null != curItem)
            {
                m_ItemIcon.spriteName = curItem.Icon;
            }

            m_NumLabel.text = m_RewardData.Item1Count + "";
        }
        else
        {
            if (m_RewardData.Money > 0)
            {
                m_ItemIcon.spriteName = "jinbi";
                m_NumLabel.text = m_RewardData.Money + "";
            }
        }

        DateTime curDateTime = CurDateTime; //curDateTime.Month + "月" + curDateTime.Day + "日"
        //StrDictionary.GetClientDictionaryString("#{5094}", rewardData.Number.ToString());
        m_TimeLabel.text = StrDictionary.GetClientDictionaryString("#{5208}", curDateTime.Month, curDateTime.Day);

        m_RewardItem = m_RewardData.Item1DataID;

        SetShowState(m_RewardData.State);
        IsChoose = false;
    }

    public bool IsChoose
    {
        get { return m_IsChoose; }
        set
        {
            m_IsChoose = value;
            m_ChooseSprite.gameObject.SetActive(m_IsChoose);
        }
    }

    /// <summary>
    /// 设置物品领取状态
    /// </summary>
    /// <param name="tag"></param>
    public void SetShowState(AcitivityRewardState tag)
    {
        m_GuoQiSprite.gameObject.SetActive(false);
        m_KeLinQuSprite.gameObject.SetActive(false);
        m_YiLingQuSprite.gameObject.SetActive(false);
        m_DisableSprite.gameObject.SetActive(false);

        switch (tag)
        {
            case AcitivityRewardState.EXPIRED: //过期
                m_GuoQiSprite.gameObject.SetActive(true);
                break;
            case AcitivityRewardState.RECEIVE: //可领取
                m_KeLinQuSprite.gameObject.SetActive(true);
                break;
            case AcitivityRewardState.NORECEIVE: //以领取
            case AcitivityRewardState.REPLACEMENT:
                m_YiLingQuSprite.gameObject.SetActive(true);
                break;
            default:
                m_DisableSprite.gameObject.SetActive(true);
                break;
        }

    }

    /// <summary>
    /// 弹出 物品信息
    /// </summary>
    /// <param name="value"></param>
    public void OnRewardItemClick(GameObject value)
    {
        if (m_RewardData.State == AcitivityRewardState.EXPIRED || m_RewardData.State == AcitivityRewardState.RECEIVE)
        {
            if (SpringActivityRewardWindow.Instance() != null)
            {
                SpringActivityRewardWindow.Instance().SetSelectedState(m_RewardData.Index);
            }
        }


        if (m_RewardData.Item1DataID > 0)
        {
            ItemTooltipsLogic.ShowItemTooltip(m_RewardItem, ItemTooltipsLogic.ShowType.Info);
        }
        else
        {
            if (m_RewardData.Money > 0)
            {
                MoneyTipsLogic.ShowMoneyTip(MoneyTipsLogic.MoneyType.ITEM_MONEY, m_RewardData.Money);
            }
        }
    }
}
