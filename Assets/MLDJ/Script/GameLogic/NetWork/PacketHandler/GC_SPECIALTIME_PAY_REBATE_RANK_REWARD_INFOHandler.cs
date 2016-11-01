//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO packet = (GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (GameManager.gameManager.PlayerDataPool != null)
            {
                GameManager.gameManager.PlayerDataPool.HandlePacket(packet);
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
