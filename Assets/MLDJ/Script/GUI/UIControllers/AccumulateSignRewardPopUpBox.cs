using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using System.Collections.Generic;
using System;
using Games.AwardActivity;
using Games.GlobeDefine;

public class AccumulateSignRewardPopUpBox : MonoBehaviour 
{
    public MissionRewardItem[] m_RewardItem; //先借用下misson的
    public UIGrid rewardGrid;
    public UILabel m_lbltitle;
    public UILabel m_LastSignCount;
    public UILabel m_ButtonCloseLabel;
    //public UILabel m_lblItemName;
    public UILabel m_lblCondition;
    public GameObject m_btn;
    //public PopUpType m_popUpType = PopUpType.QianDao;
    public Action m_SureAction;
    //public int m_nItemIndex = 0;
    public GameObject m_bClose;
    private string m_ConditionStr;
    private string m_BtnStr;
    private MonthRewardItem m_MRBtn;
    void Awake()
    {
        UpdateBackGroundSignCount();
    }
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
    //public void AddItem(RewardAwardItem.ItemType nItemType, int nItemID, int nItemCount, int itemIndex = 0, int itemStatus = 0, int vipLevel = 0, IChooseItem ins = null,Action sureAction=null,bool isDefaultCanDoSign=false)
    public void UpdateChestRewards(AccumulateSignInfo itemInfo,int awardIndex,MonthRewardItem MRBtn)
    {
        int itemIndex = 0;
        if (itemInfo.Exp > 0)
        {
            SetRewardItem(-1,RewardAwardItem.ItemType.ITEM_EXP, itemInfo.Exp,ref itemIndex);
            itemIndex++;
        }
        if (itemInfo.Money > 0)
        {
            SetRewardItem(-1, RewardAwardItem.ItemType.ITEM_MONEY, itemInfo.Money, ref itemIndex);
            itemIndex++;
        }
        if (itemInfo.BindYuanbao > 0)
        {
            SetRewardItem(-1, RewardAwardItem.ItemType.ITEM_YUANBAO, itemInfo.BindYuanbao, ref itemIndex);
            itemIndex++;
        }


        if (itemInfo.ItemDataID1 > 0)
        {
            SetRewardItem(itemInfo.ItemDataID1, RewardAwardItem.ItemType.ITEM_ITEM, itemInfo.ItemCount1, ref itemIndex);
            itemIndex++;
        }
        
        if (itemIndex < 4)
        {
            if (itemInfo.ItemDataID2 > 0)
            {
                SetRewardItem(itemInfo.ItemDataID2, RewardAwardItem.ItemType.ITEM_ITEM, itemInfo.ItemCount2, ref itemIndex);
                itemIndex++;
            }
        }

        if (itemIndex < 4)
        {
            if (itemInfo.ItemDataID3 > 0)
            {
                SetRewardItem(itemInfo.ItemDataID3, RewardAwardItem.ItemType.ITEM_ITEM, itemInfo.ItemCount3, ref itemIndex);
                itemIndex++;
            }
        }


        if (itemIndex < 4)
        {
            if (itemInfo.ItemDataID4 > 0)
            {
                SetRewardItem(itemInfo.ItemDataID4, RewardAwardItem.ItemType.ITEM_ITEM, itemInfo.ItemCount4, ref itemIndex);
                itemIndex++;
            }
        }
        int count = m_RewardItem.Length;
        for (int i = 0; i < count; ++i) {
          if (m_RewardItem[i] != null) {
            if (i < itemIndex) {
              m_RewardItem[i].gameObject.SetActive(true);
            } else {
              m_RewardItem[i].gameObject.SetActive(false);
            }
          }
        }
        int signedCount = GameManager.gameManager.PlayerDataPool.AlreadySingedCount;
        if (signedCount >= awardIndex * 5)
        {
            
            if (itemInfo.ItemStatus == 1)
            {
                m_btn.SetActive(false);
                m_bClose.SetActive(false);
                m_ConditionStr = StrDictionary.GetClientDictionaryString("#{11288}");
                m_lblCondition.text = m_ConditionStr;
                m_lblCondition.enabled = true;

            }else
            {
                m_btn.SetActive(true);
                m_bClose.SetActive(false);
                m_lblCondition.enabled = false;
             }
        }
        else
        {
            m_btn.SetActive(false);
            m_bClose.SetActive(true);
            int leftDays = awardIndex * 5 - signedCount;
            m_lblCondition.text = StrDictionary.GetClientDictionaryString("#{11424}",leftDays);
            m_lblCondition.enabled = true;
        }
        m_lbltitle.text = StrDictionary.GetClientDictionaryString("#{4641}", signedCount);
        m_MRBtn = MRBtn;
        rewardGrid.repositionNow = true;
        gameObject.SetActive(true);
    }

    public void SetRewardItem(int nItemID,RewardAwardItem.ItemType type,int nCount,ref int nItemIndex)
    {
        //m_RewardItem.AddItem(nItemType,nItemID,nItemCount,itemIndex,(int)DaySignInStates.NOTSIGNEN,vipLevel);

        Tab_CommonItem tabItem = null;
        MissionRewardItem item = m_RewardItem[nItemIndex];
        switch (type)
        {
            case RewardAwardItem.ItemType.ITEM_EXP:
                item.sprIcon.spriteName = "jingyan";
                break;
            case RewardAwardItem.ItemType.ITEM_MONEY:
                item.sprIcon.spriteName = "jinbi";
                break;
            case RewardAwardItem.ItemType.ITEM_YUANBAO:
                item.sprIcon.spriteName = "bdyuanbao";
                break;
            case RewardAwardItem.ItemType.ITEM_ITEM:
                 tabItem = TableManager.GetCommonItemByID(nItemID, 0);
                 if (tabItem == null)
                 {
                    nItemIndex = nItemIndex - 1;
                    return;
                 }
                item.sprIcon.spriteName = tabItem.Icon;
                item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[tabItem.Quality - 1];
                break;
        }
        UIEventListener.Get(item.gameObject).onClick = ShowRewardDetail;
        item.gameObject.SetActive(true);
        item.itemType = (int)type;
        item.itemId = nItemID;
        item.itemCount = nCount;
        item.lblCount.text = nCount.ToString();
        item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[0];
        //if (type == RewardAwardItem.ItemType.ITEM_ITEM)
        //{

        //}
 
    }

    void ShowRewardDetail(GameObject go)
    {
        MissionRewardItem rItem = go.GetComponent<MissionRewardItem>();
        int nItemType = rItem.itemType;
        int nItemId = rItem.itemId;
        int nItemCount = rItem.itemCount;
        if (nItemType == (int)RewardAwardItem.ItemType.ITEM_ITEM)
        {
            if (nItemId <= -1)
            {
                return;
            }
            GameItem item = new GameItem();
            item.DataID = nItemId;
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
        else
        {
            MoneyTipsLogic.MoneyType type = MoneyTipsLogic.MoneyType.ITEM_NONE;
            switch ((RewardAwardItem.ItemType)nItemType)
            {
                case RewardAwardItem.ItemType.ITEM_EXP:
                    type = MoneyTipsLogic.MoneyType.ITEM_EXP;
                    break;
                case RewardAwardItem.ItemType.ITEM_MONEY:
                    type = MoneyTipsLogic.MoneyType.ITEM_MONEY;
                    break;

                case RewardAwardItem.ItemType.ITEM_YUANBAO:
                    type = MoneyTipsLogic.MoneyType.ITEM_YUANBAO;
                    break;
            }
            MoneyTipsLogic.ShowMoneyTip(type, nItemCount);
        }
    }

    void ShowUIDuePopUpType()
    {
        //m_lblBtn.text = m_BtnStr;
        m_lblCondition.text = m_ConditionStr;
    }

    void CloseWindow()
    {
        m_SureAction = null;
        //rewardGrid.CleanUp();
        m_MRBtn = null;
        gameObject.SetActive(false);
    }

    void OnClickOkBtn()
    {
        if (m_MRBtn != null)
        {
            m_MRBtn.SendAccumulateSignAward();
        }
        CloseWindow();
    }
    public void UpdateBackGroundSignCount()
    {
        int signedCount = GameManager.gameManager.PlayerDataPool.AlreadySingedCount;
        m_lbltitle.text = StrDictionary.GetClientDictionaryString("#{4641}", signedCount);

        int count = 0;
        int nowdayv = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nowDayIndex;
        System.Collections.Generic.Dictionary<int, Games.AwardActivity.DaySignInItem> m_DaySignInfoList = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList;
        Games.AwardActivity.DaySignInItem daysignitem;
        for (int i = 1; i < nowdayv; ++i)
        {
            if (m_DaySignInfoList.TryGetValue(i, out daysignitem))
            {
                switch ((DaySignInStates)daysignitem.ItemStatus)
                {
                    case DaySignInStates.NOTSIGNEN:
                        if (i % 2 == 0)
                        {
                            count += 2;
                        }
                        else
                        {
                            count += 1;
                        }
                        break;
                    case DaySignInStates.VIPSIGNEDHALF:
                        count += 1;
                        break;
                }
                
            }
        }
        if (m_DaySignInfoList.TryGetValue(nowdayv, out daysignitem))
        {
            if ((DaySignInStates)daysignitem.ItemStatus == DaySignInStates.VIPSIGNEDHALF)
            {
                ++count;
            }
        }
        m_LastSignCount.text = StrDictionary.GetClientDictionaryString("#{11514}", count);
    }
}

