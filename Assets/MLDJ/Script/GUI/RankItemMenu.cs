//********************************************************************
// 文件名: RankItemMenu.cs
// 描述: 排行榜
// 作者: grx
// 创建时间: 2014-11-26
//********************************************************************
using UnityEngine;
using System.Collections.Generic;
using System;
using GCGame.Table;
using Games.GlobeDefine;

public class RankItemMenu : MonoBehaviour {

    public GameObject   m_CharmFlowerBt;
    public GameObject   m_CharmEggBt;
    public UIGrid           m_UIGrid;
    public GameObject   m_MenuPanel;
	public string			 m_name ;
    
    private Vector3 m_MenuPanelPos;
    private Vector4 m_MenuClipRange;
    private UInt64 m_Guid = GlobeVar.INVALID_GUID;
     
    public UInt64 Guid
    {
        set { m_Guid = value; }
        get{ return m_Guid;}
    }

	public string Name
	{
		set { m_name = value; }
		get{ return m_name;}
	}

    void Awake()
    {
        UIDraggablePanel dragPanel = m_MenuPanel.GetComponent<UIDraggablePanel>();
        if (dragPanel != null)
        {
            //Transform gridTrans = dragPanel.GetComponent<Transform>();
            Transform gridTrans = m_MenuPanel.GetComponent<Transform>();
            if (gridTrans != null)
            {
                m_MenuPanelPos = gridTrans.localPosition;
            }
            UIPanel tmpPanel = dragPanel.GetComponent<UIPanel>();
            if (tmpPanel != null)
            {
                m_MenuClipRange = tmpPanel.clipRange;
            }          
           
         }


    }

    public void OnShowRankMenu()
    {
        gameObject.SetActive(true);
        m_CharmFlowerBt.SetActive(GlobalData.IsOpenCharmRankFlag);
        m_CharmEggBt.SetActive(GlobalData.IsOpenCharmRankFlag);
        UIDraggablePanel panelDragble = m_MenuPanel.GetComponent<UIDraggablePanel>();

        if (panelDragble != null)
        {

            //Transform tmpTrans = panelDragble.GetComponent<Transform>();
            Transform panelDragTrans = m_MenuPanel.GetComponent<Transform>();
            if (panelDragTrans != null)
            {
 
                Vector3 deta = m_MenuPanelPos - panelDragTrans.localPosition;
                Vector3 move = Vector3.zero;
                move = new Vector3(0, deta.y, 0);
                panelDragble.DisableSpring();
                panelDragble.MoveRelative(move);


            }
        }

       
        //m_UIGrid.repositionNow = true;
    }

    void OnDisable()
    {
        m_Guid = GlobeVar.INVALID_GUID;
    }

    void OnClickViewCharInfo()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (GlobeVar.INVALID_GUID != m_Guid)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_Guid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_INVALID);
            }
        }
        gameObject.SetActive(false);
    }

    void OnClickAddFriend()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (GlobeVar.INVALID_GUID != m_Guid)
            {
                //如果不是好友也不是黑名单，则添加好友
                if (false == GameManager.gameManager.PlayerDataPool.FriendList.IsExist(m_Guid))
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddFriend(m_Guid);                  
                }
                else
                {
                    //该玩家已经是您的好友
                    Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(true, "#{2394}");
                }
            }
        }
        gameObject.SetActive(false);
    }

    void ClickCancel()
    {
        gameObject.SetActive(false);
    }

    void ClickFlower()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (GlobeVar.INVALID_GUID != m_Guid)
            {
                FlowerEggWindow.ShowFlowerEgg(m_Guid, FlowerEggWindow.ShowType.FLOWER);
            }
        }
    }
    void ClickEgg()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (GlobeVar.INVALID_GUID != m_Guid)
            {
                FlowerEggWindow.ShowFlowerEgg(m_Guid, FlowerEggWindow.ShowType.EGG);
            }
        }
    }

	public void onChatPrivate()
	{
		//发起私聊
		//未打开过则创建
		//if (null == ChatInfoLogic.Instance())
		{
			UIManager.ShowUI(UIInfo.ChatInfoRoot, onChatPrivateEx, m_Guid);
		}

	}

	public void onChatPrivateEx(bool issuss ,object parm)
	{
        UInt64 guid = Convert.ToUInt64(parm);
		if (GlobeVar.INVALID_GUID != guid)
		{
			if (null != ChatInfoLogic.Instance() && m_name != "")
			{
				ChatInfoLogic.Instance().BeginChat(guid, m_name);
			}
		}
	}
}
