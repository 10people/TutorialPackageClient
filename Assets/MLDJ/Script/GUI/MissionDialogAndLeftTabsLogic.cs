//********************************************************************
// 文件名: MissionDialogAndLeftTabsLogic.cs
// 全路径：	\Script\GUI\MissionDialogAndLeftTabsLogic.cs
// 描述: 任务、对话，左侧tabs逻辑（组队等）处理
// 作者: wanghua
// 创建时间: 2013-11-14
//
// 修改历史:
// 2013-11-14 王喆创建 拆分prefab 分离UI逻辑
//********************************************************************
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.Mission;
using Games.Events;
using Games.LogicObj;
using Module.Log;
using GCGame;
using Games.GlobeDefine;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class MissionDialogAndLeftTabsLogic : MonoBehaviour
{
    private static MissionDialogAndLeftTabsLogic m_Instance = null;
    public static MissionDialogAndLeftTabsLogic Instance()
    {
        return m_Instance;
    }

    public TabController m_TabController;
    //左侧任务追踪信息
    public UIGrid m_MissionsList;
    public UITopGrid m_MissionsTopList;
    private List<MissionItemLogic> m_MissionItemsList; // 任务Item gameobj
    private int m_CommpletedItemCount = 0; // 完成未提交任务个数

    public GameObject m_ControlButton;			//任务追踪收起按钮

    public GameObject m_LeftTablesRoot;     //左侧分页，任务快捷、组队相关
    public GameObject m_LeftTabsOffset;     // 左侧tabs位移

    //public UIImageButton m_TabMission;            // 任务标签sprite
    //public UIImageButton m_TabTeam;               // 队伍标签sprite
    public GameObject m_ContentMission;
    public GameObject m_ContentTeam;
	public GameObject m_ContentStarCondition;

    private bool m_TabsFold = false;                // ControlButton控制的折叠状态 默认不折叠
    private bool m_bFold = false;                     // 头像按钮控制的折叠状态 默认不折叠

    // 新手指引相关
    private int[] m_GuideMissionID = { 0, 5, 6/*, 1, 2, 99, 4, 5, 6, 8, 100, 102 */};
    private int[] m_GuideMissionIDWithParam = {13};
    public bool m_GuideMissionFlag = false;

    public TweenPosition m_TabTweenPos;
    public TweenPosition m_ContentTweenPos;
    public UIDraggablePanel m_dragPanel;

    public GameObject m_TeamButton;
    public GameObject m_JoinTeamButton;
    public GameObject m_LeaveTeamButton;

    //public List<TweenAlpha> m_FoldTween = new List<TweenAlpha>();
	public GameObject m_MissionItemRes;

	// 剧情副本星级条件
	public UILabel[] m_ConditionText;

	public GameObject m_MissionTab;
	public GameObject m_StarConTab;

	public GameObject m_AcceptMissionButton;			//可接任务按钮

    void Awake()
    {
        m_Instance = this;
        if (m_dragPanel != null)
        {
            m_dragPanel.repositionClipping = true;
        }
#if UNITY_WP8
		m_MissionsList.enabled = false;
#endif
    }

    void OnDisable()
    {
#if BOBJOYSTICK
        if (UIRootJoyControllerHelper.Instance != null)
        {
            UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.NONE);
        }
#endif
    }
    // Use this for initialization
    void Start()
    {
        m_LeftTablesRoot.SetActive(true);

        m_TabController.delTabChanged = TabOnClick;
        m_MissionItemsList = new List<MissionItemLogic>();

		// 初始化任务追踪列表
        InitMissionFollow();

		// 初始化剧情副本星级评价信息
		InitStarCondition();

		// 初始化默认选择的tab
		InitSelectedTab();

        InitLeftTabControl(PlayerPreferenceData.LeftTabControl);

        ShowNewPlayerGuide(0);
#if BOBJOYSTICK
        RefreshJoyGUI();
#endif
    }
#if BOBJOYSTICK
    void RefreshJoyGUI()
    {
        Engine.JoyUI.BobJoyUINavigator m_JoyUINav;
        System.Collections.Generic.List<GameObject> _uiItems = new System.Collections.Generic.List<GameObject>();
        List<Transform> functionbuttons = new List<Transform>();
        //functionbuttons.Add(this.m_TabMission.transform);
        //functionbuttons.Add(this.m_TabTeam.transform);
        Component[] missionlist = this.m_ContentMission.GetComponentsInChildren(typeof(MissionItemLogic), true);
        for (int i = 0; i < missionlist.Length; ++i)
        {
            functionbuttons.Add(missionlist[i].transform);
        }
        for (int i = 0; i < functionbuttons.Count; ++i)
        {
            _uiItems.Add(functionbuttons[i].gameObject);
        }
        m_JoyUINav = Engine.JoyUI.BobJoyUINavigator.SetJoyController(gameObject, _uiItems, null, null);
        m_JoyUINav.enabled = false;
    }
#endif

	void InitSelectedTab()
	{
		if (PlayerPreferenceData.LeftTabChoose == 1)
		{
			//             if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
			//             {
			m_TabController.ChangeTab("Tab2-Team");
			/*            } */
		}
		else
		{
			if (GameManager.gameManager.ActiveScene.IsStoryCopyScene())
			{
				m_StarConTab.SetActive(true);
				m_MissionTab.SetActive(false);
				m_TabController.ChangeTab("Tab1-Mubiao");
			}
			else
			{
				m_MissionTab.SetActive(true);
				m_StarConTab.SetActive(false);
				m_TabController.ChangeTab("Tab1-Mission");
			}
		}
	}

    void OnDestroy()
    {
        Vector3 LastPos = Vector3.zero;
        if (m_MissionsList && m_MissionsList.transform != null)
        {
            LastPos = m_MissionsList.transform.position;
        }

        GameManager.gameManager.PlayerDataPool.MissionGridLastPos = LastPos;
        m_Instance = null;
    }

    void TabOnClick(TabButton value)
    {
        if (value.name == "Tab1-Mission")
        {
            SwitchToMission();
        }
        else if (value.name == "Tab2-Team")
        {
            SwitchToTeam();
        }
		else if (value.name == "Tab1-Mubiao")
		{
			SwitchToStarCondition();
		}
    }

	void InitStarCondition()
	{
		//GameManager.gameManager.mai
		if (!GameManager.gameManager.ActiveScene.IsStoryCopyScene())
		{
			return;
		}

		Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
		if (tabSceneClass == null)
		{
			return;
		}

		int nStoryCopySceneID = tabSceneClass.CopySceneID;
		Tab_StoryCopyScene tBook = TableManager.GetStoryCopySceneByID(nStoryCopySceneID, 0);
		if (tBook == null)
		{  
			return;
		}

		UpdateLevelStarDescrib(tBook);
	}

	public void UpdateLevelStarDescrib( Tab_StoryCopyScene tBook )
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

    // 更新所有任务UI
    public void InitMissionFollow()
    {
//        UIManager.LoadItem(UIInfo.MissionItem, OnLoadMissionItem);
		OnLoadMissionItem(m_MissionItemRes, null);
    }

	public void OnAcceptMission()
	{
		UIManager.ShowUI(UIInfo.MissionLogRoot, OnLoadMissionAndMissionDayRoot);
	}

	void OnLoadMissionAndMissionDayRoot(bool bSuccess, object param)
	{
		if (MissionLogLogic.Instance() != null) {
			MissionLogLogic.Instance().SetOpenTabName("Btn0-CanAccept");
		}
	}

    void OnLoadMissionItem(GameObject resItem, object param)
    {
        // 清空 MissionFollow
        ClearUpMissionFollow();

        // 添加任务
        List<int> nMissionIDList = GameManager.gameManager.MissionManager.GetMissionsInTracker();
        int nMissionCount = nMissionIDList.Count;
        if (nMissionCount <= 0)
        {
			m_AcceptMissionButton.SetActive(true);
            return;
        }

        List<int> nMissionSortList = GameManager.gameManager.PlayerDataPool.MissionSortList;
        if (nMissionSortList.Count > 0 && nMissionSortList.Count == nMissionCount)
        {
            InitMissionItemList(nMissionSortList, resItem);
        }
        else
        {
            for (int i = 0; i < nMissionIDList.Count; ++i)
            {
                if (false == AddMissionItem(nMissionIDList[i], resItem))
                {
                    continue;
                }

                if (false == UpdateMissionItem(nMissionIDList[i]))
                {
                    continue;
                }
            }

            for (int i = 0; i < m_MissionItemsList.Count; ++i)
            {
                nMissionSortList.Add(m_MissionItemsList[i].MissionID);
            }
        }

        if (m_MissionsList)
        {
#if UNITY_WP8
			DoRepositionForce();
#else
            m_MissionsList.repositionNow = true;
#if BOBJOYSTICK
            RefreshJoyGUI();
#endif
#endif
            InitMissionScrollViewPos();
        }

		if(m_MissionItemsList.Count>0)
		{
			m_AcceptMissionButton.SetActive(false);
		}
		else
		{
			m_AcceptMissionButton.SetActive(true);
		}

        ShowNewPlayerGuide(0); // 第一个任务
    }
    // 清空 MissionFollow
    public void ClearUpMissionFollow()
    {
        Utils.CleanGrid(m_MissionsList.gameObject);
        m_MissionItemsList.Clear();
        m_CommpletedItemCount = 0;
    }

   public static string GetColorByQuality(byte yQuality)
    {
        string strColor = "";
        MISSION_QUALITY quality = (MISSION_QUALITY)yQuality;
        switch (quality)
        {
            case MISSION_QUALITY.MISSION_QUALITY_WHITE:
                strColor = "[ffffff]";
                break;
            case MISSION_QUALITY.MISSION_QUALITY_GREEN:
                strColor = "[AFF9CD]";
                break;
            case MISSION_QUALITY.MISSION_QUALITY_BLUE:
                strColor = "[2c97f1]";
                break;
            case MISSION_QUALITY.MISSION_QUALITY_PURPLE:
                strColor = "[b040f7]";
                break;
            case MISSION_QUALITY.MISSION_QUALITY_ORANGE:
                strColor = "[df8e24]";
                break;
            default:
                strColor = "[ffffff]";
                break;
        }

        return strColor;
    }

    // 创建MissionItem
    bool AddMissionItem(int nMissionID, GameObject resItem)
    {
        if (nMissionID < 0)
        {
            return false;
        }

        Tab_MissionDictionary MissionDic = TableManager.GetMissionDictionaryByID(nMissionID, 0);
        if (MissionDic == null)
        {
			LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
            return false;
        }

        if (m_CommpletedItemCount < 0)
        {
            return false;
        }

        for (int i = 0; i < m_MissionItemsList.Count; ++i)
        {
            if (null != m_MissionItemsList[i])
            {
                if (m_MissionItemsList[i] && m_MissionItemsList[i].MissionID == nMissionID)
                {
                    return false;
                }
            }
        }

       GameObject ItemObj = Utils.BindObjToParent(resItem, m_MissionsList.gameObject, "MissionItem-1");

        if (ItemObj)
        {
            MissionItemLogic MissionItem = ItemObj.GetComponent<MissionItemLogic>();
            if (MissionItem == null)
            {
                return false;
            }

            byte yMissionQuality = GameManager.gameManager.MissionManager.GetMissionQuality(nMissionID);
            string strMissionColor = GetColorByQuality(yMissionQuality);

            MissionItem.MissionID = nMissionID;
            MissionItem.MissionTile.text = string.Format(MissionDic.MissionName, strMissionColor, "[489667]");
            MissionItem.MissionInfo.text = "[489667]" + string.Format(MissionDic.FollowText, "[489667]", "0");
			MissionItem.UpdateMissionEffect();

//             if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
//             {
//               MissionItem.SetAwardItemID(GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID());
//             }
//             else
//               MissionItem.SetAwardItemID(-1);

            //if (GameManager.gameManager.MissionManager.GetMissionType(nMissionID) == (int)MISSIONTYPE.MISSION_PAOHUAN)
            //{
            //    MissionItem.SetAwardItemID(GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID());
            //}
            //else
              //  MissionItem.SetAwardItemID(-1);

            // 主线任务放在接任务最上面
            int nTempIndex = m_CommpletedItemCount;
            if (nTempIndex >= 0 && nTempIndex < m_MissionItemsList.Count
                && (int)MISSIONTYPE.MISSION_MAIN == GameManager.gameManager.MissionManager.GetMissionType(m_MissionItemsList[nTempIndex].MissionID))
            {
                nTempIndex++;
            }
            if (nTempIndex > m_MissionItemsList.Count)
            {
                nTempIndex = m_MissionItemsList.Count;
            }
            m_MissionItemsList.Insert(nTempIndex, MissionItem);
        }

		m_AcceptMissionButton.SetActive(false);

        return true;
    }

    bool DelMissionItem(int nMissionID)
    {
        if (nMissionID < 0)
        {
            return false;
        }

        int nIndex = -1;
        for (int i = 0; i < m_MissionItemsList.Count; i++)
        {
            int ItemMissionID = m_MissionItemsList[i].MissionID;
            if (ItemMissionID == nMissionID)
            {
                nIndex = i;
                break;
            }
        }

        // 没任务
        if (nIndex < 0 || nIndex >= m_MissionItemsList.Count)
        {
            return false;
        }

        GameObject tempObj = m_MissionItemsList[nIndex].gameObject;
        tempObj.transform.parent = null;
        m_MissionItemsList.RemoveAt(nIndex);
        ResourceManager.DestroyResource(ref tempObj); // 直接删就可以里吧

#if UNITY_WP8
		m_MissionsTopList.enabled = true;
#endif

        m_MissionsTopList.recenterTopNow = true;

        // 更新 其他Item名字
        for (; nIndex < m_MissionItemsList.Count; nIndex++)
        {
            m_MissionItemsList[nIndex].name = "MissionItem" + nIndex;
        }

        if (GameManager.gameManager.MissionManager.IsHaveMission(nMissionID)
            && (byte)MissionState.Mission_Completed == GameManager.gameManager.MissionManager.GetMissionState(nMissionID))
        {
            if (m_CommpletedItemCount > 0)
            {
                m_CommpletedItemCount -= 1;
            }
        }
#if UNITY_WP8
		DoRepositionForce();
#endif
		if(m_MissionItemsList.Count<=0)
		{
			m_AcceptMissionButton.SetActive(true);
		}

        return true;
    }

    bool UpdateMissionItem(int nMissionID)
    {
        if (nMissionID < 0)
        {
            return false;
        }

        int nIndex = -1;
        for (int i = 0; i < m_MissionItemsList.Count; i++)
        {
            int ItemMissionID = m_MissionItemsList[i].MissionID;
            if (ItemMissionID == nMissionID)
            {
                nIndex = i;
                break;
            }
        }
        // 没任务
        if (nIndex < 0 || nIndex >= m_MissionItemsList.Count)
        {
            return false;
        }
        Tab_MissionDictionary MDLine = TableManager.GetMissionDictionaryByID(nMissionID, 0);
		if (MDLine == null)
		{
			LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
		}
		else
        {
            int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
            if (nParam != 0)
            {
                m_MissionItemsList[nIndex].MissionInfo.text = "[489667]" + string.Format(MDLine.FollowText, "[489667]", nParam);
            }
        }

        MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
        if (MissionState.Mission_Completed == misState)
        {
          UIManager.ShowUI(UIInfo.MissionCompletefEffect);
            //string StrMissionTile = MDLine.MissionName;//m_MissionItemsList[nIndex].GetComponent<MissionItemLogic>().MissionTile.text;//StrDictionary.GetClientDictionaryString("#{1361}") + m_MissionItemsList[nIndex].GetComponent<MissionItemLogic>().MissionTile.text;
            m_MissionItemsList[nIndex].MissionTile.text = string.Format(MDLine.MissionName, "[AFF9CD]", "[AFF9CD]");

            int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
            m_MissionItemsList[nIndex].MissionInfo.text = "[AFF9CD]" + string.Format(MDLine.FollowText, "[AFF9CD]", nParam);
            m_MissionItemsList[nIndex].OnUpdateMissionStateIcon(misState);

            UpdateMissionFollowBlink(nIndex, true);

            // 移位
            MissionItemLogic TempObj = m_MissionItemsList[nIndex];
            m_MissionItemsList.RemoveAt(nIndex);
            m_MissionItemsList.Insert(0, TempObj);
            for (int i = 0; i < m_MissionItemsList.Count; i++)
            {
                m_MissionItemsList[i].name = "MissionItem" + i;
            }
            m_CommpletedItemCount += 1;

            // 添加新手指引
            if (nMissionID == 2 || nMissionID == 6)
            {
                m_GuideMissionFlag = true;
                ShowNewPlayerGuide(nMissionID);
            }
			// 乱七八糟的新手指引
			SetVictorNewGuild(nMissionID);
        }
        else
        {
            string StrMissionTile = MDLine.MissionName;
            if (MissionState.Mission_Failed == misState)
            {
                StrMissionTile = "[fe3737]" + StrDictionary.GetClientDictionaryString("#{1362}") + StrMissionTile;
            }

            byte yMissionQuality = GameManager.gameManager.MissionManager.GetMissionQuality(nMissionID);
            string strMissionColor = GetColorByQuality(yMissionQuality);
            m_MissionItemsList[nIndex].MissionTile.text = string.Format(StrMissionTile, strMissionColor, "[489667]");//"[fe3737]" + StrMissionTile;
            m_MissionItemsList[nIndex].OnUpdateMissionStateIcon(misState);

            UpdateMissionFollowBlink(nIndex, false);
        }

        return true;
    }

    // 更新任务信息UI操作
    public void UpDateMissionFollow(int nMissionID, string strOpt)
    {

        switch (strOpt)
        {
            case "add":
                {
//                    UIManager.LoadItem(UIInfo.MissionItem, OnUpDateMissionFollowLoadItem, nMissionID);
				OnUpDateMissionFollowLoadItem (m_MissionItemRes, nMissionID);
                    return;
                }
            case "Del":
                {
                    DelMissionItem(nMissionID);
                }
                break;
            case "state":
                {
                    UpdateMissionItem(nMissionID);
                }
                break;
            default:
                break;
        }

        if (m_MissionsList)
        {
#if UNITY_WP8
			DoRepositionForce();
#else
            m_MissionsList.repositionNow = true;
            m_MissionsTopList.recenterTopNow = true;
#if BOBJOYSTICK
            RefreshJoyGUI();
#endif
#endif
            UpDateMissionSortLst();
        }
    }

    void OnUpDateMissionFollowLoadItem(GameObject resItem, object info)
    {
        if (resItem == null)
        {
            LogModule.ErrorLog("load missionitem fail");
            return;
        }

#if UNITY_ANDROID
		// 这个地方做了特殊处理，改为顺序加载后这个特殊逻辑应该没有用的，保留现场
        if (UIManager.Instance().m_MissionItemPrefab == null)
        {
            UIManager.Instance().m_MissionItemPrefab = resItem;
        }

        //m_StaicMission

        //if (UIManager.m_StaicMission == null)
        //{
        //    UIManager.m_StaicMission = resItem;
        //}
#endif

        int missionID = (int)info;

        AddMissionItem(missionID, resItem);
        UpdateMissionItem(missionID);
        //UIManager.CloseUI(UIInfo.MissionInfoController);
        m_GuideMissionFlag = true;
        if (m_MissionsList)
        {
#if UNITY_WP8
			DoRepositionForce();
#else
            m_MissionsList.repositionNow = true;
#if BOBJOYSTICK
            RefreshJoyGUI();
#endif
#endif
            UpDateMissionSortLst();
        }

        ShowNewPlayerGuide(missionID);
    }

    /// <summary>
    /// 任务追踪栏新手引导
    /// </summary>
    /// <param name="nMissionID"></param>
    /// <param name="param">增加参数，目前只需要strText，后续有需要的可以增加</param>
    public void ShowNewPlayerGuide(int nMissionID, object param = null)
    {
        if (nMissionID == 0)
        {
            m_GuideMissionFlag = true;
        }

        if (false == m_GuideMissionFlag)
        {
            return;
        }

        m_GuideMissionFlag = false;

        bool bRet = false;
        for (int i = 0; i < m_GuideMissionID.Length; i++)
        {
            if (nMissionID == m_GuideMissionID[i])
            {
                bRet = true;
                break;
            }
        }
        for (int i = 0; i < m_GuideMissionIDWithParam.Length; i++)
        {
            if (nMissionID == m_GuideMissionIDWithParam[i] && param != null)
            {
                bRet = true;
                break;
            }
        }

        if (false == bRet)
        {
            return;
        }

        for (int i = 0; i < m_MissionItemsList.Count; ++i)
        {
            if (null != m_MissionItemsList[i])
            {
                if (0 == PlayerPreferenceData.LeftTabControl
                    && m_bFold == false
                    && nMissionID == m_MissionItemsList[i].MissionID)
                {
                    if (param == null)
                    {
                        NewPlayerGuidLogic.OpenWindow(m_MissionItemsList[i].gameObject, 270, 66, "", "right", 2);
                    }
                    else
                    {
                        List<object> paramList = (List<object>)param;
                        NewPlayerGuidLogic.OpenWindow(m_MissionItemsList[i].gameObject, 270, 66, paramList[0].ToString(), "center", 2, true, true, true);
                    }
                }
            }
        }
    }

    public void PlayTween(bool nDirection)
    {
        //BeforeClickPlayerFrame(nDirection);
        m_bFold = nDirection;

        gameObject.SetActive(!nDirection);
        //m_LeftTabsOffset.GetComponent<UIPlayTween>().Play(nDirection);
        //foreach (TweenAlpha tween in m_FoldTween)
        //{
        //    tween.Play(nDirection);
        //}
    }

    public void SwitchToTeam()
    {
       //if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
       //{
       m_ContentMission.SetActive(false);
       m_ContentTeam.SetActive(true);
		m_ContentStarCondition.SetActive(false);

       /*m_TabMission.normalSprite = "mission01";
       m_TabMission.hoverSprite = "mission01";
       m_TabMission.pressedSprite = "mission02";
       m_TabMission.target.spriteName = "mission01";
       m_TabMission.target.MakePixelPerfect();
       m_TabTeam.normalSprite = "team02";
       m_TabTeam.hoverSprite = "team02";
       m_TabTeam.pressedSprite = "team01";
       m_TabTeam.target.spriteName = "team02";
       m_TabTeam.target.MakePixelPerfect();*/

       PlayerPreferenceData.LeftTabChoose = 1;

       if (null != TeamList.Instance())
       {
           TeamList.Instance().UpdateTeamMember();
       }
       if (m_TeamButton != null)
       {
           if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
           {
               m_TeamButton.SetActive(false);
               if (m_JoinTeamButton != null) {
                 m_JoinTeamButton.SetActive(false);
               }
               if (GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() == 1)
               {
                   m_LeaveTeamButton.SetActive(true);
               }
               else
               {
                   m_LeaveTeamButton.SetActive(false);
               }
           }
           else
           {
               m_TeamButton.SetActive(true);
               if (m_JoinTeamButton != null) {
                 m_JoinTeamButton.SetActive(true);
               }
               m_LeaveTeamButton.SetActive(false);
           }
       }
       //}

       // 组队跟随按钮
       UpdateButtonTeamFollow();
    }

    public void SwitchToMission()
    {
        m_ContentMission.SetActive(true);
        m_ContentTeam.SetActive(false);
		m_ContentStarCondition.SetActive(false);

//         m_TabMission.normalSprite = "mission02";
//         m_TabMission.hoverSprite = "mission02";
//         m_TabMission.pressedSprite = "mission01";
//         m_TabMission.target.spriteName = "mission02";
//         m_TabMission.target.MakePixelPerfect();
//         m_TabTeam.normalSprite = "team01";
//         m_TabTeam.hoverSprite = "team01";
//         m_TabTeam.pressedSprite = "team02";
//         m_TabTeam.target.spriteName = "team01";
//         m_TabTeam.target.MakePixelPerfect();

        PlayerPreferenceData.LeftTabChoose = 0;
    }

	void SwitchToStarCondition()
	{
		m_ContentMission.SetActive(false);
		m_ContentTeam.SetActive(false);
		m_ContentStarCondition.SetActive(true);
		PlayerPreferenceData.LeftTabChoose = 0;
	}

    void UpdateMissionFollowBlink(int nIndex, bool enabled)
    {
        if (nIndex < 0 || nIndex > m_MissionItemsList.Count)
        {
            return;
        }

        m_MissionItemsList[nIndex].UpdateMissionFollowBlink(enabled);
    }

    public void AfterClickPlayerFrame()
    {
        TweenAlpha[] alphaArray = m_LeftTabsOffset.GetComponentsInChildren<TweenAlpha>();
        for (int i = 0; i < alphaArray.Length; ++i)
        {
            if (alphaArray[i].tweenGroup == 2)
            {
                if (alphaArray[i].enabled)
                {
                    alphaArray[i].enabled = false;
                }
            }
        }

        if (!m_bFold)
        {
            //InitMissionFollow();
            //m_MissionsList.SetActive(true);
            // 遍历 已完成 闪烁
            for (int i = 0; i < m_CommpletedItemCount; i++)
            {
                if (m_MissionItemsList[i])
                {
                    int nMissionID = m_MissionItemsList[i].MissionID;
                    MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
                    if (misState == MissionState.Mission_Completed)
                    {
                        UpdateMissionFollowBlink(i, true);
                    }
                }
            }
        }
    }

    public void CloseMissionInfoRoot()
    {
        UIManager.CloseUI(UIInfo.MissionInfoController);
    }

    public void AfterTabsControlButtonClicked()
    {
        m_TabsFold = !m_TabsFold;
    }

    void InitLeftTabControl(int nControl)
    {
        m_TabTweenPos.Reset();
        m_ContentTweenPos.Reset();

        // 以折叠状态初始化
        if (nControl == 1)
        {
            m_TabsFold = true;

            m_TabTweenPos.from = new Vector3(-207, 152, 0);
            m_TabTweenPos.to = new Vector3(65, 152, 0);

            m_ContentTweenPos.from = new Vector3(-144, -20, 0);
            m_ContentTweenPos.to = new Vector3(133, -20, 0);

        }
        // 以展开状态初始化
        else
        {
            m_TabsFold = false;

            m_TabTweenPos.from = new Vector3(65, 152, 0);
            m_TabTweenPos.to = new Vector3(-207, 152, 0);

            m_ContentTweenPos.from = new Vector3(133, -20, 0);
            m_ContentTweenPos.to = new Vector3(-144, -20, 0);
        }

        m_TabTweenPos.gameObject.transform.localPosition = m_TabTweenPos.from;
        m_ContentTweenPos.gameObject.transform.localPosition = m_ContentTweenPos.from;
    }

    void LeftControlClick()
    {
        if (PlayerPreferenceData.LeftTabControl == 1)
        {
            PlayerPreferenceData.LeftTabControl = 0;
            GameManager.gameManager.SoundManager.PlaySoundEffect(128);
            return;
        }
        else
        {
#if BOBJOYSTICK
            if (MissionDialogAndLeftTabsLogic.Instance() != null)
            {
                //当左侧快捷栏折叠起来时，不进行适配，以防止指针被对齐到屏幕外而消失的现象
                BobJoyUINavigator leftui = MissionDialogAndLeftTabsLogic.Instance().GetComponent<BobJoyUINavigator>();
                leftui.enabled = false;
                UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.NONE);
            }
#endif
            NewPlayerGuidLogic.CloseWindow();
            PlayerPreferenceData.LeftTabControl = 1;
            GameManager.gameManager.SoundManager.PlaySoundEffect(8);
            return;
        }
    }

    void OpenTeamWindow()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam() &&
            null != Singleton<ObjManager>.GetInstance().MainPlayer) {
           Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteTeam(GlobeVar.INVALID_GUID);
        }

        RelationLogic.m_OpenWay = RelationLogic.OPEN_WAY.MISSION_TEAM;
        RelationLogic.OpenTeamWindow(RelationTeamWindow.TeamTab.TeamTab_TeamInfo);
    }

    public void UpdateTeamInfo()
    {
        if (m_TeamButton != null)
        {
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
            {
                m_TeamButton.SetActive(false);
                if (m_JoinTeamButton != null) {
                  m_JoinTeamButton.SetActive(false);
                }
            }
            else
            {
                m_TeamButton.SetActive(true);
                if (m_JoinTeamButton != null) {
                  m_JoinTeamButton.SetActive(true);
                }
            }
        }
    }

    void LeaveTeamOnClick()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{3181}"), "", LeaveTeamOK);
    }

    void LeaveTeamOK()
    {
        if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID != GlobeVar.INVALID_ID)
        {
            if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.ReqLeaveTeam();
            }
        }
    }

    public void HandleSyncTeamInfo()
    {
        if (m_TeamButton != null)
        {
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
            {
                m_TeamButton.SetActive(false);
                if (m_JoinTeamButton != null) {
                  m_JoinTeamButton.SetActive(false);
                }
                if (GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() == 1)
                {
                    m_LeaveTeamButton.SetActive(true);
                }
                else
                {
                    m_LeaveTeamButton.SetActive(false);
                }
            }
            else
            {
                m_TeamButton.SetActive(true);
                if (m_JoinTeamButton != null) {
                  m_JoinTeamButton.SetActive(true);
                }
                m_LeaveTeamButton.SetActive(false);
            }
        }
    }

    // 策划要求：任务追踪 跨场景不变  添加 任务Item并设置状态
    void InitMissionItemList(List<int> nMissionSortList, GameObject resItem)
    {

        for (int i = 0; i < nMissionSortList.Count; ++i)
        {
            int nMissionID = nMissionSortList[i];
            if (nMissionID < 0)
            {
                return;
            }

            Tab_MissionDictionary MissionDic = TableManager.GetMissionDictionaryByID(nMissionID, 0);
            if (MissionDic == null)
            {
				LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
                return;
            }

            GameObject ItemObj = Utils.BindObjToParent(resItem, m_MissionsList.gameObject, "MissionItem" + i);
            if (ItemObj)
            {
                MissionItemLogic MissionItem = ItemObj.GetComponent<MissionItemLogic>();
                if (MissionItem == null)
                {
                    return;
                }

                byte yMissionQuality = GameManager.gameManager.MissionManager.GetMissionQuality(nMissionID);
                string strMissionColor = GetColorByQuality(yMissionQuality);

                MissionItem.MissionID = nMissionID;
                MissionItem.MissionTile.text = string.Format(MissionDic.MissionName, strMissionColor, "[489667]");
                MissionItem.MissionInfo.text = "[489667]" + string.Format(MissionDic.FollowText, "[489667]", "0");
                MissionItem.OnUpdateMissionStateIcon(MissionState.Mission_None);
				MissionItem.UpdateMissionEffect();
                
                m_MissionItemsList.Add(MissionItem);
                SetPaoHuanAwardItemID();


                // 设置状态
                MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
                if (MissionState.Mission_Completed == misState)
                {
                    MissionItem.MissionTile.text = string.Format(MissionDic.MissionName, "[AFF9CD]", "[AFF9CD]");

                    int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
                    MissionItem.MissionInfo.text = "[AFF9CD]" + string.Format(MissionDic.FollowText, "[AFF9CD]", nParam);
                    MissionItem.OnUpdateMissionStateIcon(misState);

// 					if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
// 						MissionItem.SetAwardItemID (GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID ());
// 					else
// 						MissionItem.SetAwardItemID (-1);
                    UpdateMissionFollowBlink(i, true);

                    m_CommpletedItemCount += 1;

                    // 添加新手指引
                    if (nMissionID == 2 || nMissionID == 7)
                    {
                        m_GuideMissionFlag = true;
                        ShowNewPlayerGuide(nMissionID);
                    }
                }
                else
                {
                    string StrMissionTile = MissionDic.MissionName;
                    if (MissionState.Mission_Failed == misState)
                    {
                        StrMissionTile = "[489667]" + StrDictionary.GetClientDictionaryString("#{1362}") + StrMissionTile;
                    }
                    MissionItem.MissionTile.text = string.Format(StrMissionTile, strMissionColor, "[489667]");
// 					if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
// 						MissionItem.SetAwardItemID (GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID ());
// 					else
// 						MissionItem.SetAwardItemID (-1);
                    int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
                    if (nParam != 0)
                    {
                        MissionItem.MissionInfo.text = "[489667]" + string.Format(MissionDic.FollowText, "[489667]", nParam);
                        MissionItem.OnUpdateMissionStateIcon(misState);
                    }

                }
            }
        }

        SortMissionItem();

        if (m_MissionsList)
        {
            
#if UNITY_WP8
			DoRepositionForce();
#else
            m_MissionsList.repositionNow = true;
#if BOBJOYSTICK
            RefreshJoyGUI();
#endif
#endif
        }
    }

    void UpDateMissionSortLst()
    {
        GameManager.gameManager.PlayerDataPool.MissionSortList.Clear();
        for (int i = 0; i < m_MissionItemsList.Count; ++i)
        {
            if (GameManager.gameManager.MissionManager.GetMissionType(m_MissionItemsList[i].MissionID) == (int)MISSIONTYPE.MISSION_DAILY)
            {
                continue;
            }
            else
            {
                GameManager.gameManager.PlayerDataPool.MissionSortList.Add(m_MissionItemsList[i].MissionID);
            }
        }
    }

    private Vector3 vOffset;
    void InitMissionScrollViewPos()
    {
        // 默认 组队界面的话，不记录了
        if (PlayerPreferenceData.LeftTabChoose == 1)
        {
            return;
        }

        Vector3 vLastGridPos = GameManager.gameManager.PlayerDataPool.MissionGridLastPos;
        if (vLastGridPos == Vector3.zero)
        {
            return;
        }
        Vector3 vCurGridPos = m_MissionsList.transform.position;
        vOffset = vCurGridPos - vLastGridPos;

#if UNITY_WP8
		vOffset.x = 0;
		vOffset.z = 0;

		Invoke("DoRepotionLater",0.02f);
#else



//        m_dragPanel.MoveAbsolute(-vOffset);

#endif

    }

    void DoRepotionLater()
    {
        if (m_dragPanel != null)
        {
            m_dragPanel.ResetPosition();
//            m_dragPanel.MoveAbsolute(-vOffset);
        }

    }

    void DoRepositionForce()
    {
        if (m_MissionsList == null)
            return;

        m_MissionsTopList.enabled = false;
        m_MissionsList.enabled = false;

        //MissionItemLogic[] children = m_MissionsList.GetComponentsInChildren<MissionItemLogic>();

        float curPos = 0;

        Vector3 everyPos = new Vector3(0f, 0f, 0f);

        Transform myTrans = m_MissionsList.gameObject.transform;

        int MaxCount = myTrans.childCount;

        List<int> sortedIds = new List<int>();

        // 优先已经完成得任务

        for (int i = 0; i < MaxCount; ++i)
        {
            Transform everyTrans = myTrans.GetChild(i);
            MissionItemLogic missionLogic = everyTrans.gameObject.GetComponent<MissionItemLogic>();
            if (missionLogic != null)
            {
                int nMissionID = missionLogic.MissionID;
                MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
                if (misState == MissionState.Mission_Completed)
                {
                    everyPos.x = everyTrans.localPosition.x;
                    everyPos.z = everyTrans.localPosition.z;
                    everyPos.y = curPos;
                    everyTrans.localPosition = everyPos;

                    curPos -= m_MissionsList.cellHeight;

                    sortedIds.Add(i);
                }
            }
        }

        // 再次主线任务
        for (int i = 0; i < MaxCount; ++i)
        {
            if (sortedIds.Contains(i))
            {
                continue;
            }
            Transform everyTrans = myTrans.GetChild(i);
            MissionItemLogic missionLogic = everyTrans.gameObject.GetComponent<MissionItemLogic>();
            if (missionLogic != null)
            {
                int nMissionID = missionLogic.MissionID;

                if ((int)MISSIONTYPE.MISSION_MAIN == GameManager.gameManager.MissionManager.GetMissionType(nMissionID))
                {
                    everyPos.x = everyTrans.localPosition.x;
                    everyPos.z = everyTrans.localPosition.z;
                    everyPos.y = curPos;
                    everyTrans.localPosition = everyPos;

                    curPos -= m_MissionsList.cellHeight;

                    sortedIds.Add(i);
                }
            }
        }


        for (int i = 0; i < MaxCount; ++i)
        {
            if (sortedIds.Contains(i))
            {
                continue;
            }

            Transform everyTrans = myTrans.GetChild(i);
            everyPos.x = everyTrans.localPosition.x;
            everyPos.z = everyTrans.localPosition.z;
            everyPos.y = curPos;
            everyTrans.localPosition = everyPos;

            curPos -= m_MissionsList.cellHeight;
        }

        m_dragPanel.ResetPosition();

    }

    // 组队跟随相关的
    public GameObject m_ButtonTeamFollow; // 组队跟随按钮
    public UISprite m_TeamFollowState;  // 组队跟随 状态图片 非跟随状态："false"，跟随状态："true"

    public void UpdateButtonTeamFollow()
    {
        bool bIsShow = false;
        string strTeamFollowState = "";
        // 有队伍
        if (GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (mainPlayer != null)
            {
                if (mainPlayer.IsTeamLeader())  // 队长
                {
                    bIsShow = true;
                }
                else if (mainPlayer.IsInTeamFollow) //  队员 跟随下
                {
                    bIsShow = true;
                }

                // 组队跟随状态图片
                strTeamFollowState = (mainPlayer.IsInTeamFollow ? "gensui01" : "gensui");
            }
        }

        if (m_ButtonTeamFollow && m_TeamFollowState)
        {
            m_ButtonTeamFollow.gameObject.SetActive(bIsShow);
            m_TeamFollowState.spriteName = strTeamFollowState;
        }
    }

    void OnTeamFollow()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer == null)
        {
            return;
        }

        // 没队伍
        if (GlobeVar.INVALID_ID == GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            return;
        }

        if (mainPlayer.IsTeamLeader())  // 队长
        {
            // 组队跟随状态
            if (false == mainPlayer.IsInTeamFollow)
            {
                mainPlayer.ReqTeamFollow();// 请求跟随
            }
            else
            {
                // 解散
                mainPlayer.AskLeaveTeamFollow();
            }
        }
        else// 队员
        {
            // 离开跟随
            mainPlayer.AskLeaveTeamFollow();
        }
    }
    public  void SetPaoHuanAwardItemID()
    {
        for (int i = 0; i < m_MissionItemsList.Count; ++i)
        {
            if (null != m_MissionItemsList[i])
            {
                if (m_MissionItemsList[i] && GameManager.gameManager.MissionManager.GetMissionType(m_MissionItemsList[i].MissionID) == (int)MISSIONTYPE.MISSION_PAOHUAN)
                {
                    m_MissionItemsList[i].SetAwardItemID(GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID());
                }
            }
        }
    }

    public void SortMissionItem()
    {
        for (int nIndex = 0; nIndex < m_MissionItemsList.Count; nIndex++)
        {
            if (GameManager.gameManager.MissionManager.GetMissionType(m_MissionItemsList[nIndex].MissionID) == (int)MISSIONTYPE.MISSION_MAIN)
            {
                m_MissionItemsList[nIndex].name = "MissionItem" + 0;
            }
            else
            {
                m_MissionItemsList[nIndex].name = "MissionItem" + (nIndex + 1);
            }
        }
        m_MissionsList.repositionNow = true;
    }
	//======================================
	private bool m_isShowVictorNewGuild = false ;
	private void SetVictorNewGuild( int missionId) 
	{
		if (missionId == 327 || missionId == 328) 
		{
			m_isShowVictorNewGuild = true ;
		}
	}
	public bool GetVictorNewGuild()
	{
		bool isShowVictorNewGuild = m_isShowVictorNewGuild;
		m_isShowVictorNewGuild = false;

		return isShowVictorNewGuild;
	}
    public void OpenNearPlayerWindow()
    {
        RelationLogic.m_OpenWay = RelationLogic.OPEN_WAY.MISSION_TEAM;
        RelationLogic.OpenTeamWindow(RelationTeamWindow.TeamTab.TeamTab_NearPlayer);
    }
}
