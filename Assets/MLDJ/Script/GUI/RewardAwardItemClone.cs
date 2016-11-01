using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;

public class RewardAwardItemClone : RewardAwardItem
{
    public UISprite[] m_FrameSprite;
    public GameObject m_Mask;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public override void AddItem(ItemType nItemType, int nItemID, int nItemCount, int itemIndex = 0, int itemStatus = 0, int vipLevel = 0, IChooseItem ins = null, bool needTips = true)
    {
//         if (m_listWidgets.Count == 0)
//         {
//             UIWidget[] widgets = gameObject.GetComponentsInChildren<UIWidget>(true);
//             foreach (UIWidget wd in widgets)
//             {
//                 m_listWidgets.Add(wd);
//             }
//         }
        if (nItemType < ItemType.ITEM_MONEY || nItemType > ItemType.ITEM_ITEM
            || nItemCount <= 0)
        {
            return;
        }

        if (m_ShowItemIndex < 0
            || m_ShowItemIndex >= m_ItemGrid.Length
            || m_ShowItemIndex >= m_ItemIcon.Length
            || m_ShowItemIndex >= m_ItemLabel.Length
            || m_ShowItemIndex >= m_ItemType.Length
            || m_ShowItemIndex >= m_ItemDataID.Length
            || m_ShowItemIndex >= m_ItemCount.Length)
        {
            return;
        }
        m_nVipLevel = vipLevel;
        if (m_ItemGrid[m_ShowItemIndex] && m_ItemIcon[m_ShowItemIndex] && m_ItemLabel[m_ShowItemIndex])
        {
            m_ItemGrid[m_ShowItemIndex].SetActive(true);
            m_ItemType[m_ShowItemIndex] = (int)nItemType;
            m_ItemCount[m_ShowItemIndex] = nItemCount;
            switch (nItemType)
            {
                case ItemType.ITEM_MONEY:
                    m_ItemIcon[m_ShowItemIndex].spriteName = "jinbi";
                    m_ItemLabel[m_ShowItemIndex].text = nItemCount.ToString();
                    break;
                case ItemType.ITEM_EXP:
                    m_ItemIcon[m_ShowItemIndex].spriteName = "jingyan";
                    m_ItemLabel[m_ShowItemIndex].text = nItemCount.ToString();
                    break;
                case ItemType.ITEM_YUANBAO:
                    m_ItemIcon[m_ShowItemIndex].spriteName = "bdyuanbao";
                    m_ItemLabel[m_ShowItemIndex].text = nItemCount.ToString();
                    break;
                case ItemType.ITEM_ITEM:
                    Tab_CommonItem cItem = TableManager.GetCommonItemByID(nItemID, 0);
                    if (cItem != null)
                    {
                        m_ItemDataID[m_ShowItemIndex] = nItemID;
                        m_ItemIcon[m_ShowItemIndex].spriteName = cItem.Icon;
                        m_ItemLabel[m_ShowItemIndex].text = nItemCount.ToString();
                        m_FrameSprite[m_ShowItemIndex].spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                    }
                    break;
            }
            if (needTips)
            {
                UIEventListener.Get(m_ItemGrid[m_ShowItemIndex]).onClick = ShowRewardDetail;
            }

            m_ShowItemIndex += 1;

        }


        if (itemIndex > 0)
        {
            DealWithSignInItem(itemIndex, itemStatus, vipLevel, ins);
        }
    }
    protected override void SetOtherMask(int itemindex, DaySignInStates type)
    {
        switch (type)
        {
            case DaySignInStates.INVALID:
                StopEffect();
                m_Mask.SetActive(false);
                break;
            case DaySignInStates.NOTSIGNEN:
                int nowday = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nowDayIndex;
                if (nowday == itemindex)
                {
                    PlayEffect();
                    m_lblBuQian.SetActive(false);
                }
                else
                {
                    StopEffect();
                    if (nowday > itemindex)
                    {
                        bool sign = true;
                        System.Collections.Generic.Dictionary<int, Games.AwardActivity.DaySignInItem> m_DaySignInfoList = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList;
                        Games.AwardActivity.DaySignInItem daysignitem;
                        for (int i = 1; i < itemindex; ++i)
                        {
                            if (m_DaySignInfoList.TryGetValue(i, out daysignitem) && daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
                            {
                                sign = false;
                                break;
                            }
                        }
                        m_lblBuQian.SetActive(sign);
                    }
                }
                m_Mask.SetActive(false);
                break;
            case DaySignInStates.NORMALSIGNED:
                StopEffect();
                m_Mask.SetActive(true);
                break;
            case DaySignInStates.VIPSIGNEDHALF:
                StopEffect();
                int nowdayv = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nowDayIndex;
                if (nowdayv > itemindex)
                {
                    bool sign = true;
                    System.Collections.Generic.Dictionary<int, Games.AwardActivity.DaySignInItem> m_DaySignInfoList = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList;
                    Games.AwardActivity.DaySignInItem daysignitem;
                    for (int i = 1; i < itemindex; ++i)
                    {
                        if (m_DaySignInfoList.TryGetValue(i, out daysignitem) && (daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN || daysignitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF))
                        {
                            sign = false;
                            break;
                        }
                    }
                    m_vipBuQian.SetActive(sign);
                }
                m_Mask.SetActive(false);
                break;
            case DaySignInStates.VIPSIGNED:
                StopEffect();
                m_Mask.SetActive(true);
                break;
        }
    }
    protected override void ItemClick(GameObject value)
    {

        int nItemType = -1;
        int nItemID = -1;
        int nCount = 0;
        for (int i = 0; i < m_ItemGrid.Length && i < m_ItemDataID.Length; i++)
        {
            if (m_ItemGrid[i].name == value.name)
            {
                nItemType = m_ItemType[i];
                nItemID = m_ItemDataID[i];
                nCount = m_ItemCount[i];
                break;
            }
        }
        //Frozen状态只显示TIPS没有其他操作
        if (m_bInFrozenState)
        {
            if (nItemType == (int)ItemType.ITEM_ITEM)
            {
                if (nItemID <= -1)
                {
                    return;
                }
                GameItem item = new GameItem();
                item.DataID = nItemID;
                MonthSignItemIntroduce.ShowMoneyTip(MoneyTipsLogic.MoneyType.ITEM_NONE, nItemID);
                if (item.IsEquipMent())
                {
                    //EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
                }
                else
                {
                    //ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
                }
            }
            else
            {
                MoneyTipsLogic.MoneyType tpye = MoneyTipsLogic.MoneyType.ITEM_NONE;
                switch ((ItemType)nItemType)
                {
                    case ItemType.ITEM_EXP:
                        tpye = MoneyTipsLogic.MoneyType.ITEM_EXP;
                        break;
                    case ItemType.ITEM_MONEY:
                        tpye = MoneyTipsLogic.MoneyType.ITEM_MONEY;
                        break;
                    case ItemType.ITEM_YUANBAO:
                        tpye = MoneyTipsLogic.MoneyType.ITEM_YUANBAO;
                        break;
                }
                //MoneyTipsLogic.ShowMoneyTip(tpye, nCount);
                MonthSignItemIntroduce.ShowMoneyTip(tpye, nCount);

            }
        }
        else
        {
            int nowdayv = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nowDayIndex;
            if (nowdayv > m_ItemIndex)
            {
                System.Collections.Generic.Dictionary<int, Games.AwardActivity.DaySignInItem> m_DaySignInfoList = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList;
                Games.AwardActivity.DaySignInItem daysignitem;
                if (m_DaySignInfoList.TryGetValue(m_ItemIndex, out daysignitem))
                {
//                    DaySignInStates states = (DaySignInStates)daysignitem.ItemStatus;
                    if (daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
                    {
                        for (int i = 1; i < m_ItemIndex; ++i)
                        {
                            if (m_DaySignInfoList.TryGetValue(i, out daysignitem) && daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
                            {
                                GUIData.AddNotifyData2Client(false, "#{11515}");
                                return;
                            }
                        }
                    }
                    else if (daysignitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF)
                    {
                        for (int i = 1; i < m_ItemIndex; ++i)
                        {
                            if (m_DaySignInfoList.TryGetValue(i, out daysignitem) && (daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN || daysignitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF))
                            {
                                GUIData.AddNotifyData2Client(false, "#{11515}");
                                return;
                            }
                        }
                    }
                }
            }
            if (AwardLogic.Instance() != null)
            {
                AwardLogic.Instance().m_PopUpBox.AddItem((RewardAwardItem.ItemType)nItemType,
                    nItemID, nCount, m_ItemIndex, (int)m_ItemStatus, vipLevel: m_nVipLevel, sureAction: ChangeChooseItem,
                    isDefaultCanDoSign: m_bCanDoNormalSign);
            }
        }
    }
}
