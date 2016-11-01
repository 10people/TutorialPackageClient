//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_TEAM_TRANS_EFFECTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_TEAM_TRANS_EFFECT packet = (GC_TEAM_TRANS_EFFECT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            Obj_OtherPlayer player = Singleton<ObjManager>.GetInstance().FindOtherPlayerInScene(packet.MemberGuid);
            if (player != null)
            {
                player.PlayEffect(GlobeVar.TEAMTRANS_EFFECTID);
            }

            if (Singleton<ObjManager>.Instance.MainPlayer != null && Singleton<ObjManager>.Instance.MainPlayer.GUID == packet.MemberGuid)
            {
                Singleton<ObjManager>.Instance.MainPlayer.PlayEffect(GlobeVar.TEAMTRANS_EFFECTID);
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
