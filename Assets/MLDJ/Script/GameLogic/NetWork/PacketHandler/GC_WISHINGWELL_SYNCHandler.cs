//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;

namespace SPacket.SocketInstance
{
    public class GC_WISHINGWELL_SYNCHandler : Ipacket
        {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_WISHINGWELL_SYNC packet = (GC_WISHINGWELL_SYNC )ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            if ( packet.HasIntime )
            {
                GameManager.gameManager.PlayerDataPool.WishingWell_InTime = packet.Intime;
            }
            if (packet.HasOuttime)
            {
                GameManager.gameManager.PlayerDataPool.WishingWell_OutTime = packet.Outtime;
            }
            if (packet.HasDay)
            {
                GameManager.gameManager.PlayerDataPool.WishingWell_Day = packet.Day;
            }
            if (packet.HasLimit)
            {
                GameManager.gameManager.PlayerDataPool.WishingWell_Limit = packet.Limit;
            }
            if (packet.HasStatus )
            {
                GameManager.gameManager.PlayerDataPool.WishingWell_Status = packet.Status;
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
