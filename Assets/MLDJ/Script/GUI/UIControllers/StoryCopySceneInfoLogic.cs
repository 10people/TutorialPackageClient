using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using Games.JuQingCopySceneData;
using Games.LogicObj;
using Games.Fellow;

public enum StoryCopyAwardItemType
{
	ITEM_ITEM=1,
	ITEM_MONEY=2,
	ITEM_YUANBAO=3,
	ITEM_EXP=4,
	ITEM_BDYUANBAO,
	ITEM_FELLOWEXP,
}

public class StoryCopySceneInfoLogic : UIControllerBase<StoryCopySceneInfoLogic>
{
	private struct MyTweenNum
	{
		private float m_fFrom;
		public float From
		{
			get { return m_fFrom; }
			set { m_fFrom = value; }
		}
		private float m_fTo;
		public float To
		{
			get { return m_fTo; }
			set { m_fTo = value; }
		}
	}
	private List<MyTweenNum> m_ExpTweenNumList = new List<MyTweenNum>();
	private List<MyTweenNum> m_FellowExpTweenNumList = new List<MyTweenNum>();
	public UILabel m_TiaozhanDayCount; // 每日挑战次数
    public UILabel[] m_ConditionText;
    public UISprite[] m_StarActive;
	public GameObject[] m_Got;
    public StoryCopySceneItem[] m_BonusItem;
	public StoryCopySceneItem[] m_PassAwardItem;

	public UILabel m_NameLabel;
	public UILabel m_IntroLabel;
	public UILabel m_SweepCount;
	public UILabel m_TuijianZhanli;
	public UILabel m_Zhanli;

	public GameObject m_TiaozhanButton; // 挑战按钮

	// 扫荡相关
	public GameObject m_SweepAwardInfo;
	public GameObject m_MulSweepInfo;
	public TweenNumber m_TweenNumLable;
	public TweenNumber m_TweenSlider1;
	public TweenNumber m_TweenSlider2;
	public UILabel m_Coin;
	public UISlider m_FellowExpSlider;
	public UISlider m_ExpSlider;
	public GameObject m_AgainSweepButton; 	// 再次扫荡按钮
	public GameObject m_SweepButton;        // 扫荡按钮
	public GameObject m_MulSweepButton;     // 多次扫荡按钮
	private int m_nLevelBeforeSweep = -1;   // 扫荡前人物等级
	private int m_nFellowLevelBeforeSweep = -1;  // 扫荡前宠物等级
	private int m_nExpCurStep = -1;
	private int m_nFellowExpCurStep = -1;
	private bool m_bExpPlay = true;
	private bool m_bFellowExpPlay = true;

	public UILabel m_TiaozhanCount;
	public UILabel m_TiaozhanCountOnSweepResult;
	public GameObject m_BuyTiaozhanInfo;
	public GameObject m_Help;
	public UILabel m_MulSweepCountLab;
	// 显示的关卡ID
	private int m_nStoryCopySceneID;

	private int m_nDropItemID1 = -1;
	private int m_nDropItemID2 = -1;
	private int m_nDropItemID3 = -1;
	private int m_nDropItemID4 = -1;   

	public UILabel m_Exp;
	public TweenNumber m_ExpTweenNumLable;
	public UILabel m_FellowExp;
	public TweenNumber m_FellowExpTweenNumLable;

    void Start()
    {
        Init();

        Messenger.AddListener(MessengerConst.OnUpdateStoryCopySceneLogicInfo, OnUpdateStoryCopySceneInfo);
    }

    void Awake()
    {
        SetInstance(this);
    }

	void Update()
	{
		if(m_bExpPlay)
		{
			if( m_nExpCurStep >= 0 && m_nExpCurStep < m_ExpTweenNumList.Count )
			{
				m_bExpPlay = false;
				m_TweenSlider1 = TweenNumber.Begin(m_ExpSlider.gameObject, 2, m_ExpTweenNumList[m_nExpCurStep].From, m_ExpTweenNumList[m_nExpCurStep].To);
				m_TweenSlider1.onUpdatingNum = RefreshSlider1;
			}
		}

		if(m_bFellowExpPlay)
		{
			if( m_nFellowExpCurStep >= 0 && m_nFellowExpCurStep < m_FellowExpTweenNumList.Count )
			{
				m_bFellowExpPlay = false;
				m_TweenSlider2 = TweenNumber.Begin(m_FellowExpSlider.gameObject, 2, m_FellowExpTweenNumList[m_nFellowExpCurStep].From, m_FellowExpTweenNumList[m_nFellowExpCurStep].To);
				m_TweenSlider2.onUpdatingNum = RefreshSlider2;
			}
		}
	}

    void OnDestroy()
    {
        SetInstance(null);

        Messenger.RemoveListener(MessengerConst.OnUpdateStoryCopySceneLogicInfo, OnUpdateStoryCopySceneInfo);
    }

    void clear()
    {
        for (int n = 0; n < m_ConditionText.Length; ++n)
        {
            m_ConditionText[n].text = "";
        }
        for (int n = 0; n < m_StarActive.Length; ++n)
        {
            m_StarActive[n].enabled = false;
        }
        for (int n = 0; n < m_BonusItem.Length; ++n)
        {
            m_BonusItem[n].gameObject.SetActive(false);
        }
		for (int n = 0; n < m_PassAwardItem.Length; ++n)
		{
			m_PassAwardItem[n].gameObject.SetActive(false);
		}
		for (int n = 0; n < m_Got.Length; ++n)
		{
			m_Got[n].SetActive(false);
		}
    }

	// 设置当前显示的关卡ID
	public void SetStoryCopySceneID (int nId)
	{
		m_nStoryCopySceneID = nId;
	}

    void OnUpdateStoryCopySceneInfo()
    {
        Tab_StoryCopyScene tBook = TableManager.GetStoryCopySceneByID(m_nStoryCopySceneID, 0);
        if (tBook != null) {
            // 关卡名
            UpdateLevelName(tBook);

            // 关卡介绍
            UpdateLevelInfo(tBook);

            // 关卡星级条件
            UpdateLevelStarDescrib(tBook);

            // 星级奖励
            UpdateStarAward(tBook);

            // 关卡奖励
            UpdatePassAward(tBook);

            // 星
            UpdateStarInfo();

            // 挑战按钮
            UpdateTiaozhanButtonState();

            // 挑战次数
            UpdateTiaozhanDayCount(tBook);

            // 扫荡按钮
            UpdateSweepButtonState();

            // 扫荡次数
            //UpdateSweepCount();

            // 战力
            UpdateZhanli();

            // 推荐战力
            UpdateTuijianZhanli(tBook);
        }
    }

	void Init()
    {
        clear();

		ClearSweepAwardInfo();

        OnUpdateStoryCopySceneInfo();
    }

	void UpdateLevelName( Tab_StoryCopyScene tBook )
	{
		m_NameLabel.text = tBook.LevelName;
	}
	
	void UpdateLevelInfo( Tab_StoryCopyScene tBook )
	{
		m_IntroLabel.text = tBook.LevelInfo;
	}
	
	void UpdateLevelStarDescrib( Tab_StoryCopyScene tBook )
	{
		for (int nIndex = 0; nIndex < tBook.getStarDescribCount(); ++nIndex)
		{
			if (nIndex >= 0 && nIndex < m_ConditionText.Length)
			{
				string temp = "#{" + tBook.GetStarDescribbyIndex(nIndex).ToString() + "}";
				m_ConditionText[nIndex].text = StrDictionary.GetClientDictionaryString(temp);
			}
		}
	}

	void UpdateTiaozhanButtonState()
	{
		bool bTiaozhan = false;
		if (null != GameManager.gameManager.PlayerDataPool.JuQingCopySceneData)
		{
			bTiaozhan = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsCanTiaozhan(m_nStoryCopySceneID);
		}

		m_TiaozhanButton.GetComponent<UIImageButton>().isEnabled = bTiaozhan;
	}

	public void UpdateTiaozhanDayCount(Tab_StoryCopyScene tBook )
	{
		if (null != tBook && null != GameManager.gameManager.PlayerDataPool.JuQingCopySceneData)
		{
			int nTiaozhanDayCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(0).m_nDayCount;
            //int nRemainDayCount = tBook.TimesPerDay - nTiaozhanDayCount;
            int nRemainDayCount = nTiaozhanDayCount;
			//m_TiaozhanDayCount.text = StrDictionary.GetClientDictionaryString("#{10135}", nRemainDayCount, tBook.TimesPerDay);
			m_TiaozhanCount.text = nRemainDayCount+"/"+tBook.TimesPerDay;
			m_TiaozhanCountOnSweepResult.text = nRemainDayCount.ToString();
		}
	}

	public void UpdateSweepButtonState()
	{
		bool bSweep = false;
		if (null != GameManager.gameManager.PlayerDataPool.JuQingCopySceneData)
		{
			bSweep = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsCanSweep(m_nStoryCopySceneID);
		}

		if (null != m_SweepButton.GetComponent<UIImageButton>())
		{
			m_AgainSweepButton.GetComponent<UIImageButton>().isEnabled = bSweep;
			m_SweepButton.GetComponent<UIImageButton>().isEnabled = bSweep;
			m_MulSweepButton.GetComponent<UIImageButton>().isEnabled = bSweep;
		}
	}
    
	public void UpdateStarInfo()
	{
		if(null != GameManager.gameManager.PlayerDataPool.JuQingCopySceneData)
		{
			StoryCopySceneLevelInfo levelInfo = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(m_nStoryCopySceneID);
			if (levelInfo.IsGetStar1())
			{
				m_StarActive[0].enabled = true;
				m_Got[0].SetActive(true);
				
			}
			if (levelInfo.IsGetStar2())
			{
				m_StarActive[1].enabled = true;
				m_Got[1].SetActive(true);
			}
			if (levelInfo.IsGetStar3())
			{
				m_StarActive[2].enabled = true;
				m_Got[2].SetActive(true);
			}
		}
	}

	public void SetPassRewardItem( int nRewardIndex, StoryCopyAwardItemType itemType, int nItemID, int nCount )
	{
		if( nRewardIndex >= 0 && nRewardIndex < m_PassAwardItem.Length )
		{
			m_PassAwardItem[nRewardIndex].SetRewardItem(itemType,nItemID,nCount);
		}
	}

	public void UpdatePassAward( Tab_StoryCopyScene tBook )
	{
		if( m_PassAwardItem == null )
			return;
		
		int nPassAwardID = tBook.PassReward;
		Tab_StoryCopySceneAward tPassAward = TableManager.GetStoryCopySceneAwardByID(nPassAwardID, 0);
		if( tPassAward != null )
		{
			int mRewardIndex = 0;
			if (tPassAward.Coin > 0)
			{
				SetPassRewardItem(mRewardIndex, StoryCopyAwardItemType.ITEM_MONEY, -1, tPassAward.Coin);
				mRewardIndex++;
			}
			if (tPassAward.Exp > 0)
			{
				SetPassRewardItem(mRewardIndex, StoryCopyAwardItemType.ITEM_EXP, -1, tPassAward.Exp);
				mRewardIndex++;
			}
			if (tPassAward.BindYuanBao > 0)
			{
				SetPassRewardItem(mRewardIndex, StoryCopyAwardItemType.ITEM_BDYUANBAO, -1, tPassAward.BindYuanBao);
				mRewardIndex++;
			}
			if (tPassAward.FellowExp > 0)
			{
				SetPassRewardItem(mRewardIndex, StoryCopyAwardItemType.ITEM_FELLOWEXP, -1, tPassAward.FellowExp);
				mRewardIndex++;
			}
			
			for(int k = 0 ; k < 4; k++ )
			{
				if (tPassAward.GetItemIDbyIndex(k) > 0)
				{
					SetPassRewardItem(mRewardIndex, StoryCopyAwardItemType.ITEM_ITEM, tPassAward.GetItemIDbyIndex(k), tPassAward.getItemIDCount());
					mRewardIndex++;
				}
			}
			
			for (int i = mRewardIndex ; i < m_PassAwardItem.Length; i++)
			{
				m_PassAwardItem[i].gameObject.SetActive(false);
			}
		}
	}
	
	public void UpdateStarAward( Tab_StoryCopyScene tBook )
	{
		for (int nIndex = 0; nIndex < tBook.getStarRewardCount(); ++nIndex)
		{
			int nAwardID = tBook.GetStarRewardbyIndex(nIndex);
			
			Tab_StoryCopySceneAward tStarAward = TableManager.GetStoryCopySceneAwardByID(nAwardID, 0);
			if (tStarAward != null)
			{
				int nItemID = tStarAward.GetItemIDbyIndex(0);
				if (nItemID > 0)
				{
					m_BonusItem[nIndex].SetShowItem(nItemID, 1, true, true);
				}
			}
		}
	}

	public void UpdateSweepCount()
	{
		if(m_SweepCount==null)
			return;
		
		if (null != GameManager.gameManager.PlayerDataPool.BackPack)
		{
			int nCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(JuQingCopySceneData.STORYCOPYSCENE_SAODANGLING_ITEMID);
			if ( nCount <0 )
				nCount = 0;
			m_SweepCount.text = nCount.ToString();
		}
	}
	
	public void UpdateTuijianZhanli(Tab_StoryCopyScene tBook)
	{
		if(m_TuijianZhanli==null)
			return;
		
		int nTuijianZhanli = tBook.CombatValue;
		int nZhanli = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.CombatValue;
		if(nTuijianZhanli > nZhanli )
		{
			m_TuijianZhanli.text = "[ff0006]"+nTuijianZhanli.ToString();
		}
		else
		{
			m_TuijianZhanli.text = nTuijianZhanli.ToString();
		}
	}
	
	public void UpdateZhanli()
	{
		if(m_Zhanli==null)
			return;
		
		int nZhanli = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.CombatValue;
		m_Zhanli.text = nZhanli.ToString();
	}

	void UpdateSweepAwardCoin(Tab_StoryCopySceneAward tSweepAward,int nCount)
	{
		if( tSweepAward == null )
		{
			return;
		}
		
		int nAwardCoin = tSweepAward.Coin;
		int CoinFromNum = 0;
		int CoinToNum = nAwardCoin*nCount;
		m_Coin.text = "0";
		m_TweenNumLable = TweenNumber.Begin(m_Coin.gameObject, 2, CoinFromNum, CoinToNum);
		m_TweenNumLable.onUpdatingNum = RefreshCoinLabelText;
	}

	void UpdateSweepAwardExp_Num(Tab_StoryCopySceneAward tSweepAward,int nCount)
	{
		if( tSweepAward == null )
		{
			return;
		}
		
		int nAwardExp = tSweepAward.Exp;
		int ExpFromNum = 0;
		int ExpToNum = nAwardExp*nCount;
		m_Exp.text = "0";
		m_ExpTweenNumLable = TweenNumber.Begin(m_Exp.gameObject, 2, ExpFromNum, ExpToNum);
		m_ExpTweenNumLable.onUpdatingNum = RefreshExpLabelText;
	}

	void UpdateSweepAwardFellowExp_Num(Tab_StoryCopySceneAward tSweepAward,int nCount)
	{
		if( tSweepAward == null )
		{
			return;
		}
		
		int nAwardFellowExp = tSweepAward.FellowExp;
		int FellowExpFromNum = 0;
		int FellowExpToNum = nAwardFellowExp*nCount;
		m_FellowExp.text = "0";
		m_FellowExpTweenNumLable = TweenNumber.Begin(m_FellowExp.gameObject, 2, FellowExpFromNum, FellowExpToNum);
		m_FellowExpTweenNumLable.onUpdatingNum = RefreshFellowExpLabelText;
	}
	
	void UpdateSweepAwardExp()
	{
		m_nExpCurStep = 0;
		int nCurLevel = -1;
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if (null != mainPlayer)
		{
			nCurLevel = mainPlayer.BaseAttr.Level;
		}
		
		if(m_nLevelBeforeSweep == nCurLevel ) 
		{
			MyTweenNum tw = new MyTweenNum();
			tw.From = m_ExpSlider.value;
			tw.To = CalExpSliderValue();
			m_ExpTweenNumList.Add(tw);
		}
		else if(m_nLevelBeforeSweep < nCurLevel )
		{
			for(int i = m_nLevelBeforeSweep ; i <= nCurLevel ; ++i )
			{
				MyTweenNum tw = new MyTweenNum();
				if(i == m_nLevelBeforeSweep )
				{
					tw.From = m_ExpSlider.value;
					tw.To = 1f;
					m_ExpTweenNumList.Add(tw);
				}
				else if( i > m_nLevelBeforeSweep && i < nCurLevel )
				{
					tw.From = 0f;
					tw.To = 1f;
					m_ExpTweenNumList.Add(tw);
				}
				else if(i == nCurLevel)
				{
					tw.From = 0;
					tw.To = CalExpSliderValue();
					m_ExpTweenNumList.Add(tw);
				}
			}
		}
	}
	
	void UpdateSweepAwardFellowExp()
	{
		m_nFellowExpCurStep = 0;
		int nCurLevel = -1;
		FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
		if (container != null)
		{
			Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
			if (fellow != null)
			{
				nCurLevel = fellow.Level;
			}
		}
		
		if(m_nFellowLevelBeforeSweep == nCurLevel ) 
		{
			MyTweenNum tw = new MyTweenNum();
			tw.From = m_FellowExpSlider.value;
			tw.To = CalFellowExpSliderValue();
			m_FellowExpTweenNumList.Add(tw);
		}
		else if(m_nFellowLevelBeforeSweep < nCurLevel )
		{
			for(int i = m_nFellowLevelBeforeSweep ; i <= nCurLevel ; ++i )
			{
				MyTweenNum tw = new MyTweenNum();
				if(i == m_nFellowLevelBeforeSweep )
				{
					tw.From = m_FellowExpSlider.value;
					tw.To = 1f;
					m_FellowExpTweenNumList.Add(tw);
				}
				else if( i > m_nFellowLevelBeforeSweep && i < nCurLevel )
				{
					tw.From = 0f;
					tw.To = 1f;
					m_FellowExpTweenNumList.Add(tw);
				}
				else if(i == nCurLevel)
				{
					tw.From = 0;
					tw.To = CalFellowExpSliderValue();
					m_FellowExpTweenNumList.Add(tw);
				}
			}
		}
	}

	void ClearSweepAwardInfo()
	{
		m_ExpTweenNumList.Clear();
		m_FellowExpTweenNumList.Clear();
	}

	void InitSweepAwardInfo(Tab_StoryCopyScene tBook,int nCount)
	{
		if (tBook == null)
		{
			return;
		}
		
		int nSweepAwardID = tBook.SweepReward;
		Tab_StoryCopySceneAward tSweepAward = TableManager.GetStoryCopySceneAwardByID(nSweepAwardID, 0);
		if( tSweepAward == null )
		{
			return;
		}
		
		// 金币
		UpdateSweepAwardCoin(tSweepAward,nCount);
		
		// 经验
		UpdateSweepAwardExp();
		
		// 宠物经验
		UpdateSweepAwardFellowExp();

		// 经验数字
		UpdateSweepAwardExp_Num(tSweepAward,nCount);

		// 宠物经验数字
		UpdateSweepAwardFellowExp_Num(tSweepAward,nCount);
	}




    public void NewPlayerGuide()
    {
        NewPlayerGuidLogic.OpenWindow(m_TiaozhanButton, 250, 100, "", "left", 0, true, true);
    }
    
    

	public void SweepFinish(int nCount)
	{
		if(m_SweepAwardInfo==null)
			return;

		Tab_StoryCopyScene tBook = TableManager.GetStoryCopySceneByID(m_nStoryCopySceneID, 0);
		if (tBook == null)
		{
			return;
		}

		// 更新按钮和次数状态
		UpdateTiaozhanDayCount(tBook);
		UpdateTiaozhanButtonState();
		UpdateSweepButtonState();

		// 初始化界面
		InitSweepAwardInfo(tBook,nCount);

		// 显示扫荡奖励界面
		m_SweepAwardInfo.SetActive(true);
	}

	int GetCurBattleFellowExp()
	{
		int nFexp = 0;
		FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
		if (container != null)
		{
			Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
			if (fellow != null)
			{
				nFexp = fellow.Exp;
			}
		}
		return nFexp;
	}
	
	int GetCurLevelBattleFellowTotalExp()
	{
		int nCurLevelTotalFexp = 0;
		FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
		if (container != null)
		{
			Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
			if (fellow != null)
			{
				Tab_LevelUp curTabLevelup = TableManager.GetLevelUpByID(fellow.Level, 0);
				nCurLevelTotalFexp = curTabLevelup.FellowExpNeed;
			}
		}
		return nCurLevelTotalFexp;
	}

	int GetCurPlayerExp()
	{
		int m_CurPlayerExp = 0;
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if (null != mainPlayer)
		{
			m_CurPlayerExp = mainPlayer.BaseAttr.Exp;
		}
		return m_CurPlayerExp;
	}
	
	int GetCurLevelPlayerTotalExp()
	{
		int m_CurLevelPlayerTotalExp = 0;
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if (null != mainPlayer)
		{
			Tab_LevelUp curTabLevelup = TableManager.GetLevelUpByID(mainPlayer.BaseAttr.Level, 0);
			m_CurLevelPlayerTotalExp = curTabLevelup.ExpNeed;
		}
		return m_CurLevelPlayerTotalExp;
	}

	float CalFellowExpSliderValue()
	{
		float fFellowExp = (float)GetCurBattleFellowExp() / GetCurLevelBattleFellowTotalExp();
		return fFellowExp;
	}
	
	float CalExpSliderValue()
	{
		float fExp = (float)(GetCurPlayerExp()) / GetCurLevelPlayerTotalExp();
		return fExp;
	}

	public void IncExpStep()
	{
		m_bExpPlay = true;
		++m_nExpCurStep;
	}

	public void IncFellowExpStep()
	{
		m_bFellowExpPlay = true;
		++m_nFellowExpCurStep;
	}

	void RefreshCoinLabelText(TweenNumber tw, bool bFinished)
	{
		RefreshLabelText(m_Coin, tw, bFinished);
	}

	void RefreshExpLabelText(TweenNumber tw, bool bFinished)
	{
		RefreshLabelText(m_Exp, tw, bFinished);
	}

	void RefreshFellowExpLabelText(TweenNumber tw, bool bFinished)
	{
		RefreshLabelText(m_FellowExp, tw, bFinished);
	}
	
	void RefreshLabelText(UILabel label, TweenNumber tw, bool bFinished)
	{
		if (bFinished)
		{
			label.text = tw.to.ToString();
		}
		else
		{
			int curIntValue = (int)tw.value;
			
			label.text = curIntValue.ToString();
		}
	}

	float getSliderValue(float tmpValue)
	{
		if(tmpValue < 0)
		{
			tmpValue += 1;
		} else if (tmpValue > 1)
		{
			tmpValue -= 1;
		}
		
		return tmpValue;
	}

	void RefreshSlider1(TweenNumber tw, bool bFinished)
	{
		RefreshSlider(m_ExpSlider, tw, bFinished);
	}

	void RefreshSlider2(TweenNumber tw, bool bFinished)
	{
		RefreshSlider(m_FellowExpSlider, tw, bFinished);
	}
	
	void RefreshSlider(UISlider slider, TweenNumber tw, bool bFinished)
	{
		if (bFinished)
		{
			slider.value = getSliderValue(tw.to);
		}
		else
		{
			slider.value = getSliderValue(tw.value);
		}
	}






	public void CloseSweepAwardWindow()
	{
		m_SweepAwardInfo.SetActive(false);
	}

	public void OnClickBuyCount()
	{
        BuyCopySceneNumWindow BuyWindow = m_BuyTiaozhanInfo.GetComponent<BuyCopySceneNumWindow>();
        if (BuyWindow != null) {
            BuyWindow.SendData(8, true);
            BuyWindow.gameObject.SetActive(true);
        }
	}

	public void CloseBuyCount()
	{
		m_BuyTiaozhanInfo.SetActive(false);
	}

	public void OnClickMulSweep()
	{
		int nReqSweepCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(0).m_nDayCount;
		m_MulSweepCountLab.text = nReqSweepCount.ToString();
		m_MulSweepInfo.SetActive(true);
	}

	public void CloseMulSweep()
	{
		m_MulSweepInfo.SetActive(false);
	}

	void OnClickOK()
	{
		UIManager.CloseUI(UIInfo.StoryCopySceneInfoRoot);
		GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.ReqOpenStoryCopyScene(m_nStoryCopySceneID);
        if (m_nStoryCopySceneID == 0 && SkillBarLogic.Instance() != null)
        {
			if(!GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsPass(0))
			{
				SkillBarLogic.Instance().HideTransformButtonWithLock();
			}
        }
	}

	void CloseWindow()
	{
		UIManager.CloseUI(UIInfo.StoryCopySceneInfoRoot);
		UIManager.ShowUI(UIInfo.Activity);
		if (ActivityController.Instance() != null)
		{
			ActivityController.Instance().m_HuoDongControl.ChangeTab("Button2-JuQing");
		}
	}

	private void Sweep(int nCount)
	{
		ClearSweepAwardInfo();
		
		// 扫荡前人物等级
		Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if (null != mainPlayer)
		{
			m_nLevelBeforeSweep = mainPlayer.BaseAttr.Level;
		}
		
		// 扫荡前宠物等级
		FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
		if (container != null)
		{
			Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
			if (fellow != null)
			{
				m_nFellowLevelBeforeSweep = fellow.Level;
			}
		}
		
		// 扫荡前经验条
		m_ExpSlider.value = (float)CalExpSliderValue();
		
		// 扫荡前宠物经验条
		m_FellowExpSlider.value = (float)CalFellowExpSliderValue();
		
		// 请求扫荡
		if (null != GameManager.gameManager.PlayerDataPool.JuQingCopySceneData)
		{
			GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.ReqSweepStoryCopyScene(m_nStoryCopySceneID,nCount);
		}
	}

	public void OnClickReqMulSweep()
	{

		int nCount = 1;
		if (int.TryParse(m_MulSweepCountLab.text, out nCount)) 
		{
		}
		else
		{
			nCount = 1;
		}
		
		Sweep(nCount);
		m_MulSweepInfo.SetActive(false);
	}

	public void OnClickSweep()
	{
		Sweep(1);
	}

	public void OnClickAskButton()
	{
		if(m_Help!=null)
		{
			m_Help.SetActive(!m_Help.activeSelf);
		}
	}

	public void OnHideTootips()
	{
		if(m_Help!=null)
		{
			m_Help.SetActive(false);
		}
	}

	private void IncSweepCount(int nIncStep )
	{
		int nCount = 1;
		int nMaxCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(0).m_nDayCount;
		if (int.TryParse(m_MulSweepCountLab.text, out nCount)) 
		{
		}
		else
		{
			nCount = 1;
		}
		nCount += nIncStep;
		if(nCount < 1 )
		{
			nCount = nMaxCount;
		}
		else if(nCount>nMaxCount)
		{
			nCount = 1;
		}
		m_MulSweepCountLab.text = nCount.ToString();
	}

	public void OnLeftSweepCount()
	{
		IncSweepCount(-1); 
	}

	public void OnRightSweepCount()
	{
		IncSweepCount(1); 
	}
}