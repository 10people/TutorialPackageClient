using UnityEngine;
using System.Collections;
using Module.Log;
using Games.SwordsMan;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.UserCommonData;
using Games.GlobeDefine;
using System;

/********************************************************************
    created:	2014-12-10
    filename: 	LoverFlowerWindow.cs
    author:		zk
    purpose:	情人节活动界面
*********************************************************************/
public class LoverFlowerWindow: MonoBehaviour
{
	public GameObject m_RewardDescBtn;
	public GameObject m_RewardDescBackBtn;
	public GameObject m_LoverFlowerActivityInfo;
	public GameObject m_LoverFlowerRewardDesc;
	public GameObject m_SongHuaRankBtn;
	public GameObject m_SongHuaRankBackBtn;
	public GameObject m_ShouHuaRankBtn;
	public GameObject m_ShouHuaRankBackBtn;

	public GameObject m_SongHuaActivityDesc;
	public GameObject m_SongHuaActivityRank;
	public GameObject m_ShouHuaActivityDesc;
	public GameObject m_ShouHuaActivityRank;

	public GameObject GiveRoseRankGrid;
	public GameObject ReceiveRoseRankGrid;

	public UILabel m_MySonghuaName;
	public UILabel m_MySonghuaRank;
	public UILabel m_MySonghuaCount;

	public UILabel m_MyShouhuaName;
	public UILabel m_MyShouhuaRank;
	public UILabel m_MyShouhuaCount;

	public GameObject m_RankInfo;
	public GameObject m_FlowerReward;

	public int m_rankCount = 0;
	private int m_nTipWaitWindow = 0;
	private static LoverFlowerWindow m_Instance = null;

	public GameObject m_FrirendChoose;
	public bool IsFirstEnter = true;
	public static bool IsOpenAward = false;

	//排行奖励信息
	public GameObject m_ScoreUI;
	public ScoreAwardItem m_ScoreAwardItemCache;
	public UIGrid m_SongHuaAwardList;
	public UIGrid m_ShouHuaAwardList;

	public LoverRankInfoItem m_SongHuaRankItemCache;
	public LoverRankInfoItem m_ShouHuaRankItemCache;

	public UILabel m_ActTimeLabel;
	public UILabel m_ActTimeLabel1;
	public UILabel m_ActTimeEndLabel;
	public GameObject m_SongHuaBtn;
	
	public static LoverFlowerWindow Instance()
	{
		return m_Instance;
	}

	void Awake()
	{
		m_Instance = this;
		m_nTipWaitWindow = 0;
		m_MySonghuaName.text = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.RoleName;
		m_MyShouhuaName.text = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.RoleName;
		if (IsFirstEnter)
		{
			SendRankPack((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GIVEROSE,1);
			SendRankPack((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_RECEIVEROSE,1);
		}
	}
	void Start () 
	{
		ScoreAwardList();
		UpdateActTime();
		UpdateRankNumber();
		if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER))
		{
			m_ActTimeEndLabel.gameObject.SetActive(true);
			m_SongHuaBtn.SetActive(false);
		}
	}

	public void UpdateRankNumber()
	{
		m_MySonghuaCount.text = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)USER_COMMONDATA.CD_GIVEROSE_NUMBER).ToString();
		m_MyShouhuaCount.text = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)USER_COMMONDATA.CD_RECEIVEROSE_NUMBER).ToString();
	}

	public void UpdateGiveRoseRankInfo(int type)
	{
		if(type==1)
		{
			OnLoadSongHuaItem(m_SongHuaRankItemCache.gameObject);
		}else if(type==2)
		{
			OnLoadShouHuaItem(m_ShouHuaRankItemCache.gameObject);
		}
	}
	void OnLoadSongHuaItem(GameObject resItem)
	{
		if (null == resItem)
		{
			LogModule.ErrorLog("load LoverRankInfoItem fail");
			return;
		}
		Utils.CleanGrid(GiveRoseRankGrid);
		int iCurCount = 0;
		foreach (PVPData.RankDataItem data in PVPData.RankDataList)
		{
			if( iCurCount < m_rankCount)
			{
				LoverRankInfoItem RankListItem = LoverRankInfoItem.CreateItem(GiveRoseRankGrid, resItem, iCurCount+1,data.str1,data.str2, this);
				//LoverRankInfoItem RankListItem = LoverRankInfoItem.CreateItem(data.m_Guid,data.str1, data.str2, data.str3);
				iCurCount++;
			}
		}
        GiveRoseRankGrid.GetComponent<UIGrid>().Reposition();
	}
	void OnLoadShouHuaItem(GameObject resItem)
	{
		if (null == resItem)
		{
			LogModule.ErrorLog("load LoverRankInfoItem fail");
			return;
		}
		Utils.CleanGrid(ReceiveRoseRankGrid);
		int iCurCount = 0;
		foreach (PVPData.RankDataItem data in PVPData.RankDataList)
		{
			if( iCurCount < m_rankCount)
			{
				LoverRankInfoItem RankListItem = LoverRankInfoItem.CreateItem(ReceiveRoseRankGrid, resItem, iCurCount+1,data.str1,data.str2, this);
				//LoverRankInfoItem RankListItem = LoverRankInfoItem.CreateItem(data.m_Guid,data.str1, data.str2, data.str3);
				iCurCount++;
			}
		}
        ReceiveRoseRankGrid.GetComponent<UIGrid>().Reposition();
	}
	public void SendRankPack(int m_nRankType,int m_nPage)
	{
		CG_ASK_RANK packet = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
		packet.NType = m_nRankType;
		packet.NPage = m_nPage;
		packet.SendPacket();
		if (m_nTipWaitWindow != 0)
		{
			MessageBoxLogic.OpenWaitBox(1290, 1, 0); 
		}
		m_nTipWaitWindow = m_nTipWaitWindow + 1;
	}

	void OnSongHuaClick()
	{
		m_FrirendChoose.SetActive(true);
	}

	// 积分列表
	public void ShowScoreWindow()
	{
		if (m_ScoreUI && m_ScoreUI.activeInHierarchy == false)
		{
			m_ScoreUI.SetActive(true);
		}
	}
	void CloseScoreWindow()
	{
		if (m_ScoreUI)
		{
			m_ScoreUI.SetActive(false);
		}
	}
	void ScoreAwardList()
	{
		if (TableManager.GetSongHuaAwardInfo() == null)
		{
			return;
		}
		
		int nTabCount = TableManager.GetSongHuaAwardInfo().Count;
		for (int i = 1; i < nTabCount; i++)
		{
			Tab_SongHuaAwardInfo AwardInfo = TableManager.GetSongHuaAwardInfoByID(i, 0);
			if (AwardInfo == null)
			{
				return;
			}
			GameObject gScoreItem = Utils.BindObjToParent(m_ScoreAwardItemCache.gameObject, m_SongHuaAwardList.gameObject, i.ToString());
			if (null != gScoreItem)
			{
				ScoreAwardItem ScoreItem = gScoreItem.GetComponent<ScoreAwardItem>();
				if (null != ScoreItem)
				{
					ScoreItem.Init(AwardInfo);
				}
			}
		}
		
		m_SongHuaAwardList.Reposition(true);

		if (TableManager.GetShouHuaAwardInfo() == null)
		{
			return;
		}
		
		int nTabCount1 = TableManager.GetShouHuaAwardInfo().Count;
		for (int i = 1; i < nTabCount1; i++)
		{
			Tab_ShouHuaAwardInfo AwardInfo = TableManager.GetShouHuaAwardInfoByID(i, 0);
			if (AwardInfo == null)
			{
				return;
			}
			GameObject gScoreItem = Utils.BindObjToParent(m_ScoreAwardItemCache.gameObject, m_ShouHuaAwardList.gameObject, i.ToString());
			if (null != gScoreItem)
			{
				ScoreAwardItem ScoreItem = gScoreItem.GetComponent<ScoreAwardItem>();
				if (null != ScoreItem)
				{
					ScoreItem.Init(AwardInfo);
				}
			}
		}
		
		m_ShouHuaAwardList.Reposition(true);
	}
	void OnFlowerRewardClick()
	{
		if (MainUILogic.Instance() != null)
		{
			IsOpenAward = true;
			UIManager.ShowUI(UIInfo.AwardRoot);
		}
	}
	void OnSongHuaRankClick()
	{
		m_SongHuaRankBtn.SetActive(false);
		m_SongHuaRankBackBtn.SetActive(true);
		m_SongHuaActivityDesc.SetActive(false);
		m_SongHuaActivityRank.SetActive(true);
		IsFirstEnter = false;
		SendRankPack((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GIVEROSE,1);
	}

	void OnSongHuaRankBackClick()
	{
		m_SongHuaRankBtn.SetActive(true);
		m_SongHuaRankBackBtn.SetActive(false);
		m_SongHuaActivityDesc.SetActive(true);
		m_SongHuaActivityRank.SetActive(false);
	}
	void OnShouHuaRankClick()
	{
		m_ShouHuaRankBtn.SetActive(false);
		m_ShouHuaRankBackBtn.SetActive(true);
		m_ShouHuaActivityDesc.SetActive(false);
		m_ShouHuaActivityRank.SetActive(true);
		IsFirstEnter = false;
		SendRankPack((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_RECEIVEROSE,1);
	}
	
	void OnShouHuaRankBackClick()
	{
		m_ShouHuaRankBtn.SetActive(true);
		m_ShouHuaRankBackBtn.SetActive(false);
		m_ShouHuaActivityDesc.SetActive(true);
		m_ShouHuaActivityRank.SetActive(false);
	}
	void OnRewardDescClick()
	{
		m_RewardDescBtn.SetActive(false);
		m_RewardDescBackBtn.SetActive(true);
		m_LoverFlowerActivityInfo.SetActive(false);
		m_LoverFlowerRewardDesc.SetActive(true);
	}

	void OnRewardDescBackClick()
	{
		m_RewardDescBtn.SetActive(true);
		m_RewardDescBackBtn.SetActive(false);
		m_LoverFlowerActivityInfo.SetActive(true);
		m_LoverFlowerRewardDesc.SetActive(false);
	}
	public void UpdateActTime()
	{
		int nStartYear = 2000 + GlobalData.LoverFlowerStartTime / 100000000;
		int nStartMonth = (GlobalData.LoverFlowerStartTime / 1000000) % 100;
		int nStartDay = (GlobalData.LoverFlowerStartTime / 10000) % 100;
		int nEndYear = 2000 + GlobalData.LoverFlowerEndTime / 100000000;
		int nEndMonth = (GlobalData.LoverFlowerEndTime / 1000000) % 100;
		int nEndDay = (GlobalData.LoverFlowerEndTime / 10000) % 100;
		int nEndHour = (GlobalData.LoverFlowerEndTime / 100) % 100;
		if (m_ActTimeLabel)
		{
			m_ActTimeLabel.text = StrDictionary.GetClientDictionaryString("#{4894}",nStartYear, nStartMonth, nStartDay, nEndYear, nEndMonth, nEndDay, nEndHour);
		}
		if (m_ActTimeLabel1)
		{
			m_ActTimeLabel1.text = StrDictionary.GetClientDictionaryString("#{4894}",nStartYear, nStartMonth, nStartDay, nEndYear, nEndMonth, nEndDay, nEndHour);
		}
	}
}

