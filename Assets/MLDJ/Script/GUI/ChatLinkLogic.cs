using UnityEngine;
using System.Collections;
using Games.Item;
using GCGame;
using Games.ChatHistory;
using Games.GlobeDefine;
using System;
using Games.SwordsMan;
using GCGame.Table;
using Games.Fellow;
using System.Collections.Generic;
using Module.Log;
public class ChatLinkLogic : MonoBehaviour
{

    private List<GC_CHAT.LINKTYPE> m_LinkTypeList = new List<GC_CHAT.LINKTYPE>();
    private GC_CHAT.LINKTYPE m_LinkType = GC_CHAT.LINKTYPE.LINK_TYPE_INVALID;
    private GameItem m_EquipOrItemLink = new GameItem();
    public GameItem EquipOrItemLink
    {
        get { return m_EquipOrItemLink; }
        set { m_EquipOrItemLink = value; }
    }

    private Fellow m_fellow = new Fellow();
    public Fellow FellowItem
    {
        get { return m_fellow; }
        set { m_fellow = value; }
    }

    private UInt64 m_playerGUID = GlobeVar.INVALID_GUID;
    public UInt64 playerGUID
    {
        get { return m_playerGUID; }
        set { m_playerGUID = value; }
    }

    private string m_playerName = "";
    public string PlayerName
    {
        get { return m_playerName; }
        set { m_playerName = value; }
    }

    private UInt64 m_playerInfoGUID = GlobeVar.INVALID_GUID;
    public UInt64 playerInfoGUID
    {
        get { return m_playerInfoGUID; }
        set { m_playerInfoGUID = value; }
    }

    private UInt64 m_guildIdForRecruit = GlobeVar.INVALID_GUID;
    public UInt64 guildIdForRecruit
    {
        get { return m_guildIdForRecruit; }
        set { m_guildIdForRecruit = value; }
    }

    private SwordsMan m_SwordsManLink = new SwordsMan();
    public SwordsMan SwordsManLink
    {
        get { return m_SwordsManLink; }
        set { m_SwordsManLink = value; }
    }

    public struct MissonLinkInfo
    {
        public int missionId;
        public string missionIcon;
        public string missionName;
        public string missionDesc;
        public string missionLevel;
        public int missionAwardId;
        public bool IsValid()
        {
            return missionId != GlobeVar.INVALID_ID;
        }

        public void CleanUp()
        {
            missionId = -1;
            missionIcon = "";
            missionName = "";
            missionDesc = "";
            missionLevel = "";
            missionAwardId = -1;
        }
    }

    private MissonLinkInfo m_missionLink = new MissonLinkInfo();

    private bool m_bNameLink = false;

    public struct MoveToLinkInfo
    {
        public int SceneClassID;
        public int SceneInstID;
        public int PosX;
        public int PosZ;
    }

    private MoveToLinkInfo m_MoveToLink = new MoveToLinkInfo();

    public struct HongBaoLinkInfo
    {
        public UInt64 m_HongBaoGuid;
        public UInt64 m_SenderGuid;
    }
    private HongBaoLinkInfo m_HongBaoInfoLink = new HongBaoLinkInfo();

    private ChatHistoryItem m_chatHistoryItem;

    // Use this for initialization
    void Start()
    {
        if (null == m_LinkTypeList)
        {
            m_LinkTypeList = new List<GC_CHAT.LINKTYPE>();
            m_LinkTypeList.Clear();
        }
    }

    public void Init(ChatHistoryItem history, int linkindex)
    {
        if (linkindex < 0 || linkindex >= history.ELinkType.Count)
            return;
        m_chatHistoryItem = history;
        m_LinkType = history.ELinkType[linkindex];
        m_LinkTypeList.Add(m_LinkType);
        if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_ITEM)
        {
            Utils.ReadLinkFromHistory_Item(history, m_EquipOrItemLink, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_EQUIP)
        {
            Utils.ReadLinkFromHistory_Equip(history, m_EquipOrItemLink, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_COPYTEAM)
        {
            Utils.ReadLinkFromHistory_Team(history, out m_playerGUID);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_MOVETO)
        {
            Utils.ReadLinkFromHistory_MoveTo(history, ref m_MoveToLink, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PLAYERINFO)
        {
            Utils.ReadLinkFromHistory_PlayerInfo(history, out m_playerInfoGUID, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_SWORDSMAN)
        {
            Utils.ReadLinkFromHistory_SwordsMan(history, m_SwordsManLink, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
        {
            Utils.ReadLinkFromHistory_GuildInfo(history, out m_guildIdForRecruit, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_HONGBAO)
        {
            Utils.ReadLinkFromHistory_HongBaoInfo(history, ref m_HongBaoInfoLink, linkindex);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE)
        {
            Utils.ReadLinkFromHistory_Propagate(history, m_fellow, linkindex);
            if (ChatInfoLogic.Instance() != null)
            {
                ChatInfoLogic.Instance().SelectFellowName = m_fellow.Name;
            }
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_MISSION)
        {
            Utils.ReadLinkFromHistory_MissionInfo(history, ref m_missionLink, linkindex);
        }else if(m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE_AGREE)
        {
            //do nothing
            Debug.Log("fanzhipeng =====            has received GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE_AGREE");
        }
    }

    public void Init_NameLink(UInt64 playerGUID, string playerName)
    {
        m_playerGUID = playerGUID;
        m_playerName = playerName;
        m_LinkType = GC_CHAT.LINKTYPE.LINK_TYPE_INVALID;
        m_bNameLink = true;
    }

    void LinkOnClick(GameObject obj)
    {
        int index = 0;
        if (obj != null && int.TryParse(obj.name, out index) && index >= 0 && index < m_LinkTypeList.Count)
        {
            m_LinkType = m_LinkTypeList[index];
        }

        if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_ITEM)
        {
            ItemTooltipsLogic.ShowItemTooltip(m_EquipOrItemLink, ItemTooltipsLogic.ShowType.ChatLink);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_EQUIP)
        {
            EquipTooltipsLogic.ShowEquipTooltip(m_EquipOrItemLink, EquipTooltipsLogic.ShowType.ChatLink);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_COPYTEAM)
        {
            //检查自己
            if (GameManager.gameManager.PlayerDataPool.IsHaveTeam())
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2179}");
                return;

            }
            //Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2178}");
            //发送请求            
            CG_REQ_TEAM_JOIN packet = (CG_REQ_TEAM_JOIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_TEAM_JOIN);
            packet.SetTeamMemberGuid(m_playerGUID);
            packet.SendPacket();
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_MOVETO)
        {
            AutoSearchPoint point = new AutoSearchPoint(m_MoveToLink.SceneClassID, m_MoveToLink.PosX, m_MoveToLink.PosZ);
            GameManager.gameManager.AutoSearch.ProcessAutoSearch(point);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_SWORDSMAN)
        {
            //            SwordsManToolTipsLogic.ShowSwordsManTooltip(m_SwordsManLink, SwordsManToolTipsLogic.SwordsMan_ShowType.ChatLink);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PLAYERINFO)
        {
            if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                return;
            }
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_playerInfoGUID, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_LASTSPEAKER);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
        {
            //如果符合要求，则发送申请加入帮会的请求
            ApplyToJoinGuild();
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_HONGBAO)
        {
            CG_ASK_HONGBAO_ROB Pak = (CG_ASK_HONGBAO_ROB)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HONGBAO_ROB);
            Pak.SetHongbaoguid(m_HongBaoInfoLink.m_HongBaoGuid);
            Pak.SetSenderguid(m_HongBaoInfoLink.m_SenderGuid);
            Pak.SendPacket();
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE)
        {
            LogModule.DebugLog("m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE  " + m_fellow.Name);
            ChatInfoLinkFellowTipLogic.ShowTooltips(m_fellow);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_MISSION)
        {
            LogModule.DebugLog("m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_MISSION  " + m_missionLink.missionId);
            MissionTooltipsLogic.ShowTooltips(m_missionLink);
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_SUB_PROPAGATE)
        {
            LogModule.DebugLog("m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_SUB_PROPAGATE  ");
            if (null != ChatInfoLogic.Instance())
            {
                if (m_chatHistoryItem.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{11054}");
                    return;
                }
                ChatInfoSelectLinkLogic.M_OPEN_TYPE = ChatInfoSelectLinkLogic.OPEN_TYPE.PROPAGATE;
                ChatInfoLogic.Instance().BeginChat(m_chatHistoryItem.SenderGuid,m_chatHistoryItem.SenderName);
                ChatInfoLogic.Instance().ShowEmotionRoot();
            }
        }
        else if (m_LinkType == GC_CHAT.LINKTYPE.LINK_TYPE_PROPAGATE_AGREE)
        {
            // do send add a team
            ReqAddTeam();
        }else
        {
            if (m_bNameLink)
            {
                if (Singleton<ObjManager>.GetInstance().MainPlayer == null)
                {
                    return;
                }

                if (m_playerGUID == GlobeVar.INVALID_GUID)
                {
                    return;
                }

                if (m_playerGUID == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
                {
                    return;
                }

                if (null == ChatInfoLogic.Instance())
                {
                    UIManager.ShowUI(UIInfo.ChatInfoRoot, ShowChatInfoRootOver);
                }
                else
                {
                    ChatInfoLogic.Instance().BeginChat(m_playerGUID, m_playerName);
                }
            }
        }
    }

    /// <summary>
    /// 开始私聊
    /// </summary>
    public void BeginChat()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer == null)
        {
            return;
        }

        if (m_playerGUID == GlobeVar.INVALID_GUID)
        {
            return;
        }

        if (m_playerGUID == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            return;
        }
        
        ChatInfoLogic.Instance().BeginChat(m_playerGUID, m_playerName);
    }
    void ApplyToJoinGuild()
    {
        //玩家等级判断
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < GlobeVar.JOIN_GUILD_LEVEL)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1780}");    //你的人物等级不足20级，无法加入帮会
            return;
        }
        //你当前已经有帮会，无法申请。
        if (GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3094}");
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
            //直接申请
            else
            {
                AgreeChangeJoinGuildRequest();
            }
            return;
        }
        //直接申请
        else
        {
            AgreeChangeJoinGuildRequest();
        }
    }

    void AgreeChangeJoinGuildRequest()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinGuild(m_guildIdForRecruit);
        }
    }

    void ShowChatInfoRootOver(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            //发起私聊
            if (null != ChatInfoLogic.Instance())
            {
                ChatInfoLogic.Instance().BeginChat(m_playerGUID, m_playerName);
            }
        }
    }

    void ReqAddTeam()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer || m_chatHistoryItem.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            return;
        }

             //如果有队伍，则判断下队伍是否已满
        if (GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.IsFull())
            {
                return;
            }
        }


        Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteTeam(m_chatHistoryItem.SenderGuid);
    }
}
