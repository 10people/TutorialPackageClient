//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_RETCARNIVALAWARDHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RETCARNIVALAWARD packet = (GC_RETCARNIVALAWARD )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
     if (packet.NResult == 1)
     {
         GUIData.AddNotifyData("#{5464}");
     }
     else
     {
         GUIData.AddNotifyData("#{11259}");
     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
