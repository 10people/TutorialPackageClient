//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_SYNCALLCARNIVALGOALHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_SYNCALLCARNIVALGOAL packet = (GC_SYNCALLCARNIVALGOAL )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 GameManager.gameManager.PlayerDataPool.SevenDaysRewardProxy.SetData(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
