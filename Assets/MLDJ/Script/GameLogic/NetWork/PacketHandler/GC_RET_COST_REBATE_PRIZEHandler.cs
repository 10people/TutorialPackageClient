//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_COST_REBATE_PRIZEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_COST_REBATE_PRIZE packet = (GC_RET_COST_REBATE_PRIZE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (ChargeActivityLogic.Instance())
            {
                ChargeActivityLogic.Instance().UpdateCurTab();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
