using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;
using Games.GlobeDefine;
public class WorldBossWindow : UIControllerBase<WorldBossWindow>
{
    public GameObject MemberListGrid;
    public GameObject PrePageButton;
    public GameObject NextPageButton;
    public UILabel PageTip;
    public GameObject TelePort;

    public GameObject m_WorldBossBonusWin;

    private List<HuaShanPVPData.WorldBossTeamInfo> m_curDataList = new List<HuaShanPVPData.WorldBossTeamInfo>();

    void Awake()
    {
        m_curDataList.Clear();
        UIControllerBase<WorldBossWindow>.SetInstance(this);
        HuaShanPVPData.WorldBossCurPage = 1;
    }

    void OnDestroy()
    {
        UIControllerBase<WorldBossWindow>.SetInstance(null);
    }

	// Use this for initialization
	void Start () 
	{
		InvokeRepeating ("AutoRefresh", 1.0f, 10.0f);
	}

    void OnEnable()
    {
        HuaShanPVPData.delegateShowWorldBossList += ShowWorldBossMemberList;
    }

    void OnDisable()
    {
        HuaShanPVPData.delegateShowWorldBossList -= ShowWorldBossMemberList;
    }

	void AutoRefresh()
	{
		ReqWorldBossTeamList();
	}

    void OnCloseClick()
    {
        SetInstance(null);
        UIManager.CloseUI(UIInfo.WorldBossWindowRoot);
    }
#region 暂时不用

    void PrePage()
    {
        if (HuaShanPVPData.WorldBossCurPage > 1)
        {
            HuaShanPVPData.WorldBossCurPage -= 1;
            ReqWorldBossTeamList();
        }
    }

    void NextPage()
    {
        if (HuaShanPVPData.WorldBossCurPage < HuaShanPVPData.WorldBossTotalPage)
        {
            HuaShanPVPData.WorldBossCurPage += 1;
            ReqWorldBossTeamList();
        }
    }

    void ReqWorldBossTeamList()
    {
        CG_WORLDBOSS_TEAMLIST_REQ packet = (CG_WORLDBOSS_TEAMLIST_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WORLDBOSS_TEAMLIST_REQ);
        packet.Page = HuaShanPVPData.WorldBossCurPage;
        packet.SendPacket();
    }
#endregion

    public void OnTeletPortClick()
    {
        Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameDefine_Globe.WORLDBOSS_SCENE_ID, 0);
        if (null == tabSceneClass)
        {
            return;
        }
        SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.WORLDMAP, 0, GameDefine_Globe.WORLDBOSS_SCENE_ID, 0);
        //UIManager.CloseUI(UIInfo.Activity);
        OnCloseClick();
    }

    public void OnOpItemClick(WorldBossListItem item)
    {
        //... 发出挑战
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (item.GetData().id > 0 && Singleton<ObjManager>.GetInstance().MainPlayer.IsTeamLeader())
            {
                CG_WORLDBOSS_CHALLENGE packet = (CG_WORLDBOSS_CHALLENGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WORLDBOSS_CHALLENGE);
                packet.TeamId = item.GetData().id;
                packet.SendPacket();
            }
        }
    }

    void ShowWorldBossMemberList()
    {
        if (HuaShanPVPData.WorldBossCurPage >= HuaShanPVPData.WorldBossTotalPage)
            NextPageButton.SetActive(false);
        else
            NextPageButton.SetActive(true);

        if (HuaShanPVPData.WorldBossCurPage <= 1)
            PrePageButton.SetActive(false);
        else
            PrePageButton.SetActive(true);

        UIManager.LoadItem(UIInfo.WorldBossListItem, OnLoadWorlBossItem);
    }
	private ArrayList m_WbArr;
    void OnLoadWorlBossItem(GameObject resItem, object param)
    {
        if (resItem == null || MemberListGrid == null)
        {
            return;
        }
		m_WbArr = new ArrayList ();
        Utils.CleanGrid(MemberListGrid);
        foreach (HuaShanPVPData.WorldBossTeamInfo wbInfo in HuaShanPVPData.WorldBossList)
        {
			m_WbArr.Insert(wbInfo.pos-1, wbInfo);
           // WorldBossListItem.CreateItem(MemberListGrid, resItem, wbInfo.id.ToString(), this, wbInfo);
        }
		HuaShanPVPData.WorldBossTeamInfo objWbInfo;
		string posName;
		for (int i=0; i<m_WbArr.Count; ++i) 
		{
			objWbInfo = (HuaShanPVPData.WorldBossTeamInfo)(m_WbArr[i]);
			if(objWbInfo.pos < 10)
				posName = string.Format("0{0}", objWbInfo.pos);
			else
				posName = objWbInfo.pos.ToString();
			WorldBossListItem.CreateItem (MemberListGrid, resItem, posName, this, objWbInfo);
		}
        PageTip.text = HuaShanPVPData.WorldBossCurPage.ToString() + "/" + HuaShanPVPData.WorldBossTotalPage.ToString();
        if (MemberListGrid.GetComponent<UIGrid>() != null )
        {
            MemberListGrid.GetComponent<UIGrid>().repositionNow = true;
        }
        if (MemberListGrid.GetComponent<UITopGrid>() != null)
        {
            MemberListGrid.GetComponent<UITopGrid>().Recenter(true);
        }
    }

    void OnCloseWorldBossBonusInfo(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnOpenWorldBossBonusInfo()
    {
        NGUITools.SetActive(m_WorldBossBonusWin, true);
    }
}