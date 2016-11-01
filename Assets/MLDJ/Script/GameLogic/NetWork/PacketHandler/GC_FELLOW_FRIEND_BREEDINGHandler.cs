//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_FELLOW_FRIEND_BREEDINGHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_FELLOW_FRIEND_BREEDING packet = (GC_FELLOW_FRIEND_BREEDING)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.InitInfo(packet);
            if (PartnerFrameLogic_Breeding.Instance() != null)
            {
                PartnerFrameLogic_Breeding.Instance().HandleFellowFriendBreeding();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
