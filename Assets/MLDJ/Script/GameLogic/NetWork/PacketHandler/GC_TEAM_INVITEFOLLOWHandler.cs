//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using GCGame.Table;
namespace SPacket.SocketInstance
{
    public class GC_TEAM_INVITEFOLLOWHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_TEAM_INVITEFOLLOW packet = (GC_TEAM_INVITEFOLLOW )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (null != mainPlayer)
            {
                // 队长名字
                string str = StrDictionary.GetClientDictionaryString("#{4735}", packet.InviterName);
                MessageBoxLogic.OpenOKCancelCountDownBox(str, "", OnAgree, OnDefuse, 10, 5069);
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }

        // 同意
        public void OnAgree()
        {
            CG_TEAM_INVITEFOLLOW_RESULT msg = (CG_TEAM_INVITEFOLLOW_RESULT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TEAM_INVITEFOLLOW_RESULT);
            msg.Result = (int)CG_TEAM_INVITEFOLLOW_RESULT.ResultType.RESULT_AGREE;
            msg.SendPacket();
        }

        // 拒绝
        public void OnDefuse()
        {
            CG_TEAM_INVITEFOLLOW_RESULT msg = (CG_TEAM_INVITEFOLLOW_RESULT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TEAM_INVITEFOLLOW_RESULT);
            msg.Result = (int)CG_TEAM_INVITEFOLLOW_RESULT.ResultType.RESULT_REFUSE;
            msg.SendPacket();
        }
    }
}
