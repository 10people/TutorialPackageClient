//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_JOINREQHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GUILD_JOINREQ packet = (GC_GUILD_JOINREQ)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.GuildInfo.NeedReserve = packet.NeedReserve == 1;
            if (GuildWindow.Instance() != null)
            {
                GuildWindow.Instance().HandleNeedReserve();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
