//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_STORYCOPYSCENERESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_STORYCOPYSCENERESULT packet = (GC_STORYCOPYSCENERESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.SetScore(
				packet.NStoryCopySceneID,
				packet.NResult == 1,
				packet.NCondition1 == 1,
				packet.NCondition2 == 1,
				packet.NCondition3 == 1);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
