//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_UPDATE_NEWSERVERMOUNTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UPDATE_NEWSERVERMOUNT packet = (GC_UPDATE_NEWSERVERMOUNT )ipacket;
            if (null == packet)
            {
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            }
            GameManager.gameManager.PlayerDataPool.HandlePacket(packet);
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
