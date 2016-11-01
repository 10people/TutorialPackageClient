using UnityEngine;
using GCGame.Table;
using Games.Item;
using Games.GlobeDefine;
using System.Collections.Generic;
using GCGame;

public class CangJingGeWindow : MonoBehaviour
{
    private int CopySceneId = (int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI;
    public UILabel m_SweepYanbao;
    public UILabel m_Sweep;
    public GameObject m_ObjectSweepCost;
    public GameObject m_ObjectSweepFree;
    public UILabel m_SweepCDTime;
    public UILabel m_Tier;
    public UILabel m_CalculatValue;
    public UISprite m_DropIconSprite1;
    public UISprite m_DropIconSprite2;
    public UISprite m_DropIconSprite3;
    public UILabel m_DropItemName1;
    public UILabel m_DropItemName2;
    public UILabel m_DropItemName3;
    public UILabel m_TiaoZhanCount;
    public GameObject ItemParent;
    public CangJingGeItem[] m_CangJingGeItem;
    private static CangJingGeWindow m_Instance = null;
    private Transform[] m_CangJingGeItemTransform;        //效率优化，缓存藏经阁扫荡图示道具的Transform
    private Vector3[] m_CangJingGeItemLocalPosition;        //缓存藏经阁扫荡图示道具的默认坐标

    private int m_NewPlayerGuide_Step = -1;
    public GameObject m_BtnTiaoZhan;
    public GameObject m_BtnSaoDang;
    public GameObject m_BtnHanRen;
    public GameObject m_BtnRank;
    public GameObject m_BtnAutoTeam;
    public UILabel m_BtnAutoTeamLabel;

    //缓存的奖励ID，注意，以后可以拖动选择关卡的时候，这个数据要改变。
    private int m_nDropItemID1 = -1;
    private int m_nDropItemID2 = -1;
    private int m_nDropItemID3 = -1;
    //玩家指针在哪层显示
    private int m_nTierOnPlayer = 0;

    public TabController m_TabNum;          // 副本人数Tab   单人、多人
    public GameObject m_BtnDanRen;
    public GameObject m_BtnDuiWu;
    public GameDefine_Globe.CopyScene_PlayType CopyScenePlayerMode
    {
        get;
        private set;
    }

    public GameObject m_CangJingGeExtraRewardPanel;
    public GameObject m_CangJingGeExtraRewardItemGrid;
    public GameObject m_CangJingGeExtraRewardItem;
	public GameObject m_HuodongRedPoint_Button;
	public GameObject m_HuodongRedPoint_SingleTab;
	public GameObject m_HuodongRedPoint_TeamTab;
    GameObject m_SaoDangLabel;

    public static CangJingGeWindow Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
        CopyScenePlayerMode = GameDefine_Globe.CopyScene_PlayType.SINGLE;
        //效率优化，缓存藏经阁扫荡图示道具的Transform
        m_CangJingGeItemTransform = new Transform[m_CangJingGeItem.Length];
        for (int ii = 0; ii < m_CangJingGeItem.Length; ++ii)
        {
            m_CangJingGeItemTransform[ii] = m_CangJingGeItem[ii].gameObject.transform;
        }

        //缓存藏经阁扫荡图示道具的默认坐标
        m_CangJingGeItemLocalPosition = new Vector3[m_CangJingGeItem.Length];
        for (int ii = 0; ii < m_CangJingGeItem.Length; ++ii)
        {
            m_CangJingGeItemLocalPosition[ii] = m_CangJingGeItem[ii].gameObject.transform.localPosition;
        }
        m_SaoDangLabel = m_BtnSaoDang.transform.FindChild("Label").gameObject;
    }

    // Use this for initialization
    void OnEnable()
    {
        m_Instance = this;
        m_TabNum.delTabChanged = OnNumTabChange;
        ResetCangJingGeItemXPosition(GetTier());
        UpdateInfo();
        m_TabNum.ChangeTab("DanRen");
		Messenger.AddListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
    }

    void OnDisable()
    {
        m_Instance = null;
		Messenger.RemoveListener(MessengerConst.OnUpdateCangjinggeAward, OnUpdateCangjinggeAward);
    }

    // Update is called once per frame
    void Update()
    {
        UpdateSweep();
        if (GameDefine_Globe.CopyScene_PlayType.MULTIPLE == CopyScenePlayerMode)
        {
            UpdateButtonAutoTeamLabel();
        }
    }

    public void UpdateTierShow(int nCount)
    {
        if (m_nTierOnPlayer >= nCount)
        {
            //当前扫荡层>=玩家挑战层，则停止扫荡并重置扫荡相关数据
            if (GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
            {
                Singleton<ObjManager>.Instance.MainPlayer.InitCangJingGeInfo();
            }
            m_nTierOnPlayer = nCount;
        }
        ResetCangJingGeItemXPosition(m_nTierOnPlayer);
        int iIndexWithMinXPosition = GetCangJingGeItemIndexWithMinXPosition();
        for (int i = 0; i < m_CangJingGeItem.Length; i++)
        {
            iIndexWithMinXPosition %= m_CangJingGeItem.Length;
            int nRealTie = m_nTierOnPlayer + i;

            //show lock
            if (nRealTie > nCount)
            {
                //m_CangJingGeItem[iIndexWithMinXPosition].Lock(true);
                m_CangJingGeItem[iIndexWithMinXPosition].LightUp(false);
            }
			else if(nRealTie == nCount)
			{
				m_CangJingGeItem[iIndexWithMinXPosition].LightUp(true);
			}
            else
            {
				if (nRealTie == m_nTierOnPlayer)
				{
					m_CangJingGeItem[iIndexWithMinXPosition].Sweeping();
				}
				else
				{
					m_CangJingGeItem[iIndexWithMinXPosition].LightUp(true);
				}
            }
            //show tier name
            m_CangJingGeItem[iIndexWithMinXPosition].SetLayer(nRealTie);
            ++iIndexWithMinXPosition;
        }
    }

    private int GetTier()
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
        {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER);
        }
        else if (GameDefine_Globe.CopyScene_PlayType.MULTIPLE == CopyScenePlayerMode)
        {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_MULTIPLECANGJINGGE_TIER);
        }
        else
        {
            return 0;
        }
    }

    public void UpdateInfo()
    {
        int _Tier = GetTier();
        if (GameDefine_Globe.MAX_COPYSCENE_CJGTIER < _Tier)
        {
            _Tier = GameDefine_Globe.MAX_COPYSCENE_CJGTIER;
        }
        
        int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);

        if (GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
        {
            m_SweepYanbao.text = "0";
            if (GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_SWEEP) >= GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId))
            {
                m_SweepYanbao.text = "10";//StrDictionary.GetClientDictionaryString("#{2100}", 10);
            }

            int _Sweep = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_SWEEP);

            //m_Sweep.text = StrDictionary.GetClientDictionaryString("#{2088}", (nMul * 3 - _Sweep).ToString() + "/" + (nMul * 3).ToString()) + strVipSweep;
            if (_Sweep >= nMul)
            {
                int nCurMul = nMul * 3 - _Sweep;
                if (nCurMul < 0) nCurMul = 0;
                m_Sweep.text = (nCurMul).ToString() + "/" + (nMul * 3 - nMul).ToString();
                //m_ObjectSweepCost.SetActive(true);
                m_ObjectSweepFree.SetActive(false);
            }
            else
            {
				int nCurMul = nMul - _Sweep;
				if (nCurMul < 0) nCurMul = 0;
				m_Sweep.text = (nCurMul).ToString() + "/" + nMul.ToString();
                //m_ObjectSweepCost.SetActive(false);
                m_ObjectSweepFree.SetActive(true);
            }
        }
        else
        {
            m_ObjectSweepCost.SetActive(false);
            m_ObjectSweepFree.SetActive(false);
        }

        m_Tier.text = StrDictionary.GetClientDictionaryString("#{10631}", _Tier);

        m_DropIconSprite1.spriteName = "";
        m_DropIconSprite2.spriteName = "";
        m_DropIconSprite3.spriteName = "";
        m_DropItemName1.text = "";
        m_DropItemName2.text = "";
        m_DropItemName3.text = "";
        m_nDropItemID1 = -1;
        m_nDropItemID2 = -1;
        m_nDropItemID3 = -1;
        Tab_CangJingGeInfo pCangJingGeInfo = TableManager.GetCangJingGeInfoByID(_Tier, 0);
        if (pCangJingGeInfo == null)
        {
            return;
        }
		string strColor = "";
		int nZhanli = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.CombatValue;
		if(pCangJingGeInfo.Calculat > nZhanli )
		{
			strColor = "[ff0006]";
		}
		m_CalculatValue.text = strColor + pCangJingGeInfo.Calculat.ToString();

        Tab_CommonItem pItem = TableManager.GetCommonItemByID(pCangJingGeInfo.GetDropbyIndex(0), 0);
        if (pItem != null)
        {
            m_DropIconSprite1.spriteName = pItem.Icon.ToString();
            m_DropIconSprite1.transform.parent.FindChild("BG").GetComponent<UISprite>().spriteName = GlobeVar.QualityColorGrid[pItem.Quality - 1];
            m_DropItemName1.text = pItem.Name;
            m_DropItemName1.gameObject.SetActive(false);
            m_nDropItemID1 = pItem.Id;
        }

        pItem = TableManager.GetCommonItemByID(pCangJingGeInfo.GetDropbyIndex(1), 0);
        if (pItem != null)
        {
            m_DropIconSprite2.spriteName = pItem.Icon.ToString();
            m_DropIconSprite2.transform.parent.FindChild("BG").GetComponent<UISprite>().spriteName = GlobeVar.QualityColorGrid[pItem.Quality - 1];
            m_DropItemName2.text = pItem.Name;
            m_DropItemName2.gameObject.SetActive(false);
            m_nDropItemID2 = pItem.Id;
        }

        pItem = TableManager.GetCommonItemByID(pCangJingGeInfo.GetDropbyIndex(2), 0);
        if (pItem != null)
        {
            m_DropIconSprite3.spriteName = pItem.Icon.ToString();
            m_DropIconSprite3.transform.parent.FindChild("BG").GetComponent<UISprite>().spriteName = GlobeVar.QualityColorGrid[pItem.Quality - 1];
            m_DropItemName3.text = pItem.Name;
            m_DropItemName3.gameObject.SetActive(false);
            m_nDropItemID3 = pItem.Id;
            m_DropIconSprite3.transform.parent.gameObject.SetActive(true);
        }
        else
        {
            m_DropIconSprite3.transform.parent.gameObject.SetActive(false);

        }

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
        //藏经阁 不分组队难度,所以取0下标
		Tab_CopySceneRule pCopySceneRule;
		if (GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(0), 0);
		}
		else
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(0), 0);
		}
        
        if (pCopySceneRule == null)
        {
            return;
        }
        int ExtraNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneExtraNumber(CopySceneId, (int)CopyScenePlayerMode);
        int nTabNum = pCopySceneRule.Number;
        int nNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumber(CopySceneId, (int)CopyScenePlayerMode);
		int nTotalNum = nTabNum * nMul + ExtraNum;
		int nCurNum = nTotalNum - nNum;
        if (nCurNum < 0) nCurNum = 0;
		m_TiaoZhanCount.text = (nCurNum).ToString() + "/" + nTotalNum.ToString();
    }

    /// <summary>
    /// 开启扫荡后，关闭界面后再次打开，初始化扫荡相关数据；
    /// 注意：不要多次调用！！！
    /// </summary>
    private void InitSweepCangJingGeItem()
    {
        if (GameManager.gameManager.PlayerDataPool.StartSweep && GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
        {
            m_nTierOnPlayer = GameManager.gameManager.PlayerDataPool.CangJIngGeTier + (int)(Time.realtimeSinceStartup - GameManager.gameManager.PlayerDataPool.CangJIngGeSecond);
            GameManager.gameManager.PlayerDataPool.CangJIngGeSecond = Time.realtimeSinceStartup;
        }
        else
        {
            m_nTierOnPlayer = GetTier();
        }
        UpdateTierShow(GetTier());
    }

    public void OnOpenCopyScene(int nSceneId)
    {
        CopySceneId = nSceneId;
    }

    public void OnOpenCopySceneClick()
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuidLogic.CloseWindow();
            m_NewPlayerGuide_Step = -1;
        }
        if (Singleton<ObjManager>.GetInstance() == null)
        {
            return;
        }
        if (Singleton<ObjManager>.Instance.MainPlayer.IsInJianYu())
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }
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
        //藏经阁 不分组队难度,所以取0下标
		Tab_CopySceneRule pCopySceneRule;
		if(CopyScenePlayerMode == GameDefine_Globe.CopyScene_PlayType.SINGLE)
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(0), 0);
		}
		else
		{
			pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(0), 0);
		}
        if (pCopySceneRule == null)
        {
            return;
        }
        //是否超过上限次数
        int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);
        int ExtraNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneExtraNumber(CopySceneId, (int)CopyScenePlayerMode);
        if (pCopySceneRule.Number * nMul + ExtraNum <= GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumber(CopySceneId, (int)CopyScenePlayerMode))
        {
			Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1333}");
//            int nReset = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneReset(CopySceneId, 1);
//            if (nReset >= 10)   //重置10次以上,不让重置
//            {
//                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2631}");
//                return;
//            }
//            int nYuanBao = 10 * (int)System.Math.Pow(2, nReset);
//            string dicStr = StrDictionary.GetClientDictionaryString("#{2632}", nYuanBao);
//            MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnCopySceneResetOK, OnCopySceneResetNO);
            return;
        }
        Singleton<ObjManager>.GetInstance().MainPlayer.SendOpenScene(CopySceneId, (int)CopyScenePlayerMode, GetTier());
    }

    public void OnCopySceneResetOK()
    {
        CG_COPYSCENERESET packet = (CG_COPYSCENERESET)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COPYSCENERESET);
        packet.NSceneClassID = CopySceneId;
        packet.Type = (int)CopyScenePlayerMode;
        packet.SendPacket();
    }

    public void OnCopySceneResetNO()
    {
    }

    public void OnSweepClick()
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE != CopyScenePlayerMode)
        {
            return;
        }
        if (Singleton<ObjManager>.Instance.MainPlayer.IsInJianYu())
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }
        int _Sweep = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_SWEEP);
        int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);
        if (_Sweep >= nMul * 3)  //超上限了
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2084}");
            return;
        }
        if (_Sweep >= nMul)
        {
            //string dicStr = "扣除10元宝确定么?";
            string dicStr = StrDictionary.GetClientDictionaryString("#{2790}");
            MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnSweepOK, OnSweepNO);
            return;
        }

        OnSweepOK();
    }

    public void OnSweepOK()
    {
        CG_ASK_COPYSCENE_SWEEP packet = (CG_ASK_COPYSCENE_SWEEP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COPYSCENE_SWEEP);
        packet.SceneID = CopySceneId;
        packet.SendPacket();
    }

    public void OnSweepNO()
    {
    }

    public void OnDropItemClicked(GameObject obj)
    {
        int nShowID = -1;
        if (obj.name == "DropItem1")
            nShowID = m_nDropItemID1;
        else if (obj.name == "DropItem2")
            nShowID = m_nDropItemID2;
        else if (obj.name == "DropItem3")
            nShowID = m_nDropItemID3;
        else
            return;

        GameItem item = new GameItem();
        item.DataID = nShowID;
        if (item.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
        }
    }

    public void OnRankClick()
    {
        RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE);
    }

    private float m_fSweepBuffer = Time.realtimeSinceStartup;
    public void StartSweep()
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE != CopyScenePlayerMode) return;

        if (Singleton<ObjManager>.GetInstance() == null)
        {
            return;
        }
        GameManager.gameManager.PlayerDataPool.StartSweep = true;
        GameManager.gameManager.PlayerDataPool.CangJIngGeSecond = Time.realtimeSinceStartup;
        m_fSweepBuffer = Time.realtimeSinceStartup;
        int _Tier = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER);

        for (int i = 0; i < m_CangJingGeItem.Length; i++)
        {
            m_CangJingGeItemTransform[i].localPosition = m_CangJingGeItemLocalPosition[i];
            m_CangJingGeItem[i].SetLayer(i + 1);
            if (m_CangJingGeItem[i].m_nTier > _Tier)
            {
                //m_CangJingGeItem[i].Lock(true);
                m_CangJingGeItem[i].LightUp(false);
            }
            else
            {
                //m_CangJingGeItem[i].Lock(false);
                m_CangJingGeItem[i].LightUp(true);
            }
        }
        //m_CangJingGeItem[0].LightUp(true);
    }

    private const int SWEEP_MOVE_SPEED = 80;        //扫荡图示道具CangJingGeItem移动速度
    private const int SWEEP_MIN_X_POSITION = -275;        //扫荡图示道具CangJingGeItem最小X坐标
    private const int SWEEP_X_INTERVAL = 600;        //扫荡图示道具CangJingGeItem总移动区间
    private const int SWEEP_X_DISTANCE = 100;        //扫荡图示道具CangJingGeItem间距
    public void UpdateSweep()
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE != CopyScenePlayerMode)
        {
            m_SweepCDTime.text = "";
            m_SaoDangLabel.SetActive(false);
            return;
        }

        //刷新CD时间
        string str = "";
        int CDTime = GameManager.gameManager.PlayerDataPool.CJGSweepCDTime;
        int _Sweep = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_SWEEP);
        int nMul = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneMultiple(CopySceneId);
        if (CDTime <= 0 || _Sweep >= nMul * 3)
        {
            str = "";
            m_SweepCDTime.text = "";
            m_SaoDangLabel.SetActive(true);
        }
        else
        {
            //if (CDTime / 60 > 0)
            {
                str = (CDTime / 60).ToString() + ":";
            }
            str += (CDTime % 60).ToString();
            m_SweepCDTime.text = StrDictionary.GetClientDictionaryString("#{2552}", str);
            m_SaoDangLabel.SetActive(false);
        }
        if (GameManager.gameManager.PlayerDataPool.StartSweep)
        {
            if (Time.realtimeSinceStartup - m_fSweepBuffer < 1)
            {
                return;
            }

            int _Tier = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER);
            float deltaTime = Time.deltaTime;
            for (int i = 0; i < m_CangJingGeItem.Length; i++)
            {
				//第一个开始扫荡
                if (1 == m_CangJingGeItem[i].m_nTier)
                {
					m_CangJingGeItem[i].Sweeping();
                }

                Vector3 pos = m_CangJingGeItemTransform[i].localPosition;
                pos.x -= SWEEP_MOVE_SPEED * deltaTime;
                if (pos.x < SWEEP_MIN_X_POSITION)
                {
					// 下一层进入扫荡
					GameManager.gameManager.PlayerDataPool.CangJIngGeTier = m_CangJingGeItem[i].m_nTier + 1;
					if (GameManager.gameManager.PlayerDataPool.CangJIngGeTier >= _Tier)
					{
						GameManager.gameManager.PlayerDataPool.StartSweep = false;
					}
					else
					{
						int nIndex = i + 1;
						if(nIndex >= m_CangJingGeItem.Length)
						{
							nIndex = 0;
						}
						m_CangJingGeItem[nIndex].Sweeping();
					}

					// 当前的挪到最后一个
                    pos.x += SWEEP_X_INTERVAL;
					m_CangJingGeItem[i].AddLayer(6);
					if (m_CangJingGeItem[i].m_nTier > _Tier)
					{
						//m_CangJingGeItem[i].Lock(true);
						m_CangJingGeItem[i].LightUp(false);
					}
					else
					{
						//m_CangJingGeItem[i].Lock(false);
						m_CangJingGeItem[i].LightUp(true);
					}
                }
				else if(pos.x<-230)
                {
                    //开启扫荡后一直没关闭界面
                    if (m_CangJingGeItem[i].m_nTier == GameManager.gameManager.PlayerDataPool.CangJIngGeTier)
                    {
						//m_CangJingGeItem[i].LightUp(true);

                        //m_CangJingGeItem[i].LightUp(true);
//						if(GameManager.gameManager.PlayerDataPool.CangJIngGeTier >= _Tier)
//						{
//							m_CangJingGeItem[i].LightUp(true);
//						}
//						else
//						{
//							m_CangJingGeItem[i].Sweeping();
//						}
                    }
                    //开启扫荡后，关闭界面后再次打开。
                    //由于关闭界面时PlayerDataPool.CangJIngGeTier不会增加，所以需要比较m_nTierOnPlayer
                    else if (m_CangJingGeItem[i].m_nTier > GameManager.gameManager.PlayerDataPool.CangJIngGeTier)
                    {
                        if (m_CangJingGeItem[i].m_nTier == m_nTierOnPlayer)
                        {
                            //m_CangJingGeItem[i].LightUp(true);
//							if(GameManager.gameManager.PlayerDataPool.CangJIngGeTier >= _Tier)
//							{
//								m_CangJingGeItem[i].LightUp(true);
//							}
//							else
//							{
//								m_CangJingGeItem[i].Sweeping();
//							}
                        }
//                        else
//                        {
//                            m_CangJingGeItem[i].LightUp(false);
//                        }
                    }
                    //应该不会出现这种情况
                    else
                    {
//                        m_CangJingGeItem[i].LightUp(false);
                    }
                }
                
                m_CangJingGeItemTransform[i].localPosition = pos;
            }
            if (!GameManager.gameManager.PlayerDataPool.StartSweep)
            {
                GameManager.gameManager.PlayerDataPool.CangJIngGeTier = 0;
            }
            GameManager.gameManager.PlayerDataPool.CangJIngGeSecond = Time.realtimeSinceStartup;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        if (nIndex == 1)
        {
            NewPlayerGuidLogic.OpenWindow(m_BtnTiaoZhan, 200, 80, "", "right", 0, true, true);
        }
    }

    private void UpdateButton()
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE == CopyScenePlayerMode)
        {
            m_BtnTiaoZhan.SetActive(true);
            m_BtnSaoDang.SetActive(true);
            m_BtnHanRen.SetActive(false);
            m_BtnRank.SetActive(true);
            m_BtnAutoTeam.SetActive(false);
        }
        else if (GameDefine_Globe.CopyScene_PlayType.MULTIPLE == CopyScenePlayerMode)
        {
            m_BtnTiaoZhan.SetActive(true);
            m_BtnSaoDang.SetActive(false);
            m_BtnHanRen.SetActive(true);
            m_BtnRank.SetActive(true);
            m_BtnAutoTeam.SetActive(true);
        }
        else
        {
            m_BtnTiaoZhan.SetActive(false);
            m_BtnSaoDang.SetActive(false);
            m_BtnHanRen.SetActive(false);
            m_BtnRank.SetActive(false);
            m_BtnAutoTeam.SetActive(false);
        }
    }

    private void OnNumTabChange(TabButton button)
    {
        if (button.name == "DanRen")
        {
            CopyScenePlayerMode = GameDefine_Globe.CopyScene_PlayType.SINGLE;
        }
        else if (button.name == "DuiWu")
        {
            CopyScenePlayerMode = GameDefine_Globe.CopyScene_PlayType.MULTIPLE;
            UpdateButtonAutoTeamLabel();
        }
        UpdateInfo();
        UpdateButton();
        InitSweepCangJingGeItem();
		HuodongRedPoint();
    }

    private float OnHanRentimeSend = 0;
    public void OnHanRenClick()
    {
        if (Time.realtimeSinceStartup - OnHanRentimeSend < 30)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2163}");
            return;
        }
        OnHanRentimeSend = Time.realtimeSinceStartup;
        if (GameDefine_Globe.CopyScene_PlayType.MULTIPLE != CopyScenePlayerMode)
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

        string text = StrDictionary.GetClientDictionaryString("#{11184}");
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            CG_CHAT packet = (CG_CHAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHAT);
            packet.Chattype = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_WORLD;
            packet.Chatinfo = text;
            packet.Linktype = (int)GC_CHAT.LINKTYPE.LINK_TYPE_COPYTEAM;
            packet.AddIntdata(CopySceneId);
            packet.AddIntdata(1);
            packet.SendPacket();
        }     
    }

    public void OnTeamClick()
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
            packet.SetDifficulty(1);
            packet.SendPacket();
        }
    }

    public void UpdateButtonAutoTeamLabel()
    {
        string text = StrDictionary.GetClientDictionaryString("#{2956}");
        if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            text = StrDictionary.GetClientDictionaryString("#{2957}");
        }
        m_BtnAutoTeamLabel.text = text;
    }

    public void OnExtraRewardClick()
    {
        m_CangJingGeExtraRewardPanel.SetActive(true);
        InitCangJingGeExtraRewardPanel(CopyScenePlayerMode);
    }

    public void UpdateCangJingGeExtraRewardPanel()
    {
        if (m_CangJingGeExtraRewardPanel.activeSelf)
        {
            InitCangJingGeExtraRewardPanel(CopyScenePlayerMode);
        }
    }

    private void InitCangJingGeExtraRewardPanel(GameDefine_Globe.CopyScene_PlayType nPlayerMode)
    {
        if (null == m_CangJingGeExtraRewardItem)
        {
            return;
        }
        Utils.CleanGrid(m_CangJingGeExtraRewardItemGrid);
        foreach (KeyValuePair<int, List<Tab_CangJingGeExtraReward>> pair in TableManager.GetCangJingGeExtraReward())
        {
            Tab_CangJingGeExtraReward tabExtraReward = pair.Value[0];
            if (null != tabExtraReward && (int)nPlayerMode == tabExtraReward.CopySceneType)
            {
                if (GetReceiveCangJingGeExtraRewardTier(nPlayerMode) < tabExtraReward.TierLimit)
                {
                    GameObject extraRewardItem = Utils.BindObjToParent(m_CangJingGeExtraRewardItem, m_CangJingGeExtraRewardItemGrid, tabExtraReward.Id.ToString());
                    if (null != extraRewardItem)
                    {
                        CangJingGeExtraRewardItem extraRewardItemLogic = extraRewardItem.GetComponent<CangJingGeExtraRewardItem>();
                        if (null != extraRewardItemLogic)
                        {
                            extraRewardItemLogic.InitInfo(tabExtraReward.Id);
                        }
                    }
                }
            }
        }
        m_CangJingGeExtraRewardItemGrid.GetComponent<UIGrid>().Reposition();
        m_CangJingGeExtraRewardItemGrid.GetComponent<UITopGrid>().recenterTopNow = true;
    }

    private int GetReceiveCangJingGeExtraRewardTier(GameDefine_Globe.CopyScene_PlayType nPlayerMode)
    {
        if (GameDefine_Globe.CopyScene_PlayType.SINGLE == nPlayerMode)
        {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_CANGJINGGE_EXTRAREWARD_TIER);
        }
        else if (GameDefine_Globe.CopyScene_PlayType.MULTIPLE == nPlayerMode)
        {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_MULTIPLECANGJINGGE_EXTRAREWARD_TIER);
        }
        else
        {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_CANGJINGGE_EXTRAREWARD_TIER);
        }
    }

    private void OnExitExtraRewardClick()
    {
        Utils.CleanGrid(m_CangJingGeExtraRewardItemGrid);
        m_CangJingGeExtraRewardPanel.SetActive(false);
    }

    /// <summary>
    /// 获取X坐标最小的CangJingGeItem对应的数组下标
    /// </summary>
    /// <returns>数组下标</returns>
    private int GetCangJingGeItemIndexWithMinXPosition()
    {
        int index = 0;
        Transform item = m_CangJingGeItemTransform[0];
        for (int ii = 1; ii < m_CangJingGeItem.Length; ++ii)
        {
            if (m_CangJingGeItemTransform[ii].localPosition.x < item.localPosition.x)
            {
                index = ii;
                item = m_CangJingGeItemTransform[ii];
            }
        }
        return index;
    }

    /// <summary>
    /// 根据参数数重置Grid中全部CangJingGeItem的X坐标
    /// 用于适配奇偶层数
    /// </summary>
    /// <param name="iTier">藏经阁层数</param>
    private void ResetCangJingGeItemXPosition(int iTier)
    {
        for (int ii = 0; ii < m_CangJingGeItem.Length; ++ii)
        {
            m_CangJingGeItemTransform[ii].localPosition = m_CangJingGeItemLocalPosition[ii];
        }

        if (0 < iTier && (0 == iTier % 2))
        {
            Vector3 pos0 = m_CangJingGeItemTransform[0].localPosition;
            pos0.x += SWEEP_X_INTERVAL;
            pos0.x -= SWEEP_X_DISTANCE;
            m_CangJingGeItemTransform[0].localPosition = pos0;
            for (int ii = 1; ii < m_CangJingGeItem.Length; ++ii)
            {
                Vector3 pos = m_CangJingGeItemTransform[ii].localPosition;
                pos.x -= SWEEP_X_DISTANCE;
                m_CangJingGeItemTransform[ii].localPosition = pos;
            }
        }
    }

	void HuodongRedPoint()
	{
		bool bHaveUngotAwardCJG = GameManager.gameManager.PlayerDataPool.CommonData.IsHaveCanGotRewardCangjingge((int)CopyScenePlayerMode);
		if( bHaveUngotAwardCJG )
		{
			m_HuodongRedPoint_Button.SetActive(true);
		}
		else
		{
			m_HuodongRedPoint_Button.SetActive(false);
		}

		bool bHaveUngotAwardCJGSingle = GameManager.gameManager.PlayerDataPool.CommonData.IsHaveCanGotRewardCangjingge(1);
		bool bHaveUngotAwardCJGTeam = GameManager.gameManager.PlayerDataPool.CommonData.IsHaveCanGotRewardCangjingge(2);		
		if( bHaveUngotAwardCJGSingle )
		{
			m_HuodongRedPoint_SingleTab.SetActive(true);
		}
		else
		{
			m_HuodongRedPoint_SingleTab.SetActive(false);
		}
		
		if( bHaveUngotAwardCJGTeam )
		{
			m_HuodongRedPoint_TeamTab.SetActive(true);
		}
		else
		{
			m_HuodongRedPoint_TeamTab.SetActive(false);
		}
	}
	
	void OnUpdateCangjinggeAward()
	{
		HuodongRedPoint();
	}
}