//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_HONGBAO_UPDATEROBLISTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_HONGBAO_UPDATEROBLIST packet = (GC_RET_HONGBAO_UPDATEROBLIST )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

//            // 更新界面吧
//            if (RobHongBaoWindow.Instance() != null)
//            {
//                RobHongBaoWindow.Instance().UpdateHongBaoList(packet);
//            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
