//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
      public class GC_RET_DECORATE_TREEHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_RET_DECORATE_TREE packet = (GC_RET_DECORATE_TREE)ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             ChristmasTreeData.DecorateChristTreeRet(packet);
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
