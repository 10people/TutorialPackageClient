//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_CJG_EXTRA_REWARD_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_CJG_EXTRA_REWARD_RET packet = (GC_CJG_EXTRA_REWARD_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            if (0 == packet.NResult)
            {
                if (null != CangJingGeWindow.Instance())
                {
                    CangJingGeWindow.Instance().UpdateCangJingGeExtraRewardPanel();
                }
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
