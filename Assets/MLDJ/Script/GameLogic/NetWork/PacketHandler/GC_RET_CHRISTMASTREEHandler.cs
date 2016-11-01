//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_RET_CHRISTMASTREEHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_RET_CHRISTMASTREE packet = (GC_RET_CHRISTMASTREE)ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             ChristmasTreeData.UpdateChristTreeData(packet);
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
