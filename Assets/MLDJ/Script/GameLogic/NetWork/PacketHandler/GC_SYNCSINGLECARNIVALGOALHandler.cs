//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_SYNCSINGLECARNIVALGOALHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_SYNCSINGLECARNIVALGOAL packet = (GC_SYNCSINGLECARNIVALGOAL )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 GameManager.gameManager.PlayerDataPool.SevenDaysRewardProxy.UpdateData(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
