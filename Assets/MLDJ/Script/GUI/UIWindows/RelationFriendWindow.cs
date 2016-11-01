using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using System;
using Games.GlobeDefine;
using Module.Log;
using GCGame.Table;

public class RelationFriendWindow : MonoBehaviour {

    private static RelationFriendWindow m_Instance = null;
    public static RelationFriendWindow Instance()
    {
        return m_Instance;
    }

    public GameObject friendListGrid;
    public TabController m_TabController;
    public RelationButtionWindowLogic m_ButtonWindow;

    public UILabel      m_lableFriendNum;
    public GameObject   m_tabSNSWindow;


    private PlayerListItemLogic m_SelectPlayerItem;
    private int m_TrailSceneClass = GlobeVar.INVALID_ID;
    private int m_TrailSceneInst = GlobeVar.INVALID_ID;
    private int m_TrailPosX = 0;
    private int m_TrailPosZ = 0;

	void Awake () {
        m_Instance = this;
        m_TabController.delTabChanged = OnTabChanged;
        if (PlatformHelper.IsChannelTW())
        {
            m_tabSNSWindow.SetActive(true);
        }
	}
	
	void OnEnable () {
        GUIData.delFriendDataUpdate += UpdateData;

        m_SelectPlayerItem = null;
        SelectPlayerListItem(null);
        //UpdateData();
        //向服务器申请更新好友列表
        m_TabController.ChangeTab("0");
      
        //打开的时候默认为好友
        //UpdateData();
	}

    void OnDisable()
    {
        GUIData.delFriendDataUpdate -= UpdateData;
        m_SelectPlayerItem = null;
        SelectPlayerListItem(null);
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void UpdateData()
    {
		if (m_TabController.GetHighlightTab () == null)
					return;

        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
		//update的时候先cleangrid，注释掉了update时候的clean。在note3上会出现闪UI的现象。
		Utils.CleanGrid(friendListGrid);
		hideFindFriendWin ();

		// 隐藏 批量删除的相关
		m_lotDeleteBtn.SetActive (false);
		m_Enemydelete.gameObject.SetActive (false);
		m_isClickLotDelete = false;

        SelectPlayerListItem(null);
        if (curTab.name == "0")
        {
            UpdateFriendListData();
        }
        else if (curTab.name == "1")
        {
            UpdateBlackList();
        }
        else if (curTab.name == "2")
        {
            UpdateHateList( );
        }
		else if( curTab.name == "3" )
		{

		}
        friendListGrid.GetComponent<UIGrid>().Reposition();
   
    }
    void UpdateFriendListData()
    {
        UIManager.LoadItem(UIInfo.PlayerListItem, OnLoadFriendItem);
		_initCablePlayerList ();
    }

    void OnLoadFriendItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load friend item fail");
            return;
        }
        Utils.CleanGrid(friendListGrid);

        int nPlayerListItemIndex = 0;
		GameManager.gameManager.PlayerDataPool.FriendList.SortByRelationState ((int)CharacterDefine.RELATION_TYPE.ONLINE);
        //先排在线的
        foreach (KeyValuePair<UInt64, Relation> _relation in GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList)
        {
//            if (_relation.Key == GlobeVar.INVALID_GUID)
//            {
//                continue;
//            }
//            //如果离线，则不排
//            if (_relation.Value.State == (int)CharacterDefine.RELATION_TYPE.OFFLINE)
//            {
//                continue;
//            }
            //GameObject newPlayerListItem = Utils.BindObjToParent(resItem, friendListGrid, nPlayerListItemIndex.ToString());
           //newPlayerListItem.GetComponent<PlayerListItemLogic>().InitPlayerListItemInfoFriend(_relation.Value);
            PlayerListItemLogic PlayerListItem = PlayerListItemLogic.CreateItem(friendListGrid, resItem, nPlayerListItemIndex.ToString(), this);
            if (PlayerListItem == null)
            {
                continue;
            }
            PlayerListItem.InitPlayerListItemInfoFriend(_relation.Value);
            if (m_SelectPlayerItem == null)
            {
                SelectPlayerListItem(PlayerListItem);
            }   
            nPlayerListItemIndex++;
        }

        //再排离线的
//        foreach (KeyValuePair<UInt64, Relation> _relation in GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList)
//        {
//            if (_relation.Key == GlobeVar.INVALID_GUID)
//            {
//                continue;
//            }
//
//            //如果在线，则不排
//            if (_relation.Value.State == (int)CharacterDefine.RELATION_TYPE.ONLINE)
//            {
//                continue;
//            }
//
//            //GameObject newPlayerListItem = Utils.BindObjToParent(resItem, friendListGrid, nPlayerListItemIndex.ToString());
//            //newPlayerListItem.GetComponent<PlayerListItemLogic>().InitPlayerListItemInfoFriend(_relation.Value);
//            PlayerListItemLogic PlayerListItem = PlayerListItemLogic.CreateItem(friendListGrid, resItem, nPlayerListItemIndex.ToString(), this);
//            if (PlayerListItem == null)
//            {
//                continue;
//            }
//            PlayerListItem.InitPlayerListItemInfoFriend(_relation.Value);
//            if (m_SelectPlayerItem == null)
//            {
//                SelectPlayerListItem(PlayerListItem);
//            }
//            nPlayerListItemIndex++;
//        }
        if (friendListGrid != null && friendListGrid.GetComponent<UIGrid>() != null)
        {
            friendListGrid.GetComponent<UIGrid>().Reposition();
        }       
        //显示好友人数
       // ShowFrinedNum(true);
		showFriendStr (0);
    }


    //刷新黑名单
    public void UpdateBlackList()
    {
        UIManager.LoadItem(UIInfo.PlayerListItem, OnLoadBlackItem);
    }

    void OnLoadBlackItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load friend item fail");
            return;
        }

        //Utils.CleanGrid(friendListGrid);
        
        //填充好友信息
        int nPlayerListItemIndex = 0;
		GameManager.gameManager.PlayerDataPool.BlackList.SortByRelationState ((int)CharacterDefine.RELATION_TYPE.ONLINE);
        foreach (KeyValuePair<UInt64, Relation> _relation in GameManager.gameManager.PlayerDataPool.BlackList.RelationDataList)
        {
            //GameObject newPlayerListItem = Utils.BindObjToParent(resItem, friendListGrid, nPlayerListItemIndex.ToString());
            //newPlayerListItem.GetComponent<PlayerListItemLogic>().InitPlayerListItemInfoBlack(_relation.Value);
            PlayerListItemLogic PlayerListItem = PlayerListItemLogic.CreateItem(friendListGrid, resItem, nPlayerListItemIndex.ToString(), this);
            if (PlayerListItem == null)
            {
                continue;
            }
            PlayerListItem.InitPlayerListItemInfoBlack(_relation.Value);
            if (m_SelectPlayerItem == null)
            {
                SelectPlayerListItem(PlayerListItem);
            }
            nPlayerListItemIndex++;
        }

        friendListGrid.GetComponent<UIGrid>().Reposition();
        
        //隐藏好友人数
		showFriendStr (1);
		hideOtherWindows(); 
        //ShowFrinedNum(false);
    }

    public void UpdateHateList()
    {
        UIManager.LoadItem(UIInfo.PlayerListItem, OnLoadHateItem);
    }

    void OnLoadHateItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load friend item fail");
            return;
        }

        //填充好友信息
        int nPlayerListItemIndex = 0;
		GameManager.gameManager.PlayerDataPool.HateList.SortByRelationState ((int)CharacterDefine.RELATION_TYPE.ONLINE);
        foreach (KeyValuePair<UInt64, Relation> _relation in GameManager.gameManager.PlayerDataPool.HateList.RelationDataList)
        {
            PlayerListItemLogic PlayerListItem = PlayerListItemLogic.CreateItem(friendListGrid, resItem, nPlayerListItemIndex.ToString(), this);
            if (PlayerListItem == null)
            {
                continue;
            }
            PlayerListItem.InitPlayerListItemInfoHate(_relation.Value);
            if (m_SelectPlayerItem == null)
            {
                SelectPlayerListItem(PlayerListItem);
            }
            nPlayerListItemIndex++;
        }

        friendListGrid.GetComponent<UIGrid>().Reposition();
		m_lotDeleteBtn.SetActive (true);

		
        //隐藏好友人数
		showFriendStr(2);
		hideOtherWindows(); 
       // ShowFrinedNum(false);
    }


    // 切换标签页响应
    void OnTabChanged(TabButton curButton)
    {
        UpdateData();
        if (curButton.name == "0")
        {
            ReqUpdateFriendUserInfo();
        }
        if (curButton.name == "1")
        {
            ReqUpdateBlackUserInfo();
        }
        if (curButton.name == "2")
        {
            ReqUpdateHateUserInfo();
        }
        if (curButton.name == "3")
        {
          if (m_IsShowFindFriendWin) {
            hideFindFriendWin();
          } else {
            showFindFriendWin();
          }
          m_IsShowFindFriendWin = !m_IsShowFindFriendWin;
			//  查找玩家 
			//showFindPlayerWin();
           // SelectPlayerListItem(null);
		  //  查找玩家 
			//ReqUpdateFinderUserInfo();
        }
    }

    //请求更新好友列表
    void ReqUpdateFriendUserInfo()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            CG_REQ_FRIEND_USERINFO packet = (CG_REQ_FRIEND_USERINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_FRIEND_USERINFO);
            packet.Guid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
            packet.SendPacket();
            MessageBoxLogic.OpenWaitBox(1290, 1, 0);
        }
    }

    void ReqUpdateBlackUserInfo()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            CG_REQ_BLACK_USERINFO packet = (CG_REQ_BLACK_USERINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_BLACK_USERINFO);
            packet.Guid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
            packet.SendPacket();
            MessageBoxLogic.OpenWaitBox(1290, 1, 0);
        }
    }

    void ReqUpdateHateUserInfo()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            CG_REQ_HATE_USERINFO packet = (CG_REQ_HATE_USERINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_HATE_USERINFO);
            packet.Guid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
            packet.SendPacket();
            MessageBoxLogic.OpenWaitBox(1290, 1, 0);
        }
    }

    //public void UpdateSelectState(PlayerListItemLogic selectItem)
    //{
    //    foreach (PlayerListItemLogic item in friendListGrid.GetComponentsInChildren<PlayerListItemLogic>())
    //    {
    //        if (null == selectItem || selectItem != item)
    //        {
    //            item.OnSelected(false);
    //        }
    //    }
    //}

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
            m_ButtonWindow.SetPlayerListItemInfo(selectItem.GUID, selectItem.TeamID, selectItem.m_PlayerName, selectItem.ItemType);
        }
    }

    public void HandleRetTrail(int nSceneClass, int nSceneInst, int nPosX, int nPosZ)
    {
        m_TrailSceneClass = nSceneClass;
        m_TrailSceneInst = nSceneInst;
        m_TrailPosX = nPosX;
        m_TrailPosZ = nPosZ;

        string strContent = "";
        Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(nSceneClass, 0);
        if (tabSceneClass != null)
        {
            if (tabSceneClass.Type != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_COPYSCENE &&
                nSceneClass != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JIANYU)
            {
                strContent = StrDictionary.GetClientDictionaryString("#{3071}", tabSceneClass.Name, nSceneInst + 1);
                MessageBoxLogic.OpenOKCancelBox(strContent, "", TrailOK, TrailCancel);
            }
            else
            {
                strContent = StrDictionary.GetClientDictionaryString("#{3075}", tabSceneClass.Name, nSceneInst + 1);
                MessageBoxLogic.OpenOKCancelBox(strContent, "", TrailCancel);
            } 
        }               
    }

    void TrailOK()
    {
        if (RelationLogic.Instance() != null)
        {
            RelationLogic.Instance().IsTeamTransClose = true;
        }
        UIManager.CloseUI(UIInfo.RelationRoot);
        SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.TRAIL, 0, m_TrailSceneClass, m_TrailSceneInst, m_TrailPosX, m_TrailPosZ);
        
//         if (PlayerFrameLogic.Instance() != null)
//         {
//             PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
//         }
    }

    void TrailCancel()
    {
        m_TrailSceneClass = GlobeVar.INVALID_ID;
        m_TrailSceneInst = GlobeVar.INVALID_ID;
        m_TrailPosX = 0;
        m_TrailPosZ = 0;
    }

    //显示好友数量
    void ShowFrinedNum(bool bShow)
    {
        if (null == m_lableFriendNum)
        {
            return;
        }

        m_lableFriendNum.gameObject.SetActive(bShow);

        //如果显示， 则更新好友数量
        if (bShow)
        {
            int nFrindNum = 0;
            nFrindNum = GameManager.gameManager.PlayerDataPool.FriendList.GetRelationNum();

            m_lableFriendNum.text = StrDictionary.GetClientDictionaryString("#{3295}", nFrindNum, 99);
        }
    }

    void OnClickShareFB()
    {
        CG_USER_BEHAVIOR packet = (CG_USER_BEHAVIOR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USER_BEHAVIOR);
        packet.Type = 1;
        packet.SendPacket();
        PlatformHelper.ShareToFB("");
    }
	   
	//=======================================\
	private void  _initCablePlayerList()
	{
		hideOtherWindows(); 
		hideFindFriendWin ();
		_clearDelHateList ();
		_resetHateBtnNum ();
	}
	//=======================================\
	//  窗口
	public GameObject m_OtherWindows ;
	private UInt64 m_playerGuid = GlobeVar.INVALID_GUID ;
	private string m_playerName = "" ;

	// 公用
	public UIImageButton m_knowOtherBtn ; // 查看信息

	//  好友的 
	public UIImageButton m_flowerBtn ; 		// 送花	
	public UIImageButton m_eggBtn ; 		    // 扔鸡蛋
	public UIImageButton m_deleteFriendBtn ; 		    // 删除好友

	// 黑名单 ,仇人 
	public UIImageButton m_secretChatBtn ; // 私聊 
  	public UIGrid m_ButtonGrid;
	public void showOtherWin( UInt64 guid,string name)
	{
   		m_OtherWindows.SetActive(true);
		m_playerGuid =  guid ;
		m_playerName = name;

		// 好友 
		if (m_cureType == 0)
		{
            m_flowerBtn.gameObject.SetActive(GlobalData.IsOpenCharmRankFlag);
            m_eggBtn.gameObject.SetActive(GlobalData.IsOpenCharmRankFlag);
			m_deleteFriendBtn.gameObject.SetActive(true) ;

			m_secretChatBtn.gameObject.SetActive(false) ;
		}

		// 黑名单 仇人 
		else if(  m_cureType == 1 || m_cureType == 2)
		{
			m_secretChatBtn.gameObject.SetActive(true) ;

			m_flowerBtn.gameObject.SetActive(false);
			m_eggBtn.gameObject.SetActive(false) ;
			m_deleteFriendBtn.gameObject.SetActive(false) ;
		}
    m_ButtonGrid.repositionNow = true;
	}

	public void hideOtherWindows()
	{
    m_OtherWindows.SetActive(false);
		m_playerGuid = GlobeVar.INVALID_GUID;
		m_playerName = "";
    m_ButtonGrid.repositionNow = true;
	}
	// 扔花
	public void onFlower()
	{
		if (m_playerGuid == GlobeVar.INVALID_GUID)
				return;

		if (m_playerGuid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
				return;

		FlowerEggWindow.ShowFlowerEgg (m_playerGuid,FlowerEggWindow.ShowType.FLOWER);
	}
	// 扔鸡蛋
	public void onEgg()
	{
		if (m_playerGuid == GlobeVar.INVALID_GUID)
			return;
		
		if (m_playerGuid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
			return;
		
		FlowerEggWindow.ShowFlowerEgg (m_playerGuid,FlowerEggWindow.ShowType.EGG);
	}

	// 删除好友
	public void onDeleteFriend()
	{
		//if( m_ItemType  ==  PlayerListItemType.FriendInfo)
		{
			string dicStr = StrDictionary.GetClientDictionaryString("#{5251}");
			MessageBoxLogic.OpenOKCancelBox(dicStr, "", DelFriendOK, DelFriendNO);
		}
	}

	public void DelFriendNO()
	{
	}
	// 发送服务器删除好友
		public void DelFriendOK()
	{
		if (null == Singleton<ObjManager>.GetInstance ().MainPlayer) 
		{
			return;
		}

		if (m_playerGuid == GlobeVar.INVALID_GUID) 
		{
			return;
		}
					
		if (GameManager.gameManager.PlayerDataPool.FriendList.IsExist (m_playerGuid)) 
		{
			Singleton<ObjManager>.GetInstance ().MainPlayer.ReqDelFriend (m_playerGuid);
		}
	}
	// 私聊
	public void onSecretChat()
	{
		if (GlobeVar.INVALID_GUID != m_playerGuid && m_playerName != "")
		{
			//发起私聊
			//未打开过则创建
			if (null == ChatInfoLogic.Instance())
			{
				UIManager.ShowUI(UIInfo.ChatInfoRoot, ShowChatInfoRootOver, m_playerName);
			}
		}
	}

	public void ShowChatInfoRootOver(bool bSuccess, object param)
	{
		if (bSuccess)
		{
			//发起私聊
			string PlayerName = param as string;
			if (null != ChatInfoLogic.Instance())
			{
				ChatInfoLogic.Instance().BeginChat(m_playerGuid, PlayerName);
			}
		}
	}
	// 查看信息
	public void onShowOtherPlayer()
	{
		if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			return;
		}
		if (GlobeVar.INVALID_GUID != m_playerGuid)
		{
			Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_playerGuid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_FRIEND);
		}
	}
	// ========================================\
	// 根据类型，判断显示文字
	public UILabel			m_friendNumStr ;
	private int 					m_cureType   = -1    ;
	private void  showFriendStr( int index )
	{
		// 0 ,好友 ，1 黑名单 ， 2 仇人
		if (index == 0) 
		{
			m_lableFriendNum.text = StrDictionary.GetClientDictionaryString ("#{3295}", GameManager.gameManager.PlayerDataPool.FriendList.GetRelationNum (), 99);
		} 

		else if( index == 1)
		{
			m_lableFriendNum.text  = "" ; //"黑名单人数 " + GameManager.gameManager.PlayerDataPool.BlackList.GetRelationNum ().ToString() ;
			//m_lableFriendNum.text = StrDictionary.GetClientDictionaryString ("#{3295}", GameManager.gameManager.PlayerDataPool.BlackList.GetRelationNum (), 99);
		}

		else if( index == 2 )
		{
			//m_lableFriendNum.text  = StrDictionary.GetClientDictionaryString ("#{5878}",  GameManager.gameManager.PlayerDataPool.HateList.GetRelationNum (), 99);
			m_lableFriendNum.text  = "仇人数量 " + GameManager.gameManager.PlayerDataPool.HateList.GetRelationNum ().ToString();
		}
		else
		{
			m_lableFriendNum.text = "";
		}

		m_cureType = index;
	}

	//========================================\
	// 仇人
	public UIPanel 		     m_Enemydelete ;
	public UILabel             m_deleteFriendLabel ;
	public GameObject       m_lotDeleteBtn ;  // 批量删除
	private bool 				 m_isClickLotDelete = false ;
	private List<UInt64>   m_delHateList = new List<UInt64>() ;

	// 取消批量删除
	public void onCancelDeletLotHate()
	{
		m_Enemydelete.gameObject.SetActive (false);

		if(null == friendListGrid)
		{
			return;
		}
		
		for (int i = 0, count = friendListGrid.transform.childCount; i < count; i++)
		{
			if( friendListGrid.transform.GetChild(i).gameObject != null && friendListGrid.transform.GetChild(i).gameObject.GetComponent<PlayerListItemLogic>() != null )
			{
				friendListGrid.transform.GetChild(i).gameObject.GetComponent<PlayerListItemLogic>().hideDeleteAllToggleBtn();
			}
		}
	}

	// 批量删除
	public void onDeleteLotHate()
	{
		hideOtherWindows ();

		if (m_isClickLotDelete == true)
				return;

		m_Enemydelete.gameObject.SetActive (true);

		if(null == friendListGrid)
		{
			return;
		}

		for (int i = 0, count = friendListGrid.transform.childCount; i < count; i++)
		{
			if( friendListGrid.transform.GetChild(i).gameObject != null && friendListGrid.transform.GetChild(i).gameObject.GetComponent<PlayerListItemLogic>() != null )
			{
				friendListGrid.transform.GetChild(i).gameObject.GetComponent<PlayerListItemLogic>().showDeleteAllToggleBtn();
			}
		}
		_clearDelHateList();
	}

	// 清空已经选择的批量删除愁人列表
	private void _clearDelHateList()
	{
		m_delHateList.Clear ();
	}
	private void _resetHateBtnNum()
	{
		m_deleteFriendLabel.text = "删除（" + m_delHateList.Count.ToString() + "）"  ;
	}
	// 记录删除仇人
	public void recordHateFriendGuid( UInt64 guid)
	{
		m_delHateList.Add (guid);
		_resetHateBtnNum ();
	}

	// 取消记录的删除仇人
	public void removeDelHateGuid(UInt64 guid1)
	{
		for (int i = 0; i < m_delHateList.Count; ++i) 
		{
			if( m_delHateList[i] == guid1 )
			{
				m_delHateList.Remove(guid1);
				_resetHateBtnNum ();
				return ;
			}
		}
	}
	//=======================================================\
	//点击删除关系人
	public void OnClickRelationDel()
	{
		if (m_delHateList.Count <= 0)
			  return;

		string dicStr = StrDictionary.GetClientDictionaryString("#{10837}");
		MessageBoxLogic.OpenOKCancelBox(dicStr, "", DelHateOK, DelHateNO);
	}

	// 发送服务器删除黑名单
	public void DelHateOK()
	{
		if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			return;
		}

		for( int i = 0 ;  i< m_delHateList.Count ; ++i )
		{
			if (GlobeVar.INVALID_GUID != m_delHateList[i])
			{
				//如果是好友，则申请删除好友
				if (GameManager.gameManager.PlayerDataPool.HateList.IsExist(m_delHateList[i]))
				{
					Singleton<ObjManager>.GetInstance().MainPlayer.ReqDelHate(m_delHateList[i]);
				}
			}
		}
	}

	public void DelHateNO()
	{
	}
	//=========================================================\
	// 查找
	public GameObject m_titleWinPlayerList ;  
	public GameObject m_titleWinEnemy ;
  private bool m_IsShowFindFriendWin = false;
	
	public void onClickFriendWin()
	{
    /*if (m_IsShowFindFriendWin) {
      hideFindFriendWin();
    } else {
      showFindFriendWin();
    }
    m_IsShowFindFriendWin = !m_IsShowFindFriendWin;*/
	}
	public void showFindFriendWin()
	{
		m_titleWinPlayerList.SetActive (false);
		m_titleWinEnemy.SetActive (false);
		Utils.CleanGrid(friendListGrid);
	}
	public void hideFindFriendWin()
	{
		m_titleWinEnemy.SetActive (true);
		m_titleWinPlayerList.SetActive (true);
		Utils.CleanGrid(friendListGrid);
	}
}
