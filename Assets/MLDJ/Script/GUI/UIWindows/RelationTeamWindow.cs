using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using GCGame.Table;
using System;
using Games.LogicObj;
using Games.FakeObject;
public class RelationTeamWindow : MonoBehaviour {

    private static RelationTeamWindow m_Instance = null;
    public static RelationTeamWindow Instance()
    {
        return m_Instance;
    }

    public GameObject m_TeamInfoGrid;
    public GameObject m_AroundPlayerGrid;
    public GameObject m_AroundTeamGrid;
    public TabController m_TabController;
    public UIImageButton m_CreateTeamButton;        //创建队伍按钮
    public UIImageButton m_GatherTeamButton;        //队伍召集按钮
    public UIImageButton m_TeamFollowButton;        //队伍跟随按钮
    public GameObject m_DismissTeamButton;
    public RelationButtionWindowLogic m_ButtonWindow;
    public UILabel m_AroundPlayerSumLabel;
    
    /*public GameObject m_TeamMemberSceneInfo;
    public UILabel m_TeamMemberSceneName;
    public UILabel m_TeamMemberSceneChannel;
    public UILabel m_TeamMemberScenePos;*/

	public UISprite[] m_TeamMemberSortSprite;
    public UISprite[] m_AroundPlayerSortSprite;
    public UISprite[] m_AroundTeamSortSprite;

    private PlayerListItemLogic m_SelectPlayerItem;

    public UIGrid m_TabGrid;

    public GameObject m_TeamMemberListItem;
    public GameObject m_AroundPlayerListItem;
    public GameObject m_AroundTeamListItem;

    public GameObject m_TeamMemberMenu;
    public UILabel m_TeamCombatLabel;
    public UILabel m_TeamMemberCountLabel;
    public UILabel m_TeamLeaderNameLabel;

    public GameObject m_TeamMemberModelViewTopLeft;
    public GameObject m_TeamMemberModelViewBottomRight;
    public ModelDragLogic m_TeamMemberModelDrag;

    private OtherFakeObject m_PlayerFakeObj;
    private GameObject m_FakeObjGameObject = null;

    public enum TeamTab
    {
        TeamTab_TeamInfo,
        TeamTab_NearPlayer,
        TeamTab_NearTeam,
    };

	void Awake () {
        m_TabController.delTabChanged = OnTabChanged;
	}

    void Start()
    {
        m_TeamInfoGrid.GetComponent<UIGrid>().Reposition();
        m_AroundPlayerGrid.GetComponent<UIGrid>().Reposition();
        m_AroundTeamGrid.GetComponent<UIGrid>().Reposition();
        for (int i = 0; i < m_TeamMemberSortSprite.Length; i++)
		{
			m_TeamMemberSortSprite[i].gameObject.SetActive(false);
		}
        for (int i = 0; i < m_AroundPlayerSortSprite.Length; i++)
        {
            m_AroundPlayerSortSprite[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < m_AroundTeamSortSprite.Length; i++)
        {
            m_AroundTeamSortSprite[i].gameObject.SetActive(false);
        }
    }

    void OnEnable()
    {
        m_Instance = this;
        //GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_TeamMemberModelViewTopLeft, m_TeamMemberModelViewBottomRight);
        //GameManager.gameManager.ActiveScene.ShowFakeObj();
        GUIData.delNearbyTeampUpdate += UpdateNearbyTeam;
        GUIData.delNearbyPlayerUpdate += UpdateNearbyPlayer;
        GUIData.delTeamDataUpdate += OnTeamInfoUpdate;
        SelectPlayerListItem(null);
        m_TabGrid.hideInactive = false;
        m_TabController.ChangeTab("0");
    }

    void OnDisable()
    {
        m_Instance = null;
        GameManager.gameManager.ActiveScene.HideFakeObj();
        GUIData.delNearbyTeampUpdate -= UpdateNearbyTeam;
        GUIData.delNearbyPlayerUpdate -= UpdateNearbyPlayer;
        GUIData.delTeamDataUpdate -= OnTeamInfoUpdate;
        SelectPlayerListItem(null);
        if (m_TeamMemberMenu.activeSelf)
        {
            if (m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>() != null)
            {
                m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>().CloseMenu();
            }
        }
        DestroyPartnerFakeObj();
    }

    public void ChangeTeamTab(TeamTab Tab)
    {
        if (m_TabController == null)
        {
            return;
        }
        switch (Tab)
        {
            case TeamTab.TeamTab_TeamInfo:
                {
                    m_TabController.ChangeTab("0");
                }
                break;
            case TeamTab.TeamTab_NearPlayer:
                {
                    m_TabController.ChangeTab("1");
                }
                break;
            case TeamTab.TeamTab_NearTeam:
                {
                    m_TabController.ChangeTab("2");
                }
                break;
           default:
                {
                    break;
                }
        }
    }

    void OnTabChanged(TabButton curButton)
    {
        for (int i = 0; i < m_TeamMemberSortSprite.Length; i++)
        {
            m_TeamMemberSortSprite[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < m_AroundPlayerSortSprite.Length; i++)
        {
            m_AroundPlayerSortSprite[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < m_AroundTeamSortSprite.Length; i++)
        {
            m_AroundTeamSortSprite[i].gameObject.SetActive(false);
        }
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Module.Log.LogModule.ErrorLog("OnTabChanged:: MainPlayer is null");
            return;
        }
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null == curTab)
        {
            Module.Log.LogModule.ErrorLog("OnTabChanged:: curTab is null");
            return;
        }

        if (curTab.name == "0")
        {
            UpdateTeamInfo(Singleton<ObjManager>.GetInstance().MainPlayer.GUID);
        }
        else if (curTab.name == "1")
        {
            DestroyPartnerFakeObj();
            Utils.CleanGrid(m_AroundPlayerGrid);
            SelectPlayerListItem(null);
            // 服务器如果发现周围没有玩家就不会回包，所以先清空人数
            m_AroundPlayerSumLabel.text = "0";
            ReqNearbyPlayer();
        }
        else if (curTab.name == "2")
        {
            DestroyPartnerFakeObj();
            Utils.CleanGrid(m_AroundTeamGrid);
            SelectPlayerListItem(null);
            ReqNearbyTeam();
        }
    }

    public void OnTeamInfoUpdate()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
             Module.Log.LogModule.ErrorLog("OnTeamInfoUpdate:: MainPlayer is null");
             return;
        }
        UInt64 oLastSelectGUID = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;

        if (curTab != null)
        {
           if ( m_SelectPlayerItem != null)
           {
               oLastSelectGUID = m_SelectPlayerItem.GUID;
           }
           UpdateTeamInfo(oLastSelectGUID);
        }
       
    }
    //更新组队信息
    void UpdateTeamInfo(UInt64 oLastSelectMemberGuid)
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            m_CreateTeamButton.gameObject.SetActive(true);
            m_GatherTeamButton.gameObject.SetActive(false);
            m_TeamFollowButton.gameObject.SetActive(false);
            m_DismissTeamButton.SetActive(false);
        }
        else
        {
            m_CreateTeamButton.gameObject.SetActive(false);
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                bool bRetShow = Singleton<ObjManager>.Instance.MainPlayer.IsTeamLeader();
                m_GatherTeamButton.gameObject.SetActive(bRetShow);
                m_TeamFollowButton.gameObject.SetActive(bRetShow);
                m_DismissTeamButton.SetActive(bRetShow);
            }

        }

        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null == curTab)
        {
            LogModule.ErrorLog("UpdateTeamInfo curTab is null");
            return;
        }

        TabButton tabButton = m_TabController.GetTabButton("0");
        if (null == tabButton)
        {
            LogModule.ErrorLog("UpdateTeamInfo tabButton is null");
            return;
        }
        tabButton.gameObject.SetActive(true);

        if (m_TabGrid != null)
        {
            // m_TabGrid.repositionNow = true;
            m_TabGrid.Reposition();
        }  
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            tabButton.gameObject.SetActive(false);
        }
        else
        {
            tabButton.gameObject.SetActive(true);
        }
        //if (m_TabGrid != null)
        //{
        //    m_TabGrid.repositionNow = true;
        //}  
        
        if (GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            if (curTab.name != "0")
            {
                ChangeTeamTab(TeamTab.TeamTab_TeamInfo);
                return;
            }
            //UIManager.LoadItem(UIInfo.PlayerListItem, OnLoadTeamItem, oLastSelectMemberGuid);
            ShowTeamInfoContent(oLastSelectMemberGuid);
        }
        else
        {
            ChangeTeamTab(TeamTab.TeamTab_NearPlayer);
        }
    }

    void ShowTeamInfoContent(UInt64 oLastSelectMemberGuid)
    {
        //如果位选中该分页，则执行选中操作，否则执行刷新操作
        if (m_TabController.GetHighlightTab() == null)
        {
            return;
        }

        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null == curTab)
        {
            LogModule.ErrorLog("OnLoadTeamItem curTab is null");
            return;
        }
        
        if (curTab.name != "0")
        {
            return;
        }

        if (null == m_TeamMemberListItem)
        {
            Module.Log.LogModule.ErrorLog("OnLoadTeamItem fail resItem is null");
            return;
        }

         if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
             Module.Log.LogModule.ErrorLog("OnLoadTeamItem:: MainPlayer is null");
             return;
        }

        int num = 0;
        num = m_TeamInfoGrid.transform.childCount;

        SelectPlayerListItem(null);
        //ClearPlayerListItem();
        //首先判断是否有队伍
        if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID < 0)
        {
            return;
        }

        m_CreateTeamButton.gameObject.SetActive(false);

        UInt64 oLastSelectGUID = oLastSelectMemberGuid;
        bool bLastSelectExsit = false;
        for (int i = 0; i < GlobeVar.MAX_TEAM_MEMBER; i++)
        {
            if (null != GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(i) &&
                true == GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(i).IsValid())
            {
                if (oLastSelectGUID == GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(i).Guid)
                {
                    bLastSelectExsit = true;
                    break;
                }
            }
        }
        if (false == bLastSelectExsit)
        {
            oLastSelectGUID = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
        }

        int nTotalCombat = 0;
        string strLeaderName = "";
        TeamMemberListItemLogic leaderitem = null;
        int signnum = 0;
        for (int i = 0; i < GlobeVar.MAX_TEAM_MEMBER; i++)
        {
            TeamMember member = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(i);
            if (null != member && true == member.IsValid())
            {
                GameObject TeamMemberItem = null;
                if (signnum < num)
                {
                    Transform tf = m_TeamInfoGrid.transform.GetChild(signnum);
                    if (tf != null)
                    {
                        ++signnum;
                        TeamMemberItem = tf.gameObject;
                        TeamMemberItem.SetActive(true);
                    }
                }
                else
                {
                    TeamMemberItem = Utils.BindObjToParent(m_TeamMemberListItem, m_TeamInfoGrid, i.ToString());
                }
                if (TeamMemberItem == null || TeamMemberItem.GetComponent<TeamMemberListItemLogic>() == null)
                {
                    continue;
                }

                TeamMemberItem.GetComponent<TeamMemberListItemLogic>().Init(GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(i), i);

                nTotalCombat += member.CombatNum;

                if (i == 0)
                {
                    leaderitem = TeamMemberItem.GetComponent<TeamMemberListItemLogic>();
                    strLeaderName = member.MemberName;
                }
            }
        }
        for (int i = signnum; i < num; ++i)
        {
            Transform tf = m_TeamInfoGrid.transform.GetChild(signnum);
            if (tf != null)
            {
                tf.gameObject.SetActive(false);
            }
        }
        m_TeamInfoGrid.GetComponent<UIGrid>().Reposition();

        if (leaderitem != null && num == 0)
        {
            leaderitem.OnItemClick();
        }

        m_TeamCombatLabel.text = nTotalCombat.ToString();
        m_TeamMemberCountLabel.text = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount().ToString() + "/" + GlobeVar.MAX_TEAM_MEMBER.ToString();
        m_TeamLeaderNameLabel.text = strLeaderName;
    }

    public void ShowTeamMemberListMenu(UInt64 guid, int teamindex)
    {
        if (m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>() == null)
        {
            return;
        }

        if (m_TeamMemberMenu.activeSelf && guid == m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>().Guid)
        {
            m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>().CloseMenu();
        }
        else
        {
            m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>().ShowMenu(guid, teamindex);
        }
    }

    public void CloseTeamMemberListMenu()
    {
        if (m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>() == null)
        {
            return;
        }

        m_TeamMemberMenu.GetComponent<TeamMemberMenuLogic>().CloseMenu();
    }

    public void OnTeamMemberItemClick(TeamMember member)
    {
        if (member == null)
        {
            return;
        }

        TeamMemberListItemLogic[] aItem = m_TeamInfoGrid.GetComponentsInChildren<TeamMemberListItemLogic>();
        for (int i = 0; i < aItem.Length; i++ )
        {
            if (aItem[i].m_selfTeamMember == null)
            {
                continue;
            }

            if (aItem[i].m_selfTeamMember.Guid != member.Guid)
            {
                aItem[i].UpdateChoose(false);
            }            
        }

        UpdateTeamMemberModel(member);
    }

    void UpdateTeamMemberModel(TeamMember member)
    {
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)member.Profession;
        //对应FakeObject.txt配置
        int fakeObjId = -1;
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                fakeObjId = 7;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                fakeObjId = 8;
                break;
            case CharacterDefine.PROFESSION.DALI:
                fakeObjId = 10;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                fakeObjId = 9;
                break;
            case CharacterDefine.PROFESSION.GAIBANG:
                fakeObjId = 62;
                break;
            default:
                fakeObjId = 7;
                break;
        }

        if (m_PlayerFakeObj != null)
        {
            DestroyPartnerFakeObj();
        }           

        m_PlayerFakeObj = new OtherFakeObject();
        if (m_PlayerFakeObj == null)
        {
            return;
        }

        GameManager.gameManager.OtherPlayerData.CleanUpData();
        GameManager.gameManager.OtherPlayerData.Profession = member.Profession;
        GameManager.gameManager.OtherPlayerData.ModuleVisualID = member.ModelVisualId;
        GameManager.gameManager.OtherPlayerData.CurWeaponDataID = member.WeaponDataId;
        GameManager.gameManager.OtherPlayerData.WeaponEffectGem = member.WeaponEffectGem;

        m_PlayerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
        m_TeamMemberModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;       
    }

    private void DestroyPartnerFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
    }

    //更新附近队伍
    public void UpdateNearbyTeam(GC_NEAR_TEAMLIST packet)
    {
        if (null == packet)
        {
            return;
        }
        ShowNearByPlayerContent(packet);
    }

    void ShowNearByPlayerContent(GC_NEAR_TEAMLIST packet)
    {
        if (null == m_AroundTeamListItem)
        {
            Module.Log.LogModule.ErrorLog("load friend item fail");
            return;
        }

        if (m_TabController.GetHighlightTab() == null)
        {
            return;
        }
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (curTab.name != "2")
        {
            return;
        }

        Utils.CleanGrid(m_AroundTeamGrid);
        SelectPlayerListItem(null);

        int idCount = packet.GuidCount;
        for (int i = 0; i < idCount; i++)
        {
            NearbyTeam team = new NearbyTeam();
            team.Guid = packet.GetGuid(i);
            team.Name = packet.GetName(i);
            team.Level = packet.GetLevel(i);
            team.Profession = packet.GetProf(i);
            team.CombatNum = packet.GetCombatNum(i);
            team.TeamID = packet.GetTeamID(i);
            team.TeamCombatNum = packet.GetTeamCombat(i);

            if (GameManager.gameManager.PlayerDataPool.IsHaveTeam() &&
                GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID == team.TeamID)
            {
                continue;
            }

            GameObject AroundTeamItem = Utils.BindObjToParent(m_AroundTeamListItem, m_AroundTeamGrid, i.ToString());
            if (AroundTeamItem == null || AroundTeamItem.GetComponent<AroundTeamItemLogic>() == null)
            {
                continue;
            }

            AroundTeamItem.GetComponent<AroundTeamItemLogic>().Init(team);
        }
        m_AroundTeamGrid.GetComponent<UIGrid>().Reposition();
       
    }

    //更新附近玩家
    public void UpdateNearbyPlayer(GC_NEAR_PLAYERLIST packet)
    {
        if (null == packet)
        {
            return;
        }
        ShowNearByPlayerContent(packet);
        //UIManager.LoadItem(UIInfo.PlayerListItem, OnLoadNearbyPlayerItem, packet);
    }

    void ShowNearByPlayerContent(GC_NEAR_PLAYERLIST packet)
    {
        if (null == m_AroundPlayerListItem)
        {
            Module.Log.LogModule.ErrorLog("load friend item fail");
            return;
        }
        if (m_TabController.GetHighlightTab() == null)
        {
            return;
        }
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (curTab.name != "1")
        {
            return;
        }
        Utils.CleanGrid(m_AroundPlayerGrid);
        SelectPlayerListItem(null);
        int idCount = packet.GuidCount;
        for (int i = 0; i < idCount; i++)
        {
            NearbyPlayer player = new NearbyPlayer();
            player.Guid = packet.GetGuid(i);
            player.Name = packet.GetName(i);
            player.Level = packet.GetLevel(i);
            player.Profession = packet.GetProf(i);
            player.CombatNum = packet.GetCombatNum(i);
            player.VipLevel = packet.GetVipLevel(i);
            player.GuildName = packet.GetGuildName(i);

            GameObject AroundPlayerItem = Utils.BindObjToParent(m_AroundPlayerListItem, m_AroundPlayerGrid, i.ToString());
            if (AroundPlayerItem == null || AroundPlayerItem.GetComponent<AroundPlayerItemLogic>() == null)
            {
                continue;
            }

            AroundPlayerItem.SetActive(true);
            AroundPlayerItem.GetComponent<AroundPlayerItemLogic>().Init(player);
        }
        m_AroundPlayerGrid.GetComponent<UIGrid>().Reposition();
        m_AroundPlayerSumLabel.text = idCount.ToString();
    }

	void dealWithTeamMemberSortSprites()
	{
        for (int i = 0; i < m_TeamMemberSortSprite.Length; i++)
		{
            m_TeamMemberSortSprite[i].gameObject.SetActive(false);
		}

		bool isUpSort = false;
		int spIndex = 0;
		switch(m_currentSortState)
		{
			case CurrentSortState.LEVELTEAM:
				isUpSort = levelnowTeamSorted;
				spIndex = 0;
				break;
			case CurrentSortState.COMBATTEAM:
				isUpSort = combatnowTeamSorted;
				spIndex = 1;
				break;
			default:
                spIndex = m_TeamMemberSortSprite.Length;
				break;
		}

        if (spIndex < 0 || spIndex >= m_TeamMemberSortSprite.Length)
            return;
        m_TeamMemberSortSprite[spIndex].spriteName = "RightArrowNormal";
        m_TeamMemberSortSprite[spIndex].MakePixelPerfect();
        Vector3 _veclocalEulerAngles = m_TeamMemberSortSprite[spIndex].transform.localEulerAngles;
        _veclocalEulerAngles.z = isUpSort ? (90) : (-90);
        m_TeamMemberSortSprite[spIndex].transform.localEulerAngles = _veclocalEulerAngles;
        m_TeamMemberSortSprite[spIndex].gameObject.SetActive(true);
	}

    void dealWithAroundPlayerSortSprites()
    {
        for (int i = 0; i < m_AroundPlayerSortSprite.Length; i++)
        {
            m_AroundPlayerSortSprite[i].gameObject.SetActive(false);
        }

        bool isUpSort = false;
        int spIndex = 0;
        switch (m_currentSortState)
        {
            case CurrentSortState.LEVELNEARBYPLAYER:
                isUpSort = levelnowNearbyPlayerSorted;
                spIndex = 0;
                break;
            case CurrentSortState.COMBATNEARBYPLAYER:
                isUpSort = combatnowNearbyPlayerSorted;
                spIndex = 1;
                break;
            default:
                spIndex = m_AroundPlayerSortSprite.Length;
                break;
        }

        if (spIndex < 0 || spIndex >= m_AroundPlayerSortSprite.Length)
            return;
        m_AroundPlayerSortSprite[spIndex].spriteName = "RightArrowNormal";
        m_AroundPlayerSortSprite[spIndex].MakePixelPerfect();
        Vector3 _veclocalEulerAngles = m_AroundPlayerSortSprite[spIndex].transform.localEulerAngles;
        _veclocalEulerAngles.z = isUpSort ? (90) : (-90);
        m_AroundPlayerSortSprite[spIndex].transform.localEulerAngles = _veclocalEulerAngles;
        m_AroundPlayerSortSprite[spIndex].gameObject.SetActive(true);
    }

    void dealWithAroundTeamSortSprites()
    {
        for (int i = 0; i < m_AroundTeamSortSprite.Length; i++)
        {
            m_AroundTeamSortSprite[i].gameObject.SetActive(false);
        }

        bool isUpSort = false;
        int spIndex = 0;
        switch (m_currentSortState)
        {
            case CurrentSortState.LEVELNEARBYTEAM:
                isUpSort = levelnowNearbyTeamSorted;
                spIndex = 0;
                break;
            case CurrentSortState.COMBATNEARBYTEAM:
                isUpSort = combatnowNearbyTeamSorted;
                spIndex = 1;
                break;
            case CurrentSortState.TEAMCOMBATNEARBYTEAM:
                isUpSort = teamcombatnowNearbyTeamSorted;
                spIndex = 2;
                break;
            default:
                spIndex = m_AroundTeamSortSprite.Length;
                break;
        }

        if (spIndex < 0 || spIndex >= m_AroundPlayerSortSprite.Length)
            return;
        m_AroundPlayerSortSprite[spIndex].spriteName = "RightArrowNormal";
        m_AroundPlayerSortSprite[spIndex].MakePixelPerfect();
        Vector3 _veclocalEulerAngles = m_AroundPlayerSortSprite[spIndex].transform.localEulerAngles;
        _veclocalEulerAngles.z = isUpSort ? (90) : (-90);
        m_AroundPlayerSortSprite[spIndex].transform.localEulerAngles = _veclocalEulerAngles;
        m_AroundPlayerSortSprite[spIndex].gameObject.SetActive(true);
    }	

	/// <summary>
	/// 按等级排列  begin
	/// </summary>
	private bool levelnowTeamSorted = false;
	private bool levelnowNearbyPlayerSorted = false;
	private bool levelnowNearbyTeamSorted = false;
	void OnClickLevelSort()
	{
		GameObject curTab = m_TabController.GetHighlightTab().gameObject;
		if (null == curTab)
		{
			Module.Log.LogModule.ErrorLog("OnTabChanged:: curTab is null");
			return;
		}


		if (curTab.name == "0")
		{
			m_currentSortState = CurrentSortState.LEVELTEAM;
			SortItems();
			levelnowTeamSorted = !levelnowTeamSorted;
            dealWithTeamMemberSortSprites();
		}
		else if (curTab.name == "1")
		{
			m_currentSortState = CurrentSortState.LEVELNEARBYPLAYER;
			SortItems();
			levelnowNearbyPlayerSorted = !levelnowNearbyPlayerSorted;
            dealWithAroundPlayerSortSprites();
		}
		else if (curTab.name == "2")
		{
			m_currentSortState = CurrentSortState.LEVELNEARBYTEAM;
			SortItems();
			levelnowNearbyTeamSorted = !levelnowNearbyTeamSorted;
            dealWithAroundTeamSortSprites();
		}
	}

	/// <summary>
	/// 按等级排列 end
	/// </summary>


	/// <summary>
	/// 按战力排列  begin
	/// </summary>
	private bool combatnowTeamSorted = false;
	private bool combatnowNearbyPlayerSorted = false;
	private bool combatnowNearbyTeamSorted = false;
	void OnClickCombatSort()
	{
		GameObject curTab = m_TabController.GetHighlightTab().gameObject;
		if (null == curTab)
		{
			Module.Log.LogModule.ErrorLog("OnTabChanged:: curTab is null");
			return;
		}
		

		if (curTab.name == "0")
		{
			m_currentSortState = CurrentSortState.COMBATTEAM;
			SortItems();
			combatnowTeamSorted = !combatnowTeamSorted;
            dealWithTeamMemberSortSprites();
		}
		else if (curTab.name == "1")
		{
			m_currentSortState = CurrentSortState.COMBATNEARBYPLAYER;
			SortItems();
			combatnowNearbyPlayerSorted = !combatnowNearbyPlayerSorted;
            dealWithAroundPlayerSortSprites();
		}
		else if (curTab.name == "2")
		{
			m_currentSortState = CurrentSortState.COMBATNEARBYTEAM;
			SortItems();
			combatnowNearbyTeamSorted = !combatnowNearbyTeamSorted;
            dealWithAroundTeamSortSprites();
		}
	}

	/// <summary>
	/// 按战力排列 end
	/// </summary>

    /// <summary>
    /// 按队伍战力排列  begin
    /// </summary>
    private bool teamcombatnowNearbyTeamSorted = false;
    void OnClickTeamCombatSort()
    {
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null == curTab)
        {
            Module.Log.LogModule.ErrorLog("OnTabChanged:: curTab is null");
            return;
        }

        if (curTab.name == "2")
        {
            m_currentSortState = CurrentSortState.TEAMCOMBATNEARBYTEAM;
            SortItems();
            teamcombatnowNearbyTeamSorted = !teamcombatnowNearbyTeamSorted;
            dealWithAroundTeamSortSprites();
        }
    }
    /// <summary>
    /// 按队伍战力排列 end
    /// </summary>

	/// <summary>
	/// 排序 begin   byLevelOrnot = true 按照等级排序，byLevelOrnot = false 按照战力排序
	/// </summary>
	public enum CurrentSortState
	{
		NONE = 0,
		LEVELTEAM = 1,
		COMBATTEAM = 2,
		LEVELNEARBYPLAYER = 3,
		COMBATNEARBYPLAYER = 4,
		LEVELNEARBYTEAM = 5,
		COMBATNEARBYTEAM = 6,
        TEAMCOMBATNEARBYTEAM = 7,
	}

	private CurrentSortState m_currentSortState = CurrentSortState.NONE;
	void SortItems ()
	{
        GameObject myGrid = null;

        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null == curTab)
        {
            return;
        }

        if (curTab.name == "0")
        {
            myGrid = m_TeamInfoGrid;
        }
        else if (curTab.name == "1")
        {
            myGrid = m_AroundPlayerGrid;
        }
        else if (curTab.name == "2")
        {
            myGrid = m_AroundTeamGrid;
        }

        if (myGrid == null)
        {
            return;
        }

        Transform myTrans = myGrid.transform;
        int MaxCount = myTrans.childCount;


		for (int i = 0; i < MaxCount; i++)
		{
			Transform everyTrans = myTrans.GetChild(i);
			//PlayerListItemLogic itemLogic = everyTrans.gameObject.GetComponent<PlayerListItemLogic>();

			//if(itemLogic != null)
			//{
				int sortNum = 0;
				bool isUpSort = false;
				switch(m_currentSortState)
				{
                    case CurrentSortState.LEVELTEAM:
                        {
                            TeamMemberListItemLogic itemLogic = everyTrans.gameObject.GetComponent<TeamMemberListItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !levelnowTeamSorted;
                                sortNum = itemLogic.m_selfTeamMember.Level;
                            }
                        }
						break;
                    case CurrentSortState.COMBATTEAM:
                        {
                            TeamMemberListItemLogic itemLogic = everyTrans.gameObject.GetComponent<TeamMemberListItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !combatnowTeamSorted;
                                sortNum = itemLogic.m_selfTeamMember.CombatNum;
                            }
                            break;
                        }
                    case CurrentSortState.LEVELNEARBYPLAYER:
                        {
                            AroundPlayerItemLogic itemLogic = everyTrans.gameObject.GetComponent<AroundPlayerItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !levelnowNearbyPlayerSorted;
                                sortNum = itemLogic.m_nearbyPlayer.Level;
                            }
                        }
                        break;
                    case CurrentSortState.COMBATNEARBYPLAYER:
                        {
                            AroundPlayerItemLogic itemLogic = everyTrans.gameObject.GetComponent<AroundPlayerItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !levelnowNearbyPlayerSorted;
                                sortNum = itemLogic.m_nearbyPlayer.CombatNum;
                            }
                        }
                        break;
                    case CurrentSortState.LEVELNEARBYTEAM:
                        {
                            AroundTeamItemLogic itemLogic = everyTrans.gameObject.GetComponent<AroundTeamItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !levelnowNearbyTeamSorted;
                                sortNum = itemLogic.m_nearbyTeam.Level;
                            }
                        }
                        break;
                    case CurrentSortState.COMBATNEARBYTEAM:
                        {
                            AroundTeamItemLogic itemLogic = everyTrans.gameObject.GetComponent<AroundTeamItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !combatnowNearbyTeamSorted;
                                sortNum = itemLogic.m_nearbyTeam.CombatNum;
                            }
                        }
                        break;
                    case CurrentSortState.TEAMCOMBATNEARBYTEAM:
                        {
                            AroundTeamItemLogic itemLogic = everyTrans.gameObject.GetComponent<AroundTeamItemLogic>();
                            if (itemLogic != null)
                            {
                                isUpSort = !teamcombatnowNearbyTeamSorted;
                                sortNum = itemLogic.m_nearbyTeam.TeamCombatNum;
                            }
                        }
                        break;
				}

				if(isUpSort)
					sortNum = - sortNum;
				everyTrans.gameObject.name = sortNum.ToString();
			//}
		}
        myGrid.GetComponent<UIGrid>().sorted = true;
        myGrid.GetComponent<UIGrid>().Reposition(true);
	}
	/// <summary>
	/// 排序 end
	/// </summary>

    //请求附近玩家
    void ReqNearbyPlayer()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            m_CreateTeamButton.gameObject.SetActive(true);
            m_GatherTeamButton.gameObject.SetActive(false);
            m_TeamFollowButton.gameObject.SetActive(false);
            m_DismissTeamButton.SetActive(false);
        }
        else
        {
            m_CreateTeamButton.gameObject.SetActive(false);
            m_GatherTeamButton.gameObject.SetActive(false);
            m_TeamFollowButton.gameObject.SetActive(false);
            m_DismissTeamButton.SetActive(false);
        }

        CG_REQ_NEAR_LIST packet = (CG_REQ_NEAR_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_NEAR_LIST);
        packet.IsNearPlayerList = 1;
        packet.SendPacket();
    }

    //请求附近队伍
    void ReqNearbyTeam()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            m_CreateTeamButton.gameObject.SetActive(true);
            m_GatherTeamButton.gameObject.SetActive(false);
            m_TeamFollowButton.gameObject.SetActive(false);
            m_DismissTeamButton.SetActive(false);
        }
        else
        {
            m_CreateTeamButton.gameObject.SetActive(false);
            m_GatherTeamButton.gameObject.SetActive(false);
            m_TeamFollowButton.gameObject.SetActive(false);
            m_DismissTeamButton.SetActive(false);
        }

        //发送给服务器请求
        CG_REQ_NEAR_LIST packet = (CG_REQ_NEAR_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_NEAR_LIST);
        packet.IsNearPlayerList = 0;
        packet.SendPacket();
    }

    //创建队伍按钮
    void OnClickCreateTeam()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam() &&
            null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteTeam(GlobeVar.INVALID_GUID);
        }
    }

    public void OnClickPlayerListItem(PlayerListItemLogic selectItem)
    {
        if (selectItem == null)
        {
            LogModule.ErrorLog("OnClickPlayerListItem::selectItem = null");
            return;
        }
        SelectPlayerListItem(selectItem);
    }

    public void SelectPlayerListItem(PlayerListItemLogic selectItem)
    {
        if (null == selectItem)
        {
            if (m_ButtonWindow != null)
            {
                m_ButtonWindow.SetPlayerListItemInfo(GlobeVar.INVALID_GUID, GlobeVar.INVALID_ID, "", PlayerListItemLogic.PlayerListItemType.Invalid);
            }
            m_SelectPlayerItem = null;
//             if (m_TeamMemberSceneInfo != null)
//             {
//                 m_TeamMemberSceneInfo.SetActive(false);
//             }
            return;
        }
        if (m_SelectPlayerItem != null)
        {
            m_SelectPlayerItem.OnCancelSelectItem();
        }
        m_SelectPlayerItem = selectItem;
        m_SelectPlayerItem.OnSelectItem();

        if (m_ButtonWindow != null)
        {
            m_ButtonWindow.SetPlayerListItemInfo(m_SelectPlayerItem.GUID, m_SelectPlayerItem.TeamID, m_SelectPlayerItem.m_PlayerName, m_SelectPlayerItem.ItemType);
        }
        UpdateTeamMemberScenePos(selectItem.TeamPosIndex);
    }

    void UpdateTeamMemberScenePos(int nTeamMemberPosIndex)
    {
        /*if (null == m_TeamMemberSceneInfo)
        {
            LogModule.ErrorLog("UpdateTeamMemberScenePos::m_TeamMemberSceneInfo is null");
            return;
        }
        if ( null == m_TeamMemberSceneName)
        {
            LogModule.ErrorLog("UpdateTeamMemberScenePos::m_TeamMemberSceneName is null");
            return;
        }
        if (null == m_TeamMemberSceneChannel)
        {
            LogModule.ErrorLog("UpdateTeamMemberScenePos::m_TeamMemberSceneChannel is null");
            return;
        }
        if (null == m_TeamMemberScenePos)
        {
            LogModule.ErrorLog("UpdateTeamMemberScenePos::m_TeamMemberScenePos is null");
            return;
        }
        if (nTeamMemberPosIndex < 0 || nTeamMemberPosIndex >= GlobeVar.MAX_TEAM_MEMBER)
        {     
            m_TeamMemberSceneInfo.SetActive(false);
            return;
        }
        TeamMember member = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(nTeamMemberPosIndex);
        if (null == member)
        {
            m_TeamMemberSceneInfo.SetActive(false);
            return;
        }
        if (false == member.IsValid())
        {
            m_TeamMemberSceneInfo.SetActive(false);
            return;
        }

        Tab_SceneClass curScene = TableManager.GetSceneClassByID(member.SceneClassID, 0);
        if (null == curScene)
        {
            m_TeamMemberSceneInfo.SetActive(false);
            return;
        }
        m_TeamMemberSceneInfo.SetActive(true);
        m_TeamMemberSceneName.color = SceneData.GetSceneNameColor(member.SceneClassID);
        m_TeamMemberSceneName.text = curScene.Name;
        m_TeamMemberSceneChannel.text = StrDictionary.GetClientDictionaryString("{#1177}", member.SceneInstID + 1);
        m_TeamMemberScenePos.text = "X:" + ((int)member.ScenePos.x).ToString() + " Y:" + ((int)member.ScenePos.z).ToString();*/
    }

    void OnGatherTeam()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer != null)
        {
            if (false == mainPlayer.IsTeamLeader())
            {
                mainPlayer.SendNoticMsg(false, "#{4725}");
                return;
            }
            mainPlayer.ReqCallMember();
        }
    }

    void OnTeamFollow()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer != null)
        {
            if (false == mainPlayer.IsTeamLeader())
            {
                return;
            }

            mainPlayer.ReqTeamFollow();
        }
    }
    void OnUnTeamFellow()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer != null && mainPlayer.IsInTeamFollow)
        {
            mainPlayer.AskLeaveTeamFollow();
        }
    }
    void OnClickDismissTeamBtn()
    {
        //非队长无法解散队伍
        if (false == Singleton<ObjManager>.GetInstance().MainPlayer.IsTeamLeader())
        {
            return;
        }
        MessageBoxLogic.OpenOKCancelBox(GCGame.Table.StrDictionary.GetClientDictionaryString("#{11498}"),
                                            GCGame.Table.StrDictionary.GetClientDictionaryString("#{1315}"), LeaveClickYes, null);
    }
    void LeaveClickYes()
    {
        //队长自己踢自己，服务器则认为是解散队伍
        Singleton<ObjManager>.GetInstance().MainPlayer.ReqKickTeamMember(Singleton<ObjManager>.GetInstance().MainPlayer.GUID);
    }
}
