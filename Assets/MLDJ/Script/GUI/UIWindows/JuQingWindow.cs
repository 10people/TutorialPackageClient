using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Module.Log;
using System.Collections.Generic;
using Games.JuQingCopySceneData;
using Games.GlobeDefine;
using Games.Mission;

public class JuQingWindow : MonoBehaviour {
	private struct ChapterInfo
	{
		public ChapterInfo( int nIndex, string strName )
		{
			this.nIndex = nIndex;
			this.strName = strName;
		}
		
		public int GetIndex()
		{
			return nIndex;
		}
		
		public string GetName()
		{
			return strName;
		}
		
		private int nIndex;
		private string strName;
	} 

    private static JuQingWindow m_Instance = null;
    public static JuQingWindow Instance()
    {
        return m_Instance;
    }

    public enum BoxType
    {
        ChapterAward,
        LevelAward,
    }

	public GameObject Hongdian;
	public GameObject ChapterTab;
	public UILabel ChapterTitleLabel;
	public JuQingLevelItem Level1;
	public JuQingLevelItem Level2;
	public JuQingLevelItem Level3;
	public JuQingLevelItem Level4;

	public GameObject ChapterItem;

	public UICabalGrid ChapterListGrid;

//	private List<StoryCopySceneChapterInfo> ChapterList;

    public GameObject m_ButtonEntyOne;
    public GameObject m_ButtonEntySecond;
    public GameObject m_ButtonEntyThird;
    public GameObject m_ButtonEntyForth;

	public TabController TabController;

    public JuQingChapterAwardItem[] m_ChapterAwardItem;
    public UISprite m_ChapterAwardSprite;

    public GameObject m_StarBoxTip;
    public ItemSlotLogic[] m_StarBoxTipItem;
    public GameObject m_StarBoxTipItemGrid;
    public UISprite m_StarBoxTipBG;

//	    public GameObject[] m_LevelArrowNor;
//	    public GameObject[] m_LevelArrowDis;
//	    public JuQingLevelAwardItem[] m_LevelAwardItem;

	private int currentSelectedChapterIdx = 0;
    public static float[] StarBoxTipPosX_ChapterAward = { -50, 80, 210, 340 };
    public static float[] StarBoxTipPosX_LevelAward = { -80, 160, 340 };

	private List<ChapterInfo> m_ChapterInfo = new List<ChapterInfo>();
	public UILabel m_ChapterAwardLabel;
	public GameObject btnClaim;
//	public GameObject btnCloseDialog;
	public GameObject chestDialog;
//	private List<>
	public int m_nChapterId;
	public int m_nAwardIndex;
	public GameObject TabBg;
	public UILabel m_HelpInfo;
	public GameObject m_Help;

    /*
     * 次数购买Label
     */
    public UILabel m_CiShuBuyNumLabel;
    /*
     * 副本次数购买界面
     */
    public BuyCopySceneNumWindow m_BuyCopySceneNumWindow;
	private int m_nTotalStar;
	public GameObject m_Effect1;
	public GameObject m_Effect2;

	public void Init()
	{
		AddListeners();
	}

	void ClaimAward(GameObject go)
	{
//		int nChapterId = go.GetComponent<JuQingChapterAwardItem>().GetChapterId();
//		int nAwardIndex = go.GetComponent<JuQingChapterAwardItem>().GetAwardIndex();
		GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.ReqChapterAward(m_nChapterId, m_nAwardIndex);
		if(btnClaim!=null)
			btnClaim.GetComponent<UIImageButton>().isEnabled = false;
		chestDialog.SetActive(false);
	}
	
	void AddListeners()
	{
		if(btnClaim!=null)
			UIEventListener.Get(btnClaim).onClick = ClaimAward;
	}

	void OnLevel1Clicked ()
	{
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];
		int levelID = currentChapterInfo._ContaindLevelList [0];
        if (GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsStoryCopySceneLocked(levelID))
        {
            GUIData.AddNotifyData("#{11143}");
            return;
        }

		UIManager.ShowUI(UIInfo.StoryCopySceneInfoRoot, SetStoryCopySceneInfoWindowData, levelID);

        if (NewPlayerGuidLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }
        
	}

	void OnLevel2Clicked ()
	{
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];
		int levelID = currentChapterInfo._ContaindLevelList [1];
        if (GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsStoryCopySceneLocked(levelID))
        {
            GUIData.AddNotifyData("#{11143}");
            return;
        }
		UIManager.ShowUI(UIInfo.StoryCopySceneInfoRoot, SetStoryCopySceneInfoWindowData, levelID);
	}

	void OnLevel3Clicked ()
	{
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];
		int levelID = currentChapterInfo._ContaindLevelList [2];
        if (GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsStoryCopySceneLocked(levelID))
        {
            GUIData.AddNotifyData("#{11143}");
            return;
        }
		UIManager.ShowUI(UIInfo.StoryCopySceneInfoRoot, SetStoryCopySceneInfoWindowData, levelID);
	}

	void OnLevel4Clicked ()
	{
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];
		int levelID = currentChapterInfo._ContaindLevelList [3];
        if (GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsStoryCopySceneLocked(levelID))
        {
            GUIData.AddNotifyData("#{11143}");
            return;
        }
		UIManager.ShowUI(UIInfo.StoryCopySceneInfoRoot, SetStoryCopySceneInfoWindowData, levelID);
	}

    void OnBuyStorySceneNumButtonClick()
    {
		if(VipData.GetVipLv()<=0)
		{
			if (Singleton<ObjManager>.GetInstance().MainPlayer)
			{
				Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{11442}");
			}
			return;
		}
        if (m_BuyCopySceneNumWindow != null) {
            m_BuyCopySceneNumWindow.SendData(8, true);
            m_BuyCopySceneNumWindow.gameObject.SetActive(true);
        }
    }

	void SetStoryCopySceneInfoWindowData (bool bSuccess, object param)
	{
		if (!bSuccess) return;
		int currentOpenStoryCopySceneInfoID = (int)param;
		StoryCopySceneInfoLogic.Instance().SetStoryCopySceneID(currentOpenStoryCopySceneInfoID);

        int nNewPlayerGuideIndex = -1;
        if (NewFunctionLogic.Instance() && NewFunctionLogic.Instance().NewPlayerGuideIndex > -1)
        {
            nNewPlayerGuideIndex = NewFunctionLogic.Instance().NewPlayerGuideIndex;
            NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
        }
        if (nNewPlayerGuideIndex == 18
            || nNewPlayerGuideIndex == 20
            || nNewPlayerGuideIndex == 22
            || nNewPlayerGuideIndex == 24)
        {
            StoryCopySceneInfoLogic.Instance().NewPlayerGuide();
        }
	}

    void UpdateBuyCount()
    {
        Tab_StoryCopyScene pStoryCopyScene = TableManager.GetStoryCopySceneByID(0, 0);
        if (pStoryCopyScene != null) {
            int nTotal = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(0).m_nDayCount;
            m_CiShuBuyNumLabel.text = nTotal.ToString() + "/" + pStoryCopyScene.TimesPerDay.ToString();
        }
    }
	void UpdateLevels()
	{
        UpdateBuyCount();

//        for (int i = 0; i < m_LevelArrowNor.Length && i < m_LevelArrowDis.Length; i++ )
//        {
//            m_LevelArrowNor[i].SetActive(false);
//            m_LevelArrowDis[i].SetActive(false);
//        }
        
		if (currentSelectedChapterIdx < 1)
			currentSelectedChapterIdx = 1;
		//StoryCopySceneScoreInfo lastScore = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetAndClearLastScore();
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];

		Tab_StoryCopySceneChapter chapter = TableManager.GetStoryCopySceneChapterByID (currentChapterInfo.m_nID, 0); 
        
		if (chapter != null) {
			ChapterTitleLabel.text = chapter.ChapterName;
		}

        m_nTotalStar = 0;
		for (int i = 0; i < 4; i++) 
		{
			JuQingLevelItem item = null;
			switch (i) 
			{
			case 0:
				{
					item = Level1;
					break;
				}
			case 1:
				{
					item = Level2;
					break;
				}
			case 2:
				{
					item = Level3;
					break;
				}
			case 3:
				{
					item = Level4;
					break;
				}
			}

			if (item == null)
				continue;

			if (i >= currentChapterInfo._ContaindLevelList.Count)
			{
				item.gameObject.SetActive (false);
				continue;
			}

			item.gameObject.SetActive (true);
			int levelID = currentChapterInfo._ContaindLevelList [i];
            int nStarCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(levelID).GetStarCount();
			item.Init(currentSelectedChapterIdx,levelID);
			m_nTotalStar += nStarCount;
		}

		UpdateChapterAward();
	}

	void UpdateChapterAward()
	{
		bool bHide = false;
		if(TabBg.activeSelf)
		{
			bHide = true;
		}
		else
		{
			bHide = false;
		}
		var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList ();
		if (chapterInfoList == null || currentSelectedChapterIdx <= 0 || currentSelectedChapterIdx > chapterInfoList.Count)
			return;
		StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[currentSelectedChapterIdx - 1];

		for (int i = 0; i < m_ChapterAwardItem.Length && i < JuQingCopySceneData.ChapterAwardStarReq.Length; i++)
		{
			if (currentChapterInfo.m_bAwardGot.Count <= 0)
			{
				m_ChapterAwardItem[i].Init(currentSelectedChapterIdx, i, m_nTotalStar, false,bHide);
			}
			else if (i < currentChapterInfo.m_bAwardGot.Count)
			{
				m_ChapterAwardItem[i].Init(currentSelectedChapterIdx, i, m_nTotalStar, currentChapterInfo.m_bAwardGot[i],bHide);
			}
		}
		
		m_ChapterAwardSprite.fillAmount = (float)m_nTotalStar / (float)(JuQingCopySceneData.ChapterAwardStarReq[JuQingCopySceneData.ChapterAwardStarReq.Length - 1]);
		
		
		if(m_ChapterAwardLabel!=null)
		{
			m_ChapterAwardLabel.text = m_nTotalStar+"/12";
		}
	}

	void UpdateChapterList()
	{
		bool bHaveUngotAward = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsHaveUngotAward();
		if( bHaveUngotAward )
		{
			if(Hongdian!=null)
				Hongdian.SetActive(true);
		}
		else
		{
			if(Hongdian!=null)
				Hongdian.SetActive(false);
		}

		for (int i = 0; i < ChapterListGrid.transform.childCount; i++)
		{
			GameObject.Destroy(ChapterListGrid.transform.GetChild(i).gameObject);
		}

		m_ChapterInfo.Clear();

		var chapterDic = TableManager.GetStoryCopySceneChapter();
		foreach (var list in chapterDic)
		{
			var table = list.Value[0];
			if (table != null)
			{
				ChapterInfo tabCap= new ChapterInfo(table.Id,table.ChapterName);
				m_ChapterInfo.Add(tabCap);

				GameObject item = Utils.BindObjToParent(ChapterItem, ChapterListGrid.gameObject, table.Id.ToString());
				{
					if (item != null)
					{

						JuQingChapterItem juQingChapterItem = item.GetComponent<JuQingChapterItem>();
						if (juQingChapterItem != null)
						{
							juQingChapterItem.ChapterNameLabel.text = table.ChapterName;
						}
					}
				}
			}
		}
		ChapterListGrid.repositionNow = true;
	}

    void OnEnable()
    {
		Init();

		currentSelectedChapterIdx = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLastChapterID();

        m_Instance = this;

        m_StarBoxTip.SetActive(false);

		Messenger.AddListener(MessengerConst.OnUpdateJuQingCopySceneLevelInfo, OnUpdateJuQingCopySceneLevelInfo);
		Messenger.AddListener(MessengerConst.OnUpdateJuQingCopySceneChapterInfo, OnUpdateJuQingCopySceneChapterInfo);

		if (TabController != null) {
			TabController.delTabChanged = TabChangedDelegate;
		}

		UpdateLevels();
		UpdateChapterList();

		// 用GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.CanGetChapterAward(0,0)来判断是否可以领取第一个章节奖励
        Check_NewPlayerGuide();

        // 剧情副本领奖任务 打开UI就算完成
        //bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(GlobeVar.MISSION_ID_JUQINGAWARD);
        //if (isHaveMission)
        //{
        //    MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(GlobeVar.MISSION_ID_JUQINGAWARD);
        //    if (MissionState.Mission_Accepted == misState)
        //    {
        //        GameManager.gameManager.MissionManager.SetMissionParam(GlobeVar.MISSION_ID_JUQINGAWARD, 0, 1);
        //        GameManager.gameManager.MissionManager.SetMissionState(GlobeVar.MISSION_ID_JUQINGAWARD, 2);
        //    }
        //}
    }

    void OnDisable()
    {
        m_Instance = null;

		Messenger.RemoveListener(MessengerConst.OnUpdateJuQingCopySceneLevelInfo, OnUpdateJuQingCopySceneLevelInfo);
		Messenger.RemoveListener(MessengerConst.OnUpdateJuQingCopySceneChapterInfo, OnUpdateJuQingCopySceneChapterInfo);
//		if (GameManager.gameManager.ActiveScene.IsCopyScene()) return;
    }

	/// <summary>
	/// 关卡数据更新时
	/// </summary>
	void OnUpdateJuQingCopySceneLevelInfo()
	{
		UpdateChapterList();
		// 这里不实时更新界面了，因为有需求（打开界面时“啪啪啪”把刚获得的关卡星星打在界面上 ==+）
		//UpdateLevels();
        UpdateBuyCount();
	}
	/// <summary>
	/// 章节数据更新时
	/// </summary>
	void OnUpdateJuQingCopySceneChapterInfo()
	{
		UpdateChapterList();
		UpdateLevels();
	}

	void ChapterChanged(bool bForward)
	{
		int nChangeNum = 0;
		nChangeNum = bForward? 1:-1;
		if( currentSelectedChapterIdx<=0 || currentSelectedChapterIdx>m_ChapterInfo.Count )
		{
			//出错
			return;
		}
		
		ChapterInfo chapinfo = m_ChapterInfo[currentSelectedChapterIdx-1];
		
		if( chapinfo.GetName() != ChapterTitleLabel.text )
		{
			//出错
			return;
		}
		
		currentSelectedChapterIdx += nChangeNum;
		if( currentSelectedChapterIdx <= 0 )
		{
			currentSelectedChapterIdx = m_ChapterInfo.Count;
		}
		else if( currentSelectedChapterIdx > m_ChapterInfo.Count )
		{
			currentSelectedChapterIdx = 1;
		}
		
		UpdateLevels ();
	}

	void OnLeftButton()
	{
		ChapterChanged(false);
	}

	void OnRightsButton()
	{
		ChapterChanged(true);
	}

	void TabChangedDelegate(TabButton curButton)
	{
		int selectedChapterIdx = -1;
		if (int.TryParse (curButton.name, out selectedChapterIdx)) {
			currentSelectedChapterIdx = selectedChapterIdx;
			UpdateLevels ();
		}

		if(TabBg!=null)
			TabBg.SetActive(false);
	}

    private int m_NewPlayerGuideIndex = GlobeVar.INVALID_ID;
    public int NewPlayerGuideIndex
    {
        get { return m_NewPlayerGuideIndex; }
        set { m_NewPlayerGuideIndex = value; }
    }

    public GameObject m_FirstLevelAwardBtn;     // 第一个每关之间的奖励
    public GameObject m_FirstChapterAwardBtn;   // 第一个星星总数奖励
    void Check_NewPlayerGuide()
    {
        if (NewFunctionLogic.Instance())
        {
            GameObject buttonGuide = null;
            switch(NewFunctionLogic.Instance().NewPlayerGuideIndex)
            {
                case 18:
                    buttonGuide = m_ButtonEntyOne;
                    break;
                case 20:
                    buttonGuide = m_ButtonEntySecond;
                    break;
                case 22:
                    buttonGuide = m_ButtonEntyThird;
                    break;
                case 24:
                    buttonGuide = m_ButtonEntyForth;
                    break;
                case 25:
                    NewPlayerGuide(2);
                    //NewFunctionLogic.Instance().NewPlayerGuideIndex = GlobeVar.INVALID_ID;
                    break;
            }
            //NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
            if (buttonGuide)
            {
                NewPlayerGuidLogic.OpenWindow(buttonGuide, 190, 300 , "", "left", 0, true, true);
            }
        }        
    }

    public void NewPlayerGuide(int nIndex)
    {
        var chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList();
        if (null == chapterInfoList || 0 >= chapterInfoList.Count)
        {
            return;
        }
        StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[0];

        m_NewPlayerGuideIndex = nIndex;
        switch (nIndex)
        {
            case 1:
                // 第一步删除
                if (m_FirstLevelAwardBtn)
                {
                    if (currentChapterInfo.m_bLevelAwardGot[0])
                    {
                        NewPlayerGuide(2);
                    }
                    else
                    {
                        NewPlayerGuidLogic.OpenWindow_Circle(m_FirstLevelAwardBtn, 100, "", "left", 0, true, true);
                    }
                }
                break;
            case 2:
                if (m_FirstChapterAwardBtn && !currentChapterInfo.m_bAwardGot[0])
                {
                    NewPlayerGuidLogic.OpenWindow_Circle(m_FirstChapterAwardBtn, 100, "", "left", 0, true, true);
                }
                break;
        }
    }

    public void ShowStarBoxTip(int chapterid, int awardindex, BoxType type)
    {       
        Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(chapterid, 0);
        if (tabChapter == null)
        {
            return;
        }

        int nAwardId = GlobeVar.INVALID_ID;

        if (type == BoxType.ChapterAward)
        {
            if (awardindex < 0 || awardindex >= tabChapter.getAwardCount())
            {
                return;
            }

            nAwardId = tabChapter.GetAwardbyIndex(awardindex);
        }
        else if (type == BoxType.LevelAward)
        {
            if (awardindex < 0 || awardindex >= tabChapter.getLevelAwardCount())
            {
                return;
            }

            nAwardId = tabChapter.GetLevelAwardbyIndex(awardindex);
        }

        Tab_StoryCopySceneAward tabAward = TableManager.GetStoryCopySceneAwardByID(nAwardId, 0);
        if (tabAward == null)
        {
            return;
        }

        m_StarBoxTip.SetActive(true);

        for (int i = 0; i < m_StarBoxTipItem.Length; i++ )
        {
            m_StarBoxTipItem[i].ClearInfo();
            m_StarBoxTipItem[i].gameObject.SetActive(false);
        }

        // 和任务奖励一样顺序 物品（最多4个） 玩家经验 宠物经验 金钱
        int nItemIndex = 0;

        // 物品
        if (tabAward.getItemIDCount() > 0)
        {
            for (int i = 0; i < tabAward.getItemIDCount(); i++ )
            {
                Tab_CommonItem tabItem = TableManager.GetCommonItemByID(tabAward.GetItemIDbyIndex(i), 0);
                if (tabItem != null && tabAward.GetItemNumbyIndex(i) > 0 && nItemIndex < m_StarBoxTipItem.Length)
                {
                    int nItemCount = tabAward.GetItemNumbyIndex(i);
                    m_StarBoxTipItem[nItemIndex].gameObject.SetActive(true);
                    m_StarBoxTipItem[nItemIndex].InitInfo_Item(tabItem.Id, null, nItemCount > 1 ? nItemCount.ToString() : "", nItemCount > 1);
                    nItemIndex += 1;
                }
            }
        }

        // 玩家经验
        if (tabAward.Exp > 0 && nItemIndex < m_StarBoxTipItem.Length)
        {
            m_StarBoxTipItem[nItemIndex].gameObject.SetActive(true);
            m_StarBoxTipItem[nItemIndex].InitInfo_PlayerExp(tabAward.Exp.ToString());
            nItemIndex += 1;
        }

        // 宠物经验
        if (tabAward.FellowExp > 0 && nItemIndex < m_StarBoxTipItem.Length)
        {
            m_StarBoxTipItem[nItemIndex].gameObject.SetActive(true);
            m_StarBoxTipItem[nItemIndex].InitInfo_FellowExp(tabAward.FellowExp.ToString());
            nItemIndex += 1;
        }

        // 金钱
        if (tabAward.Coin > 0 && nItemIndex < m_StarBoxTipItem.Length)
        {
            m_StarBoxTipItem[nItemIndex].gameObject.SetActive(true);
            m_StarBoxTipItem[nItemIndex].InitInfo_Coin(null, tabAward.Coin.ToString(), true);
            nItemIndex += 1;
        }
        if (tabAward.BindYuanBao > 0 && nItemIndex < m_StarBoxTipItem.Length)
        {
            m_StarBoxTipItem[nItemIndex].gameObject.SetActive(true);
            m_StarBoxTipItem[nItemIndex].InitInfo_YuanbaoBind(null, tabAward.BindYuanBao.ToString(), true);
            nItemIndex += 1;
        }

        if (m_StarBoxTipItemGrid.GetComponent<UIGrid>() != null)
        {
            m_StarBoxTipItemGrid.GetComponent<UIGrid>().Reposition();
        }

        // grid一排显示4个 根据奖励数量动态调tips位置和大小
        if (nItemIndex > 4)
        {
            m_StarBoxTipBG.height = 200;
            m_StarBoxTipBG.transform.localPosition = Vector3.zero;
            if (type == BoxType.ChapterAward)
            {
                m_StarBoxTip.transform.localPosition = new Vector3(StarBoxTipPosX_ChapterAward[awardindex], -100, 0);
            }
            else if (type == BoxType.LevelAward)
            {
                m_StarBoxTip.transform.localPosition = new Vector3(StarBoxTipPosX_LevelAward[awardindex], 150, 0);
            }
        }
        else
        {
            m_StarBoxTipBG.height = 134;
            m_StarBoxTipBG.transform.localPosition = new Vector3(0, 33, 0);
            if (type == BoxType.ChapterAward)
            {
                m_StarBoxTip.transform.localPosition = new Vector3(StarBoxTipPosX_ChapterAward[awardindex], -166, 0);
            }
            else if (type == BoxType.LevelAward)
            {
                m_StarBoxTip.transform.localPosition = new Vector3(StarBoxTipPosX_LevelAward[awardindex], 84, 0);
            }
        }
    }

    public void CloseStarBoxTip()
    {
        m_StarBoxTip.SetActive(false);
    }

	public void OnTitleClick()
	{
		if(TabBg!=null)
			TabBg.SetActive(true);

		// 隐藏特效
		m_Effect1.SetActive(false);
		m_Effect2.SetActive(false);
		
	}

	void CloseChest()
	{
		chestDialog.SetActive(false);
	}

	public void ShowHelpInfo()
	{
		if(m_HelpInfo==null)
			return;
		if(m_Help==null)
			return;
		m_HelpInfo.text=StrDictionary.GetClientDictionaryString("#{11295}");
		m_Help.SetActive(!m_Help.activeSelf);
	}

	public void HideTootips()
	{
		if(m_Help!=null)
		{
			m_Help.SetActive(false);
		}
		if(TabBg!=null)
		{
			TabBg.SetActive(false);
		}
		UpdateChapterAward();
	}
}
