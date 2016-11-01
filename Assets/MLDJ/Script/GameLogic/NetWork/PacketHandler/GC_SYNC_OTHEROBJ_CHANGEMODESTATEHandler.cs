//This code create by CodeEngine
using System;
using Games.LogicObj;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_OTHEROBJ_CHANGEMODESTATEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_OTHEROBJ_CHANGEMODESTATE packet = (GC_SYNC_OTHEROBJ_CHANGEMODESTATE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            int SenderId = packet.NSenderId;
            Obj_Character TargetObj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(SenderId);
            if (TargetObj == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            TargetObj.UpdateOtherPlayerChangeState(packet.NChangeState);
            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
