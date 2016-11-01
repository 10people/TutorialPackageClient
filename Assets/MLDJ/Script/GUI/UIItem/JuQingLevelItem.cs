using UnityEngine;
using System.Collections;
using Games.JuQingCopySceneData;
using Games.GlobeDefine;
using GCGame.Table;

public class JuQingLevelItem : MonoBehaviour {

    public UILabel LevelNameLevel;
    public UISprite Start1Sprite;
	public UISprite Start2Sprite;
	public UISprite Start3Sprite;
	public UISprite LockSprite;
	public UITexture LevelTexture;
	public UILabel LevelOpen;
	public GameObject btnEntry;
	public UILabel DayCount;
	public GameObject LevelTextureObj;
	public UISprite ItemSprite;
	public GameObject ItemObj;
	public GameObject Start1Obj;
	public GameObject Start2Obj;
	public GameObject Start3Obj;
	public GameObject ZhanliObj;
	public UILabel m_TuijianZhanli;
	public GameObject ExpObj;
	public UILabel m_Exp;
	//private int m_nCopySceneByID;

	public void Init(int nChapterIdx,int nCopySceneByID)
	//public void Init(string strName,string strTexture,bool bGetStar1,bool bGetStar2,bool bGetStar3,int nChapterIdx,bool bLocked,int nAwardItem,int nTuijianZhanli,int nExp)
	{
		var storyCopySceneLevelTable = TableManager.GetStoryCopySceneByID (nCopySceneByID, 0);
		if (storyCopySceneLevelTable == null)
			return;

		Tab_StoryCopySceneAward tabAward = TableManager.GetStoryCopySceneAwardByID(storyCopySceneLevelTable.PassReward, 0);
		if (tabAward == null)
			return;

//		int nStarCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(nCopySceneByID).GetStarCount();
//		int nDayCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(nCopySceneByID).m_nDayCount;
		bool bLocked = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsStoryCopySceneLocked(nCopySceneByID);
		bool bGetStar1 = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(nCopySceneByID).IsGetStar1();
		bool bGetStar2 = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(nCopySceneByID).IsGetStar2();
		bool bGetStar3 = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(nCopySceneByID).IsGetStar3();

		LevelNameLevel.text = storyCopySceneLevelTable.LevelName;
		m_TuijianZhanli.text = storyCopySceneLevelTable.CombatValue.ToString();
		m_Exp.text = tabAward.Exp.ToString();
		SetTexture(storyCopySceneLevelTable.LevelTexture);
		SetStar(bGetStar1,bGetStar2,bGetStar3);
		SetLock(nChapterIdx,bLocked);
		SetItem(tabAward.GetItemIDbyIndex(0));

		if (bLocked)
		{
			SetTextureGray(ref LevelTexture);
			Start1Obj.SetActive(false);
			Start2Obj.SetActive(false);
			Start3Obj.SetActive(false);
			ZhanliObj.SetActive(false);
			ExpObj.SetActive(false);
			//ItemObj.SetActive(false);
		}
		else
		{
			SetTextureHigh(ref LevelTexture);
			Start1Obj.SetActive(true);
			Start2Obj.SetActive(true);
			Start3Obj.SetActive(true);
			ZhanliObj.SetActive(true);
			ExpObj.SetActive(true);
			//ItemObj.SetActive(true);
		}
	}
//	public void SetDayCount(int nDayCount,int nTotal)
//	{
//		if(DayCount!=null)
//		{
//			string text = "剩余次数 "+nDayCount+"/3";
//			DayCount.text = text;
//		}
//	}

	private void SetLock(int nSelectedChapterIdx, bool bLocked)
	{
		if(LevelOpen!=null)
		{
			string locktext = "主线任务解锁";
			if(nSelectedChapterIdx==1)
			{
			}
			else
			{
				locktext = "通关前序副本解锁";
			}
			if (bLocked)
			{
				LevelOpen.text = locktext;
			}
			else
			{
				LevelOpen.text = "";
			}
		}

		if (bLocked)
		{
			LockSprite.gameObject.SetActive(true);
		}
		else
		{
			LockSprite.gameObject.SetActive(false);
		}
	}

	private void SetStar(bool bGetStar1, bool bGetStar2, bool bGetStar3/*, int nStarNum, StoryCopySceneScoreInfo newStarInfo*/)
	{
		Start1Sprite.enabled = bGetStar1;
		Start2Sprite.enabled = bGetStar2;
		Start3Sprite.enabled = bGetStar3;

		// todo 根据newStarInfo播放新得到的星星“啪啪啪”拍上去的特技（得到的Info里ID可能为-1）

//		if (nStarNum == 0)
//		{
//			Start1Sprite.enabled = false;
//			Start2Sprite.enabled = false;
//			Start3Sprite.enabled = false;
//		}
//		else if (nStarNum == 1)
//		{
//			Start1Sprite.enabled = true;
//			Start2Sprite.enabled = false;
//			Start3Sprite.enabled = false;
//		}
//		else if (nStarNum == 2)
//		{
//			Start1Sprite.enabled = true;
//			Start2Sprite.enabled = true;
//			Start3Sprite.enabled = false;
//		}
//		else if (nStarNum == 3)
//		{
//			Start1Sprite.enabled = true;
//			Start2Sprite.enabled = true;
//			Start3Sprite.enabled = true;
//		}
//		else
//		{
//			Start1Sprite.enabled = false;
//			Start2Sprite.enabled = false;
//			Start3Sprite.enabled = false;
//		}
	}
	
	private void SetTextureGray(ref UITexture texture)
	{
		if(texture==null)
			return;
		texture.color = GlobeVar.BUTTONGRAY;
	}
	
	public void SetTextureHigh(ref UITexture texture)
	{
		if(texture==null)
			return;
		texture.color = GlobeVar.BUTTONCOLER;
	}

	private void SetTexture(string respath)
	{
		if(LevelTextureObj==null)
			return;

		LevelTextureObj.SetActive(false);
		LevelTexture.mainTexture = ResourceManager.LoadResource("Texture/StoryCopyScene/"+respath, typeof(Texture)) as Texture;
		LevelTextureObj.SetActive(true);
		LevelTextureObj.GetComponent<UIShaderFix>().SetShder();
	}

	private void SetItem(int id)
	{
		if(ItemSprite==null)
			return;

		if(ItemObj==null)
			return;

		if(id==-1)
			ItemObj.SetActive(false);
		else
			ItemObj.SetActive(true);

		Tab_CommonItem commonItem = null;
		commonItem = TableManager.GetCommonItemByID(id, 0);
		if (commonItem == null)
		{
			return;
		}
	
		ItemSprite.spriteName = commonItem.Icon;
	}
}
