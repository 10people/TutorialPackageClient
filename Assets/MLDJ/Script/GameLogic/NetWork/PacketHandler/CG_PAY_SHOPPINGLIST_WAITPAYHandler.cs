//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_PAY_SHOPPINGLIST_WAITPAYHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_PAY_SHOPPINGLIST_WAITPAY packet = (CG_PAY_SHOPPINGLIST_WAITPAY )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
