using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame.Table;

public class TeamMemberMenuLogic : MonoBehaviour {

    private UInt64 m_Guid = GlobeVar.INVALID_GUID;
    public UInt64 Guid
    {
        get { return m_Guid; }
        set { m_Guid = value; }
    }

    public UIGrid m_ButtonGrid;
    public GameObject m_TeamTransButton;
    public GameObject m_TeamLeaderButton;
    public GameObject m_TeamChatPrivate;
    public UISprite m_MenuBckground;

    private int m_TeamIndex = GlobeVar.INVALID_ID;
    private string m_Name = "";
    private int MenuFullHeight = 358;
    private int ButtonHeight = 46;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void ShowMenu(UInt64 guid, int teamindex)
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        TeamMember member = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(teamindex);
        if (member == null || false == member.IsValid())
        {
            return;
        }

        m_Guid = guid;
        m_TeamIndex = teamindex;
        m_Name = member.MemberName;
        
        m_TeamTransButton.SetActive(guid != Singleton<ObjManager>.Instance.MainPlayer.GUID);
        m_TeamLeaderButton.SetActive(Singleton<ObjManager>.GetInstance().MainPlayer.IsTeamLeader());
        m_ButtonGrid.Reposition();
        if (m_TeamChatPrivate != null) {
          m_TeamChatPrivate.SetActive(guid != Singleton<ObjManager>.Instance.MainPlayer.GUID);
        }
        if (m_ButtonGrid != null) {
          UIGrid ug = m_ButtonGrid.GetComponent<UIGrid>();
          if (ug != null) {
            ug.repositionNow = true;
          }
        }
        //int disablecount = 0;
        //disablecount += false == m_TeamTransButton.activeSelf ? 1 : 0;
        //disablecount += false == m_TeamLeaderButton.activeSelf ? 1 : 0;
        //m_MenuBckground.height = MenuFullHeight - ButtonHeight * disablecount;

        gameObject.SetActive(true);
    }

    public void CloseMenu()
    {
        m_Guid = GlobeVar.INVALID_GUID;
        m_TeamIndex = GlobeVar.INVALID_ID;
        m_Name = "";
        gameObject.SetActive(false);
    }

    void OnAddFriendClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }
        if (GlobeVar.INVALID_GUID != m_Guid)
        {
            //如果不是好友也不是黑名单，则添加好友
            if (false == GameManager.gameManager.PlayerDataPool.FriendList.IsExist(m_Guid))
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddFriend(m_Guid);
                return;
            }
            else
            {
                //该玩家已经是您的好友
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(true, "#{2394}");
            }
        }
        gameObject.SetActive(false);
    }

    void OnRoleViewClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }
        if (GlobeVar.INVALID_GUID != m_Guid)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_Guid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_INVALID);
        }
        gameObject.SetActive(false);
    }

    void OnTeamLeaderClick()
    {
        //如果自己不是队长，则返回
        if (false == Singleton<ObjManager>.GetInstance().MainPlayer.IsTeamLeader())
        {
            return;
        }

        //guid检测
        if (GlobeVar.INVALID_GUID == m_Guid ||
            Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_Guid)
        {
            return;
        }

        //发送任命队长消息
        Singleton<ObjManager>.GetInstance().MainPlayer.ReqChangeTeamLeader(m_Guid);

        gameObject.SetActive(false);
    }

    void OnInviteGuildClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (GlobeVar.INVALID_GUID == GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid)
        {
            //你当前未加入帮会，无法邀请。
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2686}");
            return;
        }

        if (m_Guid != GlobeVar.INVALID_GUID &&
            m_Guid != Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteGuild(m_Guid);
        }

        gameObject.SetActive(false);
    }

    void OnReqJoinGuildClick()
    {        
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }
        if (m_Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid != GlobeVar.INVALID_GUID)
        {
            GuildMember mySelfGuildInfo = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMainPlayerGuildInfo();
            if (null != mySelfGuildInfo)
            {
                if (mySelfGuildInfo.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
                {
                    //只能同时申请一个帮会，将替换原来的请求，是否继续？
                    string dicStr = StrDictionary.GetClientDictionaryString("#{1861}");
                    MessageBoxLogic.OpenOKCancelBox(dicStr, "", AgreeChangeJoinGuildRequest, null);
                    return;
                }
            }
            //你当前已经有帮会，无法申请。
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3094}");
            return;
        }
        Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinOtherPlayerGuild(m_Guid, m_Name);

        gameObject.SetActive(false);
    }

    void AgreeChangeJoinGuildRequest()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinOtherPlayerGuild(m_Guid, m_Name);
        }
        gameObject.SetActive(false);
    }

    void OnTeamTransClick()
    {
        if (m_Name == "")
        {
            return;
        }

        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10283}", m_Name), "", OnTeamTransOK);
    }

    void OnTeamTransOK()
    {
        if (RelationLogic.Instance() != null)
        {
            RelationLogic.Instance().IsTeamTransClose = true;
        }
        UIManager.CloseUI(UIInfo.RelationRoot);
        CG_TEAM_TRANS pak = (CG_TEAM_TRANS)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TEAM_TRANS);
        pak.MemberGuid = m_Guid;
        pak.SendPacket();

        gameObject.SetActive(false);
    }
    public void OnChatPrivate()
    {
      if (GlobeVar.INVALID_GUID != m_Guid && !string.IsNullOrEmpty(m_Name)) {
        //发起私聊
        //未打开过则创建
        if (null == ChatInfoLogic.Instance()) {
            UIManager.ShowUI(UIInfo.ChatInfoRoot, ShowChatInfoRootOver, new string[] { m_Name, m_Guid.ToString() });
        }
      }
    }
    private void ShowChatInfoRootOver(bool bSuccess, object param)
    {
        if (bSuccess && param != null)
        {
            string[] strs = param as string[];
            //发起私聊
            if (null != ChatInfoLogic.Instance() && strs != null && strs.Length == 2)
            {
                ChatInfoLogic.Instance().BeginChat(ulong.Parse(strs[1]), strs[0]);
            }
        }
    }
}
