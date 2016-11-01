//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_RET_EQUIPBACK_GEM_COMBINEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RET_EQUIPBACK_GEM_COMBINE packet = (GC_RET_EQUIPBACK_GEM_COMBINE )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 if (GemLogic.Instance() != null)
 {
     GemLogic.Instance().UpdateGemSlot();
 }

 if (EquipStrengthenLogic.Instance() != null)
 {
     EquipStrengthenLogic.Instance().RefreshGemsInEquips();
 }
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
