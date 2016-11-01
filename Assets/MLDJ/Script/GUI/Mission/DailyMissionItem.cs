using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.Mission;
using Module.Log;
using Games.GlobeDefine;
using Games.Item;

public class DailyMissionItem : MonoBehaviour 
{
#region UI ref
    public UILabel lblMissionName;
    public UISprite sprIcon;
    public UILabel lblProgress;
    public UILabel lblDesc;
    public UILabel lblActive;

    public UISprite sprProgressBarFore;
    public UISprite sprProgressBarBack;
    public UISprite sprProgressBarLight;

    public GameObject rewardArea;
    public MissionRewardItem[] rewards;
    public GameObject btnClaim;
    public GameObject btnGoTo;

    public GameObject doneArea;
#endregion

#region params
    protected enum ItemType
    {
        ITEM_MONEY,
        ITEM_EXP,
        ITEM_REPUTATION,
        ITEM_ITEM,
        ITEM_YUANBAO,
    }
    int mMissionId = -1;
    int mGoToUIId = -1;
#endregion

#region functions
    /// <summary>
    /// 设置数据
    /// </summary>
    /// <param name="mission"></param>
    public void SetData(Tab_DailyMission mission)
    {
        mMissionId = mission.MissionID;
        mGoToUIId = mission.UIName;
        MissionManager missionManager = GameManager.gameManager.MissionManager;
        Tab_MissionDictionary missionDic = TableManager.GetMissionDictionaryByID(mMissionId, 0);
        Tab_MissionBase missionBase = TableManager.GetMissionBaseByID(mMissionId, 0);
        if (missionBase == null || missionBase.LogicType != (int)TableType.Table_OperationNum)
        {
            LogModule.WarningLog("DailyMission Logic Type Error, id = " + mission.Id);
            return;
        }
        Tab_MissionOperationNum missionOp = TableManager.GetMissionOperationNumByID(missionBase.LogicID, 0);
        lblMissionName.text = string.Format(missionDic.MissionName, "", "");
        sprIcon.spriteName = missionDic.MissionIcon;
        lblDesc.text = missionDic.MissionDesc;
        lblActive.text = StrDictionary.GetClientDictionaryString("#{1634}", mission.AwardActiveness);

        int progress = missionOp.OperationCount;
        if (missionManager.IsHaveMission(mMissionId))
        {
            progress = missionManager.GetMissionParam(mMissionId, 0);
            doneArea.SetActive(false);
            rewardArea.SetActive(true);
            btnClaim.SetActive(missionManager.GetMissionState(mMissionId) == (byte)MissionState.Mission_Completed);
            UIEventListener.Get(btnClaim).onClick = ClaimReward;
            SetRewards(mission);
        }
        else
        {
            doneArea.SetActive(true);
            rewardArea.SetActive(false);
            btnClaim.SetActive(false);
        }
        lblProgress.text = progress + "/" + missionOp.OperationCount;
        UpdateProgress(progress, missionOp.OperationCount);
        UIEventListener.Get(btnGoTo).onClick = GoToUI;
    }

    protected int mRewardIndex = 0;
    void SetRewards(Tab_DailyMission mission)
    {
        if (mission.AwardMoney > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_MONEY, -1, mission.AwardMoney);
            mRewardIndex++;
        }
        if (mission.AwardExp > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_EXP, -1, mission.AwardExp);
            mRewardIndex++;
        }
        if (mission.AwardReputation > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_REPUTATION, -1, mission.AwardReputation);
            mRewardIndex++;
        }
        if (mission.AwardItemID > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_ITEM, mission.AwardItemID, mission.AwardItemNum);
            mRewardIndex++;
        }
        for (; mRewardIndex < rewards.Length; mRewardIndex++)
        {
            rewards[mRewardIndex].gameObject.SetActive(false);
        }
        rewardArea.GetComponent<UIGrid>().Reposition();
    }

    protected void SetRewardItem(int index, ItemType type, int id, int count)
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

    void UpdateProgress(int progress, int target)
    {
        sprProgressBarFore.width = (int)((float)progress / target * sprProgressBarBack.width);
        Vector3 pos = sprProgressBarLight.transform.localPosition;
        sprProgressBarLight.transform.localPosition = new Vector3(sprProgressBarFore.width - 0f, pos.y);
    }

    void ClaimReward(GameObject go)
    {
        GameManager.gameManager.MissionManager.CompleteMission(mMissionId);
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

    void GoToUI(GameObject go)
    {
        NewPlayerGuidLogic.CloseWindow();
        if (mGoToUIId != -1)
        {
            Tab_UIPath uiPath = TableManager.GetUIPathByID(mGoToUIId, 0);
            // 按等级解锁
            if (uiPath.Lv != -1)
            {
                if (Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level >= uiPath.Lv)
                {
                    OpenUI(uiPath);
                }
                else if(uiPath.Tips != -1)
                {
                    MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{" + uiPath.Tips.ToString() + "}", uiPath.Lv));
                }
                return;
            }
            // 按标记解锁
            if (uiPath.USERCOMMONFLAG != -1)
            {
                if (GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag(uiPath.USERCOMMONFLAG))
                {
                    OpenUI(uiPath);
                }
                else if(uiPath.Tips != -1)
                {
                    MessageBoxLogic.OpenOKBox(uiPath.Tips);
                }
                return;
            }
            // 无限制
            OpenUI(uiPath);
        }
    }

    void OpenUI(Tab_UIPath uiPath)
    {
        if (UIPathData.m_DicUIInfo.ContainsKey(uiPath.Path))
        {
            UIPathData curData = UIPathData.m_DicUIInfo[uiPath.Path];
            // 科技院单独处理
            if (uiPath.Path == "Prefab/UI/Restaurant")
            {
                RestaurantController.OpenWindow(true);
            }
            else
            {
                UIManager.ShowUI(curData, (bSuccess, param) =>
                {
                    if (!string.IsNullOrEmpty(uiPath.Param))
                    {
                        switch (uiPath.Path)
                        {
                            case "Prefab/UI/ActivityController":
                                ActivityController.Instance().m_HuoDongControl.ChangeTab(uiPath.Param);
                                break;

                            case "Prefab/UI/PartnerFrameRoot":
                                PartnerFrameLogic.Instance().m_TabController.ChangeTab(uiPath.Param);
                                break;
                        }
                    }
                });
            }
        }
    }
#endregion
}
