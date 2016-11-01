//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
     public class GC_FILTER_ABUSEHandler : Ipacket
     {
        public uint Execute(PacketDistributed ipacket)
         {
             GC_FILTER_ABUSE packet = (GC_FILTER_ABUSE )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
             GameManager.gameManager.PlayerDataPool.ClearAbuseFilter();
             for (int i = 0; i < packet.AbuseCount; i++ )
             {
                 GameManager.gameManager.PlayerDataPool.AddAbuseFilter(packet.GetAbuse(i));
             }
            
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
