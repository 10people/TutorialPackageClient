//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame.Table;
namespace SPacket.SocketInstance
{
    public class GC_RET_GET_BELLEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_GET_BELLE packet = (GC_RET_GET_BELLE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            int belleId = packet.Result;

            Tab_Belle belleTab = TableManager.GetBelleByID(belleId, 0);
            if (null == belleTab)
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;

           BelleData.UpdateGetBelle(packet);
            if (null != BelleInfoWindow.Instance())
            {
                BelleInfoWindow.Instance().ShowBelleInfoWindow(belleTab,true);
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
