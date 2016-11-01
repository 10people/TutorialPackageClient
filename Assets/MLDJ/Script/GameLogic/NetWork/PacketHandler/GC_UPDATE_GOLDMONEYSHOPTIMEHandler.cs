//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_UPDATE_GOLDMONEYSHOPTIMEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_UPDATE_GOLDMONEYSHOPTIME packet = (GC_UPDATE_GOLDMONEYSHOPTIME )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 GameManager.gameManager.PlayerDataPool.HandlePacket(packet);
 if (SysShopController.Instance() != null)
 {
     SysShopController.Instance().SetLeftTime();
 }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
