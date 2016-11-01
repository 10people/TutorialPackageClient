//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PLAY_CUTSCENEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PLAY_CUTSCENE packet = (GC_PLAY_CUTSCENE )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
			Cutscene.CutsceneManager.Instance.PlayCutscene(packet.CutsceneID);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
