/********************************************************************************
 *	文件名：	Obj_MainPlayer_Relation.cs
 *	全路径：	\Script\Obj\Obj_MainPlayer_Relation.cs
 *	创建人：	李嘉
 *	创建时间：2013-02-14_情人节
 *
 *	功能说明：游戏主角Obj的社交关系逻辑部分
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using System.Net;
using UnityPortSocket;
namespace Games.LogicObj
{
    public partial class Obj_MainPlayer : Obj_OtherPlayer
    {
        //向服务器发起添加好友请求
        public void ReqAddFriend(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //超过上限，不进行添加操作
            if (GameManager.gameManager.PlayerDataPool.FriendList.GetRelationNum() >= GlobeVar.MAX_FRIEND_NUM)
            {
                //您当前的好友列表已满。
                SendNoticMsg(false, "#{1080}");
                return;
            }

            //是否已经是好友，已经是则不添加
            if (GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList.ContainsKey(guid))
            {
                SendNoticMsg(false, "#{2394}");
                return;
            }

            //自己不能加自己
            if (GUID == guid)
            {
                return;
            }

            /*if (GameManager.gameManager.PlayerDataPool.BlackList.IsExist(guid))
            {
                SendNoticMsg(false, "#{4723}");
                return;
            }  */

            //向服务器发送添加好友包
            CG_ADDFRIEND msg = (CG_ADDFRIEND)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADDFRIEND);
            msg.Guid = guid;
            msg.SendPacket();

            SendNoticMsg(false, "#{2906}");
        }

        //向服务器发起删除好友请求
        public void ReqDelFriend(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //是否已经是好友，不是则不删除
            if (false == GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList.ContainsKey(guid))
            {
                return;
            }

            //向服务器发送删除好友包
            CG_DELFRIEND msg = (CG_DELFRIEND)PacketDistributed.CreatePacket(MessageID.PACKET_CG_DELFRIEND);
            msg.Guid = guid;
            msg.SendPacket();
        }

        //向服务器发起添加黑名单请求
        public void ReqAddBlack(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //超过上限，不进行添加操作
            if (GameManager.gameManager.PlayerDataPool.BlackList.GetRelationNum() >= GlobeVar.MAX_BLACK_NUM)
            {
                return;
            }

            //向服务器发送添加黑名单包
            CG_ADDBLACKLIST msg = (CG_ADDBLACKLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADDBLACKLIST);
            msg.Guid = guid;
            msg.SendPacket();
        }

        //向服务器发起删除黑名单请求
        public void ReqDelBlack(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //向服务器发送删除黑名单包
            CG_DELBLACKLIST msg = (CG_DELBLACKLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_DELBLACKLIST);
            msg.Guid = guid;
            msg.SendPacket();
        }

        //向服务器发起删除仇人请求
        public void ReqDelHate(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            //向服务器发送删除黑名单包
            CG_DELHATELIST msg = (CG_DELHATELIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_DELHATELIST);
            msg.Guid = guid;
            msg.SendPacket();
        }

        public void ReqTrailPlayer(UInt64 guid)
        {
            //判断guid合法性
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(GlobeVar.WuYingXunZongDataID) <= 0)
            {
                SendNoticMsg(false, "#{3035}");
                return;
            }

            CG_ASK_TRAIL msg = (CG_ASK_TRAIL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_TRAIL);
            msg.Guid = guid;
            msg.SendPacket();
        }
        public IEnumerator SendComplain(UInt64 guid, string szName, string szContent, int nContentType)
        {
            int nMegID = 1001;
            int ngameID = 1;

            System.Text.StringBuilder sb = new System.Text.StringBuilder();
            JsonWriter writer = new JsonWriter(sb);
            writer.WriteObjectStart();
            writer.WritePropertyName("gameId");
            writer.Write(ngameID.ToString());

            writer.WritePropertyName("msg");
            writer.WriteObjectStart();
            writer.WritePropertyName("areaId");
            writer.Write(PlayerPreferenceData.LastServer);
            writer.WritePropertyName("content");
            writer.Write(szContent);
            writer.WritePropertyName("contentType");
            writer.Write(nContentType);
            writer.WritePropertyName("destId");
            writer.Write(guid);
            writer.WritePropertyName("destName");
            writer.Write(szName);
            writer.WritePropertyName("playerId");
            writer.Write(GUID);
            writer.WritePropertyName("playerName");
            writer.Write(BaseAttr.RoleName);  
            writer.WriteObjectEnd();

            writer.WritePropertyName("msgId");
            writer.Write(nMegID);
            writer.WriteObjectEnd();
            //WebClient ComplainClient = new WebClient();
            //ComplainClient.UploadString(PlatformHelper.GetComplainURL(), sb.ToString());
#if !UNITY_WP8
            byte[] byteArray = System.Text.Encoding.Default.GetBytes(sb.ToString());
#else
            byte[] byteArray = null;
#endif
            WWW WWWComplain = new WWW(PlatformHelper.GetComplainURL(), byteArray);
            yield return WWWComplain;
            if (string.IsNullOrEmpty(WWWComplain.error))
            {
                //提示成功
                SendNoticMsg(false, "#{5484}");
            }
            else
            {
                //错误提示
                SendNoticMsg(false, "#{5485}");
            }
        }
    }
}

