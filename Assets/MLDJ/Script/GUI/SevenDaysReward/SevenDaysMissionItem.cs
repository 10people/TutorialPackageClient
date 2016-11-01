using UnityEngine;
using System.Collections;
using GCGame.Table;

public class SevenDaysMissionItem : DailyMissionItem 
{
    public GameObject btnGoWith;
    public GameObject objBg;

    int mDayIndex = -1;
    int mIndex = -1;
    string mGoToUIPath;

    public void SetData(Tab_SevenDaysReward tabData, int curProgress)
    {
        mDayIndex = tabData.Day - 1;
        mIndex = tabData.Index;
        mGoToUIPath = tabData.LinkUI;
        lblMissionName.text = tabData.Name;
        lblDesc.text = tabData.Description;

        if (curProgress != -1)
        {
            lblProgress.text = curProgress + "/" + tabData.OpCount;
            doneArea.SetActive(false);
            rewardArea.SetActive(true);
            btnClaim.SetActive(curProgress >= tabData.OpCount);
            UIEventListener.Get(btnClaim).onClick = ClaimReward;
			UIEventListener.Get(btnGoWith).onClick = GoToUI;
            SetRewards(tabData);
            objBg.SetActive(!btnClaim.activeSelf);
        }
        else
        {
            lblProgress.text = tabData.OpCount + "/" + tabData.OpCount;
            doneArea.SetActive(true);
            rewardArea.SetActive(false);
            btnClaim.SetActive(false);
            objBg.SetActive(false);
        }
    }

    void SetRewards(Tab_SevenDaysReward tabData)
    {
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
        for (int i = 0; i < tabData.getItemIDCount(); i++ )
        {
            SetRewardItem(mRewardIndex, ItemType.ITEM_ITEM, tabData.GetItemIDbyIndex(i), tabData.GetItemCountbyIndex(i));
            mRewardIndex++;
        }
        for (; mRewardIndex < rewards.Length; mRewardIndex++)
        {
            rewards[mRewardIndex].gameObject.SetActive(false);
        }
        rewardArea.GetComponent<UIGrid>().Reposition();
    }

    void ClaimReward(GameObject go)
    {
        GameManager.gameManager.PlayerDataPool.SevenDaysRewardProxy.ClaimReward(mDayIndex, mIndex);
    }

    void GoToUI(GameObject go)
    {
        if (UIPathData.m_DicUIName.ContainsKey(mGoToUIPath))
        {
            UIManager.ShowUI(UIPathData.m_DicUIName[mGoToUIPath]);
        }
    }
}
