//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_TEAM_CALLMEMBER_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_TEAM_CALLMEMBER_RESULT packet = (CG_TEAM_CALLMEMBER_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
