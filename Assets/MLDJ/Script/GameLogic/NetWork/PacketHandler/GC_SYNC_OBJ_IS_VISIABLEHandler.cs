//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_OBJ_IS_VISIABLEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_OBJ_IS_VISIABLE packet = (GC_SYNC_OBJ_IS_VISIABLE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            int SenderId = packet.ObjID;
            Obj_Character TargetObj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(SenderId);
            if (TargetObj == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            TargetObj.UpdateObjVisiabelState(packet.IsVisiable);

            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
