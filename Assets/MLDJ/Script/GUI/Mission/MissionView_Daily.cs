using UnityEngine;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Mission;

public class MissionView_Daily : MonoBehaviour 
{
#region UI ref
    public GameObject missionList;
    public GameObject dailyMissionItemTemplate;

    public UISprite sprProgressBarFore;
    public UISprite sprProgressBarBack;
    public UISprite sprProgressBarLight;
    public UILabel lblActivePoint;

    public GameObject[] chests;
    public GameObject chestDialog;
    public UIGrid rewardGrid;
    public MissionRewardItem[] rewards;
    public GameObject btnClaim;
    public GameObject btnCloseDialog;
#endregion

#region params
    const int MAX_ACTIVENESS = 150;
    enum ItemType
    {
        ITEM_MONEY,
        ITEM_EXP,
        ITEM_BDYUANBAO,
        ITEM_REPUTATION,
        ITEM_ITEM,
    }
    int mOpenChestId = -1;
#endregion

#region functions
    public void Init()
    {
        AddListeners();
        UpdateMissionList();
    }

    void AddListeners()
    {
        foreach (GameObject go in chests)
        {
            UIEventListener.Get(go).onClick = OpenChest;
        }
        UIEventListener.Get(btnClaim).onClick = ClaimChestAward;
        UIEventListener.Get(btnCloseDialog).onClick = CloseChest;
    }

    public void UpdateMissionList()
    {
        Utils.CleanGrid(missionList);
        MissionManager missionManager = GameManager.gameManager.MissionManager;
        List<Tab_DailyMission> sortedList = new List<Tab_DailyMission>();
        foreach (List<Tab_DailyMission> dailyMission in TableManager.GetDailyMission().Values)
        {
            sortedList.Add(dailyMission[0]);
        }
        sortedList.Sort((a, b) =>
        {
            if (missionManager.GetMissionState(a.MissionID) > missionManager.GetMissionState(b.MissionID))
            {
                return -1;
            }
            else if (missionManager.GetMissionState(a.MissionID) < missionManager.GetMissionState(b.MissionID))
            {
                return 1;
            }
            else
            {
                return a.Id.CompareTo(b.Id);
            }
        });
        int i = 0;
        foreach (Tab_DailyMission mission in sortedList)
        {
            GameObject go = Utils.BindObjToParent(dailyMissionItemTemplate, missionList, i.ToString());
            if (go)
            {
                go.GetComponent<DailyMissionItem>().SetData(mission);
            }
            i++;
        }
        missionList.GetComponent<UIGrid>().Reposition();
        UpdateActivePoint(GameManager.gameManager.PlayerDataPool.AwardActivityData.Activeness);
    }

    public void UpdateActivePoint(int progress)
    {
        int target = MAX_ACTIVENESS;
        sprProgressBarFore.width = (int)((float)progress / target * sprProgressBarBack.width);
        Vector3 pos = sprProgressBarLight.transform.localPosition;
        sprProgressBarLight.transform.localPosition = new Vector3(sprProgressBarFore.width - 15f, pos.y);
        lblActivePoint.text = progress.ToString();
        UpdateChests(progress);
    }

    public void UpdateChests(int progress)
    {
        CloseChest(null);
        int index = 0;
        foreach (List<Tab_ActivenessAward> award in TableManager.GetActivenessAward().Values)
        {
            if (progress >= award[0].MiniActiveness && index < chests.Length)
            {
                // achieved
                bool claimed = GameManager.gameManager.PlayerDataPool.AwardActivityData.GetActivenessAwardFlag(award[0].Id);
                if (claimed)
                {
                    chests[index].transform.FindChild("claimed").gameObject.SetActive(true);
                    chests[index].transform.FindChild("active").gameObject.SetActive(false);
                    chests[index].GetComponent<UISprite>().enabled = false;
                }
                else
                {
                    chests[index].transform.FindChild("active").gameObject.SetActive(true);
                    //chests[index].GetComponent<UISprite>().enabled = false;
                }
            }
            index++;
        }
    }

    void OpenChest(GameObject go)
    {
        int myActiveness = GameManager.gameManager.PlayerDataPool.AwardActivityData.Activeness;
        Tab_ActivenessAward award = TableManager.GetActivenessAwardByID(int.Parse(go.name), 0);
        bool claimed = GameManager.gameManager.PlayerDataPool.AwardActivityData.GetActivenessAwardFlag(award.Id);
        if (claimed)
        {
            return;
        }
        if (myActiveness >= award.MiniActiveness)
        {
            mOpenChestId = award.Id;
            btnClaim.GetComponent<UIImageButton>().isEnabled = true;
        }
        else
        {
            mOpenChestId = -1;
            btnClaim.GetComponent<UIImageButton>().isEnabled = false;
        }
        ShowChestDialog(award);
    }

    void CloseChest(GameObject go)
    {
        chestDialog.SetActive(false);
    }

    void ClaimChestAward(GameObject go)
    {
        if (mOpenChestId >= 0)
        {
            GameManager.gameManager.PlayerDataPool.AwardActivityData.SendActivenessAward(mOpenChestId);
        }
    }

    int mRewardIndex = 0;
    void ShowChestDialog(Tab_ActivenessAward award)
    {
        mRewardIndex = 0;
        UpdateChestRewards(award);
        chestDialog.SetActive(true);
    }

    void UpdateChestRewards(Tab_ActivenessAward award)
    {
        if (award.Money > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_MONEY, -1, award.Money);
            mRewardIndex++;
        }
        if (award.Exp > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_EXP, -1, award.Exp);
            mRewardIndex++;
        }
        if (award.BindYuanbao > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_BDYUANBAO, -1, award.BindYuanbao);
            mRewardIndex++;
        }
        if (award.AwardReputation > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_REPUTATION, -1, award.AwardReputation);
            mRewardIndex++;
        }
        if (award.ItemDataID > 0)
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_ITEM, award.ItemDataID, award.ItemCount);
            mRewardIndex++;
        }
        for (; mRewardIndex < rewards.Length; mRewardIndex++)
        {
            rewards[mRewardIndex].gameObject.SetActive(false);
        }
        rewardGrid.repositionNow = true;
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
        item.gameObject.SetActive(true);
        item.itemType = (int)type;
        item.itemId = id;
        item.itemCount = count;
        item.lblCount.text = count.ToString();
        item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[0];
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
            case ItemType.ITEM_BDYUANBAO:
                item.sprIcon.spriteName = "bdyuanbao";
                break;
            case ItemType.ITEM_ITEM:
                item.sprIcon.spriteName = commonItem.Icon;
                item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[commonItem.Quality - 1];
                break;
        }
    }
#endregion
    public static bool CalculateIsShowRedPoint()
    {
      bool sign = false;
      MissionManager missionManager = GameManager.gameManager.MissionManager;
      foreach (List<Tab_DailyMission> dailyMission in TableManager.GetDailyMission().Values) {
        if (!missionManager.IsMissionHaveDone(dailyMission[0].MissionID)) {
          Tab_MissionBase missionBase = TableManager.GetMissionBaseByID(dailyMission[0].MissionID, 0);
          if (missionBase != null) {
            Tab_MissionOperationNum missionOp = TableManager.GetMissionOperationNumByID(missionBase.LogicID, 0);
            if (missionOp != null) {
              if (missionManager.GetMissionParam(dailyMission[0].MissionID, 0) < missionOp.OperationCount) {
                continue;
              } else {
                sign = true;
                break;
              }
            }
          }
        }
      }
      if (!sign) {
        int progress = GameManager.gameManager.PlayerDataPool.AwardActivityData.Activeness;
        int index = 0;
        foreach (List<Tab_ActivenessAward> award in TableManager.GetActivenessAward().Values) {
          if (progress >= award[0].MiniActiveness && index < 5) {
            bool claimed = GameManager.gameManager.PlayerDataPool.AwardActivityData.GetActivenessAwardFlag(award[0].Id);
            if (!claimed) {
              sign = true;
              break;
            }
          }
          index++;
        }
      }
      return sign;
    }
}
