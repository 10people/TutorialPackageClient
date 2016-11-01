//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_RET_PLAYER_DECORATION_INFOHandler : Ipacket
    {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_RET_PLAYER_DECORATION_INFO packet = (GC_RET_PLAYER_DECORATION_INFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
             if (packet.HasDecorationRank)
             {
                 ChristmasTreeData.m_nMeDecorationRank = packet.DecorationRank;
             }
             if (packet.HasDecoration)
             {
                 ChristmasTreeData.m_nPlayerDecoration = packet.Decoration;
             }
             if (ChristmasController.Instance() != null)
             {
                 ChristmasController.Instance().UpdatePlayerDecorationInfo();
             }
             
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
