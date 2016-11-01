using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
public class PVPFindOpWindow : MonoBehaviour {

    //public GameObject CurOpInfo;

   // public UILabel LabelSuccessSpirit;        // 成功获得真气值
   // public UILabel LabelFailGetSpirit;           // 失败获得真气值

    public GameObject m_PVPFindList;          //对手的实际Item

    public UILabel LableShowFindTip;
    public GameObject FindTips;

    public GameObject m_OpListGrid;
   // public TabController m_PvPWindowTableController;

    private PVPData.OpponentInfo m_curData;
    private PVPOpListItem m_curSelectItem = null;

   // public GameObject m_FightButton;


    void OnEnable()
    {
        m_TimeLable.gameObject.SetActive(false);

        _clear();
		m_curData.Clear ();
        PVPData.delUpdateOpponent += OnUpdateList;
        //MessageBoxLogic.OpenOKCancelBox(1183);
        CG_RANDOM_OPPONENT packet = (CG_RANDOM_OPPONENT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RANDOM_OPPONENT);
        packet.None = 0;
        packet.SendPacket();

        m_curSelectItem = null;
        LableShowFindTip.text = Utils.GetDicByID(1183);
	
    }

    void OnDisable()
    {
        m_OpListGrid.SetActive(true);
		m_ShowRule.SetActive(false);
		Utils.CleanGrid(m_OpListGrid);
        PVPData.delUpdateOpponent -= OnUpdateList;
    }
    
    void Update()
    {
      //  showHideBrushBtn();
    }
    void OnSKillLevelupClick( )
    {
//         if (null != m_PvPWindowTableController)
//             m_PvPWindowTableController.ChangeTab("Tab2");
        UIManager.ShowUI(UIInfo.SkillInfo);
    }

    void OnRefreshClick()
    {
        CG_RANDOM_OPPONENT packet = (CG_RANDOM_OPPONENT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RANDOM_OPPONENT);
        packet.None = 0;
        packet.SendPacket();
    }

    // 点击挑战按钮
    void OnFightClick()
    {
        if(!m_curData.IsValid())
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.IsInJianYu())
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }

        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN)
        {
            if (PVPData.NeedCostYuanBao > 0)
            {
                string str = StrDictionary.GetClientDictionaryString("#{2495}", PVPData.NeedCostYuanBao);
                MessageBoxLogic.OpenOKCancelBox(str, "", SendChallenge);
            }
            else
            {
                SendChallenge();
            }
        }

        // 新手指引
        if (ActivityController.Instance())
        {
            if (2 == ActivityController.Instance().NewPlayerGuide_Step)
            {
                ActivityController.Instance().NewPlayerGuide_Step = -1;
                NewPlayerGuidLogic.CloseWindow();
            }
        }
    }

    void SendChallenge( )
    {
        if (PVPData.NeedCostYuanBao > 0)
        {
            int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();
            nPlayerYuanBao += GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
            if (nPlayerYuanBao < PVPData.NeedCostYuanBao)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2633}");
                return;
            }
        }
        CG_REQ_CHALLENGE packet = (CG_REQ_CHALLENGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_CHALLENGE);

        packet.SetOpponentGuid(m_curData.guid);
        packet.SendPacket();
    }

  



	public void OnOpItemClick(PVPOpListItem item)
	{
        if (null != m_curSelectItem)
        {
            m_curSelectItem.EnableHighlight(false);
        }
        m_curSelectItem = item;
        m_curSelectItem.EnableHighlight(true);
		//UpdateCurOpInfo(item.GetData());
	}

	void UpdateCurOpInfo(PVPData.OpponentInfo data)
	{
        m_curData = data;
      //  LabelSuccessSpirit.text = m_curData.winSpirit.ToString();
       // LabelFailGetSpirit.text = m_curData.loseSpirit.ToString();
	}

    void OnUpdateList()
    {
        if (null == m_PVPFindList)
            return;

        FindTips.SetActive(false);
        Utils.CleanGrid(m_OpListGrid);
        m_curSelectItem = null;
        foreach (ulong opInfoKey in PVPData.OpponentMap.Keys)
        {
            PVPOpListItem item = PVPOpListItem.CreateItem(m_OpListGrid, m_PVPFindList, opInfoKey.ToString(), this, PVPData.OpponentMap[opInfoKey]);
            if (null == m_curSelectItem)
            {
                OnOpItemClick(item);
            }
        }

        m_OpListGrid.GetComponent<UIGrid>().Reposition();
        m_OpListGrid.GetComponent<UITopGrid>().Recenter(true);

		// 新手指引
		if (ActivityController.Instance())
		{
			if (35 == ActivityController.Instance().NewPlayerGuide_Step)
			{
				if (PVPData.OpponentMap.Count > 0 && m_OpListGrid.transform.childCount > 0)
				{
					PVPOpListItem temPVPOpListItem =  m_OpListGrid.transform.GetChild(0).gameObject.GetComponent<PVPOpListItem>();
					if(temPVPOpListItem  )
					{
						temPVPOpListItem.NewGuildPvp();
					}
				}
				ActivityController.Instance().NewPlayerGuide_Step = -1;
			}
		}

       // CurOpInfo.SetActive(PVPData.OpponentMap.Count > 0);

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.ACT_JIANGHU_SUBSTATE = UIRootJoyControllerHelper.ActJianghuSubState.ACT_JIANGHU_PIPEI;
        UIRootJoyControllerHelper.Instance.ACT_SUBSTAT = UIRootJoyControllerHelper.ActivitySubState.ACT_UI_JIANGHU;
#endif
        // 新手指引
        /* if (ActivityController.Instance())
        {
            if (1 == ActivityController.Instance().NewPlayerGuide_Step)
            {
                if (PVPData.OpponentMap.Count > 0)
                {
                    NewPlayerGuidLogic.OpenWindow(m_FightButton, 200, 70, "", "left", 0, true, true);
                }
                ActivityController.Instance().NewPlayerGuide_Step = -1;
            }
        }
         * */
    }
    //===================================================
    // 名人堂
    public GameObject m_RandWindow ;
    public void OnClickRandWingOpen()
    {
        //UIManager.ShowUI(UIInfo.PvPShopRoot);
        if (m_RandWindow != null)
        {
           m_RandWindow.SetActive(true);
        }
    }
    // 挑战记录
    public GameObject m_RecordWindow;
    public void OnClickRecordWindow()
    {
        if (m_RecordWindow != null)
        {
            m_RecordWindow.SetActive(true);
        }
    }
    private void _clear()
    {
        m_RandWindow.SetActive(false);
        m_RecordWindow.SetActive(false);
    }
    public GameObject m_ShowRule;
    public void OnClickShowRule()
    {
        m_OpListGrid.SetActive(false);
        m_ShowRule.SetActive(true);
    }
    public void onClickHideRule()
    {
        m_OpListGrid.SetActive(true);
        m_ShowRule.SetActive(false);
    }
    public GameObject m_BrushBtn;
    public UILabel    m_TimeLable;
    public void onClickBrush()
    {
        CG_RANDOM_OPPONENT packet = (CG_RANDOM_OPPONENT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RANDOM_OPPONENT);
        packet.None = 0;
        packet.SendPacket();
    }
    //===============
    public void onClickPVP5()
    {
        GUIData.AddNotifyData("#{10830}");
    }
}
