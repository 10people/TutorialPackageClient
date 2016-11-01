//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_WULIN_HEROS_LISTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_WULIN_HEROS_LIST packet = (GC_WULIN_HEROS_LIST )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 WuLinData.ShowWuLinHerosInHistory(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
