using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using Games.JuQingCopySceneData;
using Games.Fellow;
using Games.LogicObj;

public class StoryCopySceneResultLogic : UIControllerBase<StoryCopySceneResultLogic>
{
    public GameObject m_WholeChild;
    public UILabel[] m_ConditionText;
    //public UILabel[] m_ConditionValue;
    public GameObject[] m_ConditionLight;
    public GameObject[] m_StarEffect;
    public StoryCopySceneItem[] m_BonusItem;

    public UILabel m_Exp;
    public UILabel m_FExp;
    public UILabel m_Coin;
    public UILabel m_BindYuanbao;

    public UILabel m_Title;
    public GameObject m_FailObj;

    public UISlider m_FexpSlider;
    public UISlider m_ExpSlider;

    public UIPlayTween m_BGPlayerTween;

    public TweenNumber m_TweenNumLable;
    public TweenNumber m_TweenSlider1;
    public TweenNumber m_TweenSlider2;

	public GameObject m_Win;
	public GameObject m_Fail;

    private float m_StarTimer = 0;                  // 打星特效计时器
    private bool m_StarEffectShow = false;          // 是否播放打星特效
    private const float m_StarShowTime = 0.5f;      // 每个打星特效播放间隔时间
    private int m_StarIndex = 0;                    // 当前播放打星特效的星星索引
    private int m_StarMax = 0;                      // 播放打星特效的个数

    private float m_ShowUIDelayTimer = 0;
    private float m_ShowUIDelay = 1.6f;

	private bool[] m_StarGot = new bool[3];
	private bool m_bIsNeedSendLevelCopySceneMsg = true;

    void Start()
    {
        m_WholeChild.SetActive(false);
        m_ShowUIDelayTimer = Time.time;
    }
    public void SetNeedSendLevelCopyScene(bool bValue)
    {
        m_bIsNeedSendLevelCopySceneMsg = bValue;
    }
    void SetPlay(int group)
    {
        m_BGPlayerTween.tweenGroup = group;
        m_BGPlayerTween.resetOnPlay = true;
        m_BGPlayerTween.Play(true);
    }

	void InitWinOrFail(bool bWin)
	{
//		StoryCopySceneScoreInfo info = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLastScore();
//		int nWin = info.m_bResult ? 1 : 0;
		if (!bWin)
		{
			if(m_Win!=null&&m_Fail!=null)
			{
				m_Win.SetActive(false);
				m_Fail.SetActive(true);
			}
		}
		else
		{
			//m_FailObj.SetActive(true);
			//m_Title.text = StrDictionary.GetClientDictionaryString("#{3827}");
			if(m_Win!=null&&m_Fail!=null)
			{
				m_Win.SetActive(true);
				m_Fail.SetActive(false);
			}
		}
	}
    void Awake()
    {
        SetInstance(this);
        SetNeedSendLevelCopyScene(true);
    }

    void Update()
    {
        if (false == m_WholeChild.activeInHierarchy)
        {
            if (Time.time - m_ShowUIDelayTimer >= m_ShowUIDelay)
            {
                m_WholeChild.SetActive(true);
				bool bWin = false;
				if (Singleton<ObjManager>.Instance.MainPlayer != null)
				{
					if(!Singleton<ObjManager>.Instance.MainPlayer.IsDie())
					{
						StoryCopySceneScoreInfo info = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLastScore();
						bWin = info.m_bResult ? true : false;
					}
				}
				InitWinOrFail(bWin);
                SetPlay(0);
                m_ShowUIDelayTimer = 0;
				Init(bWin);
                
            }
        }

        if (m_StarEffectShow)
        {
            for (; m_StarIndex < m_StarEffect.Length && m_StarIndex < m_ConditionLight.Length && m_StarIndex < m_StarGot.Length; m_StarIndex++)
            {
                if (m_StarGot[m_StarIndex])
                {
                    m_StarEffect[m_StarIndex].SetActive(true);
                    m_ConditionLight[m_StarIndex].SetActive(true);
                    SetPlay(m_StarIndex + 1);
                    
                    GameManager.gameManager.SoundManager.PlaySoundEffect(251);
                    m_StarMax += 1;
                }
            }

            if (m_StarIndex >= m_StarEffect.Length)
            {
                m_StarEffectShow = false;
                m_StarIndex = 0;
            }
          
        }

        //add 打星音效 chenzhong 2016/4/7
        if (Time.time - m_StarTimer >= m_StarShowTime && m_StarIndex >= 0 && m_StarMax > 0)
        {
            m_StarTimer = Time.time;
            GameManager.gameManager.SoundManager.PlaySoundEffect(251);
            m_StarMax--;
        }
    }

    void OnDestroy()
    {
        SetInstance(null);
    }

    void CloseWindow()
    {
        if (m_bIsNeedSendLevelCopySceneMsg) {
            CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
            packet.NoParam = -1;
            packet.SendPacket();
        }
        else {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer != null && _mainPlayer.IsDie()) {
                SendPlayerReliveMsg();
            }
        }
        UIManager.CloseUI(UIInfo.StoryCopySceneResultRoot);
    }

    void clear()
    {
        for (int n = 0; n < m_ConditionText.Length; ++n)
        {
            m_ConditionText[n].text = "";
        }
        //         for ( int n = 0; n < m_ConditionValue.Length; ++n)
        //         {
        //             m_ConditionValue[n].text = "";
        //         }
        for (int n = 0; n < m_ConditionLight.Length; ++n)
        {
            m_ConditionLight[n].SetActive(false);
        }
        for (int n = 0; n < m_BonusItem.Length; ++n)
        {
            m_BonusItem[n].gameObject.SetActive(false);
        }


        m_Exp.text = "";
        m_FExp.text = "";
        m_Coin.text = "";
        m_BindYuanbao.text = "";
        m_Title.text = StrDictionary.GetClientDictionaryString("#{3826}");
        m_FailObj.SetActive(false);
    }

	void InitCondition(Tab_StoryCopyScene tBook)
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

	void InitStarAward(Tab_StoryCopyScene tBook,bool bWin)
	{
		bool[] bPreStarGot = new bool[3];

		StoryCopySceneLevelInfo levelInfo = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(tBook.Id);
		bPreStarGot[0] = levelInfo.IsPreGetStar1();
		bPreStarGot[1] = levelInfo.IsPreGetStar2();
		bPreStarGot[2] = levelInfo.IsPreGetStar3();

		int nAwardCount = 0;
		if (!bWin)
		{
			return;
		}

		for (int nIndex = 0; nIndex < tBook.getStarRewardCount(); ++nIndex)
		{
			int nAward = tBook.GetStarRewardbyIndex(nIndex);
			
			Tab_StoryCopySceneAward tSCS = TableManager.GetStoryCopySceneAwardByID(nAward, 0);
			if (tSCS != null)
			{
				for (int nAwardIndex = 0; nAwardIndex < tSCS.getItemIDCount() && nAwardIndex < tSCS.getItemNumCount(); ++nAwardIndex)
				{
					int nID = tSCS.GetItemIDbyIndex(nAwardIndex);
					int nNum = tSCS.GetItemNumbyIndex(nAwardIndex);
					if (nID > 0 && nNum > 0)
					{
						if (nAwardCount >= 0 && nAwardCount < m_BonusItem.Length && nIndex < m_StarGot.Length && m_StarGot[nIndex])
						{
							m_BonusItem[nIndex].gameObject.SetActive(true);
							m_BonusItem[nIndex].SetShowItem(nID, nNum, m_StarGot[nIndex],bPreStarGot[nIndex]);
							nAwardCount++;
							break;
						}
					}
				}
			}
		}
	}

	void InitLeft(Tab_StoryCopyScene tBook,bool bWin)
	{
		if(!bWin)
			return;

		int nAwardExp = 0;
		int nAwardCoin = 0;
		int nAwardFExp = 0;
//		int nAwardYB = 0;
		
		Tab_StoryCopySceneAward tabPassReward = TableManager.GetStoryCopySceneAwardByID(tBook.PassReward, 0);
		if (null != tabPassReward)
		{
			nAwardCoin = tabPassReward.Coin;
			nAwardExp = tabPassReward.Exp;
			nAwardFExp = tabPassReward.FellowExp;
//			nAwardYB = tabPassReward.BindYuanBao;
			for (int nIndex = 0; nIndex < tabPassReward.getItemIDCount(); ++nIndex)
			{
				int nPassIndex = nIndex + 3;
				if (m_BonusItem.Length <= nPassIndex)
				{
					break;
				}
				int nPassRewardItemID = tabPassReward.GetItemIDbyIndex(nIndex);
				int nPassRewardItemNum = tabPassReward.GetItemNumbyIndex(nIndex);
				if (0 < nPassRewardItemID && 0 < nPassRewardItemNum)
				{
					m_BonusItem[nPassIndex].gameObject.SetActive(true);
					m_BonusItem[nPassIndex].SetShowItem(nPassRewardItemID, nPassRewardItemNum,true,true);
					//nAwardCount++;
				}
				else
				{
					break;
				}
			}
		}
		
		int CoinFromNum = 0;
		int CoinToNum = nAwardCoin;
		
		float FexpFromValue = GetCurLevelBattleFellowTotalExp() == 0 ? 0 : (float)(GetCurBattleFellowExp() - nAwardFExp) / GetCurLevelBattleFellowTotalExp();
		float FexpToValue = GetCurLevelBattleFellowTotalExp() == 0 ? 0 : (float)GetCurBattleFellowExp() / GetCurLevelBattleFellowTotalExp();
		
		float ExpFromValue = (float)(GetCurPlayerExp() - nAwardExp) / GetCurLevelPlayerTotalExp();
		float ExpToValue = (float)(GetCurPlayerExp()) / GetCurLevelPlayerTotalExp();
		
		//因为宠物经验在目前游戏计算有问题，所以按照策划意思，先写死，有个效果
		FexpFromValue = 0.4f;
		FexpToValue = 0.7f;
		
		m_TweenNumLable = TweenNumber.Begin(m_Coin.gameObject, 2, CoinFromNum, CoinToNum);
		m_TweenNumLable.onUpdatingNum = RefreshLabelText;
		
		m_ExpSlider.value = getSliderValue(ExpFromValue);
		m_TweenSlider1 = TweenNumber.Begin(m_ExpSlider.gameObject, 2, ExpFromValue, ExpToValue);
		m_TweenSlider1.onUpdatingNum = RefreshSlider1;
		
		m_FexpSlider.value = getSliderValue(FexpFromValue);
		m_TweenSlider2 = TweenNumber.Begin(m_FexpSlider.gameObject, 2, FexpFromValue, FexpToValue);
		m_TweenSlider2.onUpdatingNum = RefreshSlider2;
		//m_Coin.text = nAwardCoin.ToString();
		//m_Exp.text = nAwardExp.ToString();
		//m_FExp.text = nAwardFExp.ToString();
		//m_BindYuanbao.text = nAwardYB.ToString();

	}

	void Init(bool bWin)
    {
        clear();
        //get data from playerdata
        
		int nStoryID = GameManager.gameManager.ActiveScene.GetStoryCopySceneID(); 
        m_StarTimer = Time.time;
        
        if (bWin)
		{
			m_StarEffectShow = true;
			m_FailObj.SetActive(true);
			m_Title.text = StrDictionary.GetClientDictionaryString("#{3827}");
		}

		StoryCopySceneScoreInfo info = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLastScore();
		m_StarGot[0] = info.m_bFirstStarGet;
		m_StarGot[1] = info.m_bSecondStarGet;
		m_StarGot[2] = info.m_bThirdStarGet;

        //update info
        Tab_StoryCopyScene tBook = TableManager.GetStoryCopySceneByID(nStoryID, 0);
        if (tBook != null)
        {
            //condition///////////////////////////////////////////////////////
			InitCondition(tBook);
            
            //Bonus//////////////////////////////////////////////////////////////
			InitStarAward(tBook,bWin);
            
			InitLeft(tBook,bWin);
        }
    }

    string GetConditionValue(int nType, int nValue)
    {
        if (nType == 1)
        {
            return nValue.ToString();
        }
        else if (nType == 2)
        {
            int nMinute = nValue / 60;
            int nSecond = nValue % 60;
            return string.Format("{0}:{1}", nMinute, nSecond);
        }
        else if (nType == 3)
        {
            return nValue.ToString();
        }
        return "";
    }

    //当前出战宠物的当前经验(已经是加过以后了)
    int GetCurBattleFellowExp()
    {
        int m_Fexp = 0;
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container != null)
        {
            Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
            if (fellow != null)
            {
                m_Fexp = fellow.Exp;
            }
        }
        return m_Fexp;
    }

    int GetCurLevelBattleFellowTotalExp()
    {
        int m_CurLevelTotalFexp = 0;
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container != null)
        {
            Fellow fellow = container.GetFellowByGuid(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid);
            if (fellow != null)
            {
                Tab_LevelUp curTabLevelup = TableManager.GetLevelUpByID(fellow.Level, 0);
                m_CurLevelTotalFexp = curTabLevelup.FellowExpNeed;
            }
        }
        return m_CurLevelTotalFexp;
    }

    //玩家的经验(已经加过了)
    int GetCurPlayerExp()
    {
        int m_CurPlayerExp = 0;
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null != mainPlayer)
        {
            m_CurPlayerExp = mainPlayer.BaseAttr.Exp;
            //Tab_LevelUp curTabLevelup = TableManager.GetLevelUpByID(mainPlayer.BaseAttr.Level, 0);

        }
        return m_CurPlayerExp;
        //m_MaxExp = curTabLevelup.ExpNeed;
        //if (m_MaxExp != 0)
        //             m_ExpProgress.value = (float)m_CurExp / (float)m_MaxExp;
        // 
        //         m_ExpLabel.text = m_CurExp.ToString() + "/" + m_MaxExp.ToString();
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

    void RefreshLabelText(TweenNumber tw, bool bFinished)
    {
        RefreshLabelText(m_Coin, tw, bFinished);
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

    void RefreshSlider1(TweenNumber tw, bool bFinished)
    {
        RefreshSlider(m_ExpSlider, tw, bFinished);
    }
    void RefreshSlider2(TweenNumber tw, bool bFinished)
    {
        RefreshSlider(m_FexpSlider, tw, bFinished);
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

	public void OnPowerUp()
	{
		// 显示体检界面
		if (GameManager.gameManager.ActiveScene.IsCopyScene() == false) //不是副本
		{
			return;
		}
		else
		{
			PVPData.PowerUpAutoShow = true;
			//如果玩家已经死亡,先向服务器发送一个复活消息。
			Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
			if (_mainPlayer != null && _mainPlayer.IsDie() ) {
				SendPlayerReliveMsg();
			}
		}
        if (m_bIsNeedSendLevelCopySceneMsg) {
            // 离开副本
            SendLeaveCopySceneMsg();
        }
		// 关闭失败界面
		//gameObject.SetActive(false);
	}

	void SendLeaveCopySceneMsg()
	{
		CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
		packet.NoParam = -1;
		packet.SendPacket();
	}
	
	void SendPlayerReliveMsg()
	{
		CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
		packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_CITY);
		packet.SendPacket();
	}
}


