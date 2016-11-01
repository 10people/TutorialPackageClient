using UnityEngine;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.Mission;
using Games.GlobeDefine;
using Games.Item;

/// <summary>
/// 任务主视图
/// </summary>
public class MissionView_CanAccept : MonoBehaviour 
{
#region UI ref
    public GameObject missionList;
    public GameObject missionItemTemplate;
    public UILabel lblMissionName;
    public UILabel lblMissionDesc;
    public GameObject rewardList;
    public GameObject rewardItemTemplate;
	public GameObject btnGo;
#endregion

#region params
    enum ItemType
    {
        ITEM_MONEY,
        ITEM_EXP,
        ITEM_YUANBAO,
        ITEM_ITEM,
    }
    const int MaxMissionNum = 9;
    int mMissionId = -1;
    MissionLogItem mLastSelectedItem = null;
    public int SelectMissionID
    {
        get
        {
            return mMissionId;
        }
        set
        {
            mMissionId = value;
        }
    }
#endregion

#region functions
    public void Init()
    {
        InitMissionList();
    }

    void InitMissionList()
    {
		List<int> nMissionIDList = GameManager.gameManager.MissionManager.GetAllCanAcceptedMissionList();
        if (nMissionIDList.Count <= 0)
        {
			btnGo.SetActive(false);
            //MessageBoxLogic.OpenOKBox(11359);
            return;
        }

		btnGo.SetActive(true);
        for (int i = 0; i < MaxMissionNum && i < nMissionIDList.Count; i++)
        {
            GameObject go = Utils.BindObjToParent(missionItemTemplate, missionList, "MissionLogItem" + i.ToString());
            if (go)
            {
                go.GetComponent<MissionLogItem>().MissionID = nMissionIDList[i];
                UIEventListener.Get(go).onClick = SelectMission;
            }
            if (i == 0)
            {
                SelectMission(go);
            }
        }
        missionList.GetComponent<UICabalGrid>().Reposition();
        missionList.GetComponent<UITopGrid>().recenterTopNow = true;
    }

    void AddRewardItem(ItemType type, int id, int count)
    {
        Tab_CommonItem commonItem = null;
        if (type == ItemType.ITEM_ITEM)
        {
            commonItem = TableManager.GetCommonItemByID(id, 0);
            if (commonItem == null)
            {
                return;
            }
        }
        GameObject go = Utils.BindObjToParent(rewardItemTemplate, rewardList);
        if (go)
        {
            MissionRewardItem item = go.GetComponent<MissionRewardItem>();
            item.itemType = (int)type;
            item.itemId = id;
            item.itemCount = count;
            UIEventListener.Get(go).onClick = ShowRewardDetail;
            item.lblCount.text = count.ToString();
            switch(type)
            {
                case ItemType.ITEM_EXP:
                    item.sprIcon.spriteName = "jingyan";
                    break;
                case ItemType.ITEM_MONEY:
                    item.sprIcon.spriteName = "jinbi";
                    break;
                case ItemType.ITEM_YUANBAO:
                    item.sprIcon.spriteName = "bdyuanbao";
                    break;
                case ItemType.ITEM_ITEM:
                    item.sprIcon.spriteName = commonItem.Icon;
                    item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[commonItem.Quality - 1];
                    break;
            }
        }
    }

    void SetData(int missionId)
    {
        mMissionId = missionId;
        // 任务基本
        Tab_MissionBase mission = TableManager.GetMissionBaseByID(mMissionId, 0);
        if (mission == null)
        {
            Debug.LogError("No MissionBase Error, id = " + mMissionId);
            return;
        }

        // 任务字典
        Tab_MissionDictionary missionDic = TableManager.GetMissionDictionaryByID(mMissionId, 0);
        if (missionDic == null)
        {
            Debug.LogError("No MissionDictionary Error, id = " + mMissionId);
            return;
        }
        lblMissionName.text = string.Format(missionDic.MissionName, "", "");
        lblMissionDesc.text = StrDictionary.GetClientString_WithNameSex(missionDic.MissionDesc);

        // 任务奖励
        Utils.CleanGrid(rewardList);
        Tab_MissionBonus missionBonus = TableManager.GetMissionBonusByID(mission.BonusID, 0);
        if (missionBonus == null)
        {
            Debug.LogError("No Tab_MissionBonus Error, mission id = " + mMissionId + ", bonus id = " + mission.BonusID);
            return;
        }
        // 经验
        if (missionBonus.Exp > 0)
        {
            AddRewardItem(ItemType.ITEM_EXP, -1, missionBonus.Exp);
        }
        // 金币
        if (missionBonus.Money > 0)
        {
            AddRewardItem(ItemType.ITEM_MONEY, -1, missionBonus.Money);
        }
        // 绑定元宝
        if (missionBonus.BindYuanBao > 0)
        {
            AddRewardItem(ItemType.ITEM_YUANBAO, -1, missionBonus.BindYuanBao);
        }
        // 物品
        for (int i = 0; i < missionBonus.getToolIDCount(); i++)
        {
            int itemId = missionBonus.GetToolIDbyIndex(i);
            int itemCount = missionBonus.GetToolNumbyIndex(i);
            if (itemCount <= 0)
            {
                continue;
            }
            AddRewardItem(ItemType.ITEM_ITEM, itemId, itemCount);
        }
        // 职业奖励
        int nProfess = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        if (nProfess >= 0 && nProfess < missionBonus.getProfessionItemIDCount())
        {
            AddRewardItem(ItemType.ITEM_ITEM, missionBonus.GetProfessionItemIDbyIndex(nProfess), missionBonus.GetProfessionNumbyIndex(nProfess));
        }
        // 多选物品
        int nChoosedItemdNum = missionBonus.ChoosedItemNum;
        if (nChoosedItemdNum > 0 && nChoosedItemdNum <= missionBonus.getItemIDCount())
        {
            AddRewardItem(ItemType.ITEM_ITEM, missionBonus.GetItemIDbyIndex(nChoosedItemdNum - 1), missionBonus.GetItemNumbyIndex(nChoosedItemdNum - 1));
        }
        rewardList.GetComponent<UIGrid>().Reposition();
    }

    void SelectMission(GameObject go)
    {
        MissionLogItem item = go.GetComponent<MissionLogItem>();
        if (mMissionId == item.MissionID)
        {
            return;
        }
        item.SetChooseState(true);
        if (mLastSelectedItem != null)
        {
            mLastSelectedItem.SetChooseState(false);
        }
        mLastSelectedItem = item;
        SetData(item.MissionID);
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

    /// <summary>
    /// 放弃任务
    /// </summary>
    /// <param name="go"></param>
    void AbandonMission(GameObject go)
    {
        if (mMissionId < 0)
        {
            return;
        }
        if (GameManager.gameManager.MissionManager != null)
        {
            GameManager.gameManager.MissionManager.AbandonMission(mMissionId);
        }

        UIManager.CloseUI(UIInfo.MissionLogRoot);
    }

	// 点击前往
	public void OkButtonClicked()
	{
		UIManager.CloseUI(UIInfo.MissionLogRoot);
		if (GameManager.gameManager.MissionManager != null)
		{
			GameManager.gameManager.MissionManager.MissionPathFinder(mMissionId);
		}
	}
#endregion
}
