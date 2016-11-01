/********************************************************************************
 *	文件名：	Obj_MainPlayer_Guild.cs
 *	全路径：	\Script\Obj\Obj_MainPlayer_Guild.cs
 *	创建人：	李嘉
 *	创建时间：2014-04-22
 *
 *	功能说明：游戏主角Obj的帮会逻辑部分
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using System.Text;
using System.Collections.Generic;

namespace Games.LogicObj
{
    public partial class Obj_MainPlayer : Obj_OtherPlayer
    {
        //玩家的帮会相关标记位，做到申请过一次之后可以保存结果一段时间，减少网络流量
        private bool m_bNeedRequestGuildInfo = true;       //是否需要请求个人帮会信息
        public bool NeedRequestGuildInfo
        {
            get { return m_bNeedRequestGuildInfo; }
            set { m_bNeedRequestGuildInfo = value; }
        }
        private bool m_bNeedRequestGuildList = true;       //是否需要请求全服帮会列表
        public bool NeedRequestGuildList
        {
            get { return m_bNeedRequestGuildList; }
            set { m_bNeedRequestGuildList = value; }
        }
        
        private bool m_bShowGuildNewReserveFlag = false;    //是否显示新审批成员标志
        public bool ShowGuildNewReserveFlag
        {
            get { return m_bShowGuildNewReserveFlag; }
            set { m_bShowGuildNewReserveFlag = value; }
        }
        //更新帮会相关标记位
        private const int c_GuildRequestCoolDown = 30;      //帮会信息更新间隔，包括帮会列表和帮会信息

        private UInt64 m_CacheChangeMasterGuid = GlobeVar.INVALID_GUID;     //缓存待禅让目标会员Guid
        private UInt64 m_CacheKickMemberGuid = GlobeVar.INVALID_GUID;       //缓存待踢出目标会员Guid
        
        //申请全服帮会列表
        public void ReqGuildList()
        {
            //if (null != GameManager.gameManager.PlayerDataPool.guildList)
            //{
            //    GameManager.gameManager.PlayerDataPool.guildList.CleanUp();
            //}

            CG_GUILD_REQ_LIST msg = (CG_GUILD_REQ_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_LIST);
            msg.Requester = GUID;
            msg.SendPacket();

            m_bNeedRequestGuildList = false;
            StartCoroutine(ResetGuildListTime());
        }

        IEnumerator ResetGuildListTime()
        {
            yield return new WaitForSeconds(c_GuildRequestCoolDown);

            m_bNeedRequestGuildList = true;
        }

        //申请帮会信息
        public void ReqGuildInfo()
        {
            //if (null != GameManager.gameManager.PlayerDataPool.GuildInfo)
            //{
            //    GameManager.gameManager.PlayerDataPool.GuildInfo.CleanUp();
            //}

            CG_GUILD_REQ_INFO msg = (CG_GUILD_REQ_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_INFO);
            msg.Requester = GUID;
            msg.SendPacket();

            m_bNeedRequestGuildInfo = false;
            StartCoroutine(ResetGuildInfoTime());
        }

        IEnumerator ResetGuildInfoTime()
        {
            yield return new WaitForSeconds(c_GuildRequestCoolDown);

            m_bNeedRequestGuildInfo = true;
        }

        //申请创建帮会
        public void ReqCreateGuild(string guildName, string guildDeclaration)
        {
            //检测名字长度
            if (guildName.Length <= 0 || Encoding.UTF8.GetBytes(guildName).Length > GlobeVar.MAX_GUILD_NAME)
            {
                GUIData.AddNotifyData("#{1761}");   //请输入帮会名称
                return;
            }

            if (Encoding.UTF8.GetBytes(guildDeclaration).Length > GlobeVar.MAX_GUILD_DECLARATION)
            {
                return;
            }

            //玩家等级判断
            if (BaseAttr.Level < GlobeVar.CREATE_GUILD_LEVEL)
            {
                GUIData.AddNotifyData("#{1771}");    //你的人物等级不足40级，无法创建帮会
                return;
            }

            //有帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid != GlobeVar.INVALID_GUID)
            {
                GUIData.AddNotifyData("#{1772}");       //你已属于一个帮会，不能创建帮会
                return;
            }

            CG_GUILD_CREATE msg = (CG_GUILD_CREATE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_CREATE);
            msg.GuildName = guildName;
            if (guildDeclaration != "")
            {
                msg.GuildDeclaration = guildDeclaration;
            }
            msg.SendPacket();
        }

        //申请加入他人所在的帮会
        public void ReqJoinOtherPlayerGuild(UInt64 PlayerGuid, string strPlayerName)
        {
            //玩家Guid判断
            if (PlayerGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //玩家等级判断
            if (BaseAttr.Level < GlobeVar.JOIN_GUILD_LEVEL)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1780}");    //你的人物等级不足20级，无法加入帮会
                return;
            }

            CG_GUILD_JOIN_OTHERPLAYER msg = (CG_GUILD_JOIN_OTHERPLAYER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOIN_OTHERPLAYER);
            if (msg != null)
            {
                msg.UserGuid = PlayerGuid;
                msg.UserName = strPlayerName;
                msg.SendPacket();
            }
            

            //SendNoticMsg(false, "#{2340}");
        }


        //申请加入帮会
        public void ReqJoinGuild(UInt64 guildGuid)
        {
            //帮会Guid判断
            if (guildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            if (GameManager.gameManager.PlayerDataPool.GuildInfo.PreserveGuildGuid.Count >= GlobeVar.GUILD_PLAYERRESERVE_MAX)
            {
                return;
            }

            //玩家等级判断
            if (BaseAttr.Level < GlobeVar.JOIN_GUILD_LEVEL)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1780}");    //你的人物等级不足20级，无法创建帮会
                return;
            }

            CG_GUILD_JOIN msg = (CG_GUILD_JOIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOIN);
            msg.GuildGuid = guildGuid;
            msg.SendPacket();           
        }

        //邀请某个玩家加入帮会
        public void ReqInviteGuild(UInt64 invitedGuid)
        {
            //被邀请者判断
            if (invitedGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            CG_GUILD_INVITE msg = (CG_GUILD_INVITE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_INVITE);
            msg.InvitedGuid = invitedGuid;
            msg.SendPacket();
        }

        //申请离开帮会
        public void ReqLeavGuild()
        {
            //无帮会无法申请
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            //帮主离开为解散帮会，否则为帮众退出帮会
            if (GameManager.gameManager.PlayerDataPool.IsGuildChief())
            {
                //解散帮会操作不可撤销，确定执行吗？
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2359}"), "", MsgBoxLeaveGuildOK, null);
            }
            else
            {
                //你确认要退出{0}帮会吗？
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1788}", GameManager.gameManager.PlayerDataPool.GuildInfo.GuildName),
                                                "", MsgBoxLeaveGuildOK, null);
            }
        }

        //离开帮会MessageBox确认
        private void MsgBoxLeaveGuildOK()
        {
            //无帮会无法申请
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            CG_GUILD_LEAVE msg = (CG_GUILD_LEAVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_LEAVE);
            msg.Requester = GUID;
            msg.SendPacket();
        }

        //任命会员职位
        /*public void ReqCommisionGuildMember(UInt64 approver)
        {
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

            GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
            if (false == mainPlayerGuildInfo.IsValid())
            {
                return;
            }

            if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOB))
            {
                return;
            }

            if (approver == GlobeVar.INVALID_GUID)
            {
                return;
            }

            GuildMember member;
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildMemberList.TryGetValue(approver, out member))
            {
                if (member.IsValid())
                {
                    if (member.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
                    {
                        ReqChangeGuildMemberJob(approver, (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MEMBER);
                    }
                    else if (member.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MEMBER)
                    {
                        ReqChangeGuildMemberJob(approver, (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.VICE_CHIEF);
                    }
                }
            }
        }*/

        //修改会员权限
        private List<UInt64> m_approverGuid = new List<UInt64>();
        private int m_jobID = GlobeVar.INVALID_ID;
        public void ReqChangeGuildMemberJob(List<UInt64> approver, int nJobID)
        {
            //无帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //被修改者GUID判断
            for (int i = 0; i < approver.Count; i++ )
            {
                if (approver[i] == GlobeVar.INVALID_GUID)
                {
                    return;
                }
            }

            //职位判断
            if (nJobID < 0 || nJobID >= (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MAX)
            {
                return;
            }

            m_approverGuid.Clear();
            for (int i = 0; i < approver.Count; i++ )
            {
                m_approverGuid.Add(approver[i]);
            }
            m_jobID = nJobID;
            //确定对该玩家进行任命？
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{3220}"), "", MsgBoxChangeGuildMemberJobOK, MsgBoxChangeGuildMemberJobCancel);
        }

        private void MsgBoxChangeGuildMemberJobOK()
        {
            //被修改者GUID判断
            for (int i = 0; i < m_approverGuid.Count; i++)
            {
                if (m_approverGuid[i] == GlobeVar.INVALID_GUID)
                {
                    return;
                }
            }

            //职位判断
            if (m_jobID < 0 || m_jobID >= (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MAX)
            {
                return;
            }

            CG_GUILD_JOB_CHANGE msg = (CG_GUILD_JOB_CHANGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOB_CHANGE);
            for (int i = 0; i < m_approverGuid.Count; i++ )
            {
                msg.AddApprover(m_approverGuid[i]);
            }            
            msg.JobID = m_jobID;
            msg.SendPacket();

            m_approverGuid.Clear();
            m_jobID = GlobeVar.INVALID_ID;

            if (GuildAuthorityWindowLogic.Instance() != null)
            {
                GuildAuthorityWindowLogic.Instance().OnSelectMemberCloseClick();
            }
        }

        private void MsgBoxChangeGuildMemberJobCancel()
        {
            m_approverGuid.Clear();
            m_jobID = GlobeVar.INVALID_ID;
        }

        //修改帮会公告
        public void ReqChangeGuildNotice(string message)
        {
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

            GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
            if (false == mainPlayerGuildInfo.IsValid())
            {
                return;
            }

            if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE))
            {
                GUIData.AddNotifyData("#{2513}");
                return;
            }

            //判断字符串的合法性
            if (message.Length <= 0)
            {
                return;
            }

            CG_GUILD_REQ_CHANGE_NOTICE msg = (CG_GUILD_REQ_CHANGE_NOTICE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_CHANGE_NOTICE);
            msg.GuildNotice = message;
            msg.SendPacket();

            //为了避免实时刷新，这里暂时将帮会公告设置为修改后的。等待下次向服务器申请后即可再次被赋值
            GameManager.gameManager.PlayerDataPool.GuildInfo.GuildNotice = message;

            if (GuildWindow.Instance() != null)
            {
                GuildWindow.Instance().UpdateGuildNotice();
            }
        }

        public void ReqChangeGuildDeclaration(string message)
        {
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

            GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
            if (false == mainPlayerGuildInfo.IsValid())
            {
                return;
            }

            if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION))
            {
                GUIData.AddNotifyData("#{2513}");
                return;
            }

            //判断字符串的合法性
            if (message.Length <= 0)
            {
                return;
            }

            CG_GUILD_REQ_CHANGE_DECLARATION msg = (CG_GUILD_REQ_CHANGE_DECLARATION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_CHANGE_DECLARATION);
            msg.GuildDeclaration = message;
            msg.SendPacket();

            //为了避免实时刷新，这里暂时将帮会公告设置为修改后的。等待下次向服务器申请后即可再次被赋值
            GameManager.gameManager.PlayerDataPool.GuildInfo.GuildDeclaration = message;

            if (GuildWindow.Instance() != null)
            {
                GuildWindow.Instance().UpdateGuildDeclaration();
            }
        }

        //批准待审批会员
        public void ReqApproveGuildMember(UInt64 approver, int agree)
        {
            //无帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            CG_GUILD_APPROVE_RESERVE msg = (CG_GUILD_APPROVE_RESERVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_APPROVE_RESERVE);
            msg.Approver = approver;
            msg.IsAgree = agree;
            msg.SendPacket();
        }

        //踢出某个会员
        public void ReqKickGuildMember(UInt64 kickedGuid)
        {
            if (kickedGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //无帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            m_CacheKickMemberGuid = kickedGuid;
            //确定将该玩家从帮会中除名？
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2360}"), "", MsgBoxKickGuildMmeberOK, MsgBoxKickGuildMmeberCancel);
        }

        //帮会踢人MessageBox确认函数
        private void MsgBoxKickGuildMmeberOK()
        {
            if (m_CacheKickMemberGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //无帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }
            
            CG_GUILD_KICK msg = (CG_GUILD_KICK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_KICK);
            msg.Kicked = m_CacheKickMemberGuid;
            msg.SendPacket();

            m_CacheKickMemberGuid = GlobeVar.INVALID_GUID;
        }

        //帮会踢人MessageBox取消函数
        private void MsgBoxKickGuildMmeberCancel()
        {
            m_CacheKickMemberGuid = GlobeVar.INVALID_GUID;
        }

        //禅让帮主
        public void ReqChangeGuildMaster(UInt64 approver)
        {
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return;
            }

            Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

            GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
            if (false == mainPlayerGuildInfo.IsValid())
            {
                return;
            }

            if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOB))
            {
                return;
            }

            //禅让和修改会员权限发同样消息包，只是JobID固定为GUILD_JOB.CHIEF
            if (approver == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //目标等级是否达到40
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GetMemberLevel(approver) < GlobeVar.CREATE_GUILD_LEVEL)
            {
                //禅让目标的等级不得低于40级。
                SendNoticMsg(false, "#{2362}");
                return;
            }

            m_CacheChangeMasterGuid = approver;
            //禅让帮主操作不可撤销，确定执行吗？
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2361}"), "", MsgBoxChangeGuildMasterOK, MsgBoxChangeGuildMasterCancel);
        }

        //帮会禅让MessageBox确认函数
        private void MsgBoxChangeGuildMasterOK()
        {           
            CG_GUILD_JOB_CHANGE msg = (CG_GUILD_JOB_CHANGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOB_CHANGE);
            msg.AddApprover(m_CacheChangeMasterGuid);
            msg.JobID = (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.CHIEF;
            msg.SendPacket();

            m_CacheChangeMasterGuid = GlobeVar.INVALID_GUID;
        }

        //帮会禅让MessageBox取消函数
        private void MsgBoxChangeGuildMasterCancel()
        {
            m_CacheChangeMasterGuid = GlobeVar.INVALID_GUID;
        }
        
        //帮会升级
        public void ReqGuildLevelUp(int nLevel)
        {
            //无帮会无法申请
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //必须是帮主
            if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildChiefGuid != GUID)
            {
                return;
            }

            CG_GUILD_REQ_LEVELUP msg = (CG_GUILD_REQ_LEVELUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_LEVELUP);
            msg.Level = nLevel;
            msg.SendPacket();
        }

        // 是否是跑商状态
        public bool IsInPaoShang()
        {
            if (GameManager.gameManager.MissionManager.IsMissionNotFaild(GlobeVar.PAOSHANG_MISSIONID_H)
                || GameManager.gameManager.MissionManager.IsMissionNotFaild(GlobeVar.PAOSHANG_MISSIONID_L))
            {
                if (PaoShangState == (int)GC_BROADCASTPSSTATE.PSSTATE.CANROB || 
                    PaoShangState == (int)GC_BROADCASTPSSTATE.PSSTATE.NOTCANROB)
                {
                    return true;
                }
            }
            return false;
        }

        public bool IsPSCanAccept()
        {
            Guild gGuildInfo = GameManager.gameManager.PlayerDataPool.GuildInfo;
            Tab_GuildPaoShang PSTab = TableManager.GetGuildPaoShangByID(gGuildInfo.GuildLevel, 0);
            if (PSTab != null)
            {
                int nPSCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_PAOSHANG_GOTTEN_NUM);
                if (gGuildInfo.PSCanAcceptTimes > 0 && nPSCount < PSTab.MemMaxTimesOneDay && BaseAttr.Level >= 47) // 先写死吧
                {
                    return true;
                }
            }
            return false;
        }
    }
}
