//********************************************************************
// 文件名: RelationLogic.cs
// 全路径：	\Script\GUI\RelationLogic.cs
// 描述: 玩家关系界面,显示玩家好友，黑名单，邮件和队伍信息
// 作者: lijia
// 创建时间: 2014-01-07
//********************************************************************
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using Games.GlobeDefine;
using Games.LogicObj;
using Module.Log;

public class RelationLogic : MonoBehaviour 
{
    private static RelationLogic m_Instance = null;
    public static RelationLogic Instance()
    {
        return m_Instance;
    }

    public enum OPEN_WAY
    {
        MENU_RELATION,
        MISSION_TEAM,
    }

    //外部控件
    //public UISprite m_FriendTab;                    //好友分页专属界面
    //public UISprite m_TeamTab;                      //组队分页专属界面
    //public UISprite m_MailTab;                      //邮件分页专属界面
    //public GameObject PlayerFindWindow;             //好友分页好友查找功能专属界面
    //public UIGrid m_PlayerListBG;                   //好友的列表背景
    public TabController m_TabController;
    public RelationTeamWindow m_TeamWindow;

    public static OPEN_WAY m_OpenWay = OPEN_WAY.MENU_RELATION;
  
    public static void OpenMailRecvWindow()
    {
        UIManager.ShowUI(UIInfo.RelationRoot, OnShowRelationWindow); 
    }

    public static void OpenTeamWindow(RelationTeamWindow.TeamTab Teamtab)
    {
        UIManager.ShowUI(UIInfo.RelationRoot, OnShowTeamWindow, Teamtab); 
    }

    void Awake()
    {
		m_Instance = this;
		ShowNewEmailBigRed ();
    }


    void OnDestroy()
    {
        m_Instance = null;
        OnTryCloseMenuBarRoot();
    }

	/*void OnEnable()
	{
		ShowNewEmailBigRed ();
	}  */
    static void OnShowRelationWindow(bool bSuccess, object param)
    {
        if (null != RelationLogic.Instance())
            RelationLogic.Instance().ShowMailWindow();
    }

    void ShowMailWindow()
    {
        m_TabController.ChangeTab("Button_Mail");
    }  

    static void OnShowTeamWindow(bool bSuccess, object param)
    {
        RelationTeamWindow.TeamTab teamtab = (RelationTeamWindow.TeamTab)param;
        if (null != RelationLogic.Instance())
            RelationLogic.Instance().ShowTeamWindow(teamtab);
    }

    void ShowTeamWindow(RelationTeamWindow.TeamTab Teamtab)
    {
        m_TabController.ChangeTab("Button_Team");
        if (m_TeamWindow != null)
        {
            m_TeamWindow.ChangeTeamTab(Teamtab);
        }
    }

	//Other UI Open Nearby Player
	public void OpenNearByPlayerFrame()
	{
        m_TabController.ChangeTab("Button_Team");
	}
    
    //关闭界面
    void OnClose()
    {
        UIManager.CloseUI(UIInfo.RelationRoot);
    }

    //public void UpdateSelectState(PlayerListItemLogic selectItem)
    //{
    //    m_TabController.GetTabButton("Button_Friend").targetObject.GetComponent<RelationFriendWindow>().UpdateSelectState(selectItem); 
    //}
   //=======================================
	public UISprite m_NewEmailBigRed ;
	public void ShowNewEmailBigRed()
	{
		m_NewEmailBigRed.gameObject.SetActive (false);

		foreach (System.UInt64 key in MailData.UserMailMap.Keys)
		{
      if (!MailData.UserMailMap[key].bReaded || MailData.UserMailMap[key].itemID >= 0 || MailData.UserMailMap[key].moneyCount > 0) 
      {
        m_NewEmailBigRed.gameObject.SetActive(true);
        return;
      }
        }
    }
    private void OnTryCloseMenuBarRoot()
    {
        if (IsTeamTransClose)
        {
            m_IsTeamTransClose = false;
            if (RelationLogic.m_OpenWay != RelationLogic.OPEN_WAY.MISSION_TEAM)
            {
                if (MenuBarLogic.Instance() != null && MenuBarLogic.Instance().m_OffsetTrans.localScale == Vector3.one)
                {
                    MenuBarLogic.Instance().CloseWindow();
                }
            }
        }
    }
    public bool IsTeamTransClose
    {
        get { return m_NewEmailBigRed; }
        set { m_IsTeamTransClose = value; }
    }
    private bool m_IsTeamTransClose = false;
}
