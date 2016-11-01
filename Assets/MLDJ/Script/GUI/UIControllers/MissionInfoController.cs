/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   9:49
	filename: 	MissionInfoController.cs
	author:		王迪
	
	purpose:	从MissionDialogAndLeftTabsLogic分离，单独显示任务对话框
*********************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;
using Games.Mission;
using Games.GlobeDefine;
using Module.Log;
using Games.Item;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class MissionInfoController : UIControllerBase<MissionInfoController> {

    public GameObject m_GameObj;
    public UIGrid m_MissionItemGrid;
    public ItemSlotLogic[] m_MissionBonusItemSlot;
    public GameObject m_AcceptButton;         //接受按钮
    public GameObject m_CompleteButton;       //完成按钮
	public GameObject m_NoAcceptButton;       //放弃按钮
    public GameObject m_MissionInfoAward;   // 任务奖励信息

    //任务经济系统奖励（经验，金钱，绑定元宝三选二）
    private const int MaxItemNum = 7;    

    private int m_CurMissionID;			//当前任务ID
    private MissionUIType m_MissionType = MissionUIType.TYPE_NONE;
    private int m_CurTalkID = -1;

    public enum MissionUIType
    {
        TYPE_NONE,
        TYPE_ACCETP, 
        TYPE_COMPLETE,
    }

    public class MissionUIInfo
    {
        public MissionUIInfo(int missionID, MissionUIType type)
        {
            _nMissionID = missionID;
            _type = type;
        }
        public int _nMissionID;
        public MissionUIType _type;
    }
    public static void ShowNpcDialogUI(int nDialogID)
    {
        UIManager.ShowUI(UIInfo.MissionInfoController, OnShowNpcDialogUI, nDialogID);

    }

    static void OnShowNpcDialogUI(bool bSuccess, object dialogID)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load MissionInfoController fail");
            return;
        }

        int nDialogID = (int)dialogID;

        if (null != MissionInfoController.Instance())
        {
            MissionInfoController.Instance().DoShowNPCDialog(nDialogID);
        }
    }
    /// <summary>
    /// 显示对话框
    /// </summary>
    /// <param name='bMission'>
    /// 是否是任务
    /// </param>
    /// <param name='nDialogId'>
    /// 任务ID/对白ID
    /// </param>
    public static void ShowMissionDialogUI(int nMissionID)
    {
        Tab_MissionBase table = TableManager.GetMissionBaseByID(nMissionID, 0);
        if (table != null)
        {
            // NPC 距离判断
            Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
            if (TargetNpc == null)
            {
//				LogModule.ErrorLog("Can not find DialogCore's CareNPC");
                return;
            }

            if (!TargetNpc.IsHaveMission(nMissionID))
			{
				LogModule.ErrorLog("NPC {0} do not have mission {1}", TargetNpc.name, nMissionID);
                return;
			}

            // 是否已接取
            bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(nMissionID);
            MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
            if (isHaveMission && misState != MissionState.Mission_Failed)
            {
                if (MissionState.Mission_Completed == misState)
                {
                    if (table.CompleteDataID == TargetNpc.BaseAttr.RoleBaseID)
                    {
                        ShowMissionDialogUI(nMissionID, MissionInfoController.MissionUIType.TYPE_COMPLETE);
                    }
					else
					{
						// cunyi
						LogModule.ErrorLog("Mission {0} completeDataID {1} dos not match with targetNPC's roleBaseID {2}", nMissionID, table.CompleteDataID, TargetNpc.BaseAttr.RoleBaseID);
					}
                }
				else
				{
					// cunyi
					LogModule.ErrorLog("Mission {0} 's state {1} is not complete", nMissionID, misState);
				}

            }
            else
            {
                bool isCanAcceptMission = GameManager.gameManager.MissionManager.CanAcceptMission(nMissionID);
                if (isCanAcceptMission)
                {
                    if (table.AcceptDataID == TargetNpc.BaseAttr.RoleBaseID)
                    {
                        ShowMissionDialogUI(nMissionID, MissionInfoController.MissionUIType.TYPE_ACCETP);
                    }
					else
					{
						// cunyi
						LogModule.ErrorLog("Mission {0} acceptDataID {1} dos not match with targetNPC's roleBaseID {2}", nMissionID, table.AcceptDataID, TargetNpc.BaseAttr.RoleBaseID);
					}
                }
				else
				{
					// cunyi
					LogModule.ErrorLog("Can not accept mission {0}", nMissionID);
				}
            }
        }
		else
		{
			LogModule.ErrorLog("Can not find missionID {0} in Tab_MissionBase", nMissionID);
		}

    }

#if BOBJOYSTICK
    void RefreshJoyGUI(MissionUIType type)
    {
        System.Collections.Generic.List<GameObject> m_uiItems = new System.Collections.Generic.List<GameObject>();
        Engine.JoyUI.BobJoyUINavigator m_JoyUINav;
        System.Collections.Generic.List<Transform> functionbuttons = new System.Collections.Generic.List<Transform>();
        functionbuttons.Add(this.m_AcceptButton.transform);
        functionbuttons.Add(this.m_CompleteButton.transform);
        for (int i = 0; i < functionbuttons.Count; ++i)
        {
            m_uiItems.Add(functionbuttons[i].gameObject);
        }
        if (type == MissionUIType.TYPE_COMPLETE)
        {
            m_JoyUINav = BobJoyUINavigator.SetJoyController(gameObject, m_uiItems, JoyControllerLogic.FindChild(transform, "MissionInfoCloseButton").gameObject, JoyControllerLogic.FindChild(transform, "MissionInfoComPleteButton").gameObject);
        }
        else if(type == MissionUIType.TYPE_ACCETP)
        {
            m_JoyUINav = BobJoyUINavigator.SetJoyController(gameObject, m_uiItems, JoyControllerLogic.FindChild(transform, "MissionInfoCloseButton").gameObject, JoyControllerLogic.FindChild(transform, "MissionInfoAcceptButton").gameObject);
        }
        else
        {
            m_JoyUINav = BobJoyUINavigator.SetJoyController(gameObject, m_uiItems, JoyControllerLogic.FindChild(transform, "MissionInfoCloseButton").gameObject, null);
        }
        
    }
#endif
    public static void ShowMissionDialogUI(int nMissionID, MissionUIType type)
    {
        MissionUIInfo curInfo = new MissionUIInfo(nMissionID, type);
        UIManager.ShowUI(UIInfo.MissionInfoController, OnShowMissionDialogUI, curInfo);
        
    }

    static void OnShowMissionDialogUI(bool bSuccess, object dialogID)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load MissionInfoController fail");
            return;
        }

        MissionUIInfo curInfo = (MissionUIInfo)dialogID;

        if (null != MissionInfoController.Instance() && curInfo != null)
        {
            MissionInfoController.Instance().MissionUI(curInfo._nMissionID, curInfo._type);
        }
    }

    void Awake()
    {
        SetInstance(this);
    }
	// Use this for initialization
	void Start () {
        if (m_GameObj)
        {
            m_GameObj.SetActive(true);
        }
	}

    // Update is called once per frame
    void FixedUpdate()
    {
        if (Time.frameCount % 15 != 0)
        {
            if (gameObject.activeSelf)
            {
                if (false == Singleton<DialogCore>.GetInstance().IsInDialogArea())
                {
                    OnCloseClick();
                }
            }
        }
    }

    void OnDisable()
    {
        CleanUp();
		// 同时关闭对话界面
		UIManager.CloseUI(UIInfo.StoryDialogRoot);

    }

    void OnDestroy()
    {
        SetInstance(null);
    }

    void CleanUp()
    {
		if (m_MissionInfoAward && m_AcceptButton && m_CompleteButton && m_NoAcceptButton)
        {
            m_MissionInfoAward.SetActive(false);
            m_AcceptButton.SetActive(false);
            m_CompleteButton.SetActive(false);
			m_NoAcceptButton.SetActive(false);
        }

        for (int i = 0; i < m_MissionBonusItemSlot.Length; i++)
        {
            m_MissionBonusItemSlot[i].gameObject.SetActive(false);
        }

        if (m_MissionItemGrid)
        {
            m_MissionItemGrid.Reposition();
        }

        m_CurMissionID = GlobeVar.INVALID_ID;
        m_MissionType = MissionUIType.TYPE_NONE;

        if ( m_CurTalkID > 0 )
        {
            GameManager.gameManager.SoundManager.StopSoundEffect(m_CurTalkID);
            m_CurTalkID = -1;
        }
    }

    void DoShowNPCDialog(int nDialogID)
    {
        // 先清理
        CleanUp();

        Tab_NpcDialog DialogLine = TableManager.GetNpcDialogByID(nDialogID, 0);
        if (DialogLine != null)
        {
            m_MissionInfoAward.SetActive(false);
            m_AcceptButton.SetActive(false);
            m_CompleteButton.SetActive(false);
			m_NoAcceptButton.SetActive(false);


			UIManager.CloseUI(UIInfo.MissionInfoController);
			StoryDialogLogic.ShowMissionStory(StrDictionary.GetClientString_WithNameSex(DialogLine.Dialog), true, true);
        }

        GameManager.gameManager.SoundManager.PlaySoundEffect(128);

    }

    // 接任务和交任务UI
    public void MissionUI(int nMissionID, MissionUIType type)
    {
        // 先清理
        CleanUp();

        if (nMissionID < 0)
        {
			LogModule.ErrorLog("MissionID: {0} can not less then 0", nMissionID);
            return;
        }
        m_CurMissionID = nMissionID;
        Tab_MissionDictionary MDLine = TableManager.GetMissionDictionaryByID(nMissionID, 0);
        if (MDLine == null)
        {
			LogModule.ErrorLog("Can not find MissionDictionary {0}", nMissionID);
            return;
        }

        m_MissionType = type;
        if (type == MissionUIType.TYPE_ACCETP)
        {
            m_AcceptButton.SetActive(true);
            m_CompleteButton.SetActive(false);
            m_MissionInfoAward.SetActive(true);

			StoryDialogLogic.ShowMissionStory(StrDictionary.GetClientString_WithNameSex(MDLine.MissionDesc), false, false);

            m_CurTalkID = MDLine.AcceptTalkID;
            GameManager.gameManager.SoundManager.PlaySoundEffect(m_CurTalkID);
        }
        else if (type == MissionUIType.TYPE_COMPLETE)
        {
            m_AcceptButton.SetActive(false);
            m_CompleteButton.SetActive(true);
            m_MissionInfoAward.SetActive(true);

			StoryDialogLogic.ShowMissionStory(StrDictionary.GetClientString_WithNameSex(MDLine.MissionDoneDesc), false, false);
        }    

        Tab_MissionBase misLine = TableManager.GetMissionBaseByID(nMissionID, 0);
        if (misLine == null)
        {
			LogModule.ErrorLog("Can not find missionBase {0}", nMissionID);
            return ;
        }

		if(misLine.MissionType==(int)MISSIONTYPE.MISSION_BRANCH && type == MissionUIType.TYPE_ACCETP)
		{
			m_NoAcceptButton.SetActive(true);
		}
		else
		{
			m_NoAcceptButton.SetActive(false);
		}

        if (misLine.BonusID > -1)
        {
            //显示奖励内容
            Tab_MissionBonus bonusTab = TableManager.GetMissionBonusByID(misLine.BonusID, 0);
            if (bonusTab == null)
			{
				LogModule.ErrorLog("Can not find missionBonus {0}", misLine.BonusID);
			}
			else
            {
                // 最多一共7个奖励 按顺序显示 物品（最多4个） 玩家经验 宠物经验 金钱

                int currentAwardItemIdx = 0;

                // 物品
                if (bonusTab.getToolIDCount() > 0)
                {
                    for (int i = 0; i < bonusTab.getToolIDCount(); i++)
                    {
                        Tab_CommonItem commonItem = TableManager.GetCommonItemByID(bonusTab.GetToolIDbyIndex(i), 0);
                        if (commonItem != null && bonusTab.GetToolNumbyIndex(i) > 0 && currentAwardItemIdx < m_MissionBonusItemSlot.Length)
                        {
                            int nItemCount = bonusTab.GetToolNumbyIndex(i);
                            m_MissionBonusItemSlot[currentAwardItemIdx].gameObject.SetActive(true);
                            m_MissionBonusItemSlot[currentAwardItemIdx].InitInfo_Item(commonItem.Id, ItemSlotLogic.OnClickOpenTips, nItemCount > 1 ? nItemCount.ToString() : "", nItemCount > 1);
                            currentAwardItemIdx += 1;
                        }
                    }
                }

                // 玩家经验
                if (bonusTab.Exp > 0 && currentAwardItemIdx < m_MissionBonusItemSlot.Length)
                {
                    m_MissionBonusItemSlot[currentAwardItemIdx].gameObject.SetActive(true);
                    m_MissionBonusItemSlot[currentAwardItemIdx].InitInfo_PlayerExp(bonusTab.Exp.ToString());
                    currentAwardItemIdx += 1;
                }

                // 宠物经验
                if (bonusTab.FellowExp > 0 && currentAwardItemIdx < m_MissionBonusItemSlot.Length)
                {
                    m_MissionBonusItemSlot[currentAwardItemIdx].gameObject.SetActive(true);
                    m_MissionBonusItemSlot[currentAwardItemIdx].InitInfo_FellowExp(bonusTab.FellowExp.ToString());
                    currentAwardItemIdx += 1;
                }
                
                // 金钱 金币和绑定点券 一般不会共存
                if (bonusTab.Money > 0 && currentAwardItemIdx < m_MissionBonusItemSlot.Length)
                {
                    m_MissionBonusItemSlot[currentAwardItemIdx].gameObject.SetActive(true);
                    m_MissionBonusItemSlot[currentAwardItemIdx].InitInfo_Coin(null, bonusTab.Money.ToString(), true);
                    currentAwardItemIdx += 1;
                }
                if (bonusTab.BindYuanBao > 0 && currentAwardItemIdx < m_MissionBonusItemSlot.Length)
                {
                    m_MissionBonusItemSlot[currentAwardItemIdx].gameObject.SetActive(true);
                    m_MissionBonusItemSlot[currentAwardItemIdx].InitInfo_YuanbaoBind(null, bonusTab.BindYuanBao.ToString(), true);
                    currentAwardItemIdx += 1;
                }

                if (m_MissionItemGrid)
                {
                    m_MissionItemGrid.Reposition();
                }
            }
        }

        GameManager.gameManager.SoundManager.PlaySoundEffect(128);
#if BOBJOYSTICK
        RefreshJoyGUI(type);
#endif
    }

    /// <summary>
    /// 接受任务
    /// </summary>
    void MissionAccept()
    {
        NewPlayerGuidLogic.CloseWindow();
        GameManager.gameManager.MissionManager.AcceptMission(m_CurMissionID);

        UIManager.CloseUI(UIInfo.MissionInfoController);
        GameManager.gameManager.SoundManager.PlaySoundEffect(135);
    }
    /// <summary>
    /// 完成任务
    /// </summary>
    void MissionComplete()
    {
        NewPlayerGuidLogic.CloseWindow();
        GameManager.gameManager.MissionManager.CompleteMission(m_CurMissionID);

        UIManager.CloseUI(UIInfo.MissionInfoController);
        GameManager.gameManager.SoundManager.PlaySoundEffect(135);
    }

    void OnCloseClick()
    {
        if (m_MissionType == MissionUIType.TYPE_ACCETP)
        {
            GameManager.gameManager.MissionManager.AcceptMission(m_CurMissionID);
        }

        UIManager.CloseUI(UIInfo.MissionInfoController);
    }  

	void MissionNoAccept()
	{
		UIManager.CloseUI(UIInfo.MissionInfoController);
	}
}
