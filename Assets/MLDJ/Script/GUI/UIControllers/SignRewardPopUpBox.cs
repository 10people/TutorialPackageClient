using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using System.Collections.Generic;
using System;
using Games.AwardActivity;

public class SignRewardPopUpBox : MonoBehaviour 
{
    public RewardAwardItem m_RewardItem;
    public UILabel m_lbltitle;
    public UILabel m_lblItemName;
    public UILabel m_lblCondition;
    public GameObject m_btn;
    public UILabel m_lblBtn;
    public PopUpType m_popUpType = PopUpType.QianDao;
    public Action m_SureAction;
    public int m_nItemIndex = 0;

    public string m_ConditionStr;
    public string m_BtnStr;

	void Start () 
    {
	
	}
    void SureClick()
    {
        if (m_SureAction != null)
        {
            m_SureAction();
        }
       
        CloseWindow();
    }
    public void AddItem(RewardAwardItem.ItemType nItemType, int nItemID, int nItemCount, int itemIndex = 0, int itemStatus = 0, int vipLevel = 0, IChooseItem ins = null,Action sureAction=null,bool isDefaultCanDoSign=false)
    {
        m_RewardItem.AddItem(nItemType,nItemID,nItemCount,itemIndex,(int)DaySignInStates.NOTSIGNEN,vipLevel);
        if(sureAction!=null)
        {
            m_SureAction = sureAction;
        }
        Tab_CommonItem tabItem = TableManager.GetCommonItemByID(nItemID, 0);
        if (tabItem != null)
        {
            m_lblItemName.text = tabItem.Name;
        }
        else
        {
            switch (nItemType)
            {
                case RewardAwardItem.ItemType.ITEM_MONEY:
                    m_lblItemName.text = StrDictionary.GetClientDictionaryString("#{10921}");
                    break;
                case RewardAwardItem.ItemType.ITEM_EXP:
                    m_lblItemName.text = StrDictionary.GetClientDictionaryString("#{10849}");
                    break;
                case RewardAwardItem.ItemType.ITEM_YUANBAO:
                    m_lblItemName.text = StrDictionary.GetClientDictionaryString("#{2913}");
                    break;
                default:
                    m_lblItemName.text = "";
                    break;
            }
        }

        if(AwardLogic.Instance()==null || AwardLogic.Instance().m_DaySignInAwardRoot ==null)
        {
            return;
        }

        DaySignInItem Signitem = AwardLogic.Instance().m_DaySignInAwardRoot.GetDaySignInItemWithIndex(itemIndex);
        if (vipLevel > 0)
        {
            //达到VIP{0}可补领额外奖励
            if ((DaySignInStates)itemStatus == DaySignInStates.NOTSIGNEN)
            {
                m_ConditionStr = StrDictionary.GetClientDictionaryString("#{11239}", vipLevel);
                m_BtnStr = StrDictionary.GetClientDictionaryString("#{4638}");
            }
            //显示达到vipxx 奖励翻倍
            else if ( (DaySignInStates)itemStatus == DaySignInStates.NORMALSIGNED
                || (DaySignInStates)itemStatus == DaySignInStates.VIPSIGNEDHALF)
            {
                m_ConditionStr = StrDictionary.GetClientDictionaryString("#{11240}", Signitem.vipLimit);
                m_BtnStr = StrDictionary.GetClientDictionaryString("#{4638}");
            }
        }
        //消费xxx点券可以补签
        else
        {
            //当前是默认可签到的第一个
            if (isDefaultCanDoSign)
            {
                m_ConditionStr = "";
            }
            else
            {
                m_ConditionStr = StrDictionary.GetClientDictionaryString("#{4703}", Signitem.SupplyCost);
            }
            m_BtnStr = StrDictionary.GetClientDictionaryString("#{4638}");
        }
        ShowUIDuePopUpType();
        gameObject.SetActive(true);
    }

    void ShowUIDuePopUpType()
    {
        m_lblBtn.text = m_BtnStr;
        m_lblCondition.text = m_ConditionStr;
    }

    void CloseWindow()
    {
        m_SureAction = null;
        m_RewardItem.CleanUp();
        gameObject.SetActive(false);
    }

    public enum PopUpType
    {
        QianDao=0,//正常签到
        Buling,//Vip补领
        Buqian,//补签
    }
}

