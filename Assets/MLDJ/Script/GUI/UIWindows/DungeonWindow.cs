using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using Games.ChatHistory;
using GCGame;
using Games.GlobeDefine;
using Games.Item;


public class DungeonWindow : MonoBehaviour {

    private static DungeonWindow m_Instance = null;
    public static DungeonWindow Instance()
    {
        return m_Instance;
    }
    public TabController m_TabLevel;        // 难度等级Tab
    public TabController m_TabNum;          // 副本人数Tab   

    public UILabel m_Story;
    public UILabel m_TiNeng;
    public UILabel m_Level;
	private UILabel m_lockLevel;
    public UILabel m_Time;
    public UILabel m_ZhanLi;
	public UILabel m_ZhanLiDesc;
    public UILabel m_ShengYuCiShu;
    public UILabel m_TiNengXiaoHao;
    public UILabel m_Exp;
    public UILabel m_Money;
    public UILabel m_NanDuLabel;
    public UILabel m_SceneName;
    public GameObject m_ZuiDuiPingTai;
    public GameObject m_Mercenary;
    public GameObject m_SaoDang;
    public GameObject m_HanRen;
    public GameObject m_BuyCopySceneWindow;
    public GameObject[] m_DropItem;
    public UISprite[] m_DropItemSprite;
    public GameObject m_GouMaiCiShuButton;
    //public UIGrid ButtonGrid;
    public int Diffcult { set; get; }
    public int CopyMode { set; get; }
    private int Send { set; get;  }
    private int CopySceneId = -1;

    private int m_NewPlayerGuide_Step = -1;
    public GameObject m_BtnEnter;
    public UILabel m_ChongZhiCiShu;

    public GameObject m_BtnDanren;
    public GameObject m_BtnDuiWu;
  //  public UIGrid m_CopyModelGrid;
    public UILabel m_ButtonAutoTeamLabel;
    public UILabel m_Title;
    public UILabel m_SweepCDTime;
    public UISprite m_SweepYuanbaoSprite;
    public UILabel m_SweepYuanbaoLabel;
	public SweepResultWindow m_SweepResult;

    public UILabel m_localTimeLabel;

    void Awake()
    {
        m_Instance = this;
    }

    // 界面加载后调用
    void Start()
    {
        Send = 0;
        InvokeRepeating("DoSomeThing", 0, 1);
    }
    void OnEnable()
    {        
        Send = 0;
        m_Instance = this;
        
        ShowCurrentTime(true);
        StartCoroutine(ShowServerTime());
		m_TabLevel.delTabChanged = OnLevelTabChange;
		m_TabNum.delTabChanged = OnNumTabChange;
    }
    void OnDisable()
    {
        m_Instance = null;
    }
    
    /// <summary>
    /// 显示时间
    /// </summary>
    /// <returns></returns>
    IEnumerator ShowServerTime()
    {
        while (true)
        {
            yield return new WaitForSeconds(1);

            ShowCurrentTime();
        }
    }

    /// <summary>
    /// 显示当前时间
    /// </summary>
    private void ShowCurrentTime(bool isUpdate = false)
    {
        if (isUpdate)
        {
            m_localTimeLabel.text = string.Empty;
        }

        if (m_localTimeLabel != null && GlobalData.CurerntLocalDateTime != null)
        {
            m_localTimeLabel.text = GlobalData.CurerntLocalDateTime.ToString("HH:mm:ss");
        }
    }

    public void OnGuYongClick()
    {
        if (GlobeVar.INVALID_ID == GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3170}");
            }
            //向服务器发送邀请某人加入队伍消息
            CG_REQ_TEAM_INVITE msg = (CG_REQ_TEAM_INVITE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_TEAM_INVITE);
            if(msg != null)
            {
                msg.Guid = GlobeVar.INVALID_GUID;
                msg.SendPacket();
            }
        }
     
        HuaShanPVPData.MercenarySceneClass = CopySceneId;
        CG_MERCENARY_LIST_REQ packet = (CG_MERCENARY_LIST_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MERCENARY_LIST_REQ);
        packet.Sceneclass = CopySceneId;
        packet.Diffcult = Diffcult;
        packet.SendPacket();
    }

    public void OnBuyCopySceneNumBtnClick()
    {
		int nRemainNum = VipData.GetVipCopySceneRemainBuyNum(CopySceneId, CopyMode == 1 ? true : false);
		if(VipData.GetVipLv()<=0 || nRemainNum < 0 )
		{
			if (Singleton<ObjManager>.GetInstance().MainPlayer)
			{
				Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{11442}");
			}
			return;
		}
        BuyCopySceneNumWindow BuyWindow = m_BuyCopySceneWindow.GetComponent<BuyCopySceneNumWindow>();
        if (BuyWindow != null) {
            BuyWindow.SendData(CopySceneId, CopyMode == 1 ? true : false );
            BuyWindow.gameObject.SetActive(true);
        }
    }

    public void OnOpenCopyScene(int nSceneId)
    {
		Diffcult = 1;
		m_cangjingge.gameObject.SetActive (false);
        m_Level.text = StrDictionary.GetClientDictionaryString("#{2791}");
        m_ZhanLi.text = StrDictionary.GetClientDictionaryString("#{2791}");
        m_ShengYuCiShu.text = StrDictionary.GetClientDictionaryString("#{2791}");
        m_TiNengXiaoHao.text = StrDictionary.GetClientDictionaryString("#{2791}");
        m_Exp.text = StrDictionary.GetClientDictionaryString("#{2791}");
        m_Money.text = StrDictionary.GetClientDictionaryString("#{2791}");
		m_ZhanLiDesc.text = "";
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            m_TiNeng.text = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.CurStamina.ToString() + "/100";
        }
        CopySceneId = nSceneId;
        Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
        if (pSceneClass == null)
        {
            return;
        }

        if (m_SceneName)
        {
            m_SceneName.text = pSceneClass.Name;
        }
        //客户端掉落显示
        Tab_CangJingGeInfo pCangJingGeInfo = TableManager.GetCangJingGeInfoByID(CopySceneId + 200, 0);
        if (pCangJingGeInfo != null)
        {
            for (int i = 0; i < pCangJingGeInfo.getDropCount() && i < m_DropItem.Length && i < m_DropItemSprite.Length; i++ )
            {
                Tab_CommonItem pItem = TableManager.GetCommonItemByID(pCangJingGeInfo.GetDropbyIndex(i),0);
                if (pItem == null)
                {
                    m_DropItem[i].SetActive(false);
                    continue;
                }
                m_DropItem[i].SetActive(true);
                m_DropItemSprite[i].spriteName = pItem.Icon.ToString();
                m_DropItemSprite[i].transform.parent.FindChild("SprQuality").GetComponent<UISprite>().spriteName = GlobeVar.QualityColorGrid[pItem.Quality - 1];
            }
        }
        Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
        if (pCopyScene == null)
        {
            return;
        }
        m_Story.text = pCopyScene.DescInfo;
        m_Title.text = pCopyScene.Name;
        
       
        if (nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN)
        {
            m_BtnDanren.SetActive(false);
            m_BtnDuiWu.SetActive(true);
            m_TabNum.ChangeTab("DuiWu");
        }
        else if (nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN)
        {
            m_BtnDanren.SetActive(true);
            m_BtnDuiWu.SetActive(false);
            m_TabNum.ChangeTab("DanRen");
        }
        else if (nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
        {
            m_BtnDanren.SetActive(false);
            m_BtnDuiWu.SetActive(true);
            m_TabNum.ChangeTab("DuiWu");
        }
        else
        {
            m_BtnDanren.SetActive(true);
            m_BtnDuiWu.SetActive(true);
            m_TabNum.ChangeTab("DanRen");
        }
		if( nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN ||
		   nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG
		   || nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
		{
			m_ZhanLiDesc.text = Utils.GetDicByID(2736);
		}
		else
		{
			m_ZhanLiDesc.text = Utils.GetDicByID(2735);
		}

		// 选中合适的难度
		int nDiffcult = GetMaxDiffcult();
		if (1 == nDiffcult)
		{
			m_TabLevel.ChangeTab("KunNan");
		}
		else if (2 == nDiffcult)
		{
			m_TabLevel.ChangeTab("TiaoZhan");
		}
		else
		{
			m_TabLevel.ChangeTab("JianDan");
		}

        // 新手指引放这吧
        Check_NewPlayerGuide();
    }

	void UpdateTabLevelInfo()
	{
		Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
		if (pSceneClass == null)
		{
			return;
		}

		Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
		if (pCopyScene == null)
		{
			return;
		}

		for (int i = 0; i < CharacterDefine.COPYSCENE_DIFFICULTY.Length; i++ )
		{
			Tab_CopySceneRule pCopySceneRule;
			if (1 == CopyMode)
			{
				pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(i), 0);
			}
			else
			{
				pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(i), 0);
			}
			if (null == pCopySceneRule)
			{
				return;
			}

			// 是否锁定
			Transform curParent = GetCurParentLevelByDiff(i);
			if(curParent==null)
			{
				return;
			}

			if (pCopySceneRule.Level <= Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level)
			{
				UpdateDiffLevelStatus(curParent,false,pCopySceneRule.Level);
			}
			else
			{
				UpdateDiffLevelStatus(curParent,true,pCopySceneRule.Level);
			}
		}
	}

	Transform GetCurParentLevelByDiff(int nDiffcult)
	{
		if(nDiffcult==0)
		{
			return m_TabLevel.transform.FindChild("JianDan");
		}
		else if(nDiffcult==1)
		{
			return m_TabLevel.transform.FindChild("KunNan");
		}
		else if(nDiffcult==2)
		{
			return m_TabLevel.transform.FindChild("TiaoZhan");
		}
		else
		{
			return null;
		}
	}

	void UpdateDiffLevelStatus(Transform curParent,bool bLock,int nLevel)
	{
		curParent.FindChild("lock").FindChild("Level").GetComponent<UILabel>().text = nLevel.ToString();
		curParent.FindChild("lock").gameObject.SetActive(bLock);
		curParent.FindChild("Label").gameObject.SetActive(!bLock);
		UISprite diffIcon = curParent.FindChild("Sprite-LevelIcon").GetComponent<UISprite>();
		if(bLock)
		{
			SetSpriteGray(ref diffIcon);
		}
		else
		{
			SetSpriteHigh(ref diffIcon);
		}
	}

	void SetSpriteGray(ref UISprite sprite)
	{
		sprite.color = GlobeVar.BUTTONGRAY;
	}
	
	void SetSpriteHigh(ref UISprite sprite)
	{
		sprite.color = GlobeVar.BUTTONCOLER;
	}

    public int GetMaxDiffcult()
    {
        int nDiffcult = 0;
        if (null == Singleton<ObjManager>.GetInstance())
        {
            return nDiffcult;
        }
        Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
        if (pSceneClass == null)
        {
            return nDiffcult;
        }
        Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
        if (pCopyScene == null)
        {
            return nDiffcult;
        }
        for (int i = 0; i < CharacterDefine.COPYSCENE_DIFFICULTY.Length; i++ )
        {
            Tab_CopySceneRule pCopySceneRule;
            if (1 == CopyMode)
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(i), 0);
            }
            else
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(i), 0);
            }
            if (null == pCopySceneRule)
            {
                continue;
            }
            if (pCopySceneRule.Level <= Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level)
            {
                nDiffcult = i;
            }
        }
        return nDiffcult;
    }

    public void UpdateTabInfo()
    {
        Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
        if (pSceneClass == null)
        {
            return;
        }

        Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
        if (pCopyScene == null)
        {
            return;
        }

        Tab_CopySceneRule pCopySceneRule;
        if (CopyMode == 1)
        {
            pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(Diffcult - 1), 0);
        }
        else
        {
            pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(Diffcult - 1), 0);
        }
        if (pCopySceneRule == null)
        {
            return;
        }
       // string strNaDu = StrDictionary.GetClientDictionaryString("#{" + CharacterDefine.COPYSCENE_DIFFICULTY[Diffcult - 1].ToString() + "}");
       // m_NanDuLabel.text = StrDictionary.GetClientDictionaryString("#{2177}", strNaDu);

        if (pCopySceneRule.StartTime == -1)
        {
            //m_Time.text = "全天";
            m_Time.text = StrDictionary.GetClientDictionaryString("#{2792}");
        }
        else
        {
            //m_Time.text = (pCopySceneRule.StartTime / 100).ToString() + "时" + (pCopySceneRule.StartTime % 100).ToString() + "分至" + (pCopySceneRule.EndTime / 100).ToString() + "时" + (pCopySceneRule.EndTime % 100).ToString() + "分";
            m_Time.text = StrDictionary.GetClientDictionaryString("#{2793}", pCopySceneRule.StartTime / 100, pCopySceneRule.StartTime.ToString().Substring(2), pCopySceneRule.EndTime / 100, pCopySceneRule.EndTime % 100); 
        }        
        //ButtonGrid.Reposition();
		string levelColor = "";
		if(pCopySceneRule.Level > Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level)
		{
			//Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1351}",pCopySceneRule.Level);
			levelColor = "[ff0006]";
			m_BtnEnter.GetComponent<UIImageButton>().isEnabled = false;
		}
		else
		{
			m_BtnEnter.GetComponent<UIImageButton>().isEnabled = true;
		}
		m_Level.text = levelColor + pCopySceneRule.Level.ToString();
		m_ZhanLi.text = pCopySceneRule.Battle.ToString();

        int nTabNum = pCopySceneRule.Number;
        int ExtraNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneExtraNumber(CopySceneId, CopyMode);
		int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);
		int nNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumber(CopySceneId, CopyMode);
		int nRemainNum = nTabNum * nMul + ExtraNum - nNum;
//		string strVip = VipData.MakeVipString(CopySceneId, CopyMode);

		m_ShengYuCiShu.text = nRemainNum.ToString() + "/" + (nTabNum * nMul).ToString();

        m_TiNengXiaoHao.text = pCopySceneRule.Stamina.ToString();
        m_Exp.text = pCopySceneRule.Exp.ToString();
        m_Money.text = pCopySceneRule.Money.ToString();
        m_SweepYuanbaoLabel.text = StrDictionary.GetClientDictionaryString("#{5215}",VipData.GetVipSweepYuanBao()); 
        OnButtonAutoTeamLabel();

		if(nRemainNum<=0)
		{
			m_BtnEnter.GetComponent<UIImageButton>().isEnabled = false;
		}
		// 扫荡相关
		if( CopyMode == 1 && VipData.IsCanSweepCopyScene(CopySceneId) && pCopySceneRule.Level <= Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level )
		{
			m_SaoDang.SetActive(true);
			m_SweepCDTime.gameObject.SetActive(true);
			//m_SweepYuanbaoSprite.gameObject.SetActive(true);
			//m_SweepYuanbaoLabel.gameObject.SetActive(true);

			if(nRemainNum <= 0 )
			{
				m_SaoDang.GetComponent<UIImageButton>().isEnabled = false;
			}
			else
			{
				m_SaoDang.GetComponent<UIImageButton>().isEnabled = true;
			}
		}
		else
		{
			m_SaoDang.SetActive(false);
			m_SweepCDTime.gameObject.SetActive(false);
			//m_SweepYuanbaoSprite.gameObject.SetActive(false);
			//m_SweepYuanbaoLabel.gameObject.SetActive(false);
		}
    }

    public void UpdateCopySceneInfo(int nSceneId)
    {
        if (nSceneId == CopySceneId)
        {
            Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
            if (pSceneClass == null)
            {
                return;
            }

            Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
            if (pCopyScene == null)
            {
                return;
            }
            Tab_CopySceneRule pCopySceneRule;
            if (CopyMode == 1)
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(Diffcult - 1), 0);
            }
            else
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(Diffcult - 1), 0);
            }
            if (pCopySceneRule == null)
            {
                return;
            }
            int ExtraNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneExtraNumber(CopySceneId, CopyMode);
            int nTabNum = pCopySceneRule.Number;
			int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);
			int nNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumber(CopySceneId, CopyMode);
//            string strVip = VipData.MakeVipString(CopySceneId, CopyMode);
            m_ShengYuCiShu.text = (nTabNum * nMul + ExtraNum - nNum).ToString() + "/" + (nTabNum * nMul).ToString();

			UpdateTabInfo();
        }
    }
    // 难度等级标签页切换
    void OnLevelTabChange(TabButton button)
    {
        if (button.name == "JianDan")
        {
			Diffcult = 1;
        }
        else if (button.name == "KunNan")
        {
			Diffcult = 2;
        }
        else if (button.name == "TiaoZhan")
        {
			Diffcult = 3;
        }

        UpdateTabInfo();

		Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
		if (pSceneClass == null)
		{
			return;
		}
		
		Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
		if (pCopyScene == null)
		{
			return;
		}
		
		Tab_CopySceneRule pCopySceneRule;
		if (CopyMode == 1)
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(Diffcult - 1), 0);
		}
		else
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(Diffcult - 1), 0);
		}
		if (pCopySceneRule == null)
		{
			return;
		}
		if(pCopySceneRule.Level > Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level)
		{
			Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1351}",pCopySceneRule.Level);
		}
	}
	
	void OnNumTabChange(TabButton button)
	{
		if (button.name == "DanRen")
		{
			CopyMode = 1;
			m_ZuiDuiPingTai.SetActive(false);
			m_Mercenary.SetActive(false);
			m_HanRen.SetActive(false);
		}
		else if (button.name == "DuiWu")
        {
            CopyMode = 2;
            OnButtonAutoTeamLabel();
            m_ZuiDuiPingTai.SetActive(true);
            if (CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN
                || CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
            {
                m_Mercenary.SetActive(false);
            }
            else
            {
                m_Mercenary.SetActive(true);
            }
            m_HanRen.SetActive(true);
            m_SweepCDTime.gameObject.SetActive(false);
            m_SaoDang.SetActive(false);
            //m_SweepYuanbaoSprite.gameObject.SetActive(false);
            //m_SweepYuanbaoLabel.gameObject.SetActive(false);
        }
        
        if ( VipData.GetBuyCopySceneMode(CopySceneId, CopyMode ) == 1 ) {
            m_GouMaiCiShuButton.gameObject.SetActive(true);
        }
        else if (VipData.GetBuyCopySceneMode(CopySceneId, CopyMode) == 2 ) {
            m_GouMaiCiShuButton.gameObject.SetActive(true);
        }
        else {
			m_GouMaiCiShuButton.gameObject.SetActive(false);
        }
		
		if (CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENCE_DEFINE_EX.SCENE_FEIQIDUSHI_ID || 
		    ( CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENCE_DEFINE_EX.SCENE_JIXIEYANJIUSUO_ID && CopyMode == 1)||
		    CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENCE_DEFINE_EX.SCENE_LEINABAO_ID ||
		    (CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENCE_DEFINE_EX.SCENE_HUANGHUNYAOSAI_ID && CopyMode == 1 )||
		    CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENCE_DEFINE_EX.SCENE_BINGDONGDIXIA_ID
		    )
		{
			m_ChongZhiCiShu.text = StrDictionary.GetClientDictionaryString("#{2347}");
		}
		else
		{
			m_ChongZhiCiShu.text = StrDictionary.GetClientDictionaryString("#{2348}");
		}
		
        //ButtonGrid.Reposition();
        UpdateTabInfo();
		UpdateTabLevelInfo();
    }

    // 备用
    public void SetData()
    {

    }

    /// <summary>
    /// 现为机械研究所
    /// </summary>
    void OnEnterJuXianZhuangClick()
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuidLogic.CloseWindow();
            m_NewPlayerGuide_Step = -1;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.IsInJianYu())
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }

        if (Send == 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendOpenScene(CopySceneId, CopyMode, Diffcult);
            Send = 1;
        }
    }
    public void OnTeamPlatformClick()
    {
        if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            CG_ASK_AUTOTEAM packet = (CG_ASK_AUTOTEAM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_AUTOTEAM);
            packet.SetSceneClassID(-1);
            packet.SetDifficulty(-1);
            packet.SendPacket();
        }
        else
        {
            CG_ASK_AUTOTEAM packet = (CG_ASK_AUTOTEAM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_AUTOTEAM);
            packet.SetSceneClassID(CopySceneId);
            packet.SetDifficulty(Diffcult);
            packet.SendPacket();
        }
       // ActivityController.Instance().m_TeamPlatformWindow.UpdateCopyScene(CopySceneId, CopyMode, Diffcult);  
       
    }
    public void OnTeamPlatformOpen()
    {
        ActivityController.Instance().m_TeamPlatformWindow.gameObject.SetActive(true);
        gameObject.SetActive(false);
    }
    private float timeSend = Time.realtimeSinceStartup;
    void DoSomeThing()
    {
        if (Time.realtimeSinceStartup - timeSend > 1)
        {
            timeSend = Time.realtimeSinceStartup;
            Send = 0;
        }
        //更新CD
        string str = "";
        int CDTime = GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime;
        if (CDTime <= 0 )
        {
            str = "";
            m_SweepCDTime.text = "";

        }
        else
        {
            str = (CDTime / 60).ToString() + ":" + (CDTime % 60).ToString();           
            m_SweepCDTime.text = StrDictionary.GetClientDictionaryString("#{2552}", str);
        }
    }

    public void OnSaoDang()
    {
        string strText = StrDictionary.GetClientDictionaryString("#{5216}", VipData.GetVipSweepYuanBao());
        MessageBoxLogic.OpenOKCancelBox(strText, "", OnSaoDangOK);
    }

    void OnSaoDangOK()
    {
        CG_ASK_COPYSCENE_SWEEP packet = (CG_ASK_COPYSCENE_SWEEP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COPYSCENE_SWEEP);
        packet.SceneID = CopySceneId;
        packet.Difficult = Diffcult;
        packet.Type = CopyMode;
        packet.SendPacket();
    }

    private float OnHanRentimeSend = 0;
    public void OnHanRen()
    {
       
        if (Time.realtimeSinceStartup - OnHanRentimeSend < 30 )
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2163}");
            return;
        }
        OnHanRentimeSend = Time.realtimeSinceStartup;
        if(CopyMode == 1)
        {
            return;
        }
        Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(CopySceneId, 0);
        if (pSceneClass == null)
        {
            return;
        }
        //判断队伍是否已满
        if (GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.IsFull())
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1145}");
                return;
            }
        }
        else
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3170}");
            }
            
            CG_REQ_TEAM_INVITE msg = (CG_REQ_TEAM_INVITE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_TEAM_INVITE);
            if (msg != null)
            {
                msg.Guid = GlobeVar.INVALID_GUID;
                msg.SendPacket();
            }
            
        }
        string text= "";
        if (Diffcult == 1)
        {
            text = StrDictionary.GetClientDictionaryString("#{2154}",pSceneClass.Name);
        }
        else  if (Diffcult == 2)
        {
            text = StrDictionary.GetClientDictionaryString("#{2155}",pSceneClass.Name);
        }
        else  if (Diffcult == 3)
        {
            text = StrDictionary.GetClientDictionaryString("#{2156}",pSceneClass.Name);
        }

        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            CG_CHAT packet = (CG_CHAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHAT);
            packet.Chattype = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_WORLD;
            packet.Chatinfo = text;
            packet.Linktype = (int)GC_CHAT.LINKTYPE.LINK_TYPE_COPYTEAM;
            packet.AddIntdata(CopySceneId);
            packet.AddIntdata(Diffcult);
            packet.SendPacket();
           // Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false,"#{3032}");
        }       
    }  
 
    void Check_NewPlayerGuide()
    {
        if (ActivityController.Instance())
        {
            int nIndex = ActivityController.Instance().NewPlayerGuide_Step;

            if ((nIndex == 4 && CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
                || (nIndex == 5 && CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG)
                || (nIndex == 6 && CopySceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU))
            {
                NewPlayerGuide(1);
                ActivityController.Instance().NewPlayerGuide_Step = -1;
            }
        }
    }
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        if (nIndex == 1)
        {
            NewPlayerGuidLogic.OpenWindow(m_BtnEnter, 160, 60, "", "right", 0, true, true);
        }
    }
    public void OnButtonAutoTeamLabel()
    {
        string text = StrDictionary.GetClientDictionaryString("#{2956}");
        if ( GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            text = StrDictionary.GetClientDictionaryString("#{2957}");
        }
        m_ButtonAutoTeamLabel.text = text;
    }
	//=========================================================
	public GameObject m_cangjingge ;
	// 增加活动点击的tip
	//=========================================================
	private void OnClickDungeonItem(int nIndex)
	{
		Tab_CangJingGeInfo pCangJingGeInfo = TableManager.GetCangJingGeInfoByID(CopySceneId + 200, 0);
		if (pCangJingGeInfo != null)
		{
			Tab_CommonItem pItem = TableManager.GetCommonItemByID(pCangJingGeInfo.GetDropbyIndex(nIndex),0);
			if ( pItem != null )
			{
				GameItem item = new GameItem();
				item.DataID = pItem.Id;
				if (item.IsEquipMent())
				{
					EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
				}
				else
				{
					ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
				}
			}
		}
	}

	public void OnClickDungeonItem1()
	{
		OnClickDungeonItem(0);
	}

	public void OnClickDungeonItem2()
	{
		OnClickDungeonItem(1);
	}

	public void OnClickDungeonItem3()
	{
		OnClickDungeonItem(2);
	}

	public void OnClickDungeonItem4()
	{
		OnClickDungeonItem(3);
	}

	public void RetCopySceneSweep(GC_RET_COPYSCENE_SWEEP packet)
	{
		m_SweepResult.Init(packet);
		m_SweepResult.gameObject.SetActive(true);
	}

	void CloseSweepResultWindow()
	{
		m_SweepResult.gameObject.SetActive(false);
	}
}
