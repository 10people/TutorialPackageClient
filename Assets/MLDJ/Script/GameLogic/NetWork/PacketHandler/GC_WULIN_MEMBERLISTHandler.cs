//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_WULIN_MEMBERLISTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_WULIN_MEMBERLIST packet = (GC_WULIN_MEMBERLIST )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 WuLinData.ShowRegisterMemberList(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
