//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_APPLY_STAGE_CHANGEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_APPLY_STAGE_CHANGE packet = (GC_APPLY_STAGE_CHANGE )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
//     if (null != SceneControl.Instance())
//     {
//         int nParam = -1;
//         if (packet.HasPara1)
//         {
//             nParam = packet.Para1;
//         }
//         SceneControl.Instance().NextStage(nParam);
//     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
