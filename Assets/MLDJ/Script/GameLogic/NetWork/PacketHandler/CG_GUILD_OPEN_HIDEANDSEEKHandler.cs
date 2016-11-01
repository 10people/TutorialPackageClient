//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_GUILD_OPEN_HIDEANDSEEKHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_GUILD_OPEN_HIDEANDSEEK packet = (CG_GUILD_OPEN_HIDEANDSEEK )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
