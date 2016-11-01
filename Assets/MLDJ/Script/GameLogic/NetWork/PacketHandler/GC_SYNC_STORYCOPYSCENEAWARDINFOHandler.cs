//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_SYNC_STORYCOPYSCENEAWARDINFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_SYNC_STORYCOPYSCENEAWARDINFO packet = (GC_SYNC_STORYCOPYSCENEAWARDINFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
	GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.HandlePacket(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
