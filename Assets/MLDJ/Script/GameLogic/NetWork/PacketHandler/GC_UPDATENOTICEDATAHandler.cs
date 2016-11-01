//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
     public class GC_UPDATENOTICEDATAHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_UPDATENOTICEDATA packet = (GC_UPDATENOTICEDATA )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic

             LoginUpdateInfo.ClearNotice();
             for (int i = 0; i < packet.dataCount && i < packet.newsCount; i++)
             {
                 LoginUpdateInfo.addNotice(packet.GetNews(i), packet.GetData(i));
             }

            
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
