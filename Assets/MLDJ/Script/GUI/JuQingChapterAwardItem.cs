using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.JuQingCopySceneData;

public class JuQingChapterAwardItem : MonoBehaviour {

    public GameObject m_BoxDisable;
    public GameObject m_BoxCanGet;
	public GameObject m_BoxCanGetEffect;
    public GameObject m_BoxHaveGot;
    public GameObject m_StarEmpty;
    public GameObject m_StarEnough;
	public GameObject chestDialog;
	public GameObject btnClaim;
	public GameObject btnCloseDialog;
	public ChapterRewardItem[] rewards;
	public UIGrid rewardGrid;
	public GameObject m_juqingwindow;

	private int m_ChapterId = GlobeVar.INVALID_ID;
    private int m_AwardIndex = GlobeVar.INVALID_ID;
	private bool m_bCanGet = false;
	private bool m_bHaveGot = false;

	enum ItemType
	{
		ITEM_MONEY,
		ITEM_EXP,
		ITEM_BDYUANBAO,
		ITEM_REPUTATION,
		ITEM_ITEM,
		ITEM_FELLOWEXP,
	}

	public int GetChapterId(){return m_ChapterId;}
	public int GetAwardIndex(){return m_AwardIndex;}

    public void Init(int chapterid, int awardindex, int totalstar, bool bHaveGot, bool bHide)
    {
		if(awardindex!=0&& awardindex!=1)
		{
			bHide = false;
		}
        Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(chapterid, 0);
        if (tabChapter == null)
        {
            return;
        }

        if (awardindex < 0 || awardindex >= JuQingCopySceneData.ChapterAwardStarReq.Length)
        {
            return;
        }

		m_bHaveGot = bHaveGot;

        if (totalstar >= JuQingCopySceneData.ChapterAwardStarReq[awardindex])
        {
			m_bCanGet = !bHaveGot;
            m_BoxDisable.SetActive(false);
            m_BoxCanGet.SetActive(!bHaveGot);
			if(bHide)
			{
				m_BoxCanGetEffect.SetActive(false);
			}
			else
			{
				m_BoxCanGetEffect.SetActive(!bHaveGot);
			}
            m_BoxHaveGot.SetActive(bHaveGot);
            m_StarEmpty.SetActive(false);
            m_StarEnough.SetActive(true);
        }
        else
        {
			m_bCanGet = false;
            m_BoxDisable.SetActive(true);
            m_BoxCanGet.SetActive(false);
			m_BoxCanGetEffect.SetActive(false);
            m_BoxHaveGot.SetActive(false);
            m_StarEmpty.SetActive(true);
            m_StarEnough.SetActive(false);
        }

        m_ChapterId = chapterid;
        m_AwardIndex = awardindex;
    }

    void OnBoxClick()
    {
        if (false == m_BoxCanGet.activeInHierarchy)
        {
            return;
        }

        Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(m_ChapterId, 0);
        if (tabChapter == null)
        {
            return;
        }

        if (m_AwardIndex < 0 || m_AwardIndex >= JuQingCopySceneData.ChapterAwardStarReq.Length)
        {
            return;
        }

        GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.ReqChapterAward(m_ChapterId, m_AwardIndex);

        if (JuQingWindow.Instance() != null && JuQingWindow.Instance().NewPlayerGuideIndex == 2)
        {
            JuQingWindow.Instance().NewPlayerGuideIndex = GlobeVar.INVALID_ID;
            if (NewPlayerGuidLogic.Instance())
            {
                NewPlayerGuidLogic.CloseWindow();
            }
        }
    }

    void OnTipPress()
    {
        if (JuQingWindow.Instance() != null)
        {
            JuQingWindow.Instance().ShowStarBoxTip(m_ChapterId, m_AwardIndex, JuQingWindow.BoxType.ChapterAward);
        }
    }

    void OnTipRelease()
    {
        if (JuQingWindow.Instance() != null)
        {
            JuQingWindow.Instance().CloseStarBoxTip();
        }
    }

	void OpenChest()
	{
		if(m_juqingwindow!=null)
		{
			m_juqingwindow.GetComponent<JuQingWindow>().m_nChapterId = m_ChapterId;
			m_juqingwindow.GetComponent<JuQingWindow>().m_nAwardIndex = m_AwardIndex;
		}
		if (m_bCanGet)
		{
			btnClaim.GetComponent<UIImageButton>().isEnabled = true;
		}
		else
		{
			btnClaim.GetComponent<UIImageButton>().isEnabled = false;
		}
		Tab_StoryCopySceneAward tabAward = GetChapterAwardTab();
		UpdateChestRewards(tabAward);
		chestDialog.SetActive(true);
        if (NewPlayerGuidLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }
	}

	Tab_StoryCopySceneAward GetChapterAwardTab()
	{
		Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(m_ChapterId, 0);
		if(tabChapter == null)
		{
			return null;
		}
		
		int nAwardId = GlobeVar.INVALID_ID;

		if (m_AwardIndex < 0 || m_AwardIndex >= tabChapter.getAwardCount())
		{
			return null;
		}
		
		nAwardId = tabChapter.GetAwardbyIndex(m_AwardIndex);

		
		Tab_StoryCopySceneAward tabAward = TableManager.GetStoryCopySceneAwardByID(nAwardId, 0);
	
		return tabAward;
	}
	
	void UpdateChestRewards(Tab_StoryCopySceneAward award)
	{
		int mRewardIndex = 0;
		if (award.Coin > 0)
		{
			SetRewardItem(mRewardIndex, ItemType.ITEM_MONEY, -1, award.Coin);
			mRewardIndex++;
		}
		if (award.Exp > 0)
		{
			SetRewardItem(mRewardIndex, ItemType.ITEM_EXP, -1, award.Exp);
			mRewardIndex++;
		}
		if (award.BindYuanBao > 0)
		{
			SetRewardItem(mRewardIndex, ItemType.ITEM_BDYUANBAO, -1, award.BindYuanBao);
			mRewardIndex++;
		}
		if (award.FellowExp > 0)
		{
			SetRewardItem(mRewardIndex, ItemType.ITEM_FELLOWEXP, -1, award.FellowExp);
			mRewardIndex++;
		}
//		if (award.AwardReputation > 0)
//		{
//			SetRewardItem(mRewardIndex, ItemType.ITEM_REPUTATION, -1, award.AwardReputation);
//			mRewardIndex++;
//		}
		for(int k = 0 ; k < 4; k++ )
		{
			if (award.GetItemIDbyIndex(k) > 0)
			{
				SetRewardItem(mRewardIndex, ItemType.ITEM_ITEM, award.GetItemIDbyIndex(k), award.getItemIDCount());
				mRewardIndex++;
			}
		}

		for (int i = mRewardIndex ; i < rewards.Length; i++)
		{
			rewards[i].gameObject.SetActive(false);
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
				//mRewardIndex--;
				return;
			}
		}
		if (index >= rewards.Length)
		{
			//mRewardIndex--;
			return;
		}
		ChapterRewardItem item = rewards[index];
		item.gameObject.SetActive(true);
		item.itemType = (int)type;
		item.itemId = id;
		item.itemCount = count;
		item.lblCount.text = count.ToString();
		item.sprQualityFrame.spriteName = GlobeVar.QualityColorGrid[0];
		switch (type)
		{
		case ItemType.ITEM_EXP:
		case ItemType.ITEM_FELLOWEXP:
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


	
}
