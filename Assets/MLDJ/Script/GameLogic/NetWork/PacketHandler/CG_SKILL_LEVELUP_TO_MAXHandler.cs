//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_SKILL_LEVELUP_TO_MAXHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_SKILL_LEVELUP_TO_MAX packet = (CG_SKILL_LEVELUP_TO_MAX )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
