/********************************************************************************
 *	文件名：RewardAwardItem.cs
 *	全路径：	\Script\GUI\RewardAwardItem.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-07-03
 *
 *	功能说明： 奖励物品 Item
 *	       
 *	修改记录：
*********************************************************************************/
/*
 * 签到Item的几种状态：
 * 1 不可操作-灰色
 * 2 尚未领取 -> 1,4  2->4 条件为Item有VIP奖励
 * 3 可补签 ->1,4     3->4 条件为Item有VIP奖励
 * 4 可VIP补签（已经领取过，但是未领取过VIP奖励）->1
 */
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using System.Collections.Generic;
public class RewardAwardItem : MonoBehaviour
{
    public enum ItemType
    {
        ITEM_MONEY,
        ITEM_EXP,
        ITEM_YUANBAO,
        ITEM_ITEM,
    }
    [SerializeField]
    // 领取按钮三种状态
    public enum AwardState
    {
        AWARD_CANNNTHAVE,
        AWARD_CANHAVE,
        AWARD_HAVEDONE,
        AWARD_NOTHAVEDONE,
        AWARD_CANSUPPLYHAVE,
        AWARD_IDLE,//新增，此状态只显示基本UI，不显示vip以及补签等等
    }


    // 物品相关
    public GameObject[] m_ItemGrid;
    public UISprite[] m_ItemIcon;
    public UILabel[] m_ItemLabel;
    public GameObject[] m_EffectPoint;

    // 状态相关
    public UISprite m_HaveAwardSprite; //已经领过 - 的标示
    public UISprite m_ChooseSprit;

    protected int m_ShowItemIndex = 0;
    protected int[] m_ItemType = new int[2];
    protected int[] m_ItemDataID = new int[2];
    protected int[] m_ItemCount = new int[2];
    protected int m_nVipLevel = 0;
    // 每日签到奖励特有的VIP等级信息
    public UISprite m_ChooseVipSprite;
    public UISprite m_VipDoubleSprite;
    public UILabel m_vipDoubleLable;
    public UISprite m_vipHalfRewardedSp;
    public GameObject m_vipBuQian;
    public GameObject m_lblBuQian;


    protected int m_ItemIndex;
    private Color m_NormalColor = new Color(1, 1, 1, 1);
    private Color m_GrayColor = new Color(0,255,255,255);
    //protected List<UIWidget> m_listWidgets = new List<UIWidget>();

    public DaySignInStates m_ItemStatus;

    private bool m_bHasVip = true;//是否与vip相关
    protected bool m_bInFrozenState = false;//是否处于冻结状态。
    private bool m_bCanBuQian = false;//是否能补签
    protected bool m_bCanDoNormalSign = false;//是否可以签到。每天都有一个可以签到的。

    // Use this for initialization
    void Start()
    {

    }

    public void CleanUp()
    {
        m_ShowItemIndex = 0;
        m_bInFrozenState = false;
        m_bCanBuQian = false;
        // m_bCanDoNormalSign = false;
        for (int i = 0; i < m_ItemDataID.Length; i++)
        {
            m_ItemType[i] = -1;
            m_ItemDataID[i] = -1;
            m_ItemCount[i] = 0;
        }
        for (int i = 0; i < m_ItemGrid.Length; i++)
        {
            if (m_ItemGrid[i])
            {
                m_ItemGrid[i].SetActive(false);
            }
        }
        for (int i = 0; i < m_ItemIcon.Length; i++)
        {
            if (m_ItemIcon[i])
            {
                m_ItemIcon[i].spriteName = "";
            }
        }
        for (int i = 0; i < m_ItemLabel.Length; i++)
        {
            if (m_ItemLabel[i])
            {
                m_ItemLabel[i].text = "";
            }
        }
        if (m_HaveAwardSprite && m_ChooseSprit)
        {
            m_HaveAwardSprite.gameObject.SetActive(false);
            m_ChooseSprit.gameObject.SetActive(false);
        }

        for (int i = 0; i < m_EffectPoint.Length; i++)
        {
            m_EffectPoint[i].SetActive(false);
        }
    }

    public virtual void AddItem(ItemType nItemType, int nItemID, int nItemCount, int itemIndex = 0, int itemStatus = 0, int vipLevel = 0, IChooseItem ins = null,bool needTips = true)
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

    protected void ShowRewardDetail(GameObject go)
    {
        
        int nItemType = m_ItemType[0];
        int nItemId = m_ItemDataID[0];
        int nItemCount = m_ItemCount[0];
        if (nItemType == (int)ItemType.ITEM_ITEM)
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
            switch ((ItemType)nItemType)
            {
                case ItemType.ITEM_EXP:
                    type = MoneyTipsLogic.MoneyType.ITEM_EXP;
                    break;
                case ItemType.ITEM_MONEY:
                    type = MoneyTipsLogic.MoneyType.ITEM_MONEY;
                    break;

                case ItemType.ITEM_YUANBAO:
                    type = MoneyTipsLogic.MoneyType.ITEM_YUANBAO;
                    break;
            }
            MoneyTipsLogic.ShowMoneyTip(type, nItemCount);
        }
    }
    private bool vipChooseSpriteInstead = false;
    private IChooseItem signAwardLogicInstance = null;

    public void DealWithSignInItem(int itemIndex, int itemStatus, int vipLevel, IChooseItem ins)
    {
        signAwardLogicInstance = ins;
        m_ItemIndex = itemIndex;

        if (vipLevel > 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
        {
            vipChooseSpriteInstead = true;
            //m_ChooseVipSprite.gameObject.SetActive(true);
            if (m_VipDoubleSprite != null)
            {
                m_VipDoubleSprite.gameObject.SetActive(true);
            }
            if (m_vipDoubleLable != null)
            {
                m_vipDoubleLable.text = StrDictionary.GetClientDictionaryString("#{11508}", vipLevel);
            }
        }
        else
        {
            vipChooseSpriteInstead = false;
            //m_ChooseVipSprite.gameObject.SetActive(false);
            if (m_VipDoubleSprite != null)
            {
                m_VipDoubleSprite.gameObject.SetActive(false);
            }
           
            //m_vipDoubleLable.gameObject.SetActive(false);
        }


        m_HaveAwardSprite.gameObject.SetActive(false);
        SetSignInItemHalfVipRewarded(false);
        m_ItemStatus = (DaySignInStates)itemStatus;
        SetOtherMask(m_ItemIndex, (DaySignInStates)itemStatus);
        switch ((DaySignInStates)itemStatus)
        {
            case DaySignInStates.NORMALSIGNED:
                {
                    m_HaveAwardSprite.gameObject.SetActive(true);
                    if (m_lblBuQian != null)
                    {
                        m_lblBuQian.SetActive(false);
                    }
                    //if (vipChooseSpriteInstead)//有vip双倍奖励。
                    //{
                    //    m_bInFrozenState = false;
                    //    ChangeAllWidgetsToColor(m_NormalColor);
                    //}
                    //else//无VIP双倍奖励并且已经领过，说明这个签到ITEM没有其他可以操作的了。
                    {
                        m_bInFrozenState = true;
                        ChangeAllWidgetsToColor(m_GrayColor);
                    }
                    if (m_vipBuQian != null)
                    {
                        m_vipBuQian.SetActive(vipChooseSpriteInstead);
                    }
                    
                    break;
                }
            case DaySignInStates.NOTSIGNEN:
                {
                    ChangeAllWidgetsToColor(m_NormalColor);
                    if (m_vipBuQian != null)
                    {
                        m_vipBuQian.SetActive(false);
                    }
                   
                    m_bCanBuQian = CanSupply(itemIndex);
                    m_bCanDoNormalSign = CanDoSign(itemIndex);
                    int nowday = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nowDayIndex;
                    if (nowday > m_ItemIndex)
                    {
                        bool sign = true;
                        System.Collections.Generic.Dictionary<int, Games.AwardActivity.DaySignInItem> m_DaySignInfoList = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList;
                        Games.AwardActivity.DaySignInItem daysignitem;
                        for (int i = 1; i < m_ItemIndex; ++i)
                        {
                            if (m_DaySignInfoList.TryGetValue(i, out daysignitem) && daysignitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
                            {
                                sign = false;
                                break;
                            }
                        }
                        if (m_lblBuQian != null)
                        {
                            m_lblBuQian.SetActive(sign);
                        }
                    }
                    break;
                }
            case DaySignInStates.VIPSIGNED:
                {
                    ChangeAllWidgetsToColor(m_GrayColor);
                    if (m_vipBuQian != null)
                    {
                        m_vipBuQian.SetActive(false);
                    }
                   
                    if (m_lblBuQian != null)
                    {
                        m_lblBuQian.SetActive(false);
                    }
                    break;
                }
            case DaySignInStates.VIPSIGNEDHALF:
                {
                    ChangeAllWidgetsToColor(m_NormalColor);
                    if (m_vipBuQian != null)
                    {
                        m_vipBuQian.SetActive(true);
                    }
                    
                    if (m_lblBuQian != null)
                    {
                        m_lblBuQian.SetActive(false);
                    }
                    SetSignInItemHalfVipRewarded(true);
                    break;
                }
            case DaySignInStates.INVALID:
                {
                    m_bInFrozenState = true;
                    ChangeAllWidgetsToColor(m_NormalColor);
                    if (m_vipBuQian != null)
                    {
                        m_vipBuQian.SetActive(false);
                    }
                   
                    if (m_lblBuQian != null)
                    {
                        m_lblBuQian.SetActive(false);
                    }
                    SetSignInItemHalfVipRewarded(false);
                }
                break;
            default:
                {
                    ChangeAllWidgetsToColor(m_NormalColor);
                    break;
                }
        }
    }
    /// <summary>
    /// 在未签到的情况下是否可以签到
    /// </summary>
    /// <param name="itemIndex"></param>
    /// <returns></returns>
    bool CanDoSign(int itemIndex)
    {
        //bool canSign = false;
        //if (itemIndex == 1)
        //{
        //    canSign = true;
        //}
        //else
        //{
        //    canSign = GameManager.gameManager.PlayerDataPool.IsFirstCanSupply(itemIndex);
        //}

        return GameManager.gameManager.PlayerDataPool.CanDoSign(itemIndex);
    }

    bool CanSupply(int itemIndex)
    {
        return GameManager.gameManager.PlayerDataPool.IsFirstCanSupply(itemIndex);
    }

    public void ActiveChangeState(DaySignInStates itemStatus)
    {
        AwardLogic.Instance().m_AccSignPopUpBox.UpdateBackGroundSignCount();
        m_ItemStatus = itemStatus;
        SetOtherMask(m_ItemIndex, itemStatus);
        switch (itemStatus)
        {
            case DaySignInStates.NORMALSIGNED:
                m_HaveAwardSprite.gameObject.SetActive(true);
                if (m_lblBuQian != null)
                {
                    m_lblBuQian.SetActive(false);
                }
                //if (vipChooseSpriteInstead)//有vip双倍奖励。
                //{
                //    m_bInFrozenState = false;
                //    ChangeAllWidgetsToColor(m_NormalColor);
                //}
                //else//无VIP双倍奖励并且已经领过，说明这个签到ITEM没有其他可以操作的了。
                {
                    m_bInFrozenState = true;
                    ChangeAllWidgetsToColor(m_GrayColor);
                }
                if (m_vipBuQian != null)
                {
                    m_vipBuQian.SetActive(false);
                }
               
                break;
            case DaySignInStates.VIPSIGNEDHALF:
                ChangeAllWidgetsToColor(m_NormalColor);
                if (m_vipBuQian != null)
                {
                    m_vipBuQian.SetActive(true);
                }
                
                if (m_lblBuQian != null)
                {
                    m_lblBuQian.SetActive(false);
                }
                SetSignInItemHalfVipRewarded(true);
                break;
        }
    }

    public void SetToIdleState()
    {
        if (m_VipDoubleSprite != null)
        {
            m_VipDoubleSprite.gameObject.SetActive(false);
        }
        if (m_vipBuQian != null)
        {
            m_vipBuQian.SetActive(false);
        }
       
    }

    public void UpdateItemState(AwardState ItemState)
    {
        if (ItemState == AwardState.AWARD_HAVEDONE)
        {
            m_HaveAwardSprite.gameObject.SetActive(true);
        }
        else if (ItemState == AwardState.AWARD_IDLE)
        {
            SetToIdleState();
        }
        else
        {
            //             bool bIsCanHave = (ItemState == AwardState.AWARD_CANHAVE)?true:false;
            //             for (int i = 0; i < m_EffectPoint.Length; i++)
            //             {
            //                 m_EffectPoint[i].SetActive(bIsCanHave);
            //             }

            m_HaveAwardSprite.gameObject.SetActive(false);
        }
    }

    public void SetSignInItemRewarded(bool bactive)
    {
        m_HaveAwardSprite.gameObject.SetActive(bactive);

    }

    public void SetSignInItemHalfVipRewarded(bool bactive)
    {
        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
        {
            if (bactive)
            {
                SetSignInItemRewarded(bactive);
            }
            bactive = false;
        }
        if (m_vipHalfRewardedSp != null)
            m_vipHalfRewardedSp.gameObject.SetActive(bactive);
    }

    public void SetChooseState(bool bActive)
    {
        //不知道是做什么的 注释掉 -.-
        //         if (m_ChooseSprit)
        //         {
        //             m_ChooseSprit.gameObject.SetActive(bActive);
        //         }
        // 		if(vipChooseSpriteInstead)
        // 		{
        // 			m_ChooseSprit.gameObject.SetActive(false);
        // 			m_ChooseVipSprite.gameObject.SetActive(bActive);
        // 		}
    }
    void ItemTipClick(GameObject value)
    {
        ItemClick(value);
    }
    // 物品点击
    protected virtual void ItemClick(GameObject value)
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
                MoneyTipsLogic.ShowMoneyTip(tpye, nCount);
            }
        }
        else
        {
            if (AwardLogic.Instance() != null)
            {
                AwardLogic.Instance().m_PopUpBox.AddItem((RewardAwardItem.ItemType)nItemType,
                    nItemID, nCount, m_ItemIndex, (int)m_ItemStatus, vipLevel: m_nVipLevel, sureAction: ChangeChooseItem,
                    isDefaultCanDoSign: m_bCanDoNormalSign);
            }
        }
    }

    protected void ChangeChooseItem()
    {
        if (signAwardLogicInstance == null)
            return;

        signAwardLogicInstance.ChangeChooseItem(m_ItemIndex);
    }

    // 播放帧动画
    public void PlayEffect()
    {
        for (int i = 0; i < m_EffectPoint.Length; i++)
        {
            m_EffectPoint[i].SetActive(true);
        }
    }
    public void StopEffect()
    {
        for (int i = 0; i < m_EffectPoint.Length; i++)
        {
            m_EffectPoint[i].SetActive(false);
        }
    }
    void ChangeAllWidgetsToColor(Color color)
    {
        //帮雷说不改，原色
//         foreach (UIWidget wd in m_listWidgets)
//         {
//             wd.color = color;
//         }
    }
    protected virtual void SetOtherMask(int itemindex, DaySignInStates type)
    {

    }

}