using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Item;

/// <summary>
/// 七日狂欢View
/// by weitong
/// </summary>
public class SevenDaysReward : MonoBehaviour
{
#region UI ref
    public UIGrid sevenDaysGrid;
    public GameObject sevenDaysItemTemplate;
    public UIGrid missionGrid;
    public GameObject sevenDaysMissionItemTemplate;
    public GameObject btnClose;
    public UIImageButton btnClaim;
    public UILabel lblProgress;
    public UISlider sldProgress;
    public MissionRewardItem[] rewards;
#endregion

#region params
    enum ItemType
    {
        ITEM_MONEY,
        ITEM_EXP,
        ITEM_REPUTATION,
        ITEM_ITEM,
        ITEM_YUANBAO,
    }

    SevenDaysRewardProxy mProxy = null;
    int mCurDay = -1;
    SevenDaysItem mLastSelectedItem = null;
#endregion

#region functions
    void Init()
    {
        mProxy = GameManager.gameManager.PlayerDataPool.SevenDaysRewardProxy;
        AddListeners();
        InitDaysGrid();
    }

    void InitDaysGrid()
    {
        int curDays = mProxy.GetCurDays();
        for (int i = 0; i < 7; i++)
        {
            GameObject go = Utils.BindObjToParent(sevenDaysItemTemplate, sevenDaysGrid.gameObject, "SevenDaysItem" + i.ToString());
            if (go)
            {
                go.GetComponent<SevenDaysItem>().SetData(i, i < curDays);
                UIEventListener.Get(go).onClick = SelectDay;
            }
            if (i == 0)
            {
                SelectDay(go);
            }
        }
        sevenDaysGrid.Reposition();
    }

    void AddListeners()
    {
        UIEventListener.Get(btnClose).onClick = CloseUI;
        UIEventListener.Get(btnClaim.gameObject).onClick = ClaimDayTarReward;
    }

    void SetData(int dayIndex)
    {
        mCurDay = dayIndex;
        SevenDaysRewardVO vo = mProxy.GetSevenDaysRewardByDay(mCurDay);
        bool signforprogress = false;
        if (vo == null)
        {
            signforprogress = true;
            vo = new SevenDaysRewardVO();
            vo.dayTargetProgress = -1;
            vo.dayIndex = dayIndex;
            List<Tab_SevenDaysReward> items = SevenDaysRewardProxy.GetTabSevenDaysRewardByDay(dayIndex);
            int count = items.Count;
            for (int i = 0; i < count; ++i)
            {
                if (i == 0)
                {
                    vo.dayTarget = items[0];
                }
                else
                {
                    vo.data[i - 1] = items[i];
                }
            }
        }
        if (vo.dayTargetProgress == -1)
        {
            lblProgress.gameObject.SetActive(false);
            sldProgress.value = signforprogress ? 0f : (float)vo.dayTarget.OpCount / vo.dayTarget.OpCount;
        }
        else
        {
            lblProgress.text = vo.dayTargetProgress + "/" + vo.dayTarget.OpCount;
            lblProgress.gameObject.SetActive(true);
            sldProgress.value = (float)vo.dayTargetProgress / vo.dayTarget.OpCount;
        }
        btnClaim.isEnabled = (vo.dayTargetProgress >= vo.dayTarget.OpCount);
        SetRewards(vo.dayTarget);

        Utils.CleanGrid(missionGrid.gameObject);
        missionGrid.GetComponent<UITopGrid>().Recenter(true);
        for (int i = 0; i < vo.data.Length; i++)
        {
            if (vo.data[i] == null)
            {
                break;
            }
            string goName = string.Empty;
            if (vo.curProgress[i] == -1)
            {
                // the names of completed ones begin with 'c'
                goName = "c" + i.ToString();
            }
            else if (vo.curProgress[i] >= vo.data[i].OpCount)
            {
                // the names of unclaimed ones begin with 'a'
                goName = "a" + i.ToString();
            }
            else
            {
                // the names of uncompleted ones begin with 'b'
                goName = "b" + i.ToString();
            }
            GameObject go = Utils.BindObjToParent(sevenDaysMissionItemTemplate, missionGrid.gameObject, goName);
            if (go)
            {
                go.GetComponent<SevenDaysMissionItem>().SetData(vo.data[i], vo.curProgress[i]);
            }
        }
        UIGrid grid = missionGrid.GetComponent<UIGrid>();
        grid.sorted = true;
        grid.Reposition();
    }

    int mRewardIndex = 0;
    void SetRewards(Tab_SevenDaysReward tabData)
    {
        mRewardIndex = 0;
        if (tabData.Money > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_MONEY, -1, tabData.Money);
            mRewardIndex++;
        }
        if (tabData.Yuanbao > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_YUANBAO, -1, tabData.Yuanbao);
            mRewardIndex++;
        }
        for (int i = 0; i < tabData.getItemIDCount(); i++)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_ITEM, tabData.GetItemIDbyIndex(i), tabData.GetItemCountbyIndex(i));
            mRewardIndex++;
        }
        for (; mRewardIndex < rewards.Length; mRewardIndex++)
        {
            rewards[mRewardIndex].gameObject.SetActive(false);
        }
        rewards[0].transform.parent.GetComponent<UIGrid>().Reposition();
    }

    void SetRewardItem(int index, ItemType type, int id, int count)
    {
        Tab_CommonItem commonItem = null;
        if (type == ItemType.ITEM_ITEM)
        {
            commonItem = TableManager.GetCommonItemByID(id, 0);
            if (commonItem == null)
            {
                mRewardIndex--;
                return;
            }
        }
        if (index >= rewards.Length)
        {
            mRewardIndex--;
            return;
        }
        MissionRewardItem item = rewards[index];
        item.itemType = (int)type;
        item.itemId = id;
        item.itemCount = count;
        item.gameObject.SetActive(true);
        UIEventListener.Get(item.gameObject).onClick = ShowRewardDetail;
        item.lblCount.text = count.ToString();
        switch (type)
        {
            case ItemType.ITEM_EXP:
                item.sprIcon.spriteName = "jingyan";
                break;
            case ItemType.ITEM_MONEY:
                item.sprIcon.spriteName = "jinbi";
                break;
            case ItemType.ITEM_REPUTATION:
                item.sprIcon.spriteName = "reputation";
                break;
            case ItemType.ITEM_ITEM:
                item.sprIcon.spriteName = commonItem.Icon;
                item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[commonItem.Quality - 1];
                break;
            case ItemType.ITEM_YUANBAO:
                item.sprIcon.spriteName = "bdyuanbao";
                break;
        }
    }

    public void UpdateDay(int dayIndex)
    {
        if (mCurDay != dayIndex)
        {
            return;
        }
        SetData(dayIndex);
    }
#endregion

#region UI Handlers
    void CloseUI(GameObject go)
    {
        UIManager.CloseUI(UIInfo.SevenDaysReward);
    }

    void SelectDay(GameObject go)
    {
        SevenDaysItem item = go.GetComponent<SevenDaysItem>();
        if (mCurDay == item.dayIndex)
        {
            return;
        }
        item.Select(true);
        if (mLastSelectedItem != null)
        {
            mLastSelectedItem.Select(false);
        }
        mLastSelectedItem = item;
        SetData(item.dayIndex);
    }

    void ClaimDayTarReward(GameObject go)
    {
        mProxy.ClaimReward(mCurDay, 0);
    }

    void ShowRewardDetail(GameObject go)
    {
        MissionRewardItem clickedItem = go.GetComponent<MissionRewardItem>();
        int nItemType = clickedItem.itemType;
        int nItemID = clickedItem.itemId;
        int nCount = clickedItem.itemCount;

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
            MoneyTipsLogic.MoneyType type = MoneyTipsLogic.MoneyType.ITEM_NONE;
            switch ((ItemType)nItemType)
            {
                case ItemType.ITEM_EXP:
                    type = MoneyTipsLogic.MoneyType.ITEM_EXP;
                    break;
                case ItemType.ITEM_MONEY:
                    type = MoneyTipsLogic.MoneyType.ITEM_MONEY;
                    break;
                case ItemType.ITEM_REPUTATION:
                    type = MoneyTipsLogic.MoneyType.ITEM_SHENGWANG;
                    break;
                case ItemType.ITEM_YUANBAO:
                    type = MoneyTipsLogic.MoneyType.ITEM_YUANBAO;
                    break;
            }
            MoneyTipsLogic.ShowMoneyTip(type, nCount);
        }
    }
#endregion

#region Singleton
    private static SevenDaysReward m_Instance = null;
    public static SevenDaysReward Instance()
    {
        return m_Instance;
    }

    void OnEnable()
    {
        m_Instance = this;
        Init();
    }

    void OnDisable()
    {
        m_Instance = null;
    }
#endregion
}
